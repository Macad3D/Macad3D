using System.Threading;
using System.Threading.Tasks;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Mcp;
using Macad.Occt;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;
using static Macad.Test.Mcp.McpTestUtils;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class PrimitiveToolsTests
{
    PrimitiveTools _Tools;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
        _Tools = new PrimitiveTools();
    }

    //--------------------------------------------------------------------------------------------------

    #region CreateBox

    [Test]
    public async Task CreateBox()
    {
        var info = await _Tools.CreateBox(10, 20, 30, 1, 2, 3, "MyBox");

        Assert.That(info.Name, Is.EqualTo("MyBox"));
        Assert.That(info.Type, Is.EqualTo(nameof(Body)));

        var body = FindBody(info);
        Assert.That(body, Is.Not.Null);
        Assert.That(body.Position, Is.EqualTo(new Pnt(1, 2, 3)));
        var box = body.Shape as Box;
        Assert.That(box, Is.Not.Null);
        Assert.That(box.DimensionX, Is.EqualTo(10).Within(1e-6));
        Assert.That(box.DimensionY, Is.EqualTo(20).Within(1e-6));
        Assert.That(box.DimensionZ, Is.EqualTo(30).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CreateBox_WithoutName()
    {
        var info = await _Tools.CreateBox(1, 1, 1);

        Assert.That(info.Name, Is.Not.Null.And.Not.Empty);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CreateBox_NameTaken_GetsUniqueName()
    {
        var first = await _Tools.CreateBox(1, 1, 1, name: "Part");
        var second = await _Tools.CreateBox(1, 1, 1, name: "Part");

        Assert.That(first.Name, Is.EqualTo("Part"));
        Assert.That(second.Name, Is.Not.EqualTo("Part").And.StartsWith("Part"));
        Assert.That(FindBody(second).Name, Is.EqualTo(second.Name));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task CreateBox_IsOneUndoStep()
    {
        var info = await _Tools.CreateBox(1, 1, 1);
        CoreContext.Current.UndoHandler.DoUndo(1);

        Assert.That(info, Is.Not.Null);
        Assert.That(CoreContext.Current.Document.EntityCount, Is.Zero);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateBox_Invalid_LeavesDocumentUnchanged()
    {
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateBox(0, 1, 1));
        Assert.That(CoreContext.Current.Document.EntityCount, Is.Zero);
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase(0, 1, 1)]
    [TestCase(1, -1, 1)]
    [TestCase(1, 1, double.NaN)]
    [TestCase(double.PositiveInfinity, 1, 1)]
    public void CreateBox_InvalidSize(double w, double d, double h)
    {
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateBox(w, d, h));
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region CreateCylinder

    [Test]
    public async Task CreateCylinder()
    {
        var info = await _Tools.CreateCylinder(5, 12, 1, 2, 3, "MyCyl");

        Assert.That(info.Name, Is.EqualTo("MyCyl"));
        Assert.That(info.Type, Is.EqualTo(nameof(Body)));

        var body = FindBody(info);
        Assert.That(body, Is.Not.Null);
        Assert.That(body.Position, Is.EqualTo(new Pnt(1, 2, 3)));
        var cyl = body.Shape as Cylinder;
        Assert.That(cyl, Is.Not.Null);
        Assert.That(cyl.Radius, Is.EqualTo(5).Within(1e-6));
        Assert.That(cyl.Height, Is.EqualTo(12).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase(0, 1)]
    [TestCase(1, 0)]
    [TestCase(-1, 1)]
    [TestCase(1, double.NaN)]
    public void CreateCylinder_InvalidSize(double radius, double height)
    {
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateCylinder(radius, height));
    }

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region CreateSphere

    [Test]
    public async Task CreateSphere()
    {
        var info = await _Tools.CreateSphere(7, 1, 2, 3, "MySphere");

        Assert.That(info.Name, Is.EqualTo("MySphere"));
        Assert.That(info.Type, Is.EqualTo(nameof(Body)));

        var body = FindBody(info);
        Assert.That(body, Is.Not.Null);
        Assert.That(body.Position, Is.EqualTo(new Pnt(1, 2, 3)));
        var sphere = body.Shape as Sphere;
        Assert.That(sphere, Is.Not.Null);
        Assert.That(sphere.Radius, Is.EqualTo(7).Within(1e-6));
    }

    //--------------------------------------------------------------------------------------------------

    [TestCase(0)]
    [TestCase(-5)]
    [TestCase(double.NaN)]
    public void CreateSphere_InvalidRadius(double radius)
    {
        Assert.ThrowsAsync<McpException>(async () => await _Tools.CreateSphere(radius));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
