using System.IO;
using System.Windows;
using System.Windows.Input;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Editors.Shapes;
using NUnit.Framework;
using Macad.Common;
using Macad.Occt;

namespace Macad.Test.Unit.Interaction.Sheet;

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
        ctx.ViewportController.MouseUp();
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
        // which is the left face. The flange is on the wrong side.            

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
        ctx.ViewportController.MouseUp();
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
                       
    [Test]
    public void EditorIdle()
    {
        var ctx = Context.Current;
        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
            
            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void EditorStartStopTools()
    {
        var ctx = Context.Current;
        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
            ctx.WorkspaceController.CurrentEditor.StopTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            flange.RaiseShapeChanged();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            ctx.WorkspaceController.CurrentEditor.StartTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
                        
            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveAngle()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);

        var oldAngle = flange.Angle;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(174, 353);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngle01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(174, 370);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngle02"));

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngle03"));
            Assert.Less(flange.Angle, oldAngle);
                                
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngle99"));
        });
    }
               
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveAngleRotated()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);

        var oldAngle = flange.Angle;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(291, 354);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(242, 355);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleRotated01"));
            Assert.Greater(flange.Angle, oldAngle);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveAngleReverse()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Angle = 20;
        ctx.WorkspaceController.StartEditor(flange);

        var oldAngle = flange.Angle;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(243, 211);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(214, 257);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleReverse01"));
            Assert.Greater(flange.Angle, oldAngle);
            Assert.IsTrue(flange.Reverse);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveAngleDeltaGreaterPi()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Angle = 150;
        ctx.WorkspaceController.StartEditor(flange);

        var oldAngle = flange.Angle;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(181, 282);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(140, 328);
            ctx.MoveTo(141, 384);
            ctx.MoveTo(197, 380);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleDeltaGreaterPi01"));
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleDeltaGreaterPi02"));
            Assert.Less(flange.Angle, oldAngle);
            Assert.IsTrue(flange.Reverse);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveAngleMaxPi()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Angle = 150;
        ctx.WorkspaceController.StartEditor(flange);

        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(137, 367);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(184, 279);
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(180.0, flange.Angle);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveAngleClamp()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);

        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(174, 353);

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(174, 370);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleClamp01"));
            ctx.MoveTo(174, 370, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleClamp02"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(50.0, flange.Angle);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveAngleUndo()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();

        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var oldAngle = flange.Angle;

        ctx.MoveTo(174, 353);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(174, 370, ModifierKeys.Control);
        ctx.ViewportController.MouseUp();
        ctx.WorkspaceController.StopEditor();
            
        Assert.AreEqual(50.0, flange.Angle);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(oldAngle, flange.Angle);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveAngleSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(30.0, 0.0, 0);
        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(316, 252);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(204, 279);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleSnap01"));
            ctx.ViewportController.MouseUp();
            Assert.That(flange.Reverse, Is.False);
            Assert.That(flange.Angle, Is.EqualTo(24.6).Within(0.1));

            box.Body.Position = new Pnt(30.0, 0.0, -10.0);
            ctx.MoveTo(319, 225);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(206, 481);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveAngleSnap02"));
            ctx.ViewportController.MouseUp();
            Assert.That(flange.Reverse, Is.True);
            Assert.That(flange.Angle, Is.EqualTo(28.7).Within(0.1));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveLength()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);

        var oldLength = flange.Length;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(131,192);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveLength01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(106, 141);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveLength02"));

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveLength03"));
            Assert.Greater(flange.Length, oldLength);
                                
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveLength99"));
        });
    }
               
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveLengthRotated()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);

        var oldLength = flange.Length;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(62, 208);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(160, 287);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveLengthRotated01"));
            Assert.Less(flange.Length, oldLength);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
               
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveLengthMinimum()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);

        var oldLength = flange.Length;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(62, 208);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(240, 336);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveLengthMinimum01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(0.0, flange.Length);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveLengthClamp()
    {
        var ctx = Context.Current;
        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(131, 197);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(165, 307);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveLengthClamp01"));
            ctx.MoveTo(165, 307, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveLengthClamp02"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(2.0, flange.Length);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveLengthUndo()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var oldLength = flange.Length;

        ctx.MoveTo(131, 197);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(165, 307, ModifierKeys.Control);
        ctx.ViewportController.MouseUp();
        ctx.WorkspaceController.StopEditor();
            
        Assert.AreEqual(2.0, flange.Length);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(oldLength, flange.Length);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveLengthSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(30.0, 0.0, 0);
        var flange = _CreateFlange();
        flange.Angle = 26.0;
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(229, 246);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(205, 272);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveLengthSnap01"));
            ctx.ViewportController.MouseUp();
            Assert.That(flange.Length, Is.EqualTo(21.48).Within(0.1));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRadius()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);

        var oldRadius = flange.Radius;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(191, 395);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRadius01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(184, 415);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRadius02"));

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRadius03"));
            Assert.Greater(flange.Radius, oldRadius);
                                
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRadius99"));
        });
    }
               
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveRadiusRotated()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);

        var oldRadius = flange.Radius;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(265, 372);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(271, 431);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRadiusRotated01"));
            Assert.Greater(flange.Radius, oldRadius);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
               
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveRadiusMinimum()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);

        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(265, 372);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(259, 335);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRadiusMinimum01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(0.001, flange.Radius);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRadiusClamp()
    {
        var ctx = Context.Current;
        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(265, 372);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(271, 431);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRadiusClamp01"));
            ctx.MoveTo(271, 431, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRadiusClamp02"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(5.0, flange.Radius);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveRadiusUndo()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var oldRadius = flange.Radius;

        ctx.MoveTo(265, 372);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(271, 431, ModifierKeys.Control);
        ctx.ViewportController.MouseUp();
        ctx.WorkspaceController.StopEditor();
            
        Assert.AreEqual(5.0, flange.Radius);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(oldRadius, flange.Radius);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRadiusNoSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(30.0, 0.0, 0);
        var flange = _CreateFlange();
        flange.Angle = 160.0;
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(292, 261);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(206, 374);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRadiusNoSnap01"));
            ctx.ViewportController.MouseUp();
            Assert.That(flange.Radius, Is.EqualTo(14.5).Within(0.1));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveStartGap()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);

        var oldGap = flange.StartGap;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(268, 343);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveStartGap01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(234, 326);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveStartGap02"));

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveStartGap03"));
            Assert.Greater(flange.StartGap, oldGap);
                                
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveStartGap99"));
        });
    }
               
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveStartGapRotated()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);

        var oldGap = flange.StartGap;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(215, 215);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(189, 249);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveStartGapRotated01"));
            Assert.Greater(flange.StartGap, oldGap);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
               
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveStartGapMinimum()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.StartGap = 5.0;
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);

        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(173, 242);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(276, 142);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveStartGapMinimum01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(0.00, flange.StartGap);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
                       
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveStartGapMaximum()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.EndGap = 5.0;
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);

        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(192,207);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(120, 352);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveStartGapMaximum01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(5.00, flange.StartGap, 0.002);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveStartGapClamp()
    {
        var ctx = Context.Current;
        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(215, 215);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(183, 257);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveStartGapClamp01"));
            ctx.MoveTo(183, 257, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveStartGapClamp02"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(4.0, flange.StartGap);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveStartGapUndo()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var oldGap = flange.StartGap;

        ctx.MoveTo(215, 215);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(183, 257, ModifierKeys.Control);
        ctx.ViewportController.MouseUp();
        ctx.WorkspaceController.StopEditor();
            
        Assert.AreEqual(4.0, flange.StartGap);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(oldGap, flange.StartGap);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveStartGapSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.DimensionY = 6.0;
        box.Body.Position = new Pnt(0.0, 0.0, 0.0);
        box.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(214, 217);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(173, 194);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveStartGapSnap01"));
            ctx.ViewportController.MouseUp();
            Assert.That(flange.StartGap, Is.EqualTo(4.0).Within(0.1));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveEndGap()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        ctx.WorkspaceController.StartEditor(flange);

        var oldGap = flange.EndGap;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(61, 222);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveEndGap01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(99, 242);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveEndGap02"));

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveEndGap03"));
            Assert.Greater(flange.EndGap, oldGap);
                                
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveEndGap99"));
        });
    }
               
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveEndGapRotated()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);

        var oldGap = flange.EndGap;
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(121, 347);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(149, 311);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveEndGapRotated01"));
            Assert.Greater(flange.EndGap, oldGap);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
               
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveEndGapMinimum()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.EndGap = 5.0;
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);

        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(133, 289);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(88, 391);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveEndGapMinimum01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(0.00, flange.EndGap);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
                       
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveEndGapMaximum()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.StartGap = 5.0;
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);

        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(119, 319);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(204, 206);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveEndGapMaximum01"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(5.00, flange.EndGap, 0.002);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveEndGapClamp()
    {
        var ctx = Context.Current;
        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        Assert.Multiple(() =>
        {
            ctx.MoveTo(121, 347);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(149, 311);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveEndGapClamp01"));
            ctx.MoveTo(149, 311, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveEndGapClamp02"));
            ctx.ViewportController.MouseUp();
            Assert.AreEqual(4.0, flange.EndGap);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void LiveEndGapUndo()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var oldGap = flange.EndGap;

        ctx.MoveTo(121, 347);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(149, 311, ModifierKeys.Control);
        ctx.ViewportController.MouseUp();
        ctx.WorkspaceController.StopEditor();
            
        Assert.AreEqual(4.0, flange.EndGap);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(oldGap, flange.EndGap);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveEndGapSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.DimensionY = 6.0;
        box.Body.Position = new Pnt(0.0, 0.0, -5.0);
        box.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        var flange = _CreateFlange();
        flange.Body.Rotation = new Quaternion(0.0, 0.0, 60.0.ToRad());
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(138, 305);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(285, 359);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveEndGapSnap01"));
            ctx.ViewportController.MouseUp();
            Assert.That(flange.EndGap, Is.EqualTo(1.66).Within(0.1));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    [Description("This bug occured when the length was set to 0 in the prop panel.")]
    public void LiveGapOnZeroLength()
    {
        var ctx = Context.Current;

        var flange = _CreateFlange();
        flange.Length = 0;
        ctx.WorkspaceController.StartEditor(flange);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            Assert.DoesNotThrow(() => ctx.MoveTo(268, 343));
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveGapOnZeroLength01"));
        });
    }
    
    //--------------------------------------------------------------------------------------------------
                
    [Test]
    [Apartment(System.Threading.ApartmentState.STA)]
    public void PropPanelCleanup()
    {
        var ctx = Context.Current;
        var panelMgr = ctx.EnablePropertyPanels();

        var taper = _CreateFlange();
        ctx.WorkspaceController.StartEditor(taper);

        var propPanel = panelMgr.FindFirst<FlangeSheetPropertyPanel>();
        propPanel.ReselectFaceCommand.Execute(null);
        Assert.IsAssignableFrom<CreateFlangeSheetTool>(ctx.WorkspaceController.CurrentTool);

        ctx.WorkspaceController.StopEditor();
        Assert.IsNull(ctx.WorkspaceController.CurrentTool);
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    FlangeSheet _CreateFlange()
    {
        var box = Box.Create(10.0, 10.0, 1.0);
        var body = Body.Create(box);
        var flangeSheet = FlangeSheet.Create(body, new SubshapeReference(SubshapeType.Face, box.Guid, 1), 70.0, 10.0, 1.0);
        flangeSheet.Relief = FlangeSheet.ReliefFlags.Rectangular;
        return flangeSheet;
    }
}