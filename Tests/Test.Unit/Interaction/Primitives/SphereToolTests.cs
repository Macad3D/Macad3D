using System.IO;
using System.Linq;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Test.Utils;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Primitives;

[TestFixture]
public class SphereToolTests
{
    const string _BasePath = @"Interaction\Primitives\Sphere";

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
    public void CreateSphere()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateSphereTool());

        // Center point
        ctx.ViewportController.MouseMove(new Point(250, 250));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphere1"));

        // Radius
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        ctx.ViewportController.MouseMove(new Point(450, 250));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphere2"));

        // Create
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        ctx.ViewportController.MouseMove(new Point(0, 0));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphere3"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSphereClamp()
    {
        var ctx = Context.Current;

        ctx.Workspace.GridStep = 1.5;
        ctx.WorkspaceController.StartTool(new CreateSphereTool());

        Assert.Multiple(() =>
        {
            // Center point
            ctx.ClickAt(250, 250);
            // Radius
            ctx.MoveTo(450, 250, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphereClamp1"));
            ctx.ClickAt(450, 250, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphereClamp2"));
            var sphere = ((ctx.WorkspaceController.Selection.SelectedEntities.FirstOrDefault() as Body)?.Shape as Sphere);
            Assert.AreEqual(4.5, sphere.Radius);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EditorIdle()
    {
        var ctx = Context.Current;
        var sphere = TestGeomGenerator.CreateSphere();
        ctx.WorkspaceController.StartEditor(sphere);
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
        var sphere = TestGeomGenerator.CreateSphere();
        ctx.WorkspaceController.StartEditor(sphere);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
            ctx.WorkspaceController.CurrentEditor.StopTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            sphere.RaiseShapeChanged();
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
    public void LiveScale()
    {
        var ctx = Context.Current;
        var sphere = TestGeomGenerator.CreateSphere();
        ctx.WorkspaceController.StartEditor(sphere);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(352, 309);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScale01"));
                            
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(327, 297);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScale02"));
            
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScale03"));
                                
            Assert.IsNull(ctx.TestHudManager.HintMessageOwner);
            Assert.IsEmpty(ctx.TestHudManager.HudElements);

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleCorner()
    {
        var ctx = Context.Current;
        var sphere = TestGeomGenerator.CreateSphere();
        ctx.WorkspaceController.StartEditor(sphere);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(450, 138);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCorner01"));
                            
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(478, 123);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCorner02"));
            
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCorner03"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleRotated()
    {
        var ctx = Context.Current;
        var sphere = TestGeomGenerator.CreateSphere();
        sphere.Body.Rotation = new Quaternion(35.0.ToRad(), 0, 0);
        ctx.WorkspaceController.StartEditor(sphere);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(385, 103);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated01"));
                            
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(415, 74);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated02"));
            
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleRotated03"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
                
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleClamp()
    {
        var ctx = Context.Current;
        var sphere = TestGeomGenerator.CreateSphere();
        ctx.WorkspaceController.StartEditor(sphere);

        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 3.0;
        Assert.Multiple(() =>
        {
            ctx.MoveTo(352, 309, ModifierKeys.Control);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamp01"));
                            
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(327, 297, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamp02"));
            
            ctx.MoveTo(274, 265, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamp03"));
            ctx.ViewportController.MouseUp();

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
                        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleCenter()
    {
        var ctx = Context.Current;
        var sphere = TestGeomGenerator.CreateSphere();
        ctx.WorkspaceController.StartEditor(sphere);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(352, 309, ModifierKeys.Shift);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter01"));
                            
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(274, 265, ModifierKeys.Shift);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter02"));
            ctx.MoveTo(274, 265);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter03"));

            ctx.ViewportController.MouseUp();

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateSphereLayerHidden()
    {
        var ctx = Context.Current;
        ctx.Layers.Default.IsVisible = false;
        ctx.WorkspaceController.StartTool(new CreateSphereTool());

        Assert.Multiple(() =>
        {
            ctx.ClickAt(250, 250);
            ctx.MoveTo(450, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphereHidden01"));
            ctx.ClickAt(450, 250);
            ctx.MoveTo(0, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphereHidden02"));
            ctx.ClickAt(0, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateSphereHidden03"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToEdgeSelected = true;

        var box = TestGeomGenerator.CreateBox();
        box.DimensionZ = 12.0;
        box.Body.Position = new Pnt(20, 0, 0);
        var sphere = TestGeomGenerator.CreateSphere();
        ctx.WorkspaceController.StartEditor(sphere);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(326, 126);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(135, 263);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSnap01"));

            ctx.ViewportController.MouseUp();
            Assert.That(sphere.Radius, Is.EqualTo(11.0));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
}