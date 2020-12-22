using System.Diagnostics;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using Macad.Test.Utils;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Interaction.Visual;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Infrastructure
{
    [TestFixture]
    public class ViewportTests
    {
        [SetUp]
        public void SetUp()
        {
            Context.InitWithView(500);
        }

        [TearDown]
        public void TearDown()
        {
            Context.Current.Deinit();
        }
                
        //--------------------------------------------------------------------------------------------------

        const string _BasePath = @"Interaction\Infrastructure\Viewport\";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ViewCube()
        {
            var ctx = Context.Current;

            var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
            viewportParameterSet.ShowViewCube = true;

            TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");
            ctx.ViewportController.ZoomFitAll();

            Assert.Multiple(() =>
            {
                // ViewCube is visible
                AssertHelper.IsSameViewport(_BasePath + "ViewCubeVisible");

                // Higlight
                ctx.MoveTo(360, 120);
                AssertHelper.IsSameViewport(_BasePath + "ViewCubeHighlight");

                // Moved camera
                ctx.ClickAt(360, 120);
                Thread.Sleep(1000); // Wait for animation to finish
                AssertHelper.IsSameViewport(_BasePath + "ViewCubeMoved");
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void ClipPlane()
        {
            var ctx = Context.Current;
            
            // The imprint we want to edit
            var imprint = TestGeomGenerator.CreateImprint();
            var sketch = imprint.Sketch;
            imprint.Make(Shape.MakeFlags.None);

            ctx.ViewportController.ZoomFitAll();

            var plane = sketch.Plane;
            plane.UReverse();
            var clipPlane = new ClipPlane(plane);
            clipPlane.AddViewport(ctx.Viewport);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ClipPlane01"));

            clipPlane.Remove();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ClipPlane02"));
        }

        //--------------------------------------------------------------------------------------------------

    }
}