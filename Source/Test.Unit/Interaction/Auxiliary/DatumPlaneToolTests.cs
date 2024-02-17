using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core.Auxiliary;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Interaction.Auxiliary;

[TestFixture]
public class DatumPlaneToolTests
{
    const string _BasePath = @"Interaction\Auxiliary\DatumPlane";
    static string _SourceImagePath = Path.Combine(TestData.TestDataDirectory, @"SourceData\Images\coat-of-arms.png");

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
    public void Create()
    {
        var ctx = Context.Current;

        var plane = DatumPlane.Create();
        Assert.AreEqual("DatumPlane_1", plane.Name);
        ctx.Document.Add(plane);

        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Create01"));
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Select()
    {
        var ctx = Context.Current;

        var datumPlane = DatumPlane.Create();
        ctx.Document.Add(datumPlane);

        Assert.Multiple(() =>
        {
            ctx.ViewportController.ZoomFitAll();
            ctx.MoveTo(300, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Select01"));

            ctx.ClickAt(300, 300);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.SequenceEqual(new[] {datumPlane}));
            ctx.MoveTo(1,1);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Select02"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ColorFromLayer()
    {
        var ctx = Context.Current;
        ctx.Layers.ActiveLayer.Color = new Color(1, 0, 0);

        var plane = DatumPlane.Create();
        Assert.AreEqual("DatumPlane_1", plane.Name);
        ctx.Document.Add(plane);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ColorFromLayer01"));

            ctx.Layers.ActiveLayer.Color = new Color(0, 1, 0);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ColorFromLayer02"));

            var layer = new Layer()
            {
                Color = new Color(0, 0, 1)
            };
            ctx.Layers.Add(layer);
            plane.Layer = layer;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "ColorFromLayer03"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateWithImage()
    {
        var ctx = Context.Current;

        var imagePlane = DatumPlane.Create();
        imagePlane.ImageFilePath = _SourceImagePath;
        ctx.Document.Add(imagePlane);

        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithImage01"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectWithImage()
    {
        var ctx = Context.Current;

        var imagePlane = DatumPlane.Create();
        imagePlane.ImageFilePath = _SourceImagePath;
        ctx.Document.Add(imagePlane);

        Assert.Multiple(() =>
        {
            ctx.ViewportController.ZoomFitAll();
            ctx.MoveTo(300, 300);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectWithImage01"));

            ctx.ClickAt(300, 300);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.SequenceEqual(new[] {imagePlane}));
            ctx.MoveTo(1,1);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectWithImage02"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transform()
    {
        var ctx = Context.Current;

        var plane = DatumPlane.Create();
        ctx.Document.Add(plane);

        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.ClickAt(300, 300);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.SequenceEqual(new[] {plane}));
            Assert.That(WorkspaceCommands.Transform.CanExecute());
            WorkspaceCommands.Transform.Execute();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Transform01"));

            ctx.MoveTo(219,267);
            ctx.ViewportController.MouseDown();
            ctx.MoveTo(151,313);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Transform02")); // AIS local transformation working

            ctx.ViewportController.MouseUp();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "Transform03")); // Updating transformation working
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectInSelectionContext()
    {
        var ctx = Context.Current;

        var datumPlane = DatumPlane.Create();
        ctx.Document.Add(datumPlane);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            var selCtx = ctx.WorkspaceController.Selection.OpenContext(SelectionContext.Options.IncludeAll);
            ctx.ClickAt(300, 300);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.SequenceEqual(new[] {datumPlane}));

            ctx.WorkspaceController.Selection.CloseContext(selCtx);
            ctx.WorkspaceController.Selection.SelectEntity(null);
            ctx.ClickAt(300, 300);
            Assert.That(ctx.WorkspaceController.Selection.SelectedEntities.SequenceEqual(new[] {datumPlane}));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void HideWithLayer()
    {
        var ctx = Context.Current;

        var datumPlane = DatumPlane.Create();
        ctx.Document.Add(datumPlane);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            ctx.Document.Layers.ActiveLayer.IsVisible = false;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HideWithLayer01"));
            ctx.ClickAt(300, 300);
            Assert.AreEqual(0, ctx.WorkspaceController.Selection.SelectedEntities.Count);

            ctx.Document.Layers.ActiveLayer.IsVisible = true;
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "HideWithLayer02"));
            ctx.ClickAt(300, 300);
            Assert.AreEqual(1, ctx.WorkspaceController.Selection.SelectedEntities.Count);
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsolateSelection()
    {
        var ctx = Context.Current;

        var datumPlane = DatumPlane.Create();
        ctx.Document.Add(datumPlane);
        ctx.ViewportController.ZoomFitAll();
        var body1 = TestData.GetBodyFromBRep(@"SourceData\BRep\ImprintRingFace.brep");

        Assert.Multiple(() =>
        {
            ctx.WorkspaceController.Selection.SelectEntity(body1);
            WorkspaceCommands.ToggleIsolateSelection.Execute();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "IsolateSelection01"));
            WorkspaceCommands.ToggleIsolateSelection.Execute();

            ctx.WorkspaceController.Selection.SelectEntity(datumPlane);
            WorkspaceCommands.ToggleIsolateSelection.Execute();
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "IsolateSelection02"));
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SelectAsWorkingPlane()
    {
        var ctx = Context.Current;
        ctx.Workspace.GridEnabled = true;
        ctx.Workspace.GridStep = 15.0;

        var datumPlane = DatumPlane.Create();
        datumPlane.Position = new Pnt(5, 10, 10);
        ctx.Document.Add(datumPlane);
        ctx.ViewportController.ZoomFitAll();

        Assert.Multiple(() =>
        {
            WorkspaceCommands.AlignWorkingPlane.Execute();
            ctx.ClickAt(382, 262);
            AssertHelper.IsSameViewport(Path.Combine(_BasePath, "SelectAsWorkingPlane01"));
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Clone()
    {
        var ctx = Context.Current;
        ctx.Workspace.GridEnabled = true;
        ctx.Workspace.GridStep = 15.0;

        var datumPlane = DatumPlane.Create();
        datumPlane.Position = new Pnt(5, 10, 10);
        ctx.Document.Add(datumPlane);
        ctx.WorkspaceController.Selection.SelectEntity(datumPlane);

        Assert.IsTrue(WorkspaceCommands.DuplicateEntity.CanExecute());
        WorkspaceCommands.DuplicateEntity.Execute();
        Assert.AreEqual(2, ctx.Document.Cast<DatumPlane>().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateUndoRedo()
    {
        var ctx = Context.Current;
        Assert.IsFalse(ctx.UndoHandler.CanUndo);

        Assert.IsTrue(AuxiliaryCommands.CreateDatumPlane.CanExecute());
        AuxiliaryCommands.CreateDatumPlane.Execute();
        Assert.AreEqual(1, ctx.Document.EntityCount);
        var planeGuid = ctx.Document.Get(0).Guid;
        Assert.IsTrue(ctx.UndoHandler.CanUndo);

        ctx.UndoHandler.DoUndo(1);
        Assert.AreEqual(0, ctx.Document.EntityCount);
        Assert.IsNull(ctx.Document.FindInstance(planeGuid));
        Assert.IsFalse(ctx.UndoHandler.CanUndo);
        Assert.IsTrue(ctx.UndoHandler.CanRedo);

        ctx.UndoHandler.DoRedo(1);
        Assert.AreEqual(1, ctx.Document.EntityCount);
        Assert.IsNotNull(ctx.Document.FindInstance(planeGuid));
        Assert.IsTrue(ctx.UndoHandler.CanUndo);
        Assert.IsFalse(ctx.UndoHandler.CanRedo);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Delete()
    {
        var ctx = Context.Current;
        AuxiliaryCommands.CreateDatumPlane.Execute();
        Assert.AreEqual(1, ctx.Document.Cast<DatumPlane>().Count());
        Assert.IsTrue(WorkspaceCommands.DeleteEntity.CanExecute());
        WorkspaceCommands.DeleteEntity.Execute();
        Assert.AreEqual(0, ctx.Document.Cast<DatumPlane>().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IgnoreAspectOnDeserialization()
    {
        var datumPlane = DatumPlane.Create();
        datumPlane.KeepAspectRatio = false;
        datumPlane.SizeX = 9.0;
        datumPlane.SizeY = 12.0;
        datumPlane.KeepAspectRatio = true;
        var serialized = Serializer.Serialize(datumPlane);
        var datumPlane2 = Serializer.Deserialize<DatumPlane>(serialized);
        Assert.AreEqual(9.0, datumPlane2.SizeX);
        Assert.AreEqual(12.0, datumPlane2.SizeY);
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UnicodePath()
    {
        // Write
        var filePath = Path.Combine(TestData.TempDirectory, $"TestImage_{TestData.UnicodeTestString}.png");
        File.Copy(_SourceImagePath, filePath, true);

        var ctx = Context.Current;

        var imagePlane = DatumPlane.Create();
        imagePlane.ImageFilePath = filePath;
        ctx.Document.Add(imagePlane);

        ctx.ViewportController.ZoomFitAll();
        AssertHelper.IsSameViewport(Path.Combine(_BasePath, "CreateWithImage01"));

        File.Delete(filePath);
    }
}