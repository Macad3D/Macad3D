using System;
using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Core.Exchange;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Utils
{
    public static class TestData
    {
        public static string TestDataDirectory { get; }
        public static string TempDirectory { get; }

        static TestData()
        {
            TestDataDirectory = Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UnitTests");
            TempDirectory = Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\Data\UnitTests\Temp"));
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
            Assume.That(shape, Is.Not.Null);

            return shape;
        }
        
        //--------------------------------------------------------------------------------------------------

        public static void LoadTestDataModel(string path)
        {
            Assume.That(Context.Current.DocumentController.OpenModel(Path.Combine(TestDataDirectory, path)), $"Model {path} could not be loaded.");
        }
        
        //--------------------------------------------------------------------------------------------------

        public static Body GetBodyFromBRep(string path)
        {
            var importer = new OpenCascadeExchanger();
            Assume.That(importer != null);
            Assume.That(importer.DoImport(Path.Combine(TestDataDirectory, path), out var newBodies));
            Assume.That(newBodies != null);
            var body = newBodies.FirstOrDefault();
            Assume.That(body != null);
            return body;
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
}