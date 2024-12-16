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
using Macad.Occt.Helper;

namespace Macad.Test.Unit;

public static class AssertHelper
{
    public static void IsSameModel(Shape shape, string brepFile, ModelCompare.CompareFlags flags = ModelCompare.CompareFlags.CompareProperties)
    {
        Assert.IsTrue(ModelCompare.CompareShape(shape, brepFile, flags));
    }

    //--------------------------------------------------------------------------------------------------

    public static void IsSameModel(TopoDS_Shape shape, string brepFile, ModelCompare.CompareFlags flags = ModelCompare.CompareFlags.CompareProperties)
    {
        Assert.IsTrue(ModelCompare.CompareShape(shape, brepFile, flags));
    }

    //--------------------------------------------------------------------------------------------------

    public static void IsSameModel2D(Shape shape, string brepFile)
    {
        Assert.IsTrue(ModelCompare.CompareShape2D(shape, brepFile));
    }

    //--------------------------------------------------------------------------------------------------

    public static void IsSameModel2D(TopoDS_Shape shape, string brepFile)
    {
        Assert.IsTrue(ModelCompare.CompareShape2D(shape, brepFile));
    }

    //--------------------------------------------------------------------------------------------------

    public static void IsMade(Shape shape, Shape.MakeFlags flags = Shape.MakeFlags.None)
    {
        Assert.IsTrue(shape.Make(flags));
    }

    //--------------------------------------------------------------------------------------------------

    public static void IsSameViewport(string referenceFilename, double tolerance=0.05)
    {
        if(Context.Current.WorkspaceController.NeedsRedraw || Context.Current.WorkspaceController.NeedsImmediateRedraw)
            Context.Current.WorkspaceController.Invalidate(!Context.Current.WorkspaceController.NeedsRedraw, true);

        var fullPath = Path.Combine(TestData.TestDataDirectory, referenceFilename);
        Directory.CreateDirectory(Path.GetDirectoryName(fullPath));

        int width = 0, height = 0;
        Context.Current.ViewportController.V3dView.Window().Size(ref width, ref height);

        // Get screenshot
        var screenshot = new Image_AlienPixMap();
        screenshot.InitZero(Image_Format.RGB, (ulong)width, (ulong)height);
        Context.Current.ViewportController.V3dView.ToPixMap(screenshot, (int)width, (int)height);

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

    public static void IsSameFile(string originalPath, MemoryStream testResultStream, int skipBytes = 0)
    {
        var resultFileName = Path.Combine(Path.GetDirectoryName(originalPath), Path.GetFileNameWithoutExtension(originalPath) + "_TestResult" + Path.GetExtension(originalPath));
        TestData.DeleteTestResult(resultFileName);

        var refFilePath = originalPath;
        int variation = 1;
        while (true)
        {
            string message = "";
            var referenceBytes = TestData.GetTestData(refFilePath);
            if (referenceBytes == null)
            {
                message = "Reference file not found: " + refFilePath;
            }
            else
            {
                if (referenceBytes.Skip(skipBytes).SequenceEqual(testResultStream.ToArray().Skip(skipBytes)))
                {
                    TestContext.WriteLine($"File is same: {refFilePath}");
                    return;
                }

                TestContext.WriteLine($"File not same: {refFilePath}");

                // Check for variants
                refFilePath = Path.Combine(Path.GetDirectoryName(originalPath), Path.GetFileNameWithoutExtension(originalPath) + $"_Var{variation++}" + Path.GetExtension(originalPath));
                if (TestData.TestDataExists(refFilePath))
                {
                    continue;
                }
            }

            TestData.WriteTestResult(testResultStream.ToArray(), resultFileName);
            Assert.Fail(message);
            break;
        }
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
        Assert.That(refLines != null, "Reference file not found: " + originalPath);

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

        var refFilePath = originalPath;
        int variation = 1;
        while (true)
        {
            string message;
            var refLines = TestData.GetTestDataLines(refFilePath);
            if (refLines == null)
            {
                message = "Reference file not found: " + originalPath;
            }
            else
            {
                if (_IsSameText(refLines, testLines.ToArray(), flags, out message))
                {
                    TestContext.WriteLine($"File is same: {refFilePath}");
                    return;
                }

                TestContext.WriteLine($"File not same: {refFilePath} because {message}");

                // Check for variants
                refFilePath = Path.Combine(Path.GetDirectoryName(originalPath), Path.GetFileNameWithoutExtension(originalPath) + $"_Var{variation++}" + Path.GetExtension(originalPath));
                if (TestData.TestDataExists(refFilePath))
                {
                    continue;
                }
            }

            TestData.WriteTestResult(testResultStream.ToArray(), resultFileName);
            Assert.Fail(message);
            break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static void IsSameText(byte[] referenceBytes, byte[] testBytes, TextCompareFlags flags = TextCompareFlags.None)
    {
        var refLines = Encoding.Default.GetString(referenceBytes).Split('\n');
        var testLines = Encoding.Default.GetString(testBytes).Split('\n');

        if (!_IsSameText(refLines, testLines, flags, out string message))
        {
            Assert.Fail(message);
        }
    }

    //--------------------------------------------------------------------------------------------------
    
    public static void IsSameText(string[] refLines, string[] testLines, TextCompareFlags flags = TextCompareFlags.None)
    {
        if (!_IsSameText(refLines, testLines, flags, out string message))
        {
            Assert.Fail(message);
        }
    }

    //--------------------------------------------------------------------------------------------------

    static readonly string _FloatChars = "0123456789.+-Ee";

    public static bool _IsSameText(string[] refLines, string[] testLines, TextCompareFlags flags, out string message)
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
        if (refLines.Length != testLines.Length)
        {
            message = $"Expected line count: {refLines.Length} but was: {testLines.Length}";
            return false;
        }

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
                message = $"File differs at line {i+1} at position {testCol}.";
                return false;
            }
        }

        message = "";
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public static void IsSameImage(string refFilePath, string resultFilePath, double tolerance = 0.05)
    {
        // Load Result
        Assert.That(File.Exists(resultFilePath));

        var bytes = File.ReadAllBytes(resultFilePath);
        Assert.That(bytes.Length, Is.Not.Zero);

        var resultImage = new Image_AlienPixMap();
        Assert.That(PixMapHelper.LoadFromMemory(resultImage, bytes, resultFilePath));

        // Load Reference
        var refImage = new Image_AlienPixMap();
        if (!refImage.Load(new TCollection_AsciiString(refFilePath)))
        {
            // Save test result
            Assert.Fail("Inconclusive: Reference image file could not be loaded: " + refFilePath);
            return;
        }

        // Diff
        var diffFilePath = Path.Combine(Path.GetDirectoryName(refFilePath), Path.GetFileNameWithoutExtension(refFilePath) + "_Difference.png");
        var differ = new Image_Diff();
        Assert.True(differ.Init(refImage, resultImage, false), "Images comparison init failed");
        differ.SetColorTolerance(tolerance);
        differ.SetBorderFilterOn(false);
        var result = differ.Compare();
        if (result != 0)
        {
            Assert.True(differ.SaveDiffImage(new TCollection_AsciiString(diffFilePath)), "Difference image could not be saved.");
            Assert.AreEqual(0, result, "The resulted image differs: " + resultFilePath);
            return;
        }
        differ.Dispose();
        resultImage.Clear();
        resultImage.Dispose();

        // Equality
        // Test was ok, delete result file if any left
        File.Delete(resultFilePath);
        File.Delete(diffFilePath);
    }
}