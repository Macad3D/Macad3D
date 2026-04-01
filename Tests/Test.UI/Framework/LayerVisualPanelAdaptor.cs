using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class LayerVisualPanelAdaptor
{
    public PanelAdaptor Panel { get; }

    public ValueEditBoxAdaptor Transparency { get; }
    public SliderAdaptor TransparencySlider { get; }

    public ToggleButtonAdaptor ModeWireframe { get; }
    public ToggleButtonAdaptor ModeSolid { get; }
    public ToggleButtonAdaptor ModeEdged { get; }

    // LineStyle and LineThickness use ComboBox via PanelAdaptor/FormAdaptor
    public string LineStyleId => "LineStyle";
    public string LineThicknessId => "LineThickness";

    //--------------------------------------------------------------------------------------------------

    public LayerVisualPanelAdaptor(PanelAdaptor panel)
    {
        Panel = panel;
        Assert.That(Panel, Is.Not.Null);

        Transparency = new ValueEditBoxAdaptor(Panel, "TransparencyBox");
        TransparencySlider = new SliderAdaptor(Panel, "TransparencySlider");

        ModeWireframe = new ToggleButtonAdaptor(Panel, "ModeWireframe");
        ModeSolid = new ToggleButtonAdaptor(Panel, "ModeSolid");
        ModeEdged = new ToggleButtonAdaptor(Panel, "ModeEdged");
    }

    //--------------------------------------------------------------------------------------------------

    public void SelectLineStyle(string pattern)
    {
        Panel.SelectComboBoxItem(LineStyleId, pattern);
    }

    //--------------------------------------------------------------------------------------------------

    public void SelectLineThickness(string pattern)
    {
        Panel.SelectComboBoxItem(LineThicknessId, pattern);
    }
}
