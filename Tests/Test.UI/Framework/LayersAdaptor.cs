using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class LayersAdaptor : FormAdaptor
{
    readonly Tree _ListControl;

    //--------------------------------------------------------------------------------------------------

    public LayersAdaptor(Window window)
    {
        _FormControl = window.FindFirstDescendant(cf => cf.ByClassName("LayersPanel"));
        Assert.That(_FormControl, Is.Not.Null);
        _ListControl = _FormControl.FindFirstDescendant(cf => cf.ByAutomationId("LayerList")).AsTree();
        Assert.That(_ListControl, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    public TreeItemAdaptor GetLayerItem(int index)
    {
        Assert.That(_ListControl.Items.Length, Is.GreaterThan(index));
        return new TreeItemAdaptor(_ListControl.Items[index]);
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<TreeItemAdaptor> GetLayerItems()
    {
        return _ListControl.Items.Select(treeItem => new TreeItemAdaptor(treeItem));
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<TreeItemAdaptor> GetSelectedItems()
    {
        return GetLayerItems().Where(lbi => lbi.IsSelected);
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SelectItem(int index)
    {
        GetLayerItem(index)?.Click();
    }

    //--------------------------------------------------------------------------------------------------

    public TreeItemAdaptor AddLayer()
    {
        Click("CreateLayer");
        return GetLayerItems().Last();
    }

    //--------------------------------------------------------------------------------------------------

}