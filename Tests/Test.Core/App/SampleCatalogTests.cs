using System.Collections.Generic;
using System.IO;
using System.Linq;
using Macad.Common.Serialization;
using Macad.Test.Utils;
using Macad.Window;
using NUnit.Framework;

namespace Macad.Test.Core.App;

[TestFixture]
public class SampleCatalogTests
{
    string _SamplesDirectory;

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        _SamplesDirectory = Path.Combine(TestData.TempDirectory, nameof(SampleCatalogTests));
        if (Directory.Exists(_SamplesDirectory))
        {
            Directory.Delete(_SamplesDirectory, true);
        }
        Directory.CreateDirectory(_SamplesDirectory);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ListsAllModelFilesWithFileNameAsTitle()
    {
        _CreateModelFile("Beta.model");
        _CreateModelFile("Alpha Sample.model");
        File.WriteAllText(Path.Combine(_SamplesDirectory, "Readme.txt"), "");

        var samples = SampleCatalog.Load(_SamplesDirectory, out var indexError);

        Assert.IsNull(indexError);
        Assert.AreEqual(new[] { "Alpha Sample", "Beta" }, samples.Select(s => s.Title).ToArray());
        Assert.AreEqual(Path.Combine(_SamplesDirectory, "Alpha Sample.model"), samples[0].FilePath);
        Assert.AreEqual("", samples[0].Description);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MissingDirectoryYieldsEmptyList()
    {
        var samples = SampleCatalog.Load(Path.Combine(_SamplesDirectory, "DoesNotExist"), out var indexError);

        Assert.IsNull(indexError);
        Assert.IsEmpty(samples);
    }

    //--------------------------------------------------------------------------------------------------

    void _WriteIndex(params SampleInfo[] entries)
    {
        var data = Serializer.Serialize(new List<SampleInfo>(entries), new SerializationContext(SerializationScope.Storage));
        File.WriteAllText(Path.Combine(_SamplesDirectory, SampleCatalog.IndexFileName), data);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IndexDefinesOrderTitleAndDescription()
    {
        _CreateModelFile("Alpha.model");
        _CreateModelFile("Beta.model");
        _WriteIndex(new SampleInfo { FileName = "Beta.model", Title = "The Beta", Description = "Beta description." },
                    new SampleInfo { FileName = "Alpha.model", Title = "The Alpha", Description = "Alpha description." });

        var samples = SampleCatalog.Load(_SamplesDirectory, out var indexError);

        Assert.IsNull(indexError);
        Assert.AreEqual(new[] { "The Beta", "The Alpha" }, samples.Select(s => s.Title).ToArray());
        Assert.AreEqual("Beta description.", samples[0].Description);
        Assert.AreEqual(Path.Combine(_SamplesDirectory, "Beta.model"), samples[0].FilePath);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UnlistedFilesAreAppended()
    {
        _CreateModelFile("Alpha.model");
        _CreateModelFile("Gamma.model");
        _CreateModelFile("Zeta.model");
        _WriteIndex(new SampleInfo { FileName = "Zeta.model", Title = "The Zeta", Description = "Zeta description." });

        var samples = SampleCatalog.Load(_SamplesDirectory, out var indexError);

        Assert.AreEqual(new[] { "The Zeta", "Alpha", "Gamma" }, samples.Select(s => s.Title).ToArray());
        Assert.AreEqual("", samples[1].Description);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BlankTitleFallsBackToFileName()
    {
        _CreateModelFile("Alpha.model");
        _WriteIndex(new SampleInfo { FileName = "Alpha.model", Title = "  ", Description = "Alpha description." });

        var samples = SampleCatalog.Load(_SamplesDirectory, out var indexError);

        Assert.AreEqual("Alpha", samples[0].Title);
        Assert.AreEqual("Alpha description.", samples[0].Description);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EntriesOfMissingFilesAreSkipped()
    {
        _CreateModelFile("Alpha.model");
        _WriteIndex(new SampleInfo { FileName = "Removed.model", Title = "Removed", Description = "Gone." },
                    new SampleInfo { FileName = "Alpha.model", Title = "The Alpha", Description = "Alpha description." });

        var samples = SampleCatalog.Load(_SamplesDirectory, out var indexError);

        Assert.AreEqual(new[] { "The Alpha" }, samples.Select(s => s.Title).ToArray());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BrokenIndexFallsBackToFiles()
    {
        _CreateModelFile("Beta.model");
        _CreateModelFile("Alpha.model");
        File.WriteAllText(Path.Combine(_SamplesDirectory, SampleCatalog.IndexFileName), "[ !Macad.Interaction.SampleInfo { FileName: \"Alpha.model\", Ti");

        // The serializer is lenient and returns what it could read, so this is not reported as error
        var samples = SampleCatalog.Load(_SamplesDirectory, out _);

        Assert.AreEqual(new[] { "Alpha", "Beta" }, samples.Select(s => s.Title).ToArray());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BrokenIndexIsNotWrittenToMessageLog()
    {
        // The catalog is loaded on the welcome dialog thread, but the message log belongs to the main thread
        Context.InitWithDefault();
        try
        {
            _CreateModelFile("Alpha.model");
            File.WriteAllText(Path.Combine(_SamplesDirectory, SampleCatalog.IndexFileName), "?null");

            SampleCatalog.Load(_SamplesDirectory, out var indexError);

            Assert.That(indexError, Does.Contain(SampleCatalog.IndexFileName));
            Assert.IsEmpty(Context.Current.MessageHandler.MessageItems);
        }
        finally
        {
            Context.Current.Deinit();
        }
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    void _CreateModelFile(string fileName)
    {
        File.WriteAllText(Path.Combine(_SamplesDirectory, fileName), "");
    }

    //--------------------------------------------------------------------------------------------------

}
