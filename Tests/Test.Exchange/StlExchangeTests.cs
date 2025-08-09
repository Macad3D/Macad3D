﻿using System.IO;
using System.Linq;
using Macad.Test.Utils;
using Macad.Core;
using NUnit.Framework;
using Macad.Exchange;

namespace Macad.Test.Exchange;

[TestFixture]
public class StlExchangeTests
{
    const string _BasePath = @"Exchange\Stl";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AsciiWrite()
    {
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();

        var exchanger = new StlExchanger();

        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "AsciiWrite_TestResult.stl"));
        Assert.IsTrue((exchanger as IBodyExporter).DoExport(path, bodies));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "AsciiWrite.stl"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BinaryWrite()
    {
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();

        var exchanger = new StlExchanger();
        exchanger.Settings.ExportBinaryFormat = true;

        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "BinaryWrite_TestResult.stl"));
        Assert.IsTrue((exchanger as IBodyExporter).DoExport(path, bodies));

        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "BinaryWrite.stl"), path, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AsciiRead()
    {
        var exchanger = new StlExchanger();
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "AsciiRead_Source.stl"));
        Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var bodies));
        Assert.IsNotNull(bodies);
        Assert.AreEqual(1, bodies.Count());
        AssertHelper.IsSameModel(bodies.First().Shape, Path.Combine(_BasePath, "AsciiRead"),
                                 ModelCompare.CompareFlags.SaveTriangulation | ModelCompare.CompareFlags.CompareText);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BinaryRead()
    {
        var exchanger = new StlExchanger();
        var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "BinaryRead_Source.stl"));
        Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var bodies));
        Assert.IsNotNull(bodies);
        Assert.AreEqual(1, bodies.Count());
        AssertHelper.IsSameModel(bodies.First().Shape, Path.Combine(_BasePath, "BinaryRead"), 
                                 ModelCompare.CompareFlags.SaveTriangulation | ModelCompare.CompareFlags.CompareText);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UnicodePath()
    {
        // Write
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        var exchanger = new StlExchanger();
        var path = Path.Combine(TestData.TempDirectory, $"Stl_Unicode_{TestData.UnicodeTestString}.stl");
        File.Delete(path);

        Assert.IsTrue((exchanger as IBodyExporter).DoExport(path, bodies));
        Assert.That(File.Exists(path));

        // Read
        Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var readbodies));
        Assert.IsNotNull(readbodies);
        Assert.AreEqual(1, readbodies.Count());
        File.Delete(path);
    }
}