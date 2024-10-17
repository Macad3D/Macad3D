using System.IO;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify2D;

[TestFixture]
public class CrossSectionToolTests
{
    const string _BasePath = @"Interaction\Modify2D\CrossSection";

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
    public void EditorIdle()
    {
        var ctx = Context.Current;
        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);
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
        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
            ctx.WorkspaceController.CurrentEditor.StopTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            section.RaiseShapeChanged();
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
    public void LiveTranslate()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(250, 240);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveTranslate01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(150, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveTranslate02"));
            
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveTranslate03"));
                            
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveTranslate99"));
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveTranslateClamp()
    {
        var ctx = Context.Current;
        ctx.WorkspaceController.Workspace.GridStep = 1.0;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(250, 240);

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(150, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveTranslateClamp01"));
            
            ctx.MoveTo(150, 200, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveTranslateClamp02"));
            ctx.ViewportController.MouseUp();

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRotateX()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(268, 155);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateX01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(420, 170);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateX02"));
            
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateX03"));
                            
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateX99"));
        });
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void LiveRotateXClamp()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(268, 155);

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(420, 170);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateXClamp01"));

            ctx.MoveTo(420, 170, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateXClamp02"));
            ctx.ViewportController.MouseUp();

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRotateY()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(278, 131);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateY01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(212, 171);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateY02"));
            
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateY03"));
                            
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateY99"));
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRotateYClamp()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(278, 131);

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(212, 171);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateYClamp01"));
            
            ctx.MoveTo(212, 171, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateYClamp02"));
            ctx.ViewportController.MouseUp();

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void LiveRotateZ()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(356, 203);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateZ01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(393, 258);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateZ02"));
            
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateZ03"));
                            
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateZ99"));
        });
    }
            
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRotateZClamp()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(356, 203);

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(393, 258);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateZClamp01"));
            
            ctx.MoveTo(393, 258, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateZClamp02"));
            ctx.ViewportController.MouseUp();

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveActionsCombined()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(278, 131);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(212, 171);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveActionsCombined01"));

            ctx.MoveTo(209, 218);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(302, 377);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveActionsCombined02"));
            
            ctx.MoveTo(212, 328);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(307, 164);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveActionsCombined03"));
            
            ctx.MoveTo(314, 113);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(330, 90);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveActionsCombined04"));
            
            ctx.MoveTo(226, 275);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(345, 288);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveActionsCombined05"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveTranslateUndo()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var pln = section.Plane;

        ctx.MoveTo(250, 240);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(150, 200);
        ctx.ViewportController.MouseUp();

        Assert.AreNotEqual(pln, section.Plane);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(pln, section.Plane);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        // Cleanup
        ctx.WorkspaceController.StopEditor();
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRotateXUndo()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var pln = section.Plane;

        ctx.MoveTo(268, 155);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(420, 170);
        ctx.ViewportController.MouseUp();

        Assert.AreNotEqual(pln, section.Plane);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(pln, section.Plane);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        // Cleanup
        ctx.WorkspaceController.StopEditor();
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRotateYUndo()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var pln = section.Plane;

        ctx.MoveTo(278, 131);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(212, 171);
        ctx.ViewportController.MouseUp();

        Assert.AreNotEqual(pln, section.Plane);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(pln, section.Plane);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        // Cleanup
        ctx.WorkspaceController.StopEditor();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveTranslateSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(0.0, 0.0, 5);
        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(250, 86);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(250, 273);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveTranslateSnap01"));

            Assert.That(section.Plane.Location.Z, Is.EqualTo(5.0).Within(1e-6));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRotateNoSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToVertexSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.Body.Position = new Pnt(-10.0, 10.0, 0);
        var section = _SetupTestGeom();
        ctx.WorkspaceController.StartEditor(section);

        Assert.Multiple(() =>
        {
            ctx.MoveTo(246, 185);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(308, 343);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateNoSnap01"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    CrossSection _SetupTestGeom(double rotation=0.0)
    {
        var cylinder = TestGeomGenerator.CreateCylinder();
        Taper.Create(cylinder.Body, cylinder.GetSubshapeReference(SubshapeType.Face, 0), cylinder.GetSubshapeReference(SubshapeType.Edge, 2), 40.0);
        var body = cylinder.Body;
        body.Position = new Pnt(0, 0, 10);
        if (rotation != 0.0)
        {
            body.Rotation = new Quaternion(Dir.DY.ToVec(), rotation.ToRad());
        }

        var proposedPlane = CrossSection.ProposePlane(body, Context.Current.Workspace.WorkingPlane);
        var section = CrossSection.Create(body, proposedPlane);
        Assert.IsNotNull(section);

        var ctx = Context.Current;
        ctx.WorkspaceController.Selection.SelectEntity(section.Body);
        ctx.ViewportController.ZoomFitAll();
        ctx.ViewportController.Zoom(-1.0);
        return section;
    }
}