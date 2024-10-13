using System.Drawing;
using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper;

[TestFixture]
public class OcctHelperTests
{
    [Test]
    public void PixMapToBitmapHelper24bpp()
    {
        // Load Pixmap
        var refFile = Path.Combine(TestData.TestDataDirectory, @"Misc\OcctHelper_PixMapToBitmap24bpp.png");
        var resultFile = Path.Combine(TestData.TestDataDirectory, @"Misc\OcctHelper_PixMapToBitmap24bpp_TestResult.png");

        var pixmap = new Image_AlienPixMap();
        Assert.That(pixmap.Load(new TCollection_AsciiString(refFile)), "Inconclusive: Reference image file could not be loaded.");

        // Convert to Bitmap
        var bitmap = Occt.Helper.PixMapHelper.ConvertToBitmap(pixmap);
        bitmap.Save(resultFile);

        // Compare
        AssertHelper.IsSameImage(refFile, resultFile);
        File.Delete(resultFile);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PixMapToBitmapHelper32bpp()
    {
        // Load Pixmap
        var refFile = Path.Combine(TestData.TestDataDirectory, @"Misc\OcctHelper_PixMapToBitmap32bpp.png");
        var resultFile = Path.Combine(TestData.TestDataDirectory, @"Misc\OcctHelper_PixMapToBitmap32bpp_TestResult.png");

        var pixmap = new Image_AlienPixMap();
        Assert.That(pixmap.Load(new TCollection_AsciiString(refFile)), "Inconclusive: Reference image file could not be loaded.");

        // Convert to Bitmap
        var bitmap = Occt.Helper.PixMapHelper.ConvertToBitmap(pixmap);
        bitmap.Save(resultFile);

        // Compare
        AssertHelper.IsSameImage(refFile, resultFile);
        File.Delete(resultFile);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BitmapToPixMapHelper24bpp()
    {
        // Load Pixmap
        var refFile = Path.Combine(TestData.TestDataDirectory, @"Misc\OcctHelper_PixMapToBitmap24bpp.png");
        var resultFile = Path.Combine(TestData.TestDataDirectory, @"Misc\OcctHelper_BitmapToPixMap24bpp_TestResult.png");

        var bitmap = new Bitmap(refFile);

        // Convert to Pixmap
        var pixmap = Occt.Helper.PixMapHelper.ConvertFromBitmap(bitmap);
        Assert.IsNotNull(pixmap);

        // Compare
        var refPixMap = new Image_AlienPixMap();
        refPixMap.Load(new TCollection_AsciiString(refFile));

        var differ = new Image_Diff();
        Assert.True(differ.Init(refPixMap, pixmap, false), "Images comparison init failed");
        differ.SetColorTolerance(0.0);
        differ.SetBorderFilterOn(false);
        Assert.AreEqual(0, differ.Compare());
            
        File.Delete(resultFile);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BitmapToPixMapHelper32bpp()
    {
        // Load Pixmap
        var refFile = Path.Combine(TestData.TestDataDirectory, @"Misc\OcctHelper_PixMapToBitmap32bpp.png");
        var resultFile = Path.Combine(TestData.TestDataDirectory, @"Misc\OcctHelper_BitmapToPixMap32bpp_TestResult.png");

        var bitmap = new Bitmap(refFile);

        // Convert to Pixmap
        var pixmap = Occt.Helper.PixMapHelper.ConvertFromBitmap(bitmap);
        Assert.IsNotNull(pixmap);

        // Compare
        var refPixMap = new Image_AlienPixMap();
        refPixMap.Load(new TCollection_AsciiString(refFile));

        var differ = new Image_Diff();
        Assert.True(differ.Init(refPixMap, pixmap, false), "Images comparison init failed");
        differ.SetColorTolerance(0.0);
        differ.SetBorderFilterOn(false);
        Assert.AreEqual(0, differ.Compare());

        File.Delete(resultFile);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MessagePrinter()
    {
        var initialCount = Context.Current.MessageHandler.MessageItems.Count;

        // To simulate a diagnostic message over OCCT message system, we need to
        // generate a failing operation
        var op = new BOPAlgo_Builder();
        var listOfShapes = new TopTools_ListOfShape();
        op.BuildBOP(listOfShapes, listOfShapes, BOPAlgo_Operation.FUSE, new Message_ProgressRange());
        var report = op.GetReport();
        var alerts = report.GetAlerts(Message_Gravity.Fail);
        Assert.AreEqual(1, alerts.Size());

        report.SendMessages(Message.DefaultMessenger());
        Assert.AreEqual(initialCount + 1, Context.Current.MessageHandler.MessageItems.Count);

        Messages.Report(report);
        Assert.AreEqual(initialCount + 2, Context.Current.MessageHandler.MessageItems.Count);
    }
}