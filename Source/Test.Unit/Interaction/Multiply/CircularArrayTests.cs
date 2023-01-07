using System.IO;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Multiply
{
    [TestFixture]
    public class CircularArrayEditorTests
    {
        const string _BasePath = @"Interaction\Multiply\CircularArray";

        //--------------------------------------------------------------------------------------------------

        [SetUp]
        public void SetUp()
        {
            Context.InitWithView(500);
            Context.Current.Viewport.V3dView.SetBackgroundColor(Quantity_NameOfColor.BLACK.ToColor());
        }

        [TearDown]
        public void TearDown()
        {
            Context.Current.Deinit();
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void HintLinesSolid()
        {
            var ctx = Context.Current;
            var array = _CreateSolidArray();
            ctx.ViewportController.ZoomFitAll();
            ctx.WorkspaceController.Selection.SelectEntity(array.Body);

            var editor = Editor.CreateEditor(array);
            editor.Start();

            Assert.Multiple(() =>
            {
                array.Plane = CircularArray.PlaneType.XY;
                ctx.ViewportController.ZoomFitAll();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HintLinesSolid_XY"));
                array.Plane = CircularArray.PlaneType.YZ;
                ctx.ViewportController.ZoomFitAll();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HintLinesSolid_YZ"));
                array.Plane = CircularArray.PlaneType.ZX;
                ctx.ViewportController.ZoomFitAll();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HintLinesSolid_ZX"));

                // Cleanup
                editor.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HintLinesSolid_Clean"));
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void HintLinesNegativeValues()
        {
            var ctx = Context.Current;
            var array = _CreateSolidArray();
            ctx.ViewportController.ZoomFitAll();
            ctx.WorkspaceController.Selection.SelectEntity(array.Body);

            var editor = Editor.CreateEditor(array);
            editor.Start();

            Assert.Multiple(() =>
            {
                array.Plane = CircularArray.PlaneType.XY;
                array.Radius *= -1;
                ctx.ViewportController.ZoomFitAll();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HintLinesSolid_NegRadius"));

                // Cleanup
                editor.Stop();
            });
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void HintLinesSketch()
        {
            var ctx = Context.Current;
            var array = _CreateSketchArray();
            ctx.ViewportController.ZoomFitAll();
            ctx.WorkspaceController.Selection.SelectEntity(array.Body);
            var editor = Editor.CreateEditor(array);
            editor.Start();

            Assert.Multiple(() =>
            {
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HintLinesSketch"));

                // Cleanup
                editor.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HintLinesSketch_Clean"));
            });
        }

        //--------------------------------------------------------------------------------------------------
                
        [Test]
        public void HintLinesOnlyIfEffectiveShape()
        {
            var ctx = Context.Current;
            var array = _CreateSketchArray();
            ctx.ViewportController.ZoomFitAll();
            ctx.WorkspaceController.Selection.SelectEntity(array.Body);

            array.Body.Shape = array.Predecessor as Sketch;
            var editor = Editor.CreateEditor(array);
            editor.Start();

            Assert.Multiple(() =>
            {
                editor.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HintLinesOnlyIfEffectiveShape"));
            });
        }

        //--------------------------------------------------------------------------------------------------
        //--------------------------------------------------------------------------------------------------

        CircularArray _CreateSolidArray()
        {
            var solid = TestGeomGenerator.CreateImprint();
            var array = CircularArray.Create(solid.Body);
            array.Quantity = 4;
            array.Radius = 50;
            array.OriginalAngle = 20;
            array.Range = 220;
            array.Alignment = CircularArray.AlignmentMode.Center;
            Assume.That(array.Make(Shape.MakeFlags.None));

            return array;
        }

        //--------------------------------------------------------------------------------------------------

        CircularArray _CreateSketchArray()
        {
            var sketch = TestSketchGenerator.CreateSketch(createBody: true);
            var array = CircularArray.Create(sketch.Body);
            array.Quantity = 4;
            array.Radius = 50;
            array.OriginalAngle = 20;
            array.Range = 220;
            array.Alignment = CircularArray.AlignmentMode.Center;
            Assume.That(array.Make(Shape.MakeFlags.None));
            return array;
        }
    }
}