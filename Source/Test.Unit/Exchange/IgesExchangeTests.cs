using System.IO;
using System.Linq;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Exchange;
using NUnit.Framework;

namespace Macad.Test.Unit.Exchange;

[TestFixture]
public class IgesExchangeTests
{
    const string _BasePath = @"Exchange\Iges";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WriteSolid()
    {
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();

        var exchanger = new IgesExchanger();

        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "WriteSolid_TestResult.igs"));
        Assert.IsTrue((exchanger as IBodyExporter).DoExport(path, bodies));

        // When comparing, skip headerlines, they contain date and user
        AssertHelper.IsSameFile(Path.Combine(_BasePath, "WriteSolid.igs"), path, 5*80);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReadSolid()
    {
        var exchanger = new IgesExchanger();
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "ReadSolid_Source.igs"));
        Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var bodies));
        Assert.IsNotNull(bodies);
        Assert.AreEqual(1, bodies.Count());

        AssertHelper.IsSameModel(bodies.First().Shape, Path.Combine(_BasePath, "ReadSolid"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReadMultipleSolids()
    {
        var exchanger = new IgesExchanger();
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "ReadMultipleSolids_Source.igs"));
        Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var bodies));
        Assert.IsNotNull(bodies);
        Assert.AreEqual(3, bodies.Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ReadMultipleSolidOneBody()
    {
        var exchanger = new IgesExchanger();
        exchanger.Settings.ImportSingleBody = true;
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "ReadMultipleSolids_Source.igs"));
        Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var bodies));
        Assert.IsNotNull(bodies);
        Assert.AreEqual(1, bodies.Count());
        Assert.AreEqual(3, bodies.First().Shape.GetBRep().Solids().Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UnicodePath()
    {
        // Write
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        var exchanger = new IgesExchanger();
        var path = Path.Combine(TestData.TempDirectory, $"Iges_Unicode_{TestData.UnicodeTestString}.igs");
        File.Delete(path);

        Assert.IsTrue(exchanger.DoExport(path, bodies));
        Assert.That(File.Exists(path));

        // Read
        exchanger.Settings.ImportSingleBody = true;
        Assert.IsTrue(exchanger.DoImport(path, out var readbodies));
        Assert.IsNotNull(readbodies);
        Assert.AreEqual(1, readbodies.Count());
        File.Delete(path);
    }
}