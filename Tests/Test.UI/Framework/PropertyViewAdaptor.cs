using FlaUI.Core.AutomationElements;
using NUnit.Framework;
using System.Collections.Generic;
using System.Linq;

namespace Macad.Test.UI.Framework;

public class PropertyViewAdaptor
{
    readonly AutomationElement _ViewControl;
    readonly AutomationElement _PaneControl;

    //--------------------------------------------------------------------------------------------------

    public PanelAdaptor GetPanel(string className)
    {
        var control = _PaneControl.FindFirstDescendant(cf => cf.ByClassName(className));
        Assert.That(control, Is.Not.Null, $"Panel '{className}' not found in PropertyView.");
        return new PanelAdaptor(control);
    }

    //--------------------------------------------------------------------------------------------------

    public LayerVisualPanelAdaptor GetLayerVisualPanel()
    {
        var panel = GetPanel("LayerVisualPanel");
        return new LayerVisualPanelAdaptor(panel);
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<FormAdaptor> FindPanelsByClass(string className)
    {
        var controls = _PaneControl.FindAllDescendants(cf => cf.ByClassName(className));
        return controls.Select(c => new FormAdaptor(c));
    }

    //--------------------------------------------------------------------------------------------------

    public PropertyViewAdaptor(Window window)
    {
        _ViewControl = window.FindFirstDescendant(cf => cf.ByClassName("PropertiesPanel"));
        Assert.That(_ViewControl, Is.Not.Null);
        _PaneControl = _ViewControl.FindFirstChild();
        Assert.That(_PaneControl, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    public FormAdaptor FindPanelByClass(string className)
    {
        var control = _PaneControl.FindFirstDescendant(cf => cf.ByClassName(className));
        return control != null ? new FormAdaptor(control) : null;
    }

    //--------------------------------------------------------------------------------------------------

    public string GetBodyName()
    {
        var bodyPanel = FindPanelByClass("BodyPropertyPanel");
        Assert.That(bodyPanel, Is.Not.Null);
        return bodyPanel.GetValue<string>("BodyName");
    }

    //--------------------------------------------------------------------------------------------------

    public string GetSelectedShapeName()
    {
        var bodyShapeControl = _PaneControl.FindFirstDescendant(cf => cf.ByClassName("BodyShapePropertyPanel"));
        Assert.That(bodyShapeControl, Is.Not.Null);
        var shapeTree = bodyShapeControl.FindFirstChild("ShapeTree")?.AsTree();
        Assert.That(shapeTree, Is.Not.Null);
        var shapeTreeItem = shapeTree.SelectedTreeItem;
        Assert.That(shapeTreeItem, Is.Not.Null);
        return shapeTreeItem.AutomationId;
    }

    //--------------------------------------------------------------------------------------------------

    public int GetPanelCount()
    {
        return _PaneControl.FindAllChildren(cd => cd.ByClassName("Expander")).Length;
    }

    //--------------------------------------------------------------------------------------------------

}