using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.IO.Pipes;
using System.Text;
using System.Text.Json.Nodes;
using System.Threading.Tasks;
using Macad.Mcp.Proxy;
using NUnit.Framework;

namespace Macad.Test.Mcp;

[TestFixture]
public class McpProxyTests
{
    const string ToolListJson = "{\"tools\":[{\"name\":\"create_box\",\"description\":\"d\",\"inputSchema\":{\"type\":\"object\"}}]}";

    //--------------------------------------------------------------------------------------------------

    const string InitializeRequest = "{\"jsonrpc\":\"2.0\",\"id\":1,\"method\":\"initialize\",\"params\":{\"protocolVersion\":\"2025-06-18\"}}";
    const string InitializedNotification = "{\"jsonrpc\":\"2.0\",\"method\":\"notifications/initialized\"}";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Initialize_AnsweredLocally()
    {
        var (exitCode, output, connectCount) = await RunAsync([InitializeRequest, InitializedNotification]);

        Assert.That(exitCode, Is.EqualTo(0));
        Assert.That(connectCount, Is.EqualTo(0));
        Assert.That(output, Has.Count.EqualTo(1));
        Assert.That((int)output[0]["id"], Is.EqualTo(1));
        Assert.That((string)output[0]["result"]["protocolVersion"], Is.EqualTo("2025-06-18"));
        Assert.That(output[0]["result"]["capabilities"]["tools"], Is.Not.Null);
        Assert.That((string)output[0]["result"]["serverInfo"]["name"], Is.EqualTo("Macad|3D"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ToolsList_ReturnsCachedList()
    {
        var (_, output, connectCount) = await RunAsync(
        [
            InitializeRequest, InitializedNotification,
            "{\"jsonrpc\":\"2.0\",\"id\":2,\"method\":\"tools/list\"}"
        ]);

        Assert.That(connectCount, Is.EqualTo(0));
        Assert.That(output, Has.Count.EqualTo(2));
        Assert.That((int)output[1]["id"], Is.EqualTo(2));
        Assert.That((string)output[1]["result"]["tools"][0]["name"], Is.EqualTo("create_box"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Ping_AnsweredLocally()
    {
        var (_, output, connectCount) = await RunAsync(["{\"jsonrpc\":\"2.0\",\"id\":\"p\",\"method\":\"ping\"}"]);

        Assert.That(connectCount, Is.EqualTo(0));
        Assert.That((string)output[0]["id"], Is.EqualTo("p"));
        Assert.That(output[0]["result"], Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase("prompts/list", "prompts")]
    [TestCase("resources/list", "resources")]
    [TestCase("resources/templates/list", "resourceTemplates")]
    public async Task EmptyLists_AnsweredLocally(string method, string property)
    {
        var (_, output, connectCount) = await RunAsync([$"{{\"jsonrpc\":\"2.0\",\"id\":3,\"method\":\"{method}\"}}"]);

        Assert.That(connectCount, Is.EqualTo(0));
        Assert.That(output[0]["result"][property].AsArray(), Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ServerDiscover_WithoutCache_AnsweredWithMethodNotFound()
    {
        var (_, output, connectCount) = await RunAsync(["{\"jsonrpc\":\"2.0\",\"id\":4,\"method\":\"server/discover\"}"]);

        Assert.That(connectCount, Is.EqualTo(0));
        Assert.That((int)output[0]["error"]["code"], Is.EqualTo(-32601));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Notifications_DoNotConnectToApp()
    {
        var (_, output, connectCount) = await RunAsync(["{\"jsonrpc\":\"2.0\",\"method\":\"notifications/cancelled\",\"params\":{}}"]);

        Assert.That(connectCount, Is.EqualTo(0));
        Assert.That(output, Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ToolCall_ConnectsAndReplaysHandshake()
    {
        const string callRequest = "{\"jsonrpc\":\"2.0\",\"id\":5,\"method\":\"tools/call\",\"params\":{\"name\":\"list_bodies\"}}";
        var app = new FakeAppStream(
            "{\"jsonrpc\":\"2.0\",\"id\":\"proxy-init\",\"result\":{}}\n" +
            "{\"jsonrpc\":\"2.0\",\"id\":5,\"result\":{\"content\":[]}}\n");

        var (exitCode, output, connectCount) = await RunAsync([InitializeRequest, InitializedNotification, callRequest], app);

        Assert.That(exitCode, Is.EqualTo(0));
        Assert.That(connectCount, Is.EqualTo(1));

        // Local answer for initialize, then the app's answer for the call. The replayed init response is dropped.
        Assert.That(output, Has.Count.EqualTo(2));
        Assert.That((int)output[0]["id"], Is.EqualTo(1));
        Assert.That((int)output[1]["id"], Is.EqualTo(5));

        var sent = app.WrittenMessages;
        Assert.That(sent, Has.Count.EqualTo(3));
        Assert.That((string)sent[0]["method"], Is.EqualTo("initialize"));
        Assert.That((string)sent[0]["id"], Is.EqualTo(McpProxy.ProxyInitId));
        Assert.That((string)sent[1]["method"], Is.EqualTo("notifications/initialized"));
        Assert.That((string)sent[2]["method"], Is.EqualTo("tools/call"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ToolCall_AppNotReachable_ReturnsError()
    {
        var (exitCode, output, connectCount) = await RunAsync(["{\"jsonrpc\":\"2.0\",\"id\":6,\"method\":\"tools/call\",\"params\":{}}"]);

        Assert.That(connectCount, Is.EqualTo(1));
        Assert.That(exitCode, Is.EqualTo(0));
        Assert.That((int)output[0]["error"]["code"], Is.EqualTo(-32603));
    }

    //--------------------------------------------------------------------------------------------------

    #region Clients without initialize handshake

    const string ModernResponsesJson =
        """
        {"protocolVersion":"2026-07-28","responses":{
          "server/discover":{"jsonrpc":"2.0","result":{"resultType":"complete","supportedVersions":["2026-07-28"],
            "capabilities":{"tools":{}},"_meta":{"io.modelcontextprotocol/serverInfo":{"name":"Macad|3D","version":"1.0.0"}},
            "ttlMs":0,"cacheScope":"private"}},
          "tools/list":{"jsonrpc":"2.0","result":{"resultType":"complete","tools":[{"name":"create_box"}]}},
          "prompts/list":{"jsonrpc":"2.0","error":{"code":-32601,"message":"Method not found"}}}}
        """;

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ServerDiscover_AnsweredFromCache()
    {
        var (_, output, connectCount) = await RunAsync([ModernRequest("discover-1", "server/discover")], modernResponses: ModernResponsesJson);

        Assert.That(connectCount, Is.EqualTo(0));
        Assert.That(output, Has.Count.EqualTo(1));
        Assert.That((string)output[0]["id"], Is.EqualTo("discover-1"));
        Assert.That((string)output[0]["result"]["supportedVersions"][0], Is.EqualTo("2026-07-28"));
        Assert.That((string)output[0]["result"]["resultType"], Is.EqualTo("complete"));
        Assert.That(output[0]["error"], Is.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ServerDiscover_WithoutVersion_AnsweredFromCache()
    {
        var (_, output, connectCount) = await RunAsync(["""{"jsonrpc":"2.0","id":4,"method":"server/discover"}"""],
                                                       modernResponses: ModernResponsesJson);

        Assert.That(connectCount, Is.EqualTo(0));
        Assert.That((int)output[0]["id"], Is.EqualTo(4));
        Assert.That(output[0]["result"]["supportedVersions"], Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Modern_UnsupportedVersion_ReturnsError()
    {
        var (_, output, connectCount) = await RunAsync([ModernRequest(7, "server/discover", "2099-01-01"), ModernRequest(8, "tools/call", "2099-01-01")],
                                                       modernResponses: ModernResponsesJson);

        Assert.That(connectCount, Is.EqualTo(0));
        Assert.That(output, Has.Count.EqualTo(2));
        foreach (var response in output)
        {
            Assert.That((int)response["error"]["code"], Is.EqualTo(-32022));
            Assert.That((string)response["error"]["data"]["requested"], Is.EqualTo("2099-01-01"));
            Assert.That((string)response["error"]["data"]["supported"][0], Is.EqualTo("2026-07-28"));
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Modern_CachedResponses_AreReplayed()
    {
        var (_, output, connectCount) = await RunAsync([ModernRequest(1, "tools/list"), ModernRequest(2, "prompts/list")],
                                                       modernResponses: ModernResponsesJson);

        Assert.That(connectCount, Is.EqualTo(0));
        Assert.That((int)output[0]["id"], Is.EqualTo(1));
        Assert.That((string)output[0]["result"]["resultType"], Is.EqualTo("complete"));
        Assert.That((string)output[0]["result"]["tools"][0]["name"], Is.EqualTo("create_box"));
        Assert.That((int)output[1]["id"], Is.EqualTo(2));
        Assert.That((int)output[1]["error"]["code"], Is.EqualTo(-32601));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Modern_ToolCall_ForwardedWithoutHandshake()
    {
        var app = new FakeAppStream("""{"jsonrpc":"2.0","id":5,"result":{"resultType":"complete","content":[]}}""" + "\n");

        var (_, output, connectCount) = await RunAsync([ModernRequest(4, "server/discover"), ModernRequest(5, "tools/call", extraParams: "\"name\":\"list_bodies\",")],
                                                       app, ModernResponsesJson);

        Assert.That(connectCount, Is.EqualTo(1));
        Assert.That(output.Select(o => (int)o["id"]), Is.EqualTo(new[] { 4, 5 }));
        var sent = app.WrittenMessages;
        Assert.That(sent, Has.Count.EqualTo(1));
        Assert.That((string)sent[0]["method"], Is.EqualTo("tools/call"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Modern_ContinuedToolList_IsForwarded()
    {
        var app = new FakeAppStream("""{"jsonrpc":"2.0","id":6,"result":{"resultType":"complete","tools":[]}}""" + "\n");

        var (_, output, connectCount) = await RunAsync([ModernRequest(6, "tools/list", extraParams: "\"cursor\":\"x\",")], app, ModernResponsesJson);

        Assert.That(connectCount, Is.EqualTo(1));
        Assert.That(output[0]["result"]["tools"].AsArray(), Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Legacy_WithCache_StillUsesHandshake()
    {
        var (_, output, connectCount) = await RunAsync([InitializeRequest, InitializedNotification, """{"jsonrpc":"2.0","id":2,"method":"tools/list"}"""],
                                                       modernResponses: ModernResponsesJson);

        Assert.That(connectCount, Is.EqualTo(0));
        Assert.That((string)output[0]["result"]["protocolVersion"], Is.EqualTo("2025-06-18"));
        Assert.That(output[1]["result"]["resultType"], Is.Null);
        Assert.That((string)output[1]["result"]["tools"][0]["name"], Is.EqualTo("create_box"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ServerDiscover_WithServerResponses()
    {
        var (_, output, connectCount) = await RunAsync([ModernRequest(1, "server/discover"), ModernRequest(2, "tools/list")],
                                                       modernResponses: Macad.Mcp.McpHost.GetModernResponses());

        Assert.That(connectCount, Is.EqualTo(0));
        var discover = output[0]["result"];
        Assert.That(discover["supportedVersions"].AsArray().Select(v => (string)v), Does.Contain("2026-07-28"));
        Assert.That((string)discover["_meta"]["io.modelcontextprotocol/serverInfo"]["name"], Is.EqualTo("Macad|3D"));
        Assert.That(discover["capabilities"]["tools"], Is.Not.Null);
        Assert.That((string)discover["instructions"], Is.EqualTo(Macad.Mcp.McpHost.Instructions));
        Assert.That(output[1]["result"]["tools"].AsArray().Select(t => (string)t["name"]), Does.Contain("create_box").And.Contain("box_joint"));
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Reconnect

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ClosedConnection_NextRequestReconnects()
    {
        // The first app closes after answering, e.g. because the MCP server was stopped and started again
        var first = new EchoAppStream(closeAfter: 1);
        var second = new EchoAppStream();

        var (exitCode, output, connectCount) = await RunWithAppsAsync(
            [InitializeRequest, InitializedNotification, ToolCall(5), ToolCall(6)], null, first, second);

        Assert.That(exitCode, Is.EqualTo(0));
        Assert.That(connectCount, Is.EqualTo(2));
        Assert.That(output.Select(o => (int)o["id"]), Is.EqualTo(new[] { 1, 5, 6 }));
        Assert.That(output.All(o => o["error"] == null), Is.True);

        // The handshake is replayed on each connection
        foreach (var app in new[] { first, second })
        {
            Assert.That((string)app.Received[0]["method"], Is.EqualTo("initialize"));
            Assert.That((string)app.Received[0]["id"], Is.EqualTo(McpProxy.ProxyInitId));
            Assert.That((string)app.Received[1]["method"], Is.EqualTo("notifications/initialized"));
        }
        Assert.That((int)first.Received.Last()["id"], Is.EqualTo(5));
        Assert.That((int)second.Received.Last()["id"], Is.EqualTo(6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ClosedConnection_PendingRequestGetsError()
    {
        var app = new EchoAppStream(closeAfter: 1, answerLast: false);

        var (_, output, connectCount) = await RunWithAppsAsync([InitializeRequest, InitializedNotification, ToolCall(5)], null, app);

        Assert.That(connectCount, Is.EqualTo(1));
        Assert.That(output, Has.Count.EqualTo(2));
        Assert.That((int)output[1]["id"], Is.EqualTo(5));
        Assert.That((int)output[1]["error"]["code"], Is.EqualTo(-32603));
        Assert.That((string)output[1]["error"]["message"], Does.Contain("closed"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task ServerStopped_ErrorThenReconnect()
    {
        // Not reachable at first (app running with the server stopped), then the server was started
        var app = new EchoAppStream();

        var (_, output, connectCount) = await RunWithAppsAsync([InitializeRequest, InitializedNotification, ToolCall(5), ToolCall(6)],
                                                               null, null, app);

        Assert.That(connectCount, Is.EqualTo(2));
        Assert.That((int)output[1]["id"], Is.EqualTo(5));
        Assert.That((string)output[1]["error"]["message"], Does.Contain("MCP Server button"));
        Assert.That((int)output[2]["id"], Is.EqualTo(6));
        Assert.That(output[2]["error"], Is.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Notifications_ForwardedWhileConnected()
    {
        var app = new EchoAppStream();
        const string cancelled = """{"jsonrpc":"2.0","method":"notifications/cancelled","params":{"requestId":5}}""";

        var (_, _, connectCount) = await RunWithAppsAsync([cancelled, InitializeRequest, InitializedNotification, ToolCall(5), cancelled], null, app);

        // The first notification came before the connection and is dropped, the second is passed to the app
        Assert.That(connectCount, Is.EqualTo(1));
        Assert.That(app.Received.Count(m => (string)m["method"] == "notifications/cancelled"), Is.EqualTo(1));
        Assert.That((string)app.Received.Last()["method"], Is.EqualTo("notifications/cancelled"));
    }

    #endregion

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    class FakeAppStream : Stream
    {
        readonly MemoryStream _Responses;
        public MemoryStream Written { get; } = new();

        public FakeAppStream(string responses) => _Responses = new MemoryStream(Encoding.UTF8.GetBytes(responses));

        public override bool CanRead => true;
        public override bool CanSeek => false;
        public override bool CanWrite => true;
        public override long Length => throw new NotSupportedException();
        public override long Position { get => throw new NotSupportedException(); set => throw new NotSupportedException(); }
        public override void Flush() { }
        public override int Read(byte[] buffer, int offset, int count) => _Responses.Read(buffer, offset, count);
        public override long Seek(long offset, SeekOrigin origin) => throw new NotSupportedException();
        public override void SetLength(long value) => throw new NotSupportedException();
        public override void Write(byte[] buffer, int offset, int count) => Written.Write(buffer, offset, count);

        public override Task<int> ReadAsync(byte[] buffer, int offset, int count, System.Threading.CancellationToken ct)
            => Task.Run(() => Read(buffer, offset, count), ct);
        public override ValueTask<int> ReadAsync(Memory<byte> buffer, System.Threading.CancellationToken ct = default)
            => new(Task.Run(() => { var data = new byte[buffer.Length]; int n = Read(data, 0, data.Length); data.AsMemory(0, n).CopyTo(buffer); return n; }, ct));
        public override Task WriteAsync(byte[] buffer, int offset, int count, System.Threading.CancellationToken ct)
        {
            Write(buffer, offset, count);
            return Task.CompletedTask;
        }
        public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, System.Threading.CancellationToken ct = default)
        {
            Write(buffer.ToArray(), 0, buffer.Length);
            return ValueTask.CompletedTask;
        }

        public List<JsonNode> WrittenMessages => ParseLines(Written.ToArray());
    }

    //--------------------------------------------------------------------------------------------------

    static List<JsonNode> ParseLines(byte[] data)
    {
        var result = new List<JsonNode>();
        foreach (var line in Encoding.UTF8.GetString(data).Split('\n', StringSplitOptions.RemoveEmptyEntries))
        {
            result.Add(JsonNode.Parse(line));
        }
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    // An app which answers each request it receives, and closes the connection after answering 'closeAfter' tool calls
    // (without answering the last one if 'answerLast' is false).
    class EchoAppStream : Stream
    {
        readonly int _CloseAfter;
        readonly bool _AnswerLast;
        readonly Queue<byte> _Responses = new();
        readonly StringBuilder _Partial = new();
        int _Calls;
        bool _Closed;

        public List<JsonNode> Received { get; } = new();

        public EchoAppStream(int closeAfter = int.MaxValue, bool answerLast = true)
        {
            _CloseAfter = closeAfter;
            _AnswerLast = answerLast;
        }

        public override bool CanRead => true;
        public override bool CanSeek => false;
        public override bool CanWrite => true;
        public override long Length => throw new NotSupportedException();
        public override long Position { get => throw new NotSupportedException(); set => throw new NotSupportedException(); }
        public override void Flush() { }
        public override long Seek(long offset, SeekOrigin origin) => throw new NotSupportedException();
        public override void SetLength(long value) => throw new NotSupportedException();

        public override Task<int> ReadAsync(byte[] buffer, int offset, int count, System.Threading.CancellationToken ct)
            => Task.Run(() => Read(buffer, offset, count), ct);
        public override ValueTask<int> ReadAsync(Memory<byte> buffer, System.Threading.CancellationToken ct = default)
            => new(Task.Run(() => { var data = new byte[buffer.Length]; int n = Read(data, 0, data.Length); data.AsMemory(0, n).CopyTo(buffer); return n; }, ct));
        public override Task WriteAsync(byte[] buffer, int offset, int count, System.Threading.CancellationToken ct)
        {
            Write(buffer, offset, count);
            return Task.CompletedTask;
        }
        public override ValueTask WriteAsync(ReadOnlyMemory<byte> buffer, System.Threading.CancellationToken ct = default)
        {
            Write(buffer.ToArray(), 0, buffer.Length);
            return ValueTask.CompletedTask;
        }

        public override int Read(byte[] buffer, int offset, int count)
        {
            lock (_Responses)
            {
                while (_Responses.Count == 0 && !_Closed)
                {
                    System.Threading.Monitor.Wait(_Responses);
                }
                int n = 0;
                while (n < count && _Responses.Count > 0)
                {
                    buffer[offset + n++] = _Responses.Dequeue();
                }
                return n;
            }
        }

        public override void Write(byte[] buffer, int offset, int count)
        {
            lock (_Responses)
            {
                if (_Closed)
                {
                    throw new IOException("Pipe is broken.");
                }
                _Partial.Append(Encoding.UTF8.GetString(buffer, offset, count));
                string text;
                int end;
                while ((end = (text = _Partial.ToString()).IndexOf('\n')) >= 0)
                {
                    _Partial.Remove(0, end + 1);
                    var message = JsonNode.Parse(text[..end]);
                    Received.Add(message);
                    if (message["id"] == null)
                    {
                        continue;
                    }
                    bool isCall = (string)message["method"] != "initialize";
                    bool last = isCall && ++_Calls >= _CloseAfter;
                    if (!last || _AnswerLast)
                    {
                        var response = new JsonObject { ["jsonrpc"] = "2.0", ["id"] = message["id"].DeepClone(), ["result"] = new JsonObject() };
                        foreach (var b in Encoding.UTF8.GetBytes(response.ToJsonString() + "\n"))
                        {
                            _Responses.Enqueue(b);
                        }
                    }
                    _Closed |= last;
                }
                System.Threading.Monitor.PulseAll(_Responses);
            }
        }

        protected override void Dispose(bool disposing)
        {
            lock (_Responses)
            {
                _Closed = true;
                System.Threading.Monitor.PulseAll(_Responses);
            }
            base.Dispose(disposing);
        }
    }

    //--------------------------------------------------------------------------------------------------

    // Runs the proxy with the given input lines, input is closed after the lines were sent.
    static Task<(int ExitCode, List<JsonNode> Output, int ConnectCount)> RunAsync(string[] lines, Stream app = null,
                                                                                   string modernResponses = null)
        => RunWithAppsAsync(lines, modernResponses, app);

    //--------------------------------------------------------------------------------------------------

    // Like RunAsync, each connection attempt gets the next app (null: not reachable).
    static async Task<(int ExitCode, List<JsonNode> Output, int ConnectCount)> RunWithAppsAsync(string[] lines, string modernResponses,
                                                                                                 params Stream[] apps)
    {
        int connectCount = 0;
        var proxy = new McpProxy(ToolListJson, () =>
        {
            var app = connectCount < apps.Length ? apps[connectCount] : null;
            connectCount++;
            return Task.FromResult(app);
        }, modernResponses);

        using var inputServer = new AnonymousPipeServerStream(PipeDirection.Out);
        using var inputClient = new AnonymousPipeClientStream(PipeDirection.In, inputServer.ClientSafePipeHandle);
        var output = new MemoryStream();

        var run = proxy.RunAsync(inputClient, output);
        var bytes = Encoding.UTF8.GetBytes(string.Join("\n", lines) + "\n");
        inputServer.Write(bytes, 0, bytes.Length);
        inputServer.Dispose(); // end of input ends the session

        var completed = await Task.WhenAny(run, Task.Delay(TimeSpan.FromSeconds(10)));
        Assert.That(completed, Is.SameAs(run), "Proxy did not finish");
        return (await run, ParseLines(output.ToArray()), connectCount);
    }

    //--------------------------------------------------------------------------------------------------

    static string ModernRequest(object id, string method, string version = "2026-07-28", string extraParams = "")
        => "{\"jsonrpc\":\"2.0\",\"id\":" + System.Text.Json.JsonSerializer.Serialize(id) + ",\"method\":\"" + method + "\","
           + "\"params\":{" + extraParams + "\"_meta\":{\"io.modelcontextprotocol/protocolVersion\":\"" + version + "\"}}}";

    //--------------------------------------------------------------------------------------------------

    static string ToolCall(int id) => "{\"jsonrpc\":\"2.0\",\"id\":" + id + ",\"method\":\"tools/call\",\"params\":{\"name\":\"list_bodies\"}}";
}
