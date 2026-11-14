using System;
using System.Diagnostics;
using System.IO;
using System.IO.Pipes;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Macad.Mcp.Proxy;

public class Program
{
    const string PipeName = "Macad.Mcp";
    const string AppExecutable = "Macad.exe";

    // Time to wait for the server of a running app, e.g. while the user restarts it
    static readonly TimeSpan _RunningAppTimeout = TimeSpan.FromSeconds(3);
    static DateTime _Min(DateTime a, DateTime b) => a < b ? a : b;

    //--------------------------------------------------------------------------------------------------

    [STAThread]
    static async Task<int> Main()
    {
        string toolList = _LoadResource("McpToolList.json");
        if (toolList != null)
        {
            var proxy = new McpProxy(toolList, async () => await _ConnectOrLaunchAsync(TimeSpan.FromSeconds(60)),
                                     _LoadResource("McpModernResponses.json"));
            return await proxy.RunAsync(Console.OpenStandardInput(), Console.OpenStandardOutput());
        }

        // No cached tool list, forward everything and start the app immediately
        await using var pipe = await _ConnectOrLaunchAsync(TimeSpan.FromSeconds(60));
        if (pipe is null)
        {
            Console.Error.WriteLine("Could not reach Macad|3D app");
            return 1;
        }

        using var cts = new CancellationTokenSource();
        var toApp = McpProxy.Pump(Console.OpenStandardInput(), pipe, cts.Token);
        var toHost = McpProxy.Pump(pipe, Console.OpenStandardOutput(), cts.Token);

        await Task.WhenAny(toApp, toHost); // either side closing ends the session
        cts.Cancel();

        return 0;
    }

    //--------------------------------------------------------------------------------------------------

    static string _LoadResource(string name)
    {
        using var stream = typeof(Program).Assembly.GetManifestResourceStream(name);
        if (stream == null)
        {
            return null;
        }
        using var reader = new StreamReader(stream, Encoding.UTF8);
        string json = reader.ReadToEnd();
        return string.IsNullOrWhiteSpace(json) ? null : json;
    }

    //--------------------------------------------------------------------------------------------------

    // Connects to the MCP server of the app. If the app does not run, it is started with the MCP server enabled.
    // If it runs with the server stopped, the server is not started behind the user's back: after a short wait,
    // null is returned, and the next request tries again.
    static async Task<Stream> _ConnectOrLaunchAsync(TimeSpan timeout)
    {
        var deadline = DateTime.UtcNow + timeout;
        bool launched = false;

        while (DateTime.UtcNow < deadline)
        {
            var client = new NamedPipeClientStream(".", PipeName, PipeDirection.InOut,
                PipeOptions.Asynchronous | PipeOptions.CurrentUserOnly);
            try
            {
                await client.ConnectAsync(500);
                return client;
            }
            catch (TimeoutException)
            {
                await client.DisposeAsync();
                if (!launched)
                {
                    if (_IsAppRunning())
                    {
                        deadline = _Min(deadline, DateTime.UtcNow + _RunningAppTimeout);
                    }
                    else
                    {
                        var executablePath = Path.Combine(AppContext.BaseDirectory, AppExecutable);
                        Process.Start(new ProcessStartInfo(executablePath, "-nowelcome -mcp")
                        {
                            UseShellExecute = true
                        });
                    }
                    launched = true;
                }
                await Task.Delay(500);
            }
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    static bool _IsAppRunning()
    {
        var processes = Process.GetProcessesByName(Path.GetFileNameWithoutExtension(AppExecutable));
        foreach (var process in processes)
        {
            process.Dispose();
        }
        return processes.Length > 0;
    }

    //--------------------------------------------------------------------------------------------------

}
