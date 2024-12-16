using System.IO;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Test.Utils;
using Macad.Interaction.Editors.Shapes;
using Macad.Occt;
using NUnit.Framework;
using Macad.Core.Shapes;
using System.Linq;
using Macad.Core.Topology;

namespace Macad.Test.Unit.Interaction.Primitives;

[TestFixture]
public class BoxToolTests
{
    const string _BasePath = @"Interaction\Primitives\Box";

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
    public void CreateBox()
    {
        var ctx = Context.Current;

        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        // Left corner
        ctx.ViewportController.MouseMove(new Point(50, 250));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox1"));

        // Right corner
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        ctx.ViewportController.MouseMove(new Point(450, 250));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox2"));

        // Height
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        ctx.ViewportController.MouseMove(new Point(450, 200));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox3"));

        // Create
        ctx.ViewportController.MouseDown();
        ctx.ViewportController.MouseUp();
        ctx.ViewportController.MouseMove(new Point(0, 0));
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBox4"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CreateBoxClamp()
    {
        var ctx = Context.Current;
        ctx.Workspace.GridStep = 1.5;
        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            // Left corner
            ctx.ClickAt(50, 250);

            // Right corner
            ctx.MoveTo(450, 250, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBoxClamp1"));
            ctx.ClickAt(450, 250, ModifierKeys.Control);

            // Height
            ctx.MoveTo(450, 200, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBoxClamp2"));
            ctx.ClickAt(450, 200, ModifierKeys.Control);

            // Create
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBoxClamp3"));
            var box = (ctx.WorkspaceController.Selection.SelectedEntities.FirstOrDefault() as Body)?.Shape as Box;
            Assert.AreEqual(6.0, box.DimensionX);
            Assert.AreEqual(6.0, box.DimensionY);
            Assert.AreEqual(1.5, box.DimensionZ);
        });
    }
        
    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void CreateBoxClampNegative()
    {
        var ctx = Context.Current;
        ctx.Workspace.GridStep = 1.5;
        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            // Left corner
            ctx.ClickAt(450, 200);

            // Right corner
            ctx.MoveTo(50, 200, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBoxClampNegative1"));
            ctx.ClickAt(50, 200, ModifierKeys.Control);

            // Height
            ctx.MoveTo(50, 250, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBoxClampNegative2"));
            ctx.ClickAt(50, 250, ModifierKeys.Control);

            // Create
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBoxClampNegative3"));
            var box = (ctx.WorkspaceController.Selection.SelectedEntities.FirstOrDefault() as Body)?.Shape as Box;
            Assert.AreEqual(6.0, box.DimensionX);
            Assert.AreEqual(6.0, box.DimensionY);
            Assert.AreEqual(-1.5, box.DimensionZ);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void EditorIdle()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        ctx.WorkspaceController.StartEditor(box);
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
        var box = TestGeomGenerator.CreateBox();
        ctx.WorkspaceController.StartEditor(box);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle01"));
            ctx.WorkspaceController.CurrentEditor.StopTools();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "EditorIdle02"));
            box.RaiseShapeChanged();
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
        var box = TestGeomGenerator.CreateBox();
        ctx.WorkspaceController.StartEditor(box);

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
        var box = TestGeomGenerator.CreateBox();
        ctx.WorkspaceController.StartEditor(box);

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
        var box = TestGeomGenerator.CreateBox();
        box.Body.Rotation = new Quaternion(35.0.ToRad(), 0, 0);
        ctx.WorkspaceController.StartEditor(box);

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
    public void LiveScaleRotatedRolled()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();
        box.Body.Rotation = new Quaternion(0, 0, 180.0.ToRad());
        var startHeight = box.DimensionZ;

        ctx.WorkspaceController.StartEditor(box);

        ctx.ViewportController.ZoomFitAll();
        ctx.MoveTo(250, 132);
        ctx.ViewportController.MouseDown();
        ctx.MoveTo(249, 93);
        ctx.ViewportController.MouseUp();
        Assert.Greater(box.DimensionZ, startHeight);

        // Cleanup
        ctx.WorkspaceController.StopEditor();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleChangeSign()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();

        ctx.WorkspaceController.StartEditor(box);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(51, 365);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(234, 260);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleChangeSign01"));

            ctx.MoveTo(450, 138);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(16, 400);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleChangeSign02"));

            ctx.MoveTo(4, 392);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(430, 140);
            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleChangeSign03"));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleClamped()
    {
        var ctx = Context.Current;
        var box = TestGeomGenerator.CreateBox();

        ctx.WorkspaceController.StartEditor(box);

        ctx.ViewportController.ZoomFitAll();
        ctx.WorkspaceController.Workspace.GridStep = 5.0;
        Assert.Multiple(() =>
        {
            ctx.MoveTo(450, 138);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamped01"));
                            
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(400, 170, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamped02"));
            
            ctx.MoveTo(344, 211, ModifierKeys.Control);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleClamped03"));
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
        var box = TestGeomGenerator.CreateBox();

        ctx.WorkspaceController.StartEditor(box);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(450, 138);
            //AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter01"));
                            
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(400, 170, ModifierKeys.Shift);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter02"));
            ctx.MoveTo(400, 170);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleCenter03"));
            
            ctx.ViewportController.MouseUp();

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateBoxLayerHidden()
    {
        var ctx = Context.Current;
        ctx.Layers.Default.IsVisible = false;
        ctx.WorkspaceController.StartTool(new CreateBoxTool());

        Assert.Multiple(() =>
        {
            ctx.ClickAt(50, 250);
            ctx.MoveTo(450, 250);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBoxHidden01"));
            ctx.ClickAt(450, 250);
            ctx.MoveTo(450, 200);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBoxHidden02"));
            ctx.ClickAt(450, 200);
            ctx.MoveTo(0, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBoxHidden03"));
            ctx.ClickAt(0, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateBoxHidden04"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LiveScaleSnap()
    {
        var ctx = Context.Current;
        ctx.EditorState.SnappingEnabled = true;
        ctx.EditorState.SnapToEdgeSelected = true;

        var box1 = TestGeomGenerator.CreateBox();
        box1.DimensionZ = 12.0;
        box1.Body.Position = new Pnt(20, 0, 0);
        var box2 = TestGeomGenerator.CreateBox();
        ctx.WorkspaceController.StartEditor(box2);

        ctx.ViewportController.ZoomFitAll();
        Assert.Multiple(() =>
        {
            ctx.MoveTo(248, 130);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(163, 188);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "LiveScaleSnap01"));

            ctx.ViewportController.MouseUp();
            Assert.That(box2.DimensionZ, Is.EqualTo(box1.DimensionZ));

            // Cleanup
            ctx.WorkspaceController.StopEditor();
        });
    }
}