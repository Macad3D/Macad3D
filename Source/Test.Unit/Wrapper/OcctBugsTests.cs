using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper;

[TestFixture]
public class OcctBugsTests
{
    [Test]
    public void ImageDiffWithTolerance_OCCT29847()
    {
        var imageNew = new Image_PixMap();
        imageNew.InitTrash(Image_Format.RGB, 1, 1);
        imageNew.SetPixelColor(0, 0, new Quantity_Color(0.5, 0.5, 0.5, Quantity_TypeOfColor.RGB) );
        var imageRef = new Image_PixMap();
        imageRef.InitTrash(Image_Format.RGB, 1, 1);
        imageRef.SetPixelColor(0, 0, new Quantity_Color(0.6, 0.6, 0.6, Quantity_TypeOfColor.RGB) );

        var imageDiff = new Image_Diff();
        imageDiff.Init(imageRef, imageNew);
        Assert.AreEqual(1, imageDiff.Compare());
        imageDiff.SetColorTolerance(0.2);
        Assert.AreEqual(0, imageDiff.Compare());
    }
}