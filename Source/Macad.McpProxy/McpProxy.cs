using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Text.Json.Nodes;
using System.Threading;
using System.Threading.Tasks;

namespace Macad.Mcp.Proxy;

// Answers the MCP handshake and list requests from a cached tool list. The app is only
// connected (and started) when the first request is received which needs it. If the connection is closed later,
// e.g. because the MCP server was stopped in the app, the next request which needs the app connects again.
// Clients of protocol versions without initialize handshake send the protocol version with each request and
// probe with server/discover first. Their requests are answered from the server's cached responses.
public sealed class McpProxy
{
    public const string ProxyInitId = "proxy-init";
    const string _ProtocolVersionMeta = "io.modelcontextprotocol/protocolVersion";
    const int _UnsupportedProtocolVersionError = -32022;

    //--------------------------------------------------------------------------------------------------

    readonly JsonNode _ToolList;
    readonly JsonObject _ModernResponses;
    readonly string[] _ModernVersions;
    readonly Func<Task<Stream>> _ConnectToApp;
    readonly SemaphoreSlim _OutputLock = new(1, 1);
    Stream _Output;

    // The connection to the app, and the requests sent to it which have not been answered yet
    Stream _Pipe;
    Task _PipeReader;
    readonly Dictionary<string, JsonNode> _PendingRequests = new();

    // Held while a request is registered and sent, so the reader of a closing connection does not report a request
    // as lost which the main loop is about to send again on a new connection.
    readonly SemaphoreSlim _SendLock = new(1, 1);

    //--------------------------------------------------------------------------------------------------

