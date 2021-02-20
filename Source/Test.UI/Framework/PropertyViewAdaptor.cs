using FlaUI.Core.AutomationElements;
using FlaUI.Core.AutomationElements.Infrastructure;
using NUnit.Framework;

namespace Macad.Test.UI.Framework
{
    public class PropertyViewAdaptor
    {
        readonly AutomationElement _ViewControl;
        readonly AutomationElement _PaneControl;

        //--------------------------------------------------------------------------------------------------

        public PropertyViewAdaptor(Window window)
        {
            _ViewControl = window.FindFirstDescendant(cf => cf.ByClassName("PropertiesPanel"));
            Assume.That(_ViewControl, Is.Not.Null);
            _PaneControl = _ViewControl.FindFirstChild();
            Assume.That(_PaneControl, Is.Not.Null);
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
}