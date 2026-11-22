using System.IO;
using System.IO.Compression;
using Macad.Presentation;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Core.App;

[TestFixture]
public class DocumentThumbnailTests
{
    string _TempDirectory;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        _TempDirectory = Path.Combine(TestData.TempDirectory, nameof(DocumentThumbnailTests));
        if (Directory.Exists(_TempDirectory))
        {
            Directory.Delete(_TempDirectory, true);
        }
        Directory.CreateDirectory(_TempDirectory);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LoadFromModelWithThumbnail()
    {
        var path = _CopySample("WoodpeckerCase.model");

        var image = DocumentThumbnail.Load(path, 96);

        Assert.IsNotNull(image);
        Assert.IsTrue(image.IsFrozen);
        Assert.AreEqual(96, image.PixelWidth);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LoadReleasesFile()
    {
        var path = _CopySample("WoodpeckerCase.model");

        var image = DocumentThumbnail.Load(path, 96);
        Assert.IsNotNull(image);

        Assert.DoesNotThrow(() =>
        {
            using var stream = new FileStream(path, FileMode.Open, FileAccess.ReadWrite, FileShare.None);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LoadFromModelWithoutThumbnail()
    {
        var path = Path.Combine(_TempDirectory, "NoThumbnail.model");
        using (var archive = ZipFile.Open(path, ZipArchiveMode.Create))
        {
            using var writer = new StreamWriter(archive.CreateEntry("Model").Open());
            writer.Write("{}");
        }

        Assert.IsNull(DocumentThumbnail.Load(path, 96));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LoadFromInvalidFile()
    {
        var path = Path.Combine(_TempDirectory, "NotAnArchive.model");
        File.WriteAllText(path, "This is not a zip archive.");

        Assert.IsNull(DocumentThumbnail.Load(path, 96));
        Assert.IsNull(DocumentThumbnail.Load(Path.Combine(_TempDirectory, "DoesNotExist.model"), 96));
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    string _CopySample(string fileName)
    {
        var source = Path.Combine(TestData.TestDataDirectory, @"..\Samples", fileName);
        var target = Path.Combine(_TempDirectory, fileName);
        File.Copy(source, target, true);
        return target;
    }

    //--------------------------------------------------------------------------------------------------

}
