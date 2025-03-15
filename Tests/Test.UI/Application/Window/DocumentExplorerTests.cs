using System.Linq;
using System.Threading;
using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Window;

[TestFixture]
public class DocumentExplorerTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        _ClearFilterSettings();
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FilterByName()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());

        MainWindow.Document.EnterValue("FilterStringBox", "box", true);
        Thread.Sleep(500); // Filter string is processed deferred
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());

        MainWindow.Document.EnterValue("FilterStringBox", "_1", true);
        Thread.Sleep(500); // Filter string is processed deferred
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FilterByName_Reset()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        MainWindow.Document.EnterValue("FilterStringBox", "_1", true);
        Thread.Sleep(500); // Filter string is processed deferred
        Assert.That(MainWindow.Document.GetItems().Count() == 1);

        MainWindow.Document.Click("ResetNameFilter");
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FilterByName_ChangeName()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        MainWindow.Document.EnterValue("FilterStringBox", "_1", true);
        Thread.Sleep(500); // Filter string is processed deferred
        Assert.That(MainWindow.Document.GetItems().Count() == 1);

        var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.IsNotNull(bodyPanel);
        bodyPanel.EnterValue("EntityName", "_1", true);

        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FilterVisible()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);

        var menu = _GetFilterMenu();
        menu.ClickMenuItem("FilterVisible");
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());

        menu = _GetFilterMenu();
        menu.ClickMenuItem("FilterVisible");
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FilterVisible_ChangeVisibility()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        MainWindow.Document.SelectItem("Box_1");

        var menu = _GetFilterMenu();
        menu.ClickMenuItem("FilterVisible");
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());

        var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.IsNotNull(bodyPanel);
        bodyPanel.Click("VisibilityToggle");
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FilterActiveLayer()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        MainWindow.Layers.AddLayer();
        
        var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.IsNotNull(bodyPanel);
        bodyPanel.SelectComboBoxItem("LayerBox", "Unnamed");
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());

        var menu = _GetFilterMenu();
        menu.ClickMenuItem("FilterActiveLayer");
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void FilterActiveLayer_ChangeActiveLayer()
    {
        TestDataGenerator.GenerateBodyReference(MainWindow);
        MainWindow.Layers.AddLayer();

        var menu = _GetFilterMenu();
        menu.ClickMenuItem("FilterActiveLayer");
        Assert.AreEqual(2, MainWindow.Document.GetItems().Count());

        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        MainWindow.Ribbon.SelectComboBoxItem("ActiveLayerSelect", "Unnamed");
        Assert.AreEqual(0, MainWindow.Document.GetItems().Count());

        var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.IsNotNull(bodyPanel);
        bodyPanel.SelectComboBoxItem("LayerBox", "Unnamed");
        Assert.AreEqual(1, MainWindow.Document.GetItems().Count());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SortByName()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        var bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.IsNotNull(bodyPanel);
        bodyPanel.SetValue("EntityName", "Second");

        TestDataGenerator.GenerateBox(MainWindow);
        bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.IsNotNull(bodyPanel);
        bodyPanel.SetValue("EntityName", "Third");

        TestDataGenerator.GenerateBox(MainWindow);
        bodyPanel = MainWindow.PropertyView.FindPanelByClass("BodyPropertyPanel");
        Assert.IsNotNull(bodyPanel);
        bodyPanel.SetValue("EntityName", "First");

        MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect
        CollectionAssert.AreEqual(new []{"Second", "Third", "First"}, MainWindow.Document.GetItems().Select(ti => ti.Text));
        
        var menu = _GetFilterMenu();
        menu.ClickMenuItem("SortByName");
        CollectionAssert.AreEqual(new []{"First", "Second", "Third"}, MainWindow.Document.GetItems().Select(ti => ti.Text));
        
        menu = _GetFilterMenu();
        menu.ClickMenuItem("SortDescending");
        CollectionAssert.AreEqual(new []{"Third", "Second", "First"}, MainWindow.Document.GetItems().Select(ti => ti.Text));
    }

    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SortByType()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        TestDataGenerator.GenerateDatumPlane(MainWindow);
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Viewport.ClickRelative(0.1, 0.1); // Deselect

        CollectionAssert.AreEqual(new []{"Box_1", "DatumPlane_1", "Box_2"}, MainWindow.Document.GetItems().Select(ti => ti.Text));
        
        var menu = _GetFilterMenu();
        menu.ClickMenuItem("SortByType");
        CollectionAssert.AreEqual(new []{"Box_2", "Box_1", "DatumPlane_1"}, MainWindow.Document.GetItems().Select(ti => ti.Text));
        
        menu = _GetFilterMenu();
        menu.ClickMenuItem("SortDescending");
        CollectionAssert.AreEqual(new []{"DatumPlane_1", "Box_2", "Box_1"}, MainWindow.Document.GetItems().Select(ti => ti.Text));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void SortByType_Exclusive()
    {
        var menu = _GetFilterMenu();
        Assert.IsFalse(menu.IsMenuItemChecked("SortByName"));
        Assert.IsFalse(menu.IsMenuItemChecked("SortByType"));
        menu.ClickMenuItem("SortByName");
        menu = _GetFilterMenu();
        Assert.IsTrue(menu.IsMenuItemChecked("SortByName"));
        Assert.IsFalse(menu.IsMenuItemChecked("SortByType"));
        menu.ClickMenuItem("SortByType");
        menu = _GetFilterMenu();
        Assert.IsFalse(menu.IsMenuItemChecked("SortByName"));
        Assert.IsTrue(menu.IsMenuItemChecked("SortByType"));
        menu.ClickMenuItem("SortByType");
        menu = _GetFilterMenu();
        Assert.IsFalse(menu.IsMenuItemChecked("SortByName"));
        Assert.IsFalse(menu.IsMenuItemChecked("SortByType"));
    }

    //--------------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------------

    #region Helper

    ContextMenuAdaptor _GetFilterMenu()
    {
        MainWindow.Document.Click("FilterMenu");
        Assert.IsTrue(ContextMenuAdaptor.IsContextMenuOpen(MainWindow, "DocumentFilterContextMenu"));
        var menu = new ContextMenuAdaptor(MainWindow, "DocumentFilterContextMenu");
        return menu;
    }

    //--------------------------------------------------------------------------------------------------

    void _ClearFilterSettings()
    {
        var menu = _GetFilterMenu();
        if (menu.IsMenuItemChecked("SortByName"))
        {
            menu.ClickMenuItem("SortByName");
            menu = _GetFilterMenu();
        }
        if (menu.IsMenuItemChecked("SortByType"))
        {
            menu.ClickMenuItem("SortByType");
            menu = _GetFilterMenu();
        }
        if (menu.IsMenuItemChecked("SortDescending"))
        {
            menu.ClickMenuItem("SortDescending");
            menu = _GetFilterMenu();
        }
        if (menu.IsMenuItemChecked("FilterVisible"))
        {
            menu.ClickMenuItem("FilterVisible");
            menu = _GetFilterMenu();
        }
        if (menu.IsMenuItemChecked("FilterActiveLayer"))
        {
            menu.ClickMenuItem("FilterActiveLayer");
            menu = _GetFilterMenu();
        }
        Pipe.TypeKey(VirtualKeyShort.ESCAPE); // Close menu
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}