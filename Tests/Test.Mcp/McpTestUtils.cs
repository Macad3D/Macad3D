using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.Json;
using System.Threading.Tasks;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Mcp;
using Macad.Test.Utils;
using ModelContextProtocol.Protocol;
using NUnit.Framework;

namespace Macad.Test.Mcp;

// Utilities shared by the tests of the MCP tools. Use with 'using static Macad.Test.Mcp.McpTestUtils;'.
public static class McpTestUtils
{
    #region Document

    // Finds a body of the current document by guid or name.
    public static Body FindBody(string reference)
    {
        var document = CoreContext.Current.Document;
        return Guid.TryParse(reference, out var guid)
                   ? document.FindInstance(guid) as Body
                   : document.OfType<Body>().Single(b => b.Name == reference);
    }

    //--------------------------------------------------------------------------------------------------

    public static Body FindBody(ToolsBase.BodyInfo info)
    {
        return FindBody(info.Guid);
    }

    //--------------------------------------------------------------------------------------------------

    public static double Volume(string body)
    {
        return FindBody(body).Shape.GetBRep().Volume();
    }

    #endregion

    #region Tool arguments and test geometry

    public static SketchTools.PathSegment Line(double x, double y)
    {
        return new SketchTools.PathSegment { Type = "line", To = [x, y] };
    }

    //--------------------------------------------------------------------------------------------------

    // Converts an anonymous object to the parameter dictionary of update_shape.
    public static Dictionary<string, JsonElement> ToParameters(object values)
    {
        return JsonSerializer.SerializeToElement(values).EnumerateObject().ToDictionary(p => p.Name, p => p.Value.Clone());
    }

    //--------------------------------------------------------------------------------------------------

    public static async Task<SketchTools.SketchInfo> CreateRectangleSketch(string plane, double x1, double y1, double x2, double y2,
                                                                          string name = null)
    {
        var tools = new SketchTools();
        var sketch = await tools.CreateSketch(plane, name: name);
        await tools.AddRectangle(sketch.Guid, x1, y1, x2, y2);
        return sketch;
    }

    //--------------------------------------------------------------------------------------------------

    // Returns the index of the only face of the body with the given normal.
    public static async Task<int> FaceWithNormal(string body, double x, double y, double z)
    {
        return (await new TopologyTools().ListFaces(body, normal: [x, y, z])).Single().Index;
    }

    #endregion

    #region Asserts

    public static void AssertBox(ToolsBase.BoundingBoxInfo box, double minX, double minY, double minZ, double maxX, double maxY, double maxZ)
    {
        Assert.That(box, Is.Not.Null);
        Assert.That(new[] { box.MinX, box.MinY, box.MinZ, box.MaxX, box.MaxY, box.MaxZ },
                    Is.EqualTo(new[] { minX, minY, minZ, maxX, maxY, maxZ }).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    public static void AssertVector(double[] actual, double x, double y, double z)
    {
        Assert.That(actual, Is.EqualTo(new[] { x, y, z }).Within(1e-9));
    }

    #endregion

    #region Images

    public static ImageContentBlock GetImage(CallToolResult result)
    {
        var image = result.Content.OfType<ImageContentBlock>().Single();
        Assert.That(image.MimeType, Is.EqualTo("image/png"));
        return image;
    }

    //--------------------------------------------------------------------------------------------------

    // Compares the image of a capture_view result with the reference image <referenceName>.png in the unit test data.
    // Like AssertHelper.IsSameViewport, the result is kept as <referenceName>_TestResult.png if it differs or the
    // reference is missing.
    public static void AssertSameImage(CallToolResult result, string referenceName)
    {
        var referencePath = Path.Combine(TestData.TestDataDirectory, referenceName + ".png");
        var resultPath = Path.Combine(TestData.TestDataDirectory, referenceName + "_TestResult.png");
        Directory.CreateDirectory(Path.GetDirectoryName(referencePath)!);
        File.WriteAllBytes(resultPath, GetImage(result).DecodedData.ToArray());
        AssertHelper.IsSameImage(referencePath, resultPath);
    }

    #endregion
}
