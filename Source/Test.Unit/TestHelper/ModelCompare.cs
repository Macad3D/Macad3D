using System;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Runtime.CompilerServices;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Test.Unit.Serialization;
using NUnit.Framework;

namespace Macad.Test.Unit
{
    internal static class ModelCompare
    {
        [Flags]
        internal enum CompareFlags
        {
            None = 0,
            CompareBytes = 1 << 1,
            CompareProperties = 1 << 2,
            SaveTriangulation = 1 << 3,
            CompareText = 1 << 4
        }

        //--------------------------------------------------------------------------------------------------

        internal static bool CompareShape(Shape shape, string brepFile, CompareFlags flags = CompareFlags.CompareProperties)
        {
            // Get OCC Shape
            var shape1 = shape.GetTransformedBRep();
            Assert.That(shape1, Is.Not.Null );

            return CompareShape(shape1, brepFile, flags);
        }

        //--------------------------------------------------------------------------------------------------

        internal static bool CompareShape(TopoDS_Shape shape, string brepFile, CompareFlags flags = CompareFlags.CompareProperties)
        {
            // Get OCC Shape
            Assert.IsNotNull(shape);

            // Save to BREP ASCII
            var bytes = Occt.Helper.BRepExchange.WriteASCII(shape, flags.HasFlag(CompareFlags.SaveTriangulation));
            Assert.IsNotNull(bytes);
            Assert.IsNotEmpty(bytes);

            // Read file to compare
            var referenceBytes = TestData.GetTestData(brepFile + ".brep");
            if (referenceBytes == null)
            {
                TestData.WriteTestResult(bytes, brepFile + "_TestResult.brep");
                Assume.That(false, $"{brepFile}: Reference shape file not found.");
                return false;
            }

            // Possible additions:  TopTools::Dump 
            
            if (flags.HasFlag(CompareFlags.CompareBytes) && !bytes.SequenceEqual(referenceBytes))
            {
                TestData.WriteTestResult(bytes, brepFile + "_TestResult.brep");
                TestContext.WriteLine($"{brepFile}: Shape not equal to reference");
                return false;
            }
                                    
            if (flags.HasFlag(CompareFlags.CompareText))
            {
                TestData.WriteTestResult(bytes, brepFile + "_TestResult.brep");
                AssertHelper.IsSameText(referenceBytes, bytes, AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
                return true;
            }

            if (flags.HasFlag(CompareFlags.CompareProperties))
            {
                var shape2 = Occt.Helper.BRepExchange.ReadASCII(referenceBytes);

                // Check transformation
                var trsf1 = shape.Location().Transformation();
                var trsf2 = shape2.Location().Transformation();
                for (int row = 1; row <= 3; row++)
                {
                    for (int col = 1; col <= 4; col++)
                    {
                        if (!trsf2.Value(row, col).IsEqual(trsf1.Value(row, col), 0.00000000001))
                        {
                            TestData.WriteTestResult(bytes, brepFile + "_TestResult.brep");
                            TestContext.WriteLine($"{brepFile}: Transformation is different at {col},{row}");
                            return false;
                        }
                    }                    
                }

                string message;
                if(_CompareLinearProperties(shape, shape2, out message)
                    || _CompareVolumeProperties(shape, shape2, out message)
                    || _CompareSurfaceProperties(shape, shape2, out message))
                {
                    TestData.WriteTestResult(bytes, brepFile + "_TestResult.brep");
                    TestContext.WriteLine($"{brepFile}: {message}");
                    return false;
                }
            }

            // Test was ok, delete result file if any left
            TestData.DeleteTestResult(brepFile + "_TestResult.brep");
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        internal static bool CompareShape2D(Shape shape, string brepFile)
        {
            // Get OCC Shape
            var shape1 = shape.GetTransformedBRep();
            Assert.That(shape1, Is.Not.Null );

            return CompareShape2D(shape1, brepFile);
        }

        //--------------------------------------------------------------------------------------------------

        internal static bool CompareShape2D(TopoDS_Shape shape, string brepFile)
        {
            // Save to BREP ASCII
            var bytes = Occt.Helper.BRepExchange.WriteASCII(shape, false);
            Assert.IsNotNull(bytes);
            Assert.IsNotEmpty(bytes);

            // Read file to compare
            var referenceBytes = TestData.GetTestData(brepFile + ".brep");
            if (referenceBytes == null)
            {
                TestData.WriteTestResult(bytes, brepFile + "_TestResult.brep");
                Assume.That(false, "Reference shape file not found.");
                return false;
            }

            // Compare line by line
            var referenceLines = referenceBytes.FromUtf8Bytes().Split('\n');
            var shapeLines = bytes.FromUtf8Bytes().Split('\n');
            if (shapeLines.Length != referenceLines.Length)
            {
                TestData.WriteTestResult(bytes, brepFile + "_TestResult.brep");
                Assert.IsTrue(false, "Shape not equal to reference (Different line count).");
            }
            for (int i = 0; i < shapeLines.Length; i++)
            {
                if (shapeLines[i] == referenceLines[i])
                    continue;

                // Line content different, try to compare numbers
                var shapeLineContent = shapeLines[i].Split(' ');
                var refLineContent = referenceLines[i].Split(' ');
                if (shapeLines.Length != referenceLines.Length)
                {
                    TestData.WriteTestResult(bytes, brepFile + "_TestResult.brep");
                    Assert.IsTrue(false, $"Shape not equal to reference (Different value count in line {i + 1}).");
                }

                for (int contentIndex = 0; contentIndex < shapeLineContent.Length; contentIndex++)
                {
                    if (shapeLineContent[contentIndex] == refLineContent[contentIndex])
                        continue;

                    if (double.TryParse(shapeLineContent[contentIndex], NumberStyles.Any, CultureInfo.InvariantCulture, out var shapeValue)
                        && double.TryParse(refLineContent[contentIndex], NumberStyles.Any, CultureInfo.InvariantCulture, out var refValue))
                    {
                        if (shapeValue - refValue < 1e-10)
                            continue;
                    }

                    TestData.WriteTestResult(bytes, brepFile + "_TestResult.brep");
                    Assert.IsTrue(false, $"Shape not equal to reference (Values different in line {i + 1} at position {contentIndex + 1}).");
                }
            }

            // Test was ok, delete result file
            TestData.DeleteTestResult(brepFile + "_TestResult.brep");
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CompareLinearProperties(TopoDS_Shape shape1, TopoDS_Shape shape2, out string message)
        {
            var gprops1 = new GProp_GProps();
            var gprops2 = new GProp_GProps();
            BRepGProp.LinearProperties(shape1, gprops1);
            BRepGProp.LinearProperties(shape2, gprops2);
            message = _CompareProperties(gprops1, gprops2, "Linear");
            return message != null;
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CompareVolumeProperties(TopoDS_Shape shape1, TopoDS_Shape shape2, out string message)
        {
            var gprops1 = new GProp_GProps();
            var gprops2 = new GProp_GProps();
            BRepGProp.VolumeProperties(shape1, gprops1);
            BRepGProp.VolumeProperties(shape2, gprops2);
            message = _CompareProperties(gprops1, gprops2, "Volume");
            return message != null;
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CompareSurfaceProperties(TopoDS_Shape shape1, TopoDS_Shape shape2, out string message)
        {
            var gprops1 = new GProp_GProps();
            var gprops2 = new GProp_GProps();
            BRepGProp.SurfaceProperties(shape1, gprops1, false);
            BRepGProp.SurfaceProperties(shape2, gprops2, false);
            message = _CompareProperties(gprops1, gprops2, "Surface");
            return message != null;
        }

        //--------------------------------------------------------------------------------------------------

        static string _CompareProperties(GProp_GProps gprops1, GProp_GProps gprops2, string message)
        {
            if (!gprops1.CentreOfMass().IsEqual(gprops2.CentreOfMass(), 0.00001))
            {
                return $"{message} CentreOfMass is not the same.";
            }
            if(!gprops1.Mass().IsEqual(gprops2.Mass(), 0.0001))
                return $"{message} Mass is not the same.";

            double ix1 = 0, iy1 = 0, iz1 = 0, ix2 = 0, iy2 = 0, iz2 = 0;
            gprops1.PrincipalProperties().Moments(ref ix1, ref iy1, ref iz1);
            gprops2.PrincipalProperties().Moments(ref ix2, ref iy2, ref iz2);
            if (!ix1.IsEqual(ix2, 0.0001))
                return $"{message} MomentIx is not the same. Result: {ix1}  Reference: {ix2}";
            if (!iy1.IsEqual(iy2, 0.0001))
                return $"{message} MomentIy is not the same. Result: {iy1}  Reference: {iy2}";
            if (!iz1.IsEqual(iz2, 0.0001))
                return $"{message} MomentIz is not the same. Result: {iz1}  Reference: {iz2}";

            return _CompareMatrix(gprops1.MatrixOfInertia(), gprops2.MatrixOfInertia(), message + " MatrixOfInertia"); ;
        }

        //--------------------------------------------------------------------------------------------------

        static string _CompareMatrix(Mat mat1, Mat mat2, string message)
        {
            for (int row = 1; row <= 3; row++)
                for (int col = 1; col <= 3; col++)
                    if(!mat1.Value(row, col).IsEqual(mat2.Value(row, col), 0.0001))
                        return $"{message} is not the same.";
            return null;
        }

    }
}