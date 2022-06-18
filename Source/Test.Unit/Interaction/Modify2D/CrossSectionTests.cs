using System.IO;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Modify2D;

[TestFixture]
public class CrossSectionTests
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
        var editor = Editor.CreateEditor(section);
        editor.Start();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
            
            // Cleanup
            editor.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveTranslate()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        var editor = Editor.CreateEditor(section);
        editor.Start();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(250, 240);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveTranslate01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(150, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveTranslate02"));
            
            ctx.ViewportController.MouseUp(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveTranslate03"));

            // Cleanup
            editor.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveTranslate99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRotateX()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        var editor = Editor.CreateEditor(section);
        editor.Start();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(268, 155);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateX01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(420, 170);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateX02"));
            
            ctx.ViewportController.MouseUp(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateX03"));

            // Cleanup
            editor.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateX99"));
        });
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRotateY()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        var editor = Editor.CreateEditor(section);
        editor.Start();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(278, 131);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateY01"));

            ctx.ViewportController.MouseDown();
            ctx.MoveTo(212, 171);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateY02"));
            
            ctx.ViewportController.MouseUp(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateY03"));

            // Cleanup
            editor.Stop();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveRotateY99"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveActionsCombined()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        var editor = Editor.CreateEditor(section);
        editor.Start();

        Assert.Multiple(() =>
        {
            ctx.MoveTo(278, 131);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(212, 171);
            ctx.ViewportController.MouseUp(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveActionsCombined01"));

            ctx.MoveTo(209, 218);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(302, 377);
            ctx.ViewportController.MouseUp(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveActionsCombined02"));
            
            ctx.MoveTo(212, 328);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(307, 164);
            ctx.ViewportController.MouseUp(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveActionsCombined03"));
            
            ctx.MoveTo(314, 113);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(330, 90);
            ctx.ViewportController.MouseUp(false);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveActionsCombined04"));

            // Cleanup
            editor.Stop();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveTranslateUndo()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        var editor = Editor.CreateEditor(section);
        editor.Start();
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var pln = section.Plane;

        ctx.MoveTo(250, 240);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(150, 200);
        ctx.ViewportController.MouseUp(false);

        Assert.AreNotEqual(pln, section.Plane);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(pln, section.Plane);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        // Cleanup
        editor.Stop();
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRotateXUndo()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        var editor = Editor.CreateEditor(section);
        editor.Start();
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var pln = section.Plane;

        ctx.MoveTo(268, 155);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(420, 170);
        ctx.ViewportController.MouseUp(false);

        Assert.AreNotEqual(pln, section.Plane);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(pln, section.Plane);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        // Cleanup
        editor.Stop();
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveRotateYUndo()
    {
        var ctx = Context.Current;

        var section = _SetupTestGeom();
        var editor = Editor.CreateEditor(section);
        editor.Start();
        ctx.UndoHandler.Commit();
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);
        var pln = section.Plane;

        ctx.MoveTo(278, 131);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(212, 171);
        ctx.ViewportController.MouseUp(false);

        Assert.AreNotEqual(pln, section.Plane);
        Assert.AreEqual(2, ctx.UndoHandler.UndoStack.Count);

        ctx.UndoHandler.DoUndo(1);

        Assert.AreEqual(pln, section.Plane);
        Assert.AreEqual(1, ctx.UndoHandler.UndoStack.Count);

        // Cleanup
        editor.Stop();
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