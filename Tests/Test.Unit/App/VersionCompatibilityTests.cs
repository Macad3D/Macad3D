using System.Collections;
using System.IO;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.App;

[TestFixture]
public class VersionCompatibilityTests
{        
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCaseSource(typeof(OldVersionFileEnumerator))]
    public void CheckOldVersionLoadability(string filename)
    {
        var ctx = Context.Current;
        Assert.IsTrue(ctx.DocumentController.OpenModel(Path.Combine(TestData.TestDataDirectory, @"SourceData\OldVersions", filename)), $"OpenModel failed: {filename}");
        Assert.That(ctx.Document.EntityCount > 0, $"Doc is empty: {filename}");
    }

}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

class OldVersionFileEnumerator : IEnumerable
{
    public IEnumerator GetEnumerator()
    {
        var sourcePath = Path.Combine(TestData.TestDataDirectory, @"SourceData\OldVersions");
        foreach (var file in Directory.EnumerateFiles(sourcePath, "*.model"))
        {
            yield return Path.GetFileName(file);
        }
    }
}