using System;
using System.Collections;
using System.IO;
using System.Linq;
using System.Windows;
using Macad.Core;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using NUnit.Framework;

namespace Macad.Test.Unit.App;

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
        ctx.ViewportController.InitWindow(IntPtr.Zero, new Int32Rect(0, 0, 500, 500));
        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"Samples_{Path.GetFileNameWithoutExtension(filename)}"), 0.1);
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