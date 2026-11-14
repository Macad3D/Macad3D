using Macad.Core;
using ModelContextProtocol;
using ModelContextProtocol.Protocol;
using ModelContextProtocol.Server;
using System.ComponentModel;
using System.Text;
using System.Text.Json;
using System.Text.Json.Nodes;
using System;
using System.IO;
using System.IO.Pipes;
using System.Reflection;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Threading;

namespace Macad.Mcp;

// Serves the MCP tools on a named pipe, which the proxy (Macad.McpProxy) connects to. 
public sealed class McpHost : INotifyPropertyChanged
{
    public static McpHost Current { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public bool IsRunning => _Cts != null;

    public event PropertyChangedEventHandler? PropertyChanged;

    //--------------------------------------------------------------------------------------------------

    public static bool Start()
    {
        return Current._Start();
    }

    //--------------------------------------------------------------------------------------------------

    public static void Stop()
    {
        Current._Stop();
    }

    //--------------------------------------------------------------------------------------------------

    public static bool TakeOver(TimeSpan timeout)
    {
        return Current._TakeOver(timeout);
    }

    //--------------------------------------------------------------------------------------------------

    const string _PipeName = "Macad.Mcp";
    const string _MutexName = @"Local\Macad.Mcp";
    const string _StopEventName = @"Local\Macad.Mcp.Stop";
    CancellationTokenSource? _Cts;
    Mutex? _SingleInstanceMutex;
    EventWaitHandle? _StopEvent;
    RegisteredWaitHandle? _StopWait;
    McpServerOptions? _Options;

    //--------------------------------------------------------------------------------------------------

    McpHost()
    {
    }

    //--------------------------------------------------------------------------------------------------

    bool _Start()
    {
        if (_Cts != null)
        {
            return true;
        }

        var mutex = new Mutex(true, _MutexName, out bool isFirst);
        if (!isFirst)
        {
            mutex.Dispose();
            return false;
        }

        _StartOwning(mutex);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    // Starts the server with the single instance mutex already owned by the calling thread.
    void _StartOwning(Mutex mutex)
    {
        _SingleInstanceMutex = mutex;
        _Options ??= _CreateOptions();
        _Cts = new();
        _ListenForStopRequest();
        _ = _RunAsync(_Cts.Token);
        PropertyChanged?.Invoke(this, new(nameof(IsRunning)));
    }

    //--------------------------------------------------------------------------------------------------

    // Another instance sets the stop event to take the server over. The mutex must be released on the thread owning it,
    // so the server is stopped on the dispatcher of the thread which started it.
    void _ListenForStopRequest()
    {
        var dispatcher = Dispatcher.CurrentDispatcher;
        _StopEvent = new(false, EventResetMode.AutoReset, _StopEventName);
        _StopEvent.Reset(); // A request left from before belongs to an earlier server
        _StopWait = ThreadPool.RegisterWaitForSingleObject(_StopEvent, (_, _) =>
        {
            dispatcher.BeginInvoke(() =>
            {
                if (_Cts == null)
                    return;

                _Stop();
                Messages.Info("The MCP server was stopped, another Macad|3D instance has taken it over.");
            });
        }, null, Timeout.Infinite, executeOnlyOnce: true);
    }

    //--------------------------------------------------------------------------------------------------

    bool _TakeOver(TimeSpan timeout)
    {
        // Only open the event, a created one could be set without a server listening
        if (!EventWaitHandle.TryOpenExisting(_StopEventName, out var stopEvent))
        {
            return _Start();
        }
        using (stopEvent)
        {
            stopEvent.Set();
        }

        var mutex = new Mutex(false, _MutexName);
        bool acquired;
        try
        {
            acquired = mutex.WaitOne(timeout);
        }
        catch (AbandonedMutexException)
        {
            acquired = true; // The other instance ended without releasing it
        }

        if (!acquired)
        {
            mutex.Dispose();
            return false;
        }
        if (_Cts != null)
        {
            // Already running here, only possible if the server was started in between
            mutex.ReleaseMutex();
            mutex.Dispose();
            return true;
        }

        _StartOwning(mutex);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _Stop()
    {
        if (_Cts == null)
        {
            return;
        }

        _Cts.Cancel();
        _Cts.Dispose();
        _Cts = null;

        _StopWait?.Unregister(null);
        _StopWait = null;
        _StopEvent?.Dispose();
        _StopEvent = null;

        try
        {
            _SingleInstanceMutex?.ReleaseMutex();
        }
        catch (ApplicationException)
        {
            // Not owned by this thread, it is released when the process ends
        }
        _SingleInstanceMutex?.Dispose();
        _SingleInstanceMutex = null;
        PropertyChanged?.Invoke(this, new(nameof(IsRunning)));
    }

    //--------------------------------------------------------------------------------------------------

    static McpServerOptions _CreateOptions()
    {
        return new McpServerOptions
        {
            ServerInfo = new() { Name = "Macad|3D", Version = "1.0.0" },
            ServerInstructions = Instructions,
            ToolCollection = CreateToolCollection()
        };
    }

    //--------------------------------------------------------------------------------------------------

    // Conventions shared by all tools, sent to the client once.
    internal const string Instructions =
        """
        Macad|3D is a parametric solid modeller. Conventions of all tools:
        - Lengths are millimeters, angles degrees. World axes: Z is up. Which horizontal axis the front
          of the model faces is a setting of the user (+X by default), capture_view reports it with every image.
        - A document holds bodies. Each body has a placement (position and rotation) and a shape stack: a root shape
          (primitive or sketch) with modifiers on top (extrude, revolve, booleans, fillet, ...). Tools that modify a body
          add a shape on top. list_shape_stack and update_shape change earlier steps later.
        - Bodies are referenced by guid or unique name. Bodies used as operands (booleans, loft sections, pipe profiles)
          are hidden and stay linked.
        - Layers group bodies to show, hide or lock them together (list_layers, move_bodies_to_layer). New bodies are put
          on the active layer, set_active_layer changes it.
        - Faces and edges are referenced by the indices from list_faces and list_edges. Indices belong to the body's current
          shape and change when the shape changes, so list again after modifying the body.
        - Typical workflow: create_sketch, draw with sketch_add_* (closed contours), extrude or revolve, combine with booleans,
          detail with fillet/chamfer, check with measure and capture_view, then export_bodies.
        - Every tool call is one undo step. A call that fails changes nothing and explains why.
        """;

    //--------------------------------------------------------------------------------------------------

    static McpServerPrimitiveCollection<McpServerTool> CreateToolCollection()
    {
        var collection = new McpServerPrimitiveCollection<McpServerTool>();

        // Register every [McpServerTool] method on all classes derived from ToolsBase.
        foreach (var type in typeof(ToolsBase).Assembly.GetTypes())
        {
            if (!type.IsClass || type.IsAbstract || !type.IsSubclassOf(typeof(ToolsBase)))
                continue;

            foreach (var m in type.GetMethods(BindingFlags.Public | BindingFlags.Instance | BindingFlags.Static))
            {
                if (m.GetCustomAttribute<McpServerToolAttribute>() is null)
                    continue;

                if (m.IsStatic)
                {
                    collection.Add(McpServerTool.Create(m, target: null));
                }
                else
                {
                    object? instance = Activator.CreateInstance(type);
                    if (instance != null)
                    {
                        collection.Add(McpServerTool.Create(m, instance));
                    }
                }
            }
        }
        return collection;
    }

    //--------------------------------------------------------------------------------------------------

    // Returns the JSON of a tools/list result, used by the build to create the proxy's cache.
    public static string GetToolList()
    {
        var result = new ListToolsResult();
        foreach (var tool in CreateToolCollection())
        {
            result.Tools.Add(tool.ProtocolTool);
        }
        return JsonSerializer.Serialize(result, McpJsonUtilities.DefaultOptions);
    }

    //--------------------------------------------------------------------------------------------------

    // Requests the proxy answers itself for clients using the protocol without initialize handshake.
    internal static readonly string[] ModernCachedMethods =
        ["server/discover", "tools/list", "ping", "prompts/list", "resources/list", "resources/templates/list"];

    // Returns the responses of the server to ModernCachedMethods, sent with per-request metadata of the latest
    // protocol version, used by the build to create the proxy's cache. Format:
    // { "protocolVersion": "...", "responses": { "<method>": <JSON-RPC response without id> } }
    public static string GetModernResponses()
    {
        return Task.Run(_GetModernResponsesAsync).GetAwaiter().GetResult();
    }

    //--------------------------------------------------------------------------------------------------

    static async Task<string> _GetModernResponsesAsync()
    {
        const string protocolVersion = "2026-07-28"; // Latest version of the SDK, without initialize handshake

        // In-memory transport: requests are written to toServer, responses read from fromServer
        using var toServer = new AnonymousPipeServerStream(PipeDirection.Out);
        using var serverInput = new AnonymousPipeClientStream(PipeDirection.In, toServer.ClientSafePipeHandle);
        using var fromServer = new AnonymousPipeServerStream(PipeDirection.In);
        using var serverOutput = new AnonymousPipeClientStream(PipeDirection.Out, fromServer.ClientSafePipeHandle);

        using var cts = new CancellationTokenSource(TimeSpan.FromSeconds(30));
        await using var transport = new StreamServerTransport(serverInput, serverOutput);
        await using var server = McpServer.Create(transport, _CreateOptions());
        var run = server.RunAsync(cts.Token);

        var responses = new JsonObject();
        using var reader = new StreamReader(fromServer, new UTF8Encoding(false));
        for (int i = 0; i < ModernCachedMethods.Length; i++)
        {
            var request = new JsonObject
            {
                ["jsonrpc"] = "2.0",
                ["id"] = i + 1,
                ["method"] = ModernCachedMethods[i],
                ["params"] = new JsonObject
                {
                    ["_meta"] = new JsonObject
                    {
                        ["io.modelcontextprotocol/protocolVersion"] = protocolVersion,
                        ["io.modelcontextprotocol/clientInfo"] = new JsonObject { ["name"] = "Macad.McpProxy", ["version"] = "1.0.0" },
                        ["io.modelcontextprotocol/clientCapabilities"] = new JsonObject()
                    }
                }
            };
            var bytes = Encoding.UTF8.GetBytes(request.ToJsonString() + "\n");
            await toServer.WriteAsync(bytes, cts.Token);
            await toServer.FlushAsync(cts.Token);

            // Skip anything which is not the response to this request, e.g. notifications
            JsonNode? response;
            do
            {
                var line = await reader.ReadLineAsync(cts.Token)
                           ?? throw new InvalidOperationException($"The server closed the connection on '{ModernCachedMethods[i]}'.");
                response = JsonNode.Parse(line);
            }
            while (response?["id"]?.GetValue<int>() != i + 1);

            response.AsObject().Remove("id");
            responses[ModernCachedMethods[i]] = response;
        }

        await cts.CancelAsync();
        try
        {
            await run;
        }
        catch (OperationCanceledException)
        {
        }

        return new JsonObject
        {
            ["protocolVersion"] = protocolVersion,
            ["responses"] = responses
        }.ToJsonString();
    }

    //--------------------------------------------------------------------------------------------------

    async Task _RunAsync(CancellationToken ct)
    {
        while (!ct.IsCancellationRequested)
        {
            var pipe = new NamedPipeServerStream(
                _PipeName, PipeDirection.InOut,
                NamedPipeServerStream.MaxAllowedServerInstances,
                PipeTransmissionMode.Byte,
                PipeOptions.Asynchronous | PipeOptions.CurrentUserOnly);

            try
            {
                await pipe.WaitForConnectionAsync(ct);

            }
            catch (OperationCanceledException)
            {
                pipe.Dispose(); break;
            }

            _ = _ServeAsync(pipe, ct);          // one MCP session per connection
        }
    }

    //--------------------------------------------------------------------------------------------------

    async Task _ServeAsync(NamedPipeServerStream pipe, CancellationToken ct)
    {
        try
        {
            await using var transport = new StreamServerTransport(pipe, pipe);
            await using var server = McpServer.Create(transport, _Options!);
            await server.RunAsync(ct); // completes when the proxy disconnects
        }
        catch (OperationCanceledException) when (ct.IsCancellationRequested)
        {
            // Server stopped
        }
        catch (Exception ex)
        {
            Messages.Exception("MCP session failed.", ex);
        }
        finally
        {
            pipe.Dispose();
        }
    }

    //--------------------------------------------------------------------------------------------------

}