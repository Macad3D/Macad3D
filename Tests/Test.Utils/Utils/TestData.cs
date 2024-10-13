using System;
using System.IO;
using System.Linq;
using Macad.Core;
using Macad.Exchange;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;
using System.Text;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core.Shapes;

namespace Macad.Test.Utils;

public static class TestData
{
    public static string TestDataDirectory { get; }
    public static string TempDirectory { get; }
    public static string UnicodeTestString { get; } = Encoding.Unicode.GetString("[&Z&]&^&\\&"u8);

    static TestData()
    {
        TestDataDirectory = Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UnitTests");
        TempDirectory = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UnitTests\Temp"));
        Directory.CreateDirectory(TempDirectory);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool TestDataExists(string path)
    {
        return File.Exists(Path.Combine(TestDataDirectory, path));
    }

    //--------------------------------------------------------------------------------------------------

    public static byte[] GetTestData(string path)
    {
        try
        {
            return File.ReadAllBytes(Path.Combine(TestDataDirectory, path));
        }
        catch (IOException e)
        {
            TestContext.WriteLine("Test data loading failed: " + path);
            Console.WriteLine(e);
            return null;
        }
    }
                
    //--------------------------------------------------------------------------------------------------

    public static string GetTestDataText(string path)
    {
        try
        {
            return File.ReadAllText(Path.Combine(TestDataDirectory, path));
        }
        catch (IOException e)
        {
            TestContext.WriteLine("Test data loading failed: " + path);
            Console.WriteLine(e);
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static string[] GetTestDataLines(string path)
    {
        try
        {
            return File.ReadAllLines(Path.Combine(TestDataDirectory, path));
        }
        catch (IOException e)
        {
            TestContext.WriteLine("Test data loading failed: " + path);
            Console.WriteLine(e);
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static TopoDS_Shape GetTestDataBRep(string path)
    {
        var referenceBytes = GetTestData(path);
        Assert.IsNotNull(referenceBytes, "Reference shape file not found.");

        var shape = 
            Occt.Helper.BRepExchange.ReadASCII(referenceBytes) 
            ?? Occt.Helper.BRepExchange.ReadBinary(referenceBytes);
        Assert.That(shape, Is.Not.Null);

        return shape;
    }
        
    //--------------------------------------------------------------------------------------------------

    public static T GetTestDataSerialized<T>(string path)
    {
        var dataText = GetTestDataText(path);
        Assert.IsFalse(dataText.IsNullOrEmpty(), "Reference file not found.");

        return Serializer.Deserialize<T>(dataText, new SerializationContext());
    }
        
    //--------------------------------------------------------------------------------------------------

    public static void LoadTestDataModel(string path)
    {
        Assert.That(Context.Current.DocumentController.OpenModel(Path.Combine(TestDataDirectory, path)), $"Model {path} could not be loaded.");
    }

    //--------------------------------------------------------------------------------------------------

    public static Body GetBodyFromBRep(string path, ShapeType shapeType=ShapeType.Solid)
    {
        if (shapeType == ShapeType.Solid)
        {
            var importer = new OpenCascadeExchanger() as IBodyImporter;
            Assert.That(importer != null);
            Assert.That(importer.DoImport(Path.Combine(TestDataDirectory, path), out var newBodies));
            Assert.That(newBodies != null);
            var body = newBodies.FirstOrDefault();
            Assert.That(body != null);
            return body;
        }
        if (shapeType == ShapeType.Mesh)
        {
            var shape = GetTestDataBRep(path);
            var mesh = Mesh.Create(shape);
            Assert.That(mesh != null);
            var body = Body.Create(mesh);
            Assert.That(body != null);
            return body;
        }
        Assert.IsTrue(false, "Shape type not implemented.");
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public static void WriteTestResult(byte[] bytes, string path)
    {
        var fullPath = Path.Combine(TestDataDirectory, path);
        Directory.CreateDirectory(Path.GetDirectoryName(fullPath));
        File.WriteAllBytes(fullPath, bytes);
    }

    //--------------------------------------------------------------------------------------------------

    public static void DeleteTestResult(string path)
    {
        var fullPath = Path.Combine(TestDataDirectory, path);
        File.Delete(fullPath);
    }

    //--------------------------------------------------------------------------------------------------

    public static void FileCompare(byte[] bytes, string path)
    {
        var pathTestResult = Path.Combine(Path.GetDirectoryName(path), Path.GetFileNameWithoutExtension(path) + "_TestResult" + Path.GetExtension(path));

        // Save to BREP ASCII
        Assert.IsNotNull(bytes);
        Assert.IsNotEmpty(bytes);
        WriteTestResult(bytes, pathTestResult);

        // Read file to compare
        var referenceBytes = GetTestData(path);
        Assert.IsNotNull(referenceBytes, "Reference file not found: " + path);

        // Compare
        Assert.That(referenceBytes.SequenceEqual(bytes));

        // Test was ok, delete result file
        DeleteTestResult(pathTestResult);
    }

}