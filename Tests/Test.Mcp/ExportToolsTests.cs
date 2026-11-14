using System.IO;
using System.Threading;
using System.Threading.Tasks;
using Macad.Core;
using Macad.Exchange;
using Macad.Mcp;
using Macad.Occt;
using Macad.Test.Utils;
using ModelContextProtocol;
using NUnit.Framework;

namespace Macad.Test.Mcp;

[TestFixture]
[Apartment(ApartmentState.STA)]
public class ExportToolsTests
{
    ExportTools _Tools;
    string _Folder;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public async Task SetUp()
    {
        Context.InitWithDefault();
        ExchangeModule.Initialize();
        _Tools = new ExportTools();
        _Folder = Path.Combine(Path.GetTempPath(), "Macad.Test.Mcp.Export");
        Directory.CreateDirectory(_Folder);
        foreach (var file in Directory.GetFiles(_Folder))
        {
            File.Delete(file);
        }

        var primitives = new PrimitiveTools();
        await primitives.CreateBox(10, 20, 30, 5, 0, 0, "Box");
        await primitives.CreateCylinder(3, 10, -20, 0, 0, "Cyl");
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Export_Step_IsReimportable()
    {
        var path = Path.Combine(_Folder, "parts.step");

        var result = await _Tools.ExportBodies(["Box", "Cyl"], path);

        Assert.That(result.Format, Is.EqualTo("step"));
        Assert.That(result.FileSize, Is.GreaterThan(0));
        Assert.That(result.Bodies, Is.EqualTo(new[] { "Box", "Cyl" }));
        var box = ToolsBase.BoundingBoxInfo.From(Import(path));
        Assert.That(box.MinX, Is.EqualTo(-23).Within(1e-3));
        Assert.That(box.MaxX, Is.EqualTo(15).Within(1e-3));
        Assert.That(box.MaxZ, Is.EqualTo(30).Within(1e-3));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Export_Stl_IsReimportable()
    {
        var path = Path.Combine(_Folder, "box.stl");

        var result = await _Tools.ExportBodies(["Box"], path);

        Assert.That(result.Format, Is.EqualTo("stl"));
        // The imported mesh has no exact geometry, so the box comes from the triangulation (with a small gap)
        var box = Import(path).BoundingBox();
        double xMin = 0, yMin = 0, zMin = 0, xMax = 0, yMax = 0, zMax = 0;
        box.Get(ref xMin, ref yMin, ref zMin, ref xMax, ref yMax, ref zMax);
        Assert.That(xMax - xMin, Is.EqualTo(10).Within(1e-2));
        Assert.That(yMax - yMin, Is.EqualTo(20).Within(1e-2));
        Assert.That(xMin, Is.EqualTo(5).Within(1e-2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public async Task Export_FormatOverridesExtension_AndOverwrite()
    {
        var path = Path.Combine(_Folder, "model.dat");

        var first = await _Tools.ExportBodies(["Box"], path, "stp");
        Assert.That(first.Format, Is.EqualTo("step"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ExportBodies(["Box"], path, "step"));

        var second = await _Tools.ExportBodies(["Cyl"], path, "step", overwrite: true);
        Assert.That(second.Bodies, Is.EqualTo(new[] { "Cyl" }));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Export_InvalidInput()
    {
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ExportBodies([], Path.Combine(_Folder, "a.stl")));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ExportBodies(["Missing"], Path.Combine(_Folder, "a.stl")));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ExportBodies(["Box"], "relative.stl"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ExportBodies(["Box"], Path.Combine(_Folder, "no", "such", "folder", "a.stl")));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ExportBodies(["Box"], Path.Combine(_Folder, "noextension")));
        var ex = Assert.ThrowsAsync<McpException>(async () => await _Tools.ExportBodies(["Box"], Path.Combine(_Folder, "a.xyz")));
        Assert.That(ex.Message, Does.Contain("stl").And.Contain("step"));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ExportBodies(["Box"], Path.Combine(_Folder, "a.obj")));
        Assert.ThrowsAsync<McpException>(async () => await _Tools.ExportBodies(["Box"], _Folder + Path.DirectorySeparatorChar));
        Assert.That(Directory.GetFiles(_Folder), Is.Empty);
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    static TopoDS_Shape Import(string path)
    {
        var importer = ExchangeRegistry.FindExchanger<IBodyImporter>(Path.GetExtension(path).TrimStart('.'));
        Assert.That(importer.DoImport(path, out var bodies), Is.True);
        var builder = new TopoDS_Builder();
        var compound = new TopoDS_Compound();
        builder.MakeCompound(compound);
        foreach (var body in bodies)
        {
            builder.Add(compound, body.Shape.GetTransformedBRep());
        }
        return compound;
    }
}
