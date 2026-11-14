using System;
using System.IO;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Macad.Exchange;
using Macad.Mcp;
using Macad.Test.Utils;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

// Builds a simplified 1:64 model of a Victorian 32-pounder ship cannon on a truck carriage, using only the MCP tools.
// Full size: barrel ~2.9 m long, ~0.6 m at the breech, 6.4 in bore; carriage ~1.8 m long, wheels ~0.5 m.
// Model units are mm at 1:64. The barrel axis runs along +X (muzzle at +X) at height z = 11.
[TestFixture]
[Apartment(ApartmentState.STA)]
public class CannonScenarioTests
{
    readonly SketchTools _Sketch = new();
    readonly FormTools _Form = new();
    readonly PrimitiveTools _Primitives = new();
    readonly TransformTools _Transform = new();
    readonly ModifyTools _Modify = new();
    readonly MultiplyTools _Multiply = new();
    readonly TopologyTools _Topology = new();
    readonly DocumentTools _Document = new();

    const double _AxisHeight = 11;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(256);
        ExchangeModule.Initialize();
    }

    //--------------------------------------------------------------------------------------------------

    [TearDown]
    public void TearDown()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task BuildCannon()
    {
        await BuildBarrel();
        await BuildCarriage();
        await BuildWheels();

        // Only the three parts are visible, operands are hidden
        var bodies = await _Document.ListBodies();
        Assert.That(bodies.Where(b => b.Visible).Select(b => b.Name), Is.EquivalentTo(new[] { "Barrel", "Carriage", "Wheels" }));
        Assert.That(bodies.All(b => !b.HasErrors), Is.True, string.Join(", ", bodies.Where(b => b.HasErrors).Select(b => b.Name)));

        // Barrel: length from cascabel to muzzle 48.8 mm (3.1 m full size), bore and trunnions present
        var barrel = await _Topology.Measure("Barrel");
        Assert.That(barrel.Solids, Is.EqualTo(1));
        Assert.That(barrel.BoundingBox.MinX, Is.EqualTo(-5.8).Within(1e-3));
        Assert.That(barrel.BoundingBox.MaxX, Is.EqualTo(43).Within(1e-3));
        Assert.That(barrel.BoundingBox.MaxZ, Is.EqualTo(_AxisHeight + 4.7).Within(1e-3));
        Assert.That(barrel.BoundingBox.SizeY, Is.EqualTo(16).Within(1e-3));
        Assert.That(await _Topology.ListFaces("Barrel", type: "Cylinder", minRadius: 1.24, maxRadius: 1.26), Has.Length.EqualTo(1));

        // Carriage: two cheeks joined by the axletrees
        var carriage = await _Topology.Measure("Carriage");
        Assert.That(carriage.Solids, Is.EqualTo(1));
        Assert.That(carriage.BoundingBox.SizeX, Is.EqualTo(28).Within(1e-3));
        Assert.That(carriage.BoundingBox.SizeY, Is.EqualTo(20).Within(1e-3));

        // Four wheels touching the ground
        var wheels = await _Topology.Measure("Wheels");
        Assert.That(wheels.Solids, Is.EqualTo(4));
        Assert.That(wheels.BoundingBox.MinZ, Is.EqualTo(0).Within(1e-3));
        Assert.That(wheels.BoundingBox.SizeY, Is.EqualTo(18).Within(1e-3));

        // Overall: ~49 x 20 x 16 mm, i.e. ~3.1 x 1.3 x 1.0 m full size
        double minX = new[] { barrel, carriage, wheels }.Min(m => m.BoundingBox.MinX);
        double maxX = new[] { barrel, carriage, wheels }.Max(m => m.BoundingBox.MaxX);
        double maxZ = new[] { barrel, carriage, wheels }.Max(m => m.BoundingBox.MaxZ);
        Assert.That(maxX - minX, Is.EqualTo(48.8).Within(1e-3));
        Assert.That(maxZ, Is.EqualTo(15.7).Within(1e-3));

        // Visual check and export for printing
        var image = GetImage(await new ViewTools().CaptureView(width: 800, height: 600));
        Assert.That(image.DecodedData.Length, Is.GreaterThan(1000));
        var imagePath = Path.Combine(TestContext.CurrentContext.WorkDirectory, "Cannon.png");
        File.WriteAllBytes(imagePath, image.DecodedData.ToArray());
        TestContext.AddTestAttachment(imagePath, "The cannon, rendered by capture_view");

        var path = Path.Combine(Path.GetTempPath(), "Macad.Test.Mcp.Cannon.step");
        var export = await new ExportTools().ExportBodies(["Barrel", "Carriage", "Wheels"], path, overwrite: true);
        Assert.That(export.FileSize, Is.GreaterThan(1000));
        File.Delete(path);
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    async Task BuildBarrel()
    {
        // Half profile on the XZ plane (sketch x = world X, sketch y = world Z), revolved around the bore axis
        await _Sketch.CreateSketch("XZ", name: "Barrel");
        double a = 27 * Math.PI / 180;
        await _Sketch.AddPath("Barrel", [-5.8, _AxisHeight], [
            // Cascabel knob and neck
            new SketchTools.PathSegment { Type = "arc", To = [-4.5 + 1.3 * Math.Cos(a), _AxisHeight + 1.3 * Math.Sin(a)], Center = [-4.5, _AxisHeight], Clockwise = true },
            Line(-2.6, _AxisHeight + 0.6),
            Line(-2.0, _AxisHeight + 1.5),
            // Breech with base ring
            Line(-2.0, _AxisHeight + 4.2),
            Line(-1.5, _AxisHeight + 4.7),
            // First reinforce, second reinforce, chase
            Line(10, _AxisHeight + 4.7),
            Line(10, _AxisHeight + 4.3),
            Line(20, _AxisHeight + 4.1),
            Line(20, _AxisHeight + 3.8),
            Line(38, _AxisHeight + 3.2),
            // Muzzle swell
            Line(39, _AxisHeight + 3.8),
            Line(43, _AxisHeight + 3.8),
            Line(43, _AxisHeight)], closed: true);
        await _Form.Revolve("Barrel", "x", [0, _AxisHeight]);

        // Trunnions across the barrel, resting on the carriage cheeks
        await _Primitives.CreateCylinder(1.2, 16, name: "Trunnions");
        await _Transform.SetPlacement("Trunnions", [17, -8, _AxisHeight], zDirection: [0, 1, 0]);
        await _Modify.BooleanFuse("Barrel", ["Trunnions"]);

        // Bore, 6.4 in at 1:64
        await _Primitives.CreateCylinder(1.25, 41, name: "Bore");
        await _Transform.SetPlacement("Bore", [3, 0, _AxisHeight], zDirection: [1, 0, 0]);
        await _Modify.BooleanCut("Barrel", ["Bore"]);
    }

    //--------------------------------------------------------------------------------------------------

    async Task BuildCarriage()
    {
        // Stepped cheek with the trunnion seat, drawn at y = 7 and extruded inwards (XZ normal is -Y)
        await _Sketch.CreateSketch("XZ", -7, name: "Carriage");
        await _Sketch.AddPath("Carriage", [0, 3], [
            Line(28, 3),
            Line(28, _AxisHeight),
            Line(18.2, _AxisHeight),
            new SketchTools.PathSegment { Type = "arc", To = [15.8, _AxisHeight], Through = [17, _AxisHeight - 1.2] },
            Line(12, _AxisHeight),
            Line(12, 9),
            Line(6, 9),
            Line(6, 7),
            Line(0, 7)], closed: true);
        await _Form.Extrude("Carriage", 2);
        await _Multiply.Mirror("Carriage", planeOrigin: [0, 0, 0], planeNormal: [0, 1, 0]);

        // Front and rear axletrees, fused with the cheeks
        await _Primitives.CreateBox(3, 20, 2.5, 2.5, -10, 2.75, "RearAxletree");
        await _Primitives.CreateBox(3, 20, 2.5, 21.5, -10, 2.75, "FrontAxletree");
        await _Modify.BooleanFuse("Carriage", ["RearAxletree", "FrontAxletree"]);

        // Round the front top edge of the cheeks
        var frontTopEdges = await _Topology.ListEdges("Carriage", type: "Line", direction: [0, 1, 0],
                                                     boxMin: [27.9, -1e3, _AxisHeight - 0.1], boxMax: [28.1, 1e3, _AxisHeight + 0.1]);
        Assert.That(frontTopEdges, Has.Length.EqualTo(2));
        await _Modify.Fillet("Carriage", frontTopEdges.Select(e => e.Index).ToArray(), 0.5);
    }

    //--------------------------------------------------------------------------------------------------

    async Task BuildWheels()
    {
        // One wheel (trucks) with rounded rims, repeated front/rear and mirrored to the other side
        await _Primitives.CreateCylinder(4, 1.5, name: "Wheels");
        await _Transform.SetPlacement("Wheels", [4, 7.5, 4], zDirection: [0, 1, 0], xDirection: [1, 0, 0]);
        var rims = await _Topology.ListEdges("Wheels", type: "Circle", minRadius: 3.9);
        Assert.That(rims, Has.Length.EqualTo(2));
        await _Modify.Fillet("Wheels", rims.Select(e => e.Index).ToArray(), 0.3);
        await _Multiply.LinearArray("Wheels", 2, 19);
        await _Multiply.Mirror("Wheels", planeOrigin: [0, 0, 0], planeNormal: [0, 1, 0]);
    }
}
