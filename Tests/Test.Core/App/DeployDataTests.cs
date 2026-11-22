using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Window;
using NUnit.Framework;

namespace Macad.Test.Core.App;

[TestFixture]
public class DeployDataTests
{
    const string _BasePath = @"App\DeployData";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void SetUp()
    {
        Context.InitWithView(500);
        var ctx = Context.Current;
        ctx.Workspace.GridEnabled = false;
        ctx.WorkspaceController.V3dViewer.DisplayPrivilegedPlane(false);
    }

    [TearDown]
    public void TearDown()
    {
        Context.Current.Deinit();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCaseSource(typeof(SampleEnumerator))]
    public void ValidateSamples(string filename)
    {
        var ctx = Context.Current;

        // Load
        Assert.IsTrue(ctx.DocumentController.OpenModel(Path.Combine(TestData.TestDataDirectory, @"..\Samples", filename)), $"OpenModel failed: {filename}");
        Assert.That(ctx.Document.EntityCount > 0, $"Doc is empty: {filename}");

        // Reconstruct
        foreach (var entity in ctx.Document)
        {
            entity.Invalidate();
        }
        foreach (var body in ctx.Document.OfType<Body>())
        {
            if (!body.RootShape.IsValid)
            {
                Assert.IsTrue(body.RootShape.Make(Shape.MakeFlags.None), $"Make failed: {filename} / {body.Name}::{body.RootShape.Name}");
            }
        }

        // Screenshot
        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"Samples_{Path.GetFileNameWithoutExtension(filename)}"), 0.1);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ValidateSampleIndex()
    {
        var samplesPath = Path.GetFullPath(Path.Combine(TestData.TestDataDirectory, @"..\Samples"));
        var indexPath = Path.Combine(samplesPath, SampleCatalog.IndexFileName);
        Assert.That(File.Exists(indexPath), $"Sample index not found: {indexPath}");

        var index = Serializer.Deserialize<List<SampleInfo>>(File.ReadAllText(indexPath), new SerializationContext(SerializationScope.Storage));
        Assert.IsNotNull(index, "Sample index could not be deserialized.");

        // Every entry refers to an existing file and has a title and description
        foreach (var entry in index)
        {
            Assert.IsNotNull(entry, "Sample index contains an empty entry.");
            Assert.That(File.Exists(Path.Combine(samplesPath, entry.FileName ?? "")), $"Sample index refers to missing file: {entry.FileName}");
            Assert.That(!string.IsNullOrWhiteSpace(entry.Title), $"Sample has no title: {entry.FileName}");
            Assert.That(!string.IsNullOrWhiteSpace(entry.Description), $"Sample has no description: {entry.FileName}");
        }

        // Every shipped sample is listed in the index
        var indexedFiles = index.Select(entry => entry?.FileName).ToHashSet(StringComparer.OrdinalIgnoreCase);
        foreach (var file in Directory.EnumerateFiles(samplesPath, "*." + Model.FileExtension))
        {
            Assert.That(indexedFiles.Contains(Path.GetFileName(file)), $"Sample is not listed in the index: {Path.GetFileName(file)}");
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCaseSource(typeof(DocExamplesEnumerator))]
    public void DocScriptExamples(string file)
    {
        var script = ScriptInstance.LoadScriptFromFile(Path.Combine(TestData.TestDataDirectory, @"SourceData\ScriptSamples", file), InteractiveScriptContext.Default, true);
        Assert.IsNotNull(script);
    }

    //--------------------------------------------------------------------------------------------------

}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

class SampleEnumerator : IEnumerable
{
    public IEnumerator GetEnumerator()
    {
        var sourcePath = Path.Combine(TestData.TestDataDirectory, @"..\Samples");
        foreach (var file in Directory.EnumerateFiles(sourcePath, "*.model"))
        {
            yield return Path.GetFileName(file);
        }
    }
}

//--------------------------------------------------------------------------------------------------

class DocExamplesEnumerator : IEnumerable
{
    public IEnumerator GetEnumerator()
    {
        var path = Path.Combine(TestData.TestDataDirectory, @"SourceData\ScriptSamples");
        foreach (var file in Directory.EnumerateFiles(path, "*.csx"))
        {
            yield return Path.GetFileName(file);
        }
    }
}