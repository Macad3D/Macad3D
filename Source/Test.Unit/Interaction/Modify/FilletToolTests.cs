using System.IO;
using System.Windows;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify
{
    [TestFixture]
    public class FilletToolTests
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
                
        const string _BasePath = @"Interaction\Modify\Fillet";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EdgeSelection()
        {
            var ctx = Context.Current;

            var box = Box.Create(10.0, 10.0, 5.0);
            var body = Body.Create(box);

            ctx.ViewportController.ZoomFitAll();

            var shape = Fillet.Create(body);
            shape.Radius = 2.0;
            var tool = new EdgeModifierTool(shape);
            ctx.WorkspaceController.StartTool(tool);

            Assert.Multiple(() =>
            {
                ctx.MoveTo(139, 252);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection1"));

                ctx.SelectAt(139, 252);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection2"));

                tool.Stop();
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelection3"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void EdgeSelectionFailure()
        {
            // This test shall show that two edges which differ only in location
            // are properly selectable
            var ctx = Context.Current;

            var box = Box.Create(10.0, 10.0, 5.0);
            var body = Body.Create(box);
            var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 45.0, 10.0, 5.0);
            flangeSheet.Relief = FlangeSheet.ReliefFlags.Rectangular;

            ctx.ViewportController.ZoomFitAll();

            var shape = Fillet.Create(body);
            shape.Radius = 2.0;
            var tool = new EdgeModifierTool(shape);
            ctx.WorkspaceController.StartTool(tool);

            Assert.Multiple(() =>
            {
                ctx.ViewportController.MouseMove(new Point(120, 200));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelectionFailure1"));

                ctx.ViewportController.MouseDown();
                ctx.ViewportController.MouseUp();
                ctx.ViewportController.MouseMove(new Point(0, 0));
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EdgeSelectionFailure2"));
            });
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void HighlightInnerOriginalEdges()
        {
            var ctx = Context.Current;
            var imprint = TestGeomGenerator.CreateImprint(TestSketchGenerator.SketchType.Rectangle);
            imprint.Mode = Imprint.ImprintMode.Cutout;
            ctx.ViewportController.ZoomFitAll();
            
            var shape = Fillet.Create(imprint.Body);
            shape.Radius = 4.0f;
            ctx.WorkspaceController.StartTool(new EdgeModifierTool(shape));

            Assert.Multiple(() =>
            {
                ctx.ClickAt(250, 185);
                AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HighlightInnerOriginalEdges01"));
            });
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        [Apartment(System.Threading.ApartmentState.STA)]
        public void PropPanelCleanup()
        {
            var ctx = Context.Current;
            var panelMgr = ctx.EnablePropertyPanels();

            var box = TestGeomGenerator.CreateBox();
            var fillet = Fillet.Create(box.Body);
            fillet.Radius = 2.0;            
            ctx.WorkspaceController.StartEditor(fillet);

            var propPanel = panelMgr.FindFirst<FilletPropertyPanel>();
            propPanel.StartToolCommand.Execute(null);
            Assert.IsAssignableFrom<EdgeModifierTool>(ctx.WorkspaceController.CurrentTool);

            ctx.WorkspaceController.StopEditor();
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
        }

        //--------------------------------------------------------------------------------------------------

    }
}