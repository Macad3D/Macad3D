using System.IO;
using System.Windows;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Sheet
{
    [TestFixture]
    public class FlangeSheetToolTests
    {
        const string _BasePath = @"Interaction\Sheet\FlangeSheet";

        //--------------------------------------------------------------------------------------------------

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

        [Test]
        public void CreateFlange()
        {
            var ctx = Context.Current;

            var box = Box.Create(10.0, 10.0, 1.0);
            var body = TestGeomGenerator.CreateBody(box);

            ctx.ViewportController.ZoomFitAll();

            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.WorkspaceController.StartTool(new CreateFlangeSheetTool(body));

            ctx.ViewportController.MouseMove(new Point(300, 350));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFlange1"));

            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp(false);
            ctx.ViewportController.MouseMove(new Point(0, 0));
            ctx.ViewportController.ZoomFitAll();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateFlange2"));
        }
        
        //--------------------------------------------------------------------------------------------------

        [Test]
        public void SelectionFilter()
        {
            var ctx = Context.Current;

            var body = TestGeomGenerator.CreateImprint().Body;

            ctx.ViewportController.ZoomFitAll();

            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.WorkspaceController.StartTool(new CreateFlangeSheetTool(body));

            ctx.ViewportController.MouseMove(new Point(250, 250));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionFilter1"));

            ctx.ViewportController.MouseMove(new Point(200, 277));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectionFilter2"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void CreateTwoFlangesOnTheSameFace()
        {
            // The problem of this test case ist:
            // We've selected the right face beside the flangeSheet2. The face reference was translated
            // to the parent face, which was splitted. We get the first of the split face always,
            // which is the left face. The flange is on the false side.            

            var ctx = Context.Current;
            var box = Box.Create(20.0, 20.0, 1.0);
            var body = TestGeomGenerator.CreateBody(box);
            var flangeSheet1 = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 3), 20.0, 5.0, 1.0);
            flangeSheet1.Reverse = true;
            var flangeSheet2 = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, flangeSheet1.Guid, "Flange", 5), 70.0, 10.0, 1.0);
            flangeSheet2.StartGap = 8.0;
            flangeSheet2.EndGap = 8.0;
            ctx.UndoHandler.Commit();

            ctx.ViewportController.ZoomFitAll();

            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.WorkspaceController.StartTool(new CreateFlangeSheetTool(body));

            ctx.ViewportController.MouseMove(new Point(370, 225));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateTwoFlangesOnTheSameFace1"));

            ctx.ViewportController.MouseDown();
            ctx.ViewportController.MouseUp(false);
            ctx.ViewportController.ZoomFitAll();
            ctx.ViewportController.MouseMove(new Point(0, 0));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateTwoFlangesOnTheSameFace2"));
        }

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void FlangeSheetReselectTargetFace()
        {
            var ctx = Context.Current;
            var box = Box.Create(10.0, 10.0, 1.0);
            var body = TestGeomGenerator.CreateBody(box);
            ctx.ViewportController.ZoomFitAll();

            // Build imprint
            ctx.WorkspaceController.Selection.SelectEntity(body);
            ctx.WorkspaceController.StartTool(new CreateFlangeSheetTool(body));
            ctx.SelectAt(300, 350);
            ctx.MoveTo(250, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectTargetFace1"));

            // Start reselection, then cancel it
            ctx.WorkspaceController.StartTool(new CreateFlangeSheetTool(body.Shape as FlangeSheet));
            ctx.MoveTo(140, 320);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectTargetFace2"));
            ctx.WorkspaceController.CancelTool(ctx.WorkspaceController.CurrentTool, true);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectTargetFace1"));

            // Start reselection, perform
            ctx.WorkspaceController.StartTool(new CreateFlangeSheetTool(body.Shape as FlangeSheet));
            ctx.SelectAt(140, 320);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ReselectTargetFace3"));
            Assert.IsNull(ctx.WorkspaceController.CurrentTool);
        }

        //--------------------------------------------------------------------------------------------------

    }
}