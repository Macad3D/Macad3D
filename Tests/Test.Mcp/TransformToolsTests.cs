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
public class TransformToolsTests
{
    TransformTools _Tools;
    PrimitiveTools _Primitives;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new TransformTools();
        _Primitives = new PrimitiveTools();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task MoveBody()
    {
        var box = await _Primitives.CreateBox(10, 20, 30, 1, 2, 3);

        var result = await _Tools.MoveBody(box.Name, [5, -2, 10]);

        Assert.That(result.Position, Is.EqualTo(new double[] { 6, 0, 13 }).Within(1e-9));
        AssertBox(result.BoundingBox, 6, 0, 13, 16, 20, 43);
        Assert.That(CoreContext.Current.UndoHandler.CanUndo, Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task RotateBody_AroundOwnPosition()
    {
        // Cylinder along Z laid along X, as a trunnion
        var cylinder = await _Primitives.CreateCylinder(2, 20, 0, 0, 10);

        var result = await _Tools.RotateBody(cylinder.Guid, [0, 1, 0], 90);

        Assert.That(result.Position, Is.EqualTo(new double[] { 0, 0, 10 }).Within(1e-9));
        Assert.That(result.ZDirection, Is.EqualTo(new double[] { 1, 0, 0 }).Within(1e-9));
        Assert.That(result.RotationAngle, Is.EqualTo(90).Within(1e-9));
        AssertBox(result.BoundingBox, 0, -2, 8, 20, 2, 12);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task RotateBody_AroundPivot()
    {
        var box = await _Primitives.CreateBox(2, 2, 2, 10, 0, 0);

        var result = await _Tools.RotateBody(box.Guid, [0, 0, 1], 90, [0, 0, 0]);

        Assert.That(result.Position, Is.EqualTo(new double[] { 0, 10, 0 }).Within(1e-9));
        AssertBox(result.BoundingBox, -2, 10, 0, 0, 12, 2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task RotateBody_ArbitraryAxis_Accumulates()
    {
        var box = await _Primitives.CreateBox(1, 1, 1);

        await _Tools.RotateBody(box.Guid, [1, 1, 1], 60);
        var result = await _Tools.RotateBody(box.Guid, [1, 1, 1], 60);

        // Two rotations of 60 degree around the diagonal are 120 degree, which maps X to Y.
        Assert.That(result.RotationAngle, Is.EqualTo(120).Within(1e-6));
        Assert.That(result.XDirection, Is.EqualTo(new double[] { 0, 1, 0 }).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task SetPlacement_ZDirection()
    {
        var cylinder = await _Primitives.CreateCylinder(2, 20);

        var result = await _Tools.SetPlacement(cylinder.Guid, [0, -10, 5], zDirection: [0, 1, 0]);

        Assert.That(result.Position, Is.EqualTo(new double[] { 0, -10, 5 }).Within(1e-9));
        Assert.That(result.ZDirection, Is.EqualTo(new double[] { 0, 1, 0 }).Within(1e-9));
        AssertBox(result.BoundingBox, -2, -10, 3, 2, 10, 7);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task SetPlacement_ZAndXDirection()
    {
        var box = await _Primitives.CreateBox(1, 1, 1);

        var result = await _Tools.SetPlacement(box.Guid, zDirection: [1, 0, 0], xDirection: [0, 0, -1]);

        Assert.That(result.ZDirection, Is.EqualTo(new double[] { 1, 0, 0 }).Within(1e-9));
        Assert.That(result.XDirection, Is.EqualTo(new double[] { 0, 0, -1 }).Within(1e-9));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task SetPlacement_AxisAngle_AndReset()
    {
        var box = await _Primitives.CreateBox(1, 1, 1, 5, 5, 5);

        var rotated = await _Tools.SetPlacement(box.Guid, rotationAxis: [0, 0, 1], rotationAngle: 45);
        Assert.That(rotated.RotationAngle, Is.EqualTo(45).Within(1e-9));
        Assert.That(rotated.Position, Is.EqualTo(new double[] { 5, 5, 5 }).Within(1e-9));

        var reset = await _Tools.SetPlacement(box.Guid, rotationAngle: 0);
        Assert.That(reset.RotationAngle, Is.EqualTo(0));
        Assert.That(FindBody(box.Guid).Rotation, Is.EqualTo(Quaternion.Identity));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task InvalidInput_KeepsPlacement()
    {
        var box = await _Primitives.CreateBox(1, 1, 1, 5, 5, 5);

        Assert.ThrowsAsync<McpException>(async () => await _Tools.MoveBody(box.Guid, [1, 2]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.RotateBody(box.Guid, [0, 0, 0], 90));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.RotateBody(box.Guid, [0, 0, 1], double.NaN));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.SetPlacement(box.Guid, [0, 0, 0], zDirection: [0, 0, 1], rotationAngle: 10));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.SetPlacement(box.Guid, xDirection: [1, 0, 0]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.SetPlacement(box.Guid, [0, 0, 0], zDirection: [0, 0, 1], xDirection: [0, 0, 2]));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.SetPlacement(box.Guid, rotationAngle: 30));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.MoveBody("nope", [1, 2, 3]));

        Assert.That(FindBody(box.Guid).Position, Is.EqualTo(new Pnt(5, 5, 5)));
        Assert.That(FindBody(box.Guid).Rotation, Is.EqualTo(Quaternion.Identity));
    }
}
