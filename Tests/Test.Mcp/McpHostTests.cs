using System;
using System.Linq;
using System.Text.Json;
using NUnit.Framework;

namespace Macad.Test.Mcp;

[TestFixture]
public class McpHostTests
{
    [Test]
    public void GetToolList_ReturnsValidJson()
    {
        string json = Macad.Mcp.McpHost.GetToolList();

        Assert.That(json, Is.Not.Null.And.Not.Empty);
        using var doc = JsonDocument.Parse(json);
        Assert.That(doc.RootElement.TryGetProperty("tools", out var tools), Is.True);
        Assert.That(tools.ValueKind, Is.EqualTo(JsonValueKind.Array));
        Assert.That(tools.GetArrayLength(), Is.GreaterThan(0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GetToolList_ToolNamesAreUniqueAndNotEmpty()
    {
        using var doc = JsonDocument.Parse(Macad.Mcp.McpHost.GetToolList());
        var names = doc.RootElement.GetProperty("tools").EnumerateArray()
                       .Select(t => t.GetProperty("name").GetString())
                       .ToList();

        Assert.That(names, Has.All.Not.Null.And.Not.Empty);
        Assert.That(names, Is.Unique);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GetToolList_ToolsHaveDescriptionAndSchema()
    {
        using var doc = JsonDocument.Parse(Macad.Mcp.McpHost.GetToolList());
        foreach (var tool in doc.RootElement.GetProperty("tools").EnumerateArray())
        {
            Assert.That(tool.GetProperty("description").GetString(), Is.Not.Empty);
            Assert.That(tool.GetProperty("inputSchema").ValueKind, Is.EqualTo(JsonValueKind.Object));
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GetToolList_IsDeterministic()
    {
        Assert.That(Macad.Mcp.McpHost.GetToolList(), Is.EqualTo(Macad.Mcp.McpHost.GetToolList()));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void StartStop_CanBeRepeated()
    {
        var host = Macad.Mcp.McpHost.Current;
        var changes = new System.Collections.Generic.List<bool>();
        void __OnChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e) => changes.Add(host.IsRunning);
        host.PropertyChanged += __OnChanged;
        try
        {
            for (int i = 0; i < 2; i++)
            {
                bool started = Macad.Mcp.McpHost.Start();
                Assume.That(started, Is.True, "The MCP server of a running Macad|3D instance blocks the test");
                Assert.That(host.IsRunning, Is.True);

                // The pipe accepts connections while running
                using (var client = new System.IO.Pipes.NamedPipeClientStream(".", "Macad.Mcp", System.IO.Pipes.PipeDirection.InOut,
                                                                              System.IO.Pipes.PipeOptions.CurrentUserOnly))
                {
                    client.Connect(5000);
                    Assert.That(client.IsConnected, Is.True);
                }

                Macad.Mcp.McpHost.Stop();
                Assert.That(host.IsRunning, Is.False);
            }
            Assert.That(changes, Is.EqualTo(new[] { true, false, true, false }));
        }
        finally
        {
            host.PropertyChanged -= __OnChanged;
            Macad.Mcp.McpHost.Stop();
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TakeOver_StopsTheOtherServerAndStartsHere()
    {
        var host = Macad.Mcp.McpHost.Current;
        bool otherStarted = false;
        var other = _StartOtherInstance(() => otherStarted = Macad.Mcp.McpHost.Start());
        try
        {
            Assume.That(otherStarted, Is.True, "The MCP server of a running Macad|3D instance blocks the test");
            Assert.That(Macad.Mcp.McpHost.TakeOver(TimeSpan.FromSeconds(5)), Is.True);
            Assert.That(host.IsRunning, Is.True);

            // The server is served from here now, also after the other instance has ended
            other.Dispatcher.InvokeShutdown();
            Assert.That(other.Thread.Join(5000), Is.True);
            using var client = new System.IO.Pipes.NamedPipeClientStream(".", "Macad.Mcp", System.IO.Pipes.PipeDirection.InOut,
                                                                          System.IO.Pipes.PipeOptions.CurrentUserOnly);
            client.Connect(5000);
            Assert.That(client.IsConnected, Is.True);
        }
        finally
        {
            Macad.Mcp.McpHost.Stop();
            other.Dispatcher.InvokeShutdown();
        }

        // Released properly: a normal start works again
        Assert.That(Macad.Mcp.McpHost.Start(), Is.True);
        Macad.Mcp.McpHost.Stop();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TakeOver_FailsIfTheOtherInstanceDoesNotRespond()
    {
        // An instance holding the server without listening for stop requests, e.g. an older version
        System.Threading.Mutex mutex = null;
        bool owned = false;
        var other = _StartOtherInstance(() => mutex = new System.Threading.Mutex(true, @"Local\Macad.Mcp", out owned));
        try
        {
            // A running Macad|3D instance must not be asked to stop its server
            Assume.That(owned, Is.True, "The MCP server of a running Macad|3D instance blocks the test");

            var watch = System.Diagnostics.Stopwatch.StartNew();
            Assert.That(Macad.Mcp.McpHost.TakeOver(TimeSpan.FromSeconds(1)), Is.False);
            Assert.That(Macad.Mcp.McpHost.Current.IsRunning, Is.False);
            Assert.That(watch.Elapsed, Is.LessThan(TimeSpan.FromSeconds(5)));

            // An instance which listens but is too busy to stop in time
            using var stopEvent = new System.Threading.EventWaitHandle(false, System.Threading.EventResetMode.AutoReset, @"Local\Macad.Mcp.Stop");
            Assert.That(Macad.Mcp.McpHost.TakeOver(TimeSpan.FromMilliseconds(300)), Is.False);
            Assert.That(Macad.Mcp.McpHost.Current.IsRunning, Is.False);
        }
        finally
        {
            other.Dispatcher.Invoke(() =>
            {
                if (owned)
                {
                    mutex.ReleaseMutex();
                }
                mutex?.Dispose();
            });
            other.Dispatcher.InvokeShutdown();
        }
    }

    //--------------------------------------------------------------------------------------------------

    // The tool creating each modifier of Macad.Core. A new modifier in Core fails here until it gets a tool.
    static readonly System.Collections.Generic.Dictionary<string, string> _ModifierTools = new()
    {
        ["Extrude"] = "extrude", ["Revolve"] = "revolve", ["Pipe"] = "pipe", ["Loft"] = "loft",
        ["BooleanFuse"] = "boolean_fuse", ["BooleanCut"] = "boolean_cut", ["BooleanCommon"] = "boolean_common",
        ["Fillet"] = "fillet", ["Chamfer"] = "chamfer", ["Offset"] = "offset", ["Scale"] = "scale",
        ["Taper"] = "taper", ["Imprint"] = "imprint", ["CrossSection"] = "cross_section",
        ["Mirror"] = "mirror", ["LinearArray"] = "linear_array", ["CircularArray"] = "circular_array",
        ["BoxJoint"] = "box_joint", ["HalvedJoint"] = "halved_joint",
        ["FlangeSheet"] = "flange_sheet", ["UnfoldSheet"] = "unfold_sheet",
        ["Reference"] = "create_reference",
    };

    [Test]
    public void EveryCoreModifier_HasATool()
    {
        var modifiers = typeof(Macad.Core.Shapes.ModifierBase).Assembly.GetTypes()
                                                              .Where(t => t.IsClass && !t.IsAbstract && t.IsSubclassOf(typeof(Macad.Core.Shapes.ModifierBase)))
                                                              .Select(t => t.Name)
                                                              .ToList();
        using var doc = JsonDocument.Parse(Macad.Mcp.McpHost.GetToolList());
        var toolNames = doc.RootElement.GetProperty("tools").EnumerateArray().Select(t => t.GetProperty("name").GetString()).ToHashSet();

        Assert.That(modifiers, Is.Not.Empty);
        Assert.Multiple(() =>
        {
            foreach (var modifier in modifiers)
            {
                Assert.That(_ModifierTools.ContainsKey(modifier), Is.True, $"No tool known for modifier {modifier}");
                if (_ModifierTools.TryGetValue(modifier, out var tool))
                {
                    Assert.That(toolNames, Does.Contain(tool), $"Tool {tool} for {modifier} does not exist");
                }
            }
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Instructions_NameOnlyExistingTools()
    {
        var toolNames = System.Text.RegularExpressions.Regex.Matches(Macad.Mcp.McpHost.GetToolList(), "\"name\":\"([a-z_]+)\"")
                                                             .Select(m => m.Groups[1].Value)
                                                             .ToHashSet();
        var mentioned = System.Text.RegularExpressions.Regex.Matches(Macad.Mcp.McpHost.Instructions, @"\b[a-z]+_[a-z_]+\b")
                                                            .Select(m => m.Value)
                                                            .Where(name => !name.EndsWith("_"))
                                                            .Distinct() // SubsetOf counts duplicates
                                                            .ToList();

        Assert.That(mentioned, Is.Not.Empty);
        Assert.That(mentioned, Is.SubsetOf(toolNames));
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    // Runs an action on a thread with its own dispatcher, standing in for the UI thread of another instance.
    // The mutex is owned per thread, so a server started there blocks the test thread like another process does.
    static (System.Threading.Thread Thread, System.Windows.Threading.Dispatcher Dispatcher) _StartOtherInstance(Action start)
    {
        System.Windows.Threading.Dispatcher dispatcher = null;
        using var ready = new System.Threading.ManualResetEventSlim();
        var thread = new System.Threading.Thread(() =>
        {
            dispatcher = System.Windows.Threading.Dispatcher.CurrentDispatcher;
            start();
            ready.Set();
            System.Windows.Threading.Dispatcher.Run();
        });
        thread.SetApartmentState(System.Threading.ApartmentState.STA);
        thread.IsBackground = true;
        thread.Start();
        Assert.That(ready.Wait(5000), Is.True, "The other instance did not start");
        return (thread, dispatcher);
    }
}
