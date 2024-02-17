using System.IO;
using System.Linq;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Occt;
using NUnit.Framework;
using Macad.Exchange;

namespace Macad.Test.Unit.Exchange;

[TestFixture]
public class ObjExchangeTests
{
    const string _BasePath = @"Exchange\Obj";
        
    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitEmpty();
    }
        
    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MeshWrite()
    {
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();

        var exchanger = new ObjExchanger();

        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "MeshWrite_TestResult.obj"));
        Assert.IsTrue((exchanger as IBodyExporter).DoExport(path, bodies));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MeshWrite.obj"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SimpleMeshRead()
    {
        var exchanger = new ObjExchanger();
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "SimpleMeshRead_Source.obj"));
        Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var bodies));
        Assert.IsNotNull(bodies);
        Assert.AreEqual(3, bodies.Count());

        var compound = new TopoDS_Compound();
        var builder = new BRep_Builder();
        builder.MakeCompound(compound);
        foreach (var body in bodies)
        {
            builder.Add(compound, body.Shape.GetTransformedBRep());
        }
        AssertHelper.IsSameModel(compound, Path.Combine(_BasePath, "SimpleMeshRead"), 
                                 ModelCompare.CompareFlags.SaveTriangulation | ModelCompare.CompareFlags.CompareBytes);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ComplexMeshRead()
    {
        var exchanger = new ObjExchanger();
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "ComplexMeshRead_Source.obj"));
        Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var bodies));
        Assert.IsNotNull(bodies);

        var compound = new TopoDS_Compound();
        var builder = new BRep_Builder();
        builder.MakeCompound(compound);
        foreach (var body in bodies)
        {
            builder.Add(compound, body.Shape.GetTransformedBRep());
        }
        AssertHelper.IsSameModel(compound, Path.Combine(_BasePath, "ComplexMeshRead"), 
                                 ModelCompare.CompareFlags.SaveTriangulation | ModelCompare.CompareFlags.CompareBytes);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NegativeFaceIndex()
    {
        var exchanger = new ObjExchanger();
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "NegativeFaceIndex_Source.obj"));
        Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var bodies));
        Assert.IsNotNull(bodies);
        Assert.AreEqual(2, bodies.Count());

        var compound = new TopoDS_Compound();
        var builder = new BRep_Builder();
        builder.MakeCompound(compound);
        foreach (var body in bodies)
        {
            builder.Add(compound, body.Shape.GetTransformedBRep());
        }
        AssertHelper.IsSameModel(compound, Path.Combine(_BasePath, "NegativeFaceIndex"), 
                                 ModelCompare.CompareFlags.SaveTriangulation | ModelCompare.CompareFlags.CompareBytes);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ExportSmoothEdges()
    {
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();

        var exchanger = new ObjExchanger();
        exchanger.Settings.ExportSmoothEdges = true;

        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "ExportSmoothEdges_TestResult.obj"));
        Assert.IsTrue((exchanger as IBodyExporter).DoExport(path, bodies));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "ExportSmoothEdges.obj"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ImportSingleBody()
    {
        var exchanger = new ObjExchanger();
        exchanger.Settings.ImportSingleBody = true;

        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "SimpleMeshRead_Source.obj"));
        Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var bodies));
        Assert.IsNotNull(bodies);
        Assert.AreEqual(1, bodies.Count());

        AssertHelper.IsSameModel(bodies.First().Shape, Path.Combine(_BasePath, "ImportSingleBody"), 
                                 ModelCompare.CompareFlags.SaveTriangulation | ModelCompare.CompareFlags.CompareBytes);
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void UnicodePath()
    {
        // Write
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        var exchanger = new ObjExchanger();
        var path = Path.Combine(TestData.TempDirectory, $"Obj_Unicode_{TestData.UnicodeTestString}.obj");
        File.Delete(path);

        Assert.IsTrue((exchanger as IBodyExporter).DoExport(path, bodies));
        Assert.That(File.Exists(path));

        // Read
        Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var readbodies));
        Assert.IsNotNull(readbodies);
        File.Delete(path);
    }
}