    // modernResponsesJson is the output of McpHost.GetModernResponses. Without it, server/discover is rejected,
    // so clients fall back to the initialize handshake.
    public McpProxy(string toolListJson, Func<Task<Stream>> connectToApp, string modernResponsesJson = null)
    {
        _ToolList = JsonNode.Parse(toolListJson);
        _ConnectToApp = connectToApp;

        if (modernResponsesJson != null)
        {
            _ModernResponses = JsonNode.Parse(modernResponsesJson)?["responses"]?.AsObject();
            _ModernVersions = _ModernResponses?["server/discover"]?["result"]?["supportedVersions"]?.AsArray()
                                               .Select(v => v.GetValue<string>())
                                               .ToArray();
            if (_ModernVersions == null || _ModernVersions.Length == 0)
            {
                _ModernResponses = null;
                _ModernVersions = null;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    // Whether the message comes from a client without initialize handshake, which the cached responses can serve.
    bool _IsModern(JsonNode message, string method)
    {
        return _ModernResponses != null
               && method != "initialize"
               && (method == "server/discover" || message?["params"]?["_meta"]?[_ProtocolVersionMeta] != null);
    }

    //--------------------------------------------------------------------------------------------------

    bool _IsConnected()
    {
        return _Pipe != null && _PipeReader is not { IsCompleted: true };
    }

    //--------------------------------------------------------------------------------------------------

    // Answers a request of a client without initialize handshake from the cache. Returns false if the
    // request needs the app.
    async Task<bool> _TryAnswerModernAsync(Stream output, JsonNode message, string method, JsonNode id)
    {
        string version = message?["params"]?["_meta"]?[_ProtocolVersionMeta]?.GetValue<string>();
        if (id == null)
        {
            return false; // Notifications are forwarded to a connected app, or dropped
        }

        if (version != null && !_ModernVersions.Contains(version))
        {
            await _WriteLineAsync(output, new JsonObject
            {
                ["jsonrpc"] = "2.0",
                ["id"] = id,
                ["error"] = new JsonObject
                {
                    ["code"] = _UnsupportedProtocolVersionError,
                    ["message"] = "Unsupported protocol version",
                    ["data"] = new JsonObject
                    {
                        ["supported"] = new JsonArray(_ModernVersions.Select(v => (JsonNode)v).ToArray()),
                        ["requested"] = version
                    }
                }
            }.ToJsonString());
            return true;
        }

        // A continued tool list would need the app, the cached list is complete
        if (method == "tools/list" && message?["params"]?["cursor"] != null)
        {
            return false;
        }
        if (method == null || _ModernResponses[method] is not JsonObject cached)
        {
            return false;
        }

        var response = new JsonObject { ["jsonrpc"] = "2.0", ["id"] = id };
        foreach (var (key, value) in cached)
        {
            if (key is not ("jsonrpc" or "id"))
            {
                response[key] = value?.DeepClone();
            }
        }
        await _WriteLineAsync(output, response.ToJsonString());
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public async Task<int> RunAsync(Stream inputStream, Stream output)
    {
        using var input = new StreamReader(inputStream, new UTF8Encoding(false));
        _Output = output;

        JsonNode initializeRequest = null;
        JsonNode initializedNotification = null;

        try
        {
            while (await input.ReadLineAsync() is { } line)
            {
                if (string.IsNullOrWhiteSpace(line))
                {
                    continue;
                }

                JsonNode message;
                try
                {
                    message = JsonNode.Parse(line);
                }
                catch (JsonException)
                {
                    break;
                }

                string method = message?["method"]?.GetValue<string>();
                JsonNode id = message?["id"]?.DeepClone();

                bool modern = _IsModern(message, method);
                if (modern && await _TryAnswerModernAsync(output, message, method, id))
                {
                    continue;
                }

                // Legacy clients: the handshake and lists are answered locally
                if (!modern)
                {
                    switch (method)
                    {
                        case "initialize":
                            initializeRequest = message;
                            await _WriteResultAsync(output, id, new JsonObject
                            {
                                ["protocolVersion"] = message["params"]?["protocolVersion"]?.DeepClone(),
                                ["capabilities"] = new JsonObject { ["tools"] = new JsonObject() },
                                ["serverInfo"] = new JsonObject { ["name"] = "Macad|3D", ["version"] = "1.0.0" }
                            });
                            continue;

                        case "notifications/initialized":
                            initializedNotification = message;
                            continue;

                        case "ping":
                            await _WriteResultAsync(output, id, new JsonObject());
                            continue;

                        case "prompts/list":
                            await _WriteResultAsync(output, id, new JsonObject { ["prompts"] = new JsonArray() });
                            continue;

                        case "resources/list":
                            await _WriteResultAsync(output, id, new JsonObject { ["resources"] = new JsonArray() });
                            continue;

                        case "resources/templates/list":
                            await _WriteResultAsync(output, id, new JsonObject { ["resourceTemplates"] = new JsonArray() });
                            continue;

                        case "server/discover":
                            // Without cached responses, the client falls back to the initialize handshake
                            await _WriteErrorAsync(output, id, -32601, "Method not found");
                            continue;

                        case "tools/list":
                            await _WriteResultAsync(output, id, _ToolList.DeepClone());
                            continue;
                    }
                }

                // Notifications (no id) are not worth starting the app for, but are passed to a connected app
                if (id == null && !_IsConnected())
                {
                    continue;
                }

                // Anything else needs the app. A closed connection is noticed when sending, then connect again.
                if (_IsConnected() && (await _SendAsync(line, id) || id == null))
                {
                    continue;
                }
                if (!await _ConnectAsync(initializeRequest, initializedNotification) || !await _SendAsync(line, id))
                {
                    await _WriteErrorAsync(output, id, -32603, "Could not reach Macad|3D. If it is running, its MCP server is stopped: "
                                                              + "ask the user to start it with the MCP Server button in the Toolbox tab.");
                    continue;
                }
                _PipeReader ??= _ReadFromAppAsync(_Pipe, output);
            }
        }
        finally
        {
            await _CloseAsync();
        }

        return 0;
    }

    //--------------------------------------------------------------------------------------------------

    // Connects to the app and replays the handshake which was answered locally. The reader is started with the first
    // request, so a fast or canned response cannot be read before the request is registered as pending.
    async Task<bool> _ConnectAsync(JsonNode initializeRequest, JsonNode initializedNotification)
    {
        await _DisconnectAsync();

        var pipe = await _ConnectToApp();
        if (pipe is null)
        {
            return false;
        }
        _Pipe = pipe;

        try
        {
            if (initializeRequest != null)
            {
                var replayed = initializeRequest.DeepClone();
                replayed["id"] = ProxyInitId; // the response is dropped by the reader
                await _WriteLineAsync(pipe, replayed.ToJsonString());
            }
            if (initializedNotification != null)
            {
                await _WriteLineAsync(pipe, initializedNotification.ToJsonString());
            }
        }
        catch (Exception e) when (e is IOException or ObjectDisposedException)
        {
            await _DisconnectAsync();
            return false;
        }
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    // Sends a line to the app. Returns false if the connection was closed.
    async Task<bool> _SendAsync(string line, JsonNode id)
    {
        string key = id?.ToJsonString();
        bool sent = false;

        await _SendLock.WaitAsync();
        try
        {
            if (key != null)
            {
                lock (_PendingRequests)
                {
                    _PendingRequests[key] = id;
                }
            }

            try
            {
                await _WriteLineAsync(_Pipe, line);
                sent = true;
            }
            catch (Exception e) when (e is IOException or ObjectDisposedException)
            {
                if (key != null)
                {
                    lock (_PendingRequests)
                    {
                        _PendingRequests.Remove(key);
                    }
                }
            }
        }
        finally
        {
            _SendLock.Release();
        }

        if (!sent)
        {
            await _DisconnectAsync(); // waits for the reader, which needs the send lock
        }
        return sent;
    }

    //--------------------------------------------------------------------------------------------------

    // Passes the messages of the app to the client until the connection is closed. Requests still waiting for an
    // answer then get an error, so the client does not wait forever.
    async Task _ReadFromAppAsync(Stream pipe, Stream output)
    {
        try
        {
            using var reader = new StreamReader(pipe, new UTF8Encoding(false), false, 16 * 1024, leaveOpen: true);
            string line;
            while ((line = await reader.ReadLineAsync()) != null)
            {
                JsonNode message = null;
                try
                {
                    message = JsonNode.Parse(line);
                }
                catch (JsonException)
                {
                }

                var id = message?["id"];
                if (id != null && message["method"] == null)
                {
                    if (id.GetValueKind() == JsonValueKind.String && id.GetValue<string>() == ProxyInitId)
                    {
                        continue; // Response to the replayed handshake
                    }
                    lock (_PendingRequests)
                    {
                        _PendingRequests.Remove(id.ToJsonString());
                    }
                }
                await _WriteLineAsync(output, line);
            }
        }
        catch (Exception e) when (e is IOException or ObjectDisposedException)
        {
        }

        JsonNode[] lost;
        await _SendLock.WaitAsync();
        try
        {
            lock (_PendingRequests)
            {
                lost = _PendingRequests.Values.ToArray();
                _PendingRequests.Clear();
            }
        }
        finally
        {
            _SendLock.Release();
        }
        foreach (var id in lost)
        {
            await _WriteErrorAsync(output, id, -32603, "The connection to Macad|3D was closed, e.g. because its MCP server was stopped. "
                                                      + "The next request connects again.");
        }
    }

    //--------------------------------------------------------------------------------------------------

    async Task _DisconnectAsync()
    {
        var pipe = _Pipe;
        var reader = _PipeReader;
        _Pipe = null;
        _PipeReader = null;
        if (pipe != null)
        {
            await pipe.DisposeAsync();
        }
        if (reader != null)
        {
            await reader;
        }
    }

    //--------------------------------------------------------------------------------------------------

    // The client closed the input: give the app a moment to answer requests still running, then disconnect.
    async Task _CloseAsync()
    {
        var deadline = DateTime.UtcNow + TimeSpan.FromSeconds(5);
        while (_PipeReader is { IsCompleted: false } && DateTime.UtcNow < deadline)
        {
            lock (_PendingRequests)
            {
                if (_PendingRequests.Count == 0)
                {
                    break;
                }
            }
            await Task.WhenAny(_PipeReader, Task.Delay(50));
        }
        await _DisconnectAsync();
    }

    //--------------------------------------------------------------------------------------------------

    public static async Task Pump(Stream from, Stream to, CancellationToken ct)
    {
        var buf = new byte[16 * 1024];
        try
        {
            int n;
            while ((n = await from.ReadAsync(buf, ct)) > 0)
            {
                await to.WriteAsync(buf.AsMemory(0, n), ct);
                await to.FlushAsync(ct); // important for stdout/pipe
            }
        }
        catch (Exception) when (ct.IsCancellationRequested)
        {
        }
    }

    //--------------------------------------------------------------------------------------------------

    Task _WriteResultAsync(Stream to, JsonNode id, JsonNode result)
    {
        return _WriteLineAsync(to, new JsonObject
        {
            ["jsonrpc"] = "2.0",
            ["id"] = id,
            ["result"] = result
        }.ToJsonString());
    }

    //--------------------------------------------------------------------------------------------------

    Task _WriteErrorAsync(Stream to, JsonNode id, int code, string message)
    {
        return _WriteLineAsync(to, new JsonObject
        {
            ["jsonrpc"] = "2.0",
            ["id"] = id,
            ["error"] = new JsonObject { ["code"] = code, ["message"] = message }
        }.ToJsonString());
    }

    //--------------------------------------------------------------------------------------------------

    // Writes to the app are not locked: only the main loop writes there, and a full pipe must not block the reader.
    async Task _WriteLineAsync(Stream to, string line)
    {
        bool isOutput = to == _Output;
        if (isOutput)
        {
            await _OutputLock.WaitAsync();
        }
        try
        {
            await to.WriteAsync(Encoding.UTF8.GetBytes(line + "\n"));
            await to.FlushAsync();
        }
        finally
        {
            if (isOutput)
            {
                _OutputLock.Release();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

}
