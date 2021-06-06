using System;
using System.IO;
using System.Linq;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using NUnit.Framework;

namespace Macad.Test.Unit.App
{
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
            ctx.Workspace.V3dViewer.DisplayPrivilegedPlane(false);
        }

        [TearDown]
        public void TearDown()
        {
            Context.Current.Deinit();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ValidateSamples()
        {
            var ctx = Context.Current;
            var sourcePath = Path.Combine(TestData.TestDataDirectory, @"..\Samples");

            Assert.Multiple(() =>
            {
                foreach (var file in Directory.EnumerateFiles(sourcePath, "*.model"))
                {
                    var filename = Path.GetFileNameWithoutExtension(file);
                    Console.WriteLine(Path.GetFileName(filename));

                    // Load
                    Assert.IsTrue(ctx.DocumentController.OpenModel(file), $"OpenModel failed: {filename}");
                    Assert.That(ctx.Document.ChildCount > 0, $"Doc is empty: {filename}");

                    // Reconstruct
                    foreach (var entity in ctx.Document)
                    {
                        entity.Invalidate();
                    }
                    foreach (var body in ctx.Document.OfType<Body>())
                    {
                        if (!body.RootShape.IsValid)
                        {
                            Assert.IsTrue(body.RootShape.Make(Shape.MakeFlags.None), $"Make failed: {filename}::{body.Name}::{body.RootShape.Name}");
                        }
                    }

                    // Screenshot
                    ctx.ViewportController.InitWindow(IntPtr.Zero, 500, 500);
                    ctx.ViewportController.ZoomFitAll();
                    AssertHelper.IsSameViewport(Path.Combine(_BasePath, $"Samples_{filename}"), 0.1);
                }
            });
        }

        //--------------------------------------------------------------------------------------------------

    }
}