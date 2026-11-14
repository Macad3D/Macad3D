using System.Drawing;
using System.IO;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Macad.Core;
using Macad.Mcp;
using Macad.Occt;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class ViewToolsTests
{
    ViewTools _Tools;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public async Task SetUp()
    {
        Context.InitWithView(200);
        _Tools = new ViewTools();
        await new PrimitiveTools().CreateBox(10, 20, 30, name: "Box");
        await new PrimitiveTools().CreateSphere(5, 50, 0, 0, "Ball");
        Context.Current.ViewportController.ZoomFitAll();
    }

    //--------------------------------------------------------------------------------------------------

    [TearDown]
    public void TearDown()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Capture_ReturnsImageOfRequestedSize()
    {
        var result = await _Tools.CaptureView(width: 320, height: 240);

        using var bitmap = Decode(result);
        Assert.That(bitmap.Width, Is.EqualTo(320));
        Assert.That(bitmap.Height, Is.EqualTo(240));
        Assert.That(CountNonBackgroundPixels(bitmap), Is.GreaterThan(100));
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase("front")]
    [TestCase("top")]
    [TestCase("current")]
    public async Task Capture_RestoresUserCamera(string view)
    {
        var before = GetCamera();
        var viewportEye = Context.Current.ViewportController.Viewport.EyePoint;

        await _Tools.CaptureView(view, bodies: ["Ball"], width: 128, height: 128);

        AssertSameCamera(before);
        Assert.That(Context.Current.ViewportController.Viewport.EyePoint, Is.EqualTo(viewportEye));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Capture_FitToBody_DiffersFromFitAll()
    {
        using var all = Decode(await _Tools.CaptureView("top", width: 128, height: 128));
        using var ball = Decode(await _Tools.CaptureView("top", bodies: ["Ball"], width: 128, height: 128));
        using var custom = Decode(await _Tools.CaptureView(direction: [0, 0, -1], bodies: ["Ball"], width: 128, height: 128));

        // Fitted to the ball alone, the ball fills more of the image
        Assert.That(CountNonBackgroundPixels(ball), Is.GreaterThan(CountNonBackgroundPixels(all)));
        // Looking down along -Z is the top view
        Assert.That(CountNonBackgroundPixels(custom), Is.EqualTo(CountNonBackgroundPixels(ball)).Within(CountNonBackgroundPixels(ball) / 10));
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase(ViewUtils.ViewForwardDirection.XPos, "+X", "[-1, 0, 0]")]
    [TestCase(ViewUtils.ViewForwardDirection.XNeg, "-X", "[1, 0, 0]")]
    [TestCase(ViewUtils.ViewForwardDirection.YPos, "+Y", "[0, -1, 0]")]
    [TestCase(ViewUtils.ViewForwardDirection.YNeg, "-Y", "[0, 1, 0]")]
    public async Task Capture_FrontFollowsForwardDirection(ViewUtils.ViewForwardDirection forward, string axis, string viewing)
    {
        var parameters = Macad.Interaction.InteractiveContext.Current.Parameters.Get<Macad.Interaction.ViewportParameterSet>();
        var saved = parameters.ForwardDirection;
        parameters.ForwardDirection = forward;
        try
        {
            var result = await _Tools.CaptureView("front", width: 128, height: 128);

            var text = result.Content.OfType<ModelContextProtocol.Protocol.TextContentBlock>().Single().Text;
            Assert.That(text, Does.Contain($"faces {axis}"));
            Assert.That(text, Does.Contain($"looks along {viewing}"));
        }
        finally
        {
            parameters.ForwardDirection = saved;
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Capture_InvalidInput()
    {
        var before = GetCamera();

        Assert.ThrowsAsync<McpException>(async () => await _Tools.CaptureView("side"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CaptureView(width: 10));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CaptureView(height: 5000));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CaptureView(direction: [0, 0, 0]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CaptureView(bodies: ["Missing"]));

        AssertSameCamera(before);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Capture_WithoutViewport_Fails()
    {
        Context.InitWithDefault();
        await new PrimitiveTools().CreateBox(1, 1, 1);

        Assert.ThrowsAsync<McpException>(async () => await _Tools.CaptureView());
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    static Bitmap Decode(ModelContextProtocol.Protocol.CallToolResult result)
    {
        return new Bitmap(new MemoryStream(GetImage(result).DecodedData.ToArray()));
    }

    //--------------------------------------------------------------------------------------------------

    static int CountNonBackgroundPixels(Bitmap bitmap)
    {
        var background = bitmap.GetPixel(0, 0);
        int count = 0;
        for (int y = 0; y < bitmap.Height; y += 2)
        {
            for (int x = 0; x < bitmap.Width; x += 2)
            {
                if (bitmap.GetPixel(x, y) != background)
                    count++;
            }
        }
        return count;
    }

    //--------------------------------------------------------------------------------------------------

    static (Pnt eye, Pnt center, Dir up, double scale) GetCamera()
    {
        var camera = Context.Current.ViewportController.V3dView.Camera();
        return (camera.Eye(), camera.Center(), camera.Up(), camera.Scale());
    }

    //--------------------------------------------------------------------------------------------------

    static void AssertSameCamera((Pnt eye, Pnt center, Dir up, double scale) expected)
    {
        var actual = GetCamera();
        Assert.That(actual.eye.IsEqual(expected.eye, 1e-6), Is.True, "eye");
        Assert.That(actual.center.IsEqual(expected.center, 1e-6), Is.True, "center");
        Assert.That(actual.up.IsEqual(expected.up, 1e-9), Is.True, "up");
        Assert.That(actual.scale, Is.EqualTo(expected.scale).Within(1e-9), "scale");
    }
}
