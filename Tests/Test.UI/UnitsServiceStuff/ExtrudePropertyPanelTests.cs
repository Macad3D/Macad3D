using FlaUI.Core.Input;
using Macad.Common;
using Macad.Presentation;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.UnitsServiceStuff;

[TestFixture]
public class ExtrudePropertyPanelTests : UnitSystemUITestBase
{
    FormAdaptor _Panel;
    ViewportAdaptor _Viewport;

    //--------------------------------------------------------------------------------------------------
    // TEST 1 — Create Extrude
    //--------------------------------------------------------------------------------------------------

    [Test, Order(1)]
    public void Test1_CreateExtrude()
    {
        Reset();
        _Viewport = MainWindow.Viewport;
        WaitForViewportReady(_Viewport);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.OpenSplitButtonMenu("CreateSketch");
        Wait.UntilInputIsProcessed();

        MainWindow.Ribbon.ClickSplitButtonMenuItem("WorkplaneXZ");
        WaitForViewportReady(_Viewport);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Sketch);
        Wait.UntilInputIsProcessed();

        MainWindow.Ribbon.ClickButton("CreateRectangleSegment");
        Wait.UntilInputIsProcessed();

        _Viewport.ClickRelative(0.405, 0.461);
        Wait.UntilInputIsProcessed();

        _Viewport.ClickRelative(0.508, 0.520);
        WaitForViewportReady(_Viewport);

        MainWindow.Ribbon.ClickButton("CloseSketchEditor");
        WaitForViewportReady(_Viewport);

        Assert.That(
            UITestHelpers.Until(() =>
                Pipe.GetValue<string>("$Context.EditorState.ActiveTool") == ""
            ),
            Is.True);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Wait.UntilInputIsProcessed();

        Assert.That(MainWindow.Ribbon.IsEnabled("CreateExtrude"), Is.True);
        MainWindow.Ribbon.ClickButton("CreateExtrude");

        _Viewport.ClickRelative(0.5, 0.5);
        WaitForViewportReady(_Viewport);

        Assert.That(
            UITestHelpers.Until(() => !MainWindow.Ribbon.IsChecked("CreateExtrude")),
            Is.True);

        Assert.That(
            UITestHelpers.Until(() =>
                Pipe.GetValue<int>("$Context.WorkspaceController.Selection.SelectedEntities.Count") > 0),
            Is.True);

        _Panel = WaitForPanel("ExtrudePropertyPanel");
        Assert.That(_Panel, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 2 — Depth field exists
    //--------------------------------------------------------------------------------------------------

    [Test, Order(2)]
    public void Test2_DepthFieldExists()
    {
        _Panel = WaitForPanel("ExtrudePropertyPanel");
        Assert.That(_Panel.GetValue<string>("Depth"), Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 3 — Edit Depth
    //--------------------------------------------------------------------------------------------------

    [Test, Order(3)]
    public void Test3_EditDepth_FullPipeline()
    {
        ReselectExtrude();

        var desc = GetLengthDescriptor();
        var uiText = _Panel.GetValue<string>("Depth");

        AppServices.Units.TryParseExpression(uiText, desc, out var kernel);
        var display = UnitConversionService.ConvertToDisplayUnits(kernel, desc.UnitId, desc.PhysicalQuantity);

        var newDisplay = display + 5.0;
        var newKernel = UnitConversionService.ConvertToKernelUnits(newDisplay, desc.UnitId, desc.PhysicalQuantity);
        var formatted = AppServices.Units.Format(newKernel, desc);

        _Panel.EnterValue("Depth", formatted);

        ReselectExtrude();

        var uiTextAfter = _Panel.GetValue<string>("Depth");
        AppServices.Units.TryParseExpression(uiTextAfter, desc, out var kernelAfter);
        var displayAfter = UnitConversionService.ConvertToDisplayUnits(kernelAfter, desc.UnitId, desc.PhysicalQuantity);

        Assert.That(displayAfter, Is.EqualTo(newDisplay).Within(1e-9));
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 4 — Symmetric toggle
    //--------------------------------------------------------------------------------------------------

    [Test, Order(4)]
    public void Test4_SymmetricToggle()
    {
        ReselectExtrude();
        Assert.That(_Panel.IsVisible("Symmetric"), Is.True);

        _Panel.Click("Symmetric");
        _Panel.Click("Symmetric");
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 5 — MergeFaces toggle hidden for Sketch predecessor
    //--------------------------------------------------------------------------------------------------

    [Test, Order(5)]
    public void Test5_MergeFacesToggle_Hidden()
    {
        ReselectExtrude();
        Assert.That(_Panel.IsVisible("MergeFaces"), Is.False);
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 6 — Reselect Target Face tool
    //--------------------------------------------------------------------------------------------------

    [Test, Order(6)]
    public void Test6_ReselectTargetFaceTool()
    {
        ReselectExtrude();

        if (!_Panel.IsVisible("ReselectFaceCommand"))
            Assert.Pass("Reselect Target Face not available for Sketch predecessor.");

        _Panel.Click("ReselectFaceCommand");
        Assert.That(_Panel.GetValue<bool>("IsToolActive"), Is.True);

        _Panel.Click("ReselectFaceCommand");
        Assert.That(_Panel.GetValue<bool>("IsToolActive"), Is.False);
    }

    //--------------------------------------------------------------------------------------------------
    // TEST 7 — Panel updates after reselect
    //--------------------------------------------------------------------------------------------------

    [Test, Order(7)]
    public void Test7_PanelUpdatesAfterReselect()
    {
        ReselectExtrude();

        var desc = GetLengthDescriptor();
        var newDisplay = 12.0;
        var newKernel = UnitConversionService.ConvertToKernelUnits(newDisplay, desc.UnitId, desc.PhysicalQuantity);
        var formatted = AppServices.Units.Format(newKernel, desc);

        _Panel.EnterValue("Depth", formatted);

        ReselectExtrude();

        var uiTextAfter = _Panel.GetValue<string>("Depth");
        AppServices.Units.TryParseExpression(uiTextAfter, desc, out var kernelAfter);
        var displayAfter = UnitConversionService.ConvertToDisplayUnits(kernelAfter, desc.UnitId, desc.PhysicalQuantity);

        Assert.That(displayAfter, Is.EqualTo(newDisplay).Within(1e-9));
    }

    //--------------------------------------------------------------------------------------------------
    // Helper: Reselect Extrude
    //--------------------------------------------------------------------------------------------------

    void ReselectExtrude()
    {
        WaitForViewportReady(_Viewport);

        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        Wait.UntilInputIsProcessed();

        _Viewport.ClickRelative(0.5, 0.5);
        WaitForViewportReady(_Viewport);

        var count = Pipe.GetValue<int>("$Context.WorkspaceController.Selection.SelectedEntities.Count");
        Assert.That(count, Is.GreaterThan(0));

        _Panel = WaitForPanel("ExtrudePropertyPanel");
        Assert.That(_Panel, Is.Not.Null);
    }
}
