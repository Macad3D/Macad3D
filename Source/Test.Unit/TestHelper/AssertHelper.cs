using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit
{
    public static class AssertHelper
    {
        internal static void IsSameModel(Shape shape, string brepFile, ModelCompare.CompareFlags flags = ModelCompare.CompareFlags.CompareProperties)
        {
            Assert.IsTrue(ModelCompare.CompareShape(shape, brepFile, flags));
        }

        //--------------------------------------------------------------------------------------------------

        internal static void IsSameModel(TopoDS_Shape shape, string brepFile, ModelCompare.CompareFlags flags = ModelCompare.CompareFlags.CompareProperties)
        {
            Assert.IsTrue(ModelCompare.CompareShape(shape, brepFile, flags));
        }

        //--------------------------------------------------------------------------------------------------

        internal static void IsSameModel2D(Shape shape, string brepFile)
        {
            Assert.IsTrue(ModelCompare.CompareShape2D(shape, brepFile));
        }
        
        //--------------------------------------------------------------------------------------------------

        internal static void IsSameModel2D(TopoDS_Shape shape, string brepFile)
        {
            Assert.IsTrue(ModelCompare.CompareShape2D(shape, brepFile));
        }

        //--------------------------------------------------------------------------------------------------

        internal static void IsMade(Shape shape, Shape.MakeFlags flags = Shape.MakeFlags.None)
        {
            Assert.IsTrue(shape.Make(flags));
        }

        //--------------------------------------------------------------------------------------------------

        internal static void IsSameViewport(string referenceFilename, double tolerance=0.05)
        {
            if(Context.Current.Workspace.NeedsRedraw || Context.Current.Workspace.NeedsImmediateRedraw)
                Context.Current.WorkspaceController.Invalidate(!Context.Current.Workspace.NeedsRedraw, true);

            var fullPath = Path.Combine(TestData.TestDataDirectory, referenceFilename);
            Directory.CreateDirectory(Path.GetDirectoryName(fullPath));

            int width = 0, height = 0;
            Context.Current.Viewport.V3dView.Window().Size(ref width, ref height);

            // Get screenshot
            var screenshot = new Image_AlienPixMap();
            screenshot.InitZero(Image_Format.Image_Format_RGB, (ulong)width, (ulong)height);
            Context.Current.Viewport.V3dView.ToPixMap(screenshot, (int)width, (int)height);

            // Load Reference
            var refshot = new Image_AlienPixMap();
            if (!refshot.Load(new TCollection_AsciiString(fullPath + ".png")))
            {
                // Save test result
                Assert.True(screenshot.Save(new TCollection_AsciiString(fullPath + "_TestResult.png")), "Test result could not be saved.");
                Assert.Fail("Inconclusive: Reference image file could not be loaded: " + fullPath);
                return;
            }

            // Diff
            var differ = new Image_Diff();
            Assert.True(differ.Init(refshot, screenshot, false), "Images comparison init failed");
            differ.SetColorTolerance(tolerance);
            differ.SetBorderFilterOn(false);
            var result = differ.Compare();
            if (result != 0)
            {
                // Save test result
                Assert.True(screenshot.Save(new TCollection_AsciiString(fullPath + "_TestResult.png")), "Test result could not be saved.");
                Assert.True(differ.SaveDiffImage(new TCollection_AsciiString(fullPath + "_Difference.png")), "Difference image could not be saved.");

                Assert.AreEqual(0, result, "The resulted image differs: " + fullPath);
                return;
            }

            // Equality
            // Test was ok, delete result file if any left
            TestData.DeleteTestResult(fullPath + "_TestResult.png");
            TestData.DeleteTestResult(fullPath + "_Difference.png");
        }

        //--------------------------------------------------------------------------------------------------

        public static void IsSameFile(string originalPath, string testResultPath, int skipBytes=0)
        {
            Debug.Assert(originalPath != testResultPath);

            // Read file to compare
            var testPathBytes = TestData.GetTestData(testResultPath);
            Assert.IsNotNull(testPathBytes, "Test file not found: " + testResultPath);
            var referenceBytes = TestData.GetTestData(originalPath);
            Assert.IsNotNull(referenceBytes, "Reference file not found: " + originalPath);

            // Compare
            Assert.That(referenceBytes.Skip(skipBytes).SequenceEqual(testPathBytes.Skip(skipBytes)));
            TestData.DeleteTestResult(testResultPath);
        }
        
        //--------------------------------------------------------------------------------------------------

        [Flags]
        public enum TextCompareFlags
        {
            None                 = 0,
            IgnoreFloatPrecision = 1 << 0
        }

        //--------------------------------------------------------------------------------------------------

        public static void IsSameTextFile(string originalPath, string testResultPath, TextCompareFlags flags = TextCompareFlags.None)
        {
            Debug.Assert(originalPath != testResultPath);

            // Read file to compare
            var testLines = TestData.GetTestDataLines(testResultPath);
            Assert.IsNotNull(testLines, "Test file not found: " + testResultPath);
            var refLines = TestData.GetTestDataLines(originalPath);
            Assert.IsNotNull(refLines, "Reference file not found: " + originalPath);

            IsSameText(refLines, testLines, flags);

            TestData.DeleteTestResult(testResultPath);
        }

        //--------------------------------------------------------------------------------------------------

        public static void IsSameTextFile(string originalPath, MemoryStream testResultStream, TextCompareFlags flags = TextCompareFlags.None)
        {
            var resultFileName = Path.Combine(Path.GetDirectoryName(originalPath), Path.GetFileNameWithoutExtension(originalPath) + "_TestResult" + Path.GetExtension(originalPath));
            TestData.DeleteTestResult(resultFileName);

            var testLines = new List<string>();
            testResultStream.Position = 0;
            using (StreamReader sr = new StreamReader(testResultStream))
            {
                string line;
                while ((line = sr.ReadLine()) != null)
                {
                    testLines.Add(line);
                }
            }

            try
            {
                var refLines = TestData.GetTestDataLines(originalPath);
                Assert.IsNotNull(refLines, "Reference file not found: " + originalPath);
                IsSameText(refLines, testLines.ToArray(), flags);
            }
            catch (AssertionException)
            {
                TestData.WriteTestResult(testResultStream.ToArray(), resultFileName);
                throw;
            }
        }
        
        //--------------------------------------------------------------------------------------------------

        public static void IsSameText(byte[] referenceBytes, byte[] testBytes, TextCompareFlags flags = TextCompareFlags.None)
        {
            var refLines = Encoding.Default.GetString(referenceBytes).Split('\n');
            var testLines = Encoding.Default.GetString(testBytes).Split('\n');

            IsSameText(refLines, testLines, flags);
        }

        //--------------------------------------------------------------------------------------------------

        static readonly string _FloatChars = "0123456789.+-Ee";

        public static void IsSameText(string[] refLines, string[] testLines, TextCompareFlags flags = TextCompareFlags.None)
        {
            int __FindFrontBorderOfFloat(string line, int startindex)
            {
                int index = startindex-1;
                while (index > 0)
                {
                    if (!_FloatChars.Contains(line[index]))
                        break;
                    index--;
                }
                return index+1;
            }

            //--------------------------------------------------------------------------------------------------

            int __FindBackBorderOfFloat(string line, int startindex)
            {
                int length = line.Length;
                int index = startindex;
                while (index < length)
                {
                    if (!_FloatChars.Contains(line[index]))
                        break;
                    index++;
                }
                return index-1;
            }

            //--------------------------------------------------------------------------------------------------

            bool __TryGetFloatValue(string line, int col, out double result, out int endPos)
            {
                int startPos = __FindFrontBorderOfFloat(line, col);

                endPos = __FindBackBorderOfFloat(line, col);

                return double.TryParse(line.Substring(startPos, endPos - startPos + 1), NumberStyles.Any, CultureInfo.InvariantCulture, out result);
            }

            //--------------------------------------------------------------------------------------------------
            
            // Compare
            Assert.AreEqual(refLines.Length, testLines.Length);

            for (int i = 0; i < testLines.Length; i++)
            {
                var testLine = testLines[i];
                var refLine = refLines[i];
                if(testLine == refLine)
                    continue;

                for (int testCol = 0, refCol = 0; testCol < testLine.Length; testCol++, refCol++)
                {
                    if( refCol < refLine.Length && testLine[testCol] == refLine[refCol])
                        continue;

                    if (flags.HasFlag(TextCompareFlags.IgnoreFloatPrecision))
                    {
                        double testValue, refValue;
                        int newTestEnd, newRefEnd;
                        if (__TryGetFloatValue(testLine, testCol, out testValue, out newTestEnd)
                            && __TryGetFloatValue(refLine, refCol, out refValue, out newRefEnd))
                        {
                            if (testValue.IsEqual(refValue, testValue.Abs() * 0.0001))
                            {
                                testCol = newTestEnd;
                                refCol = newRefEnd;
                                continue;
                            }
                        }
                    }
                    Assert.Fail( $"File differs at line {i+1} at position {testCol}." );
                }
            }
        }

    }
}