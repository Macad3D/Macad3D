using System.IO;
using Macad.Common;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Infrastructure;

[TestFixture]
public class FileTests
{
    [Test]
    [Description(".Net 6 Breaking Change")]
    public void PartialReadsInDeflateStream()
    {
        // https://docs.microsoft.com/en-us/dotnet/core/compatibility/core-libraries/6.0/partial-byte-reads-in-streams
        var testBytes = TestData.GetTestData(Path.Combine("SourceData", "Images", "coat-of-arms.png"));
        var filePath = Path.Combine(TestData.TempDirectory, "PartialReadsInDeflateStream.zip");

        FileSystem fileSystem;
        using (fileSystem = new(filePath))
        {
            fileSystem.Write("TestBlob", testBytes);
            fileSystem.Commit();
        }

        using (fileSystem = new(filePath))
        {
            var reReadData = fileSystem.Read("TestBlob");
            Assert.AreEqual(testBytes.Length, reReadData.Length);
        }

        File.Delete(filePath);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UnicodePath()
    {
        var testBytes = TestData.GetTestData(Path.Combine("SourceData", "Images", "coat-of-arms.png"));
        var filePath = Path.Combine(TestData.TempDirectory, $"FileSystem_{TestData.UnicodeTestString}.zip");
        File.Delete(filePath);

        // Write
        FileSystem fileSystem;
        using (fileSystem = new(filePath))
        {
            fileSystem.Write("TestBlob", testBytes);
            fileSystem.Commit();
        }

        Assert.That(File.Exists(filePath));

        // Read
        using (fileSystem = new(filePath))
        {
            var reReadData = fileSystem.Read("TestBlob");
            Assert.AreEqual(testBytes.Length, reReadData.Length);
        }

        File.Delete(filePath);
    }

}