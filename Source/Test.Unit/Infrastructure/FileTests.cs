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

        FileSystem fileSystem = new FileSystem(filePath);
        fileSystem.Write("TestBlob", testBytes);
        fileSystem.Commit();

        fileSystem = new FileSystem(filePath);
        var reReadData = fileSystem.Read("TestBlob");
        Assert.AreEqual(testBytes.Length, reReadData.Length);
    }
}