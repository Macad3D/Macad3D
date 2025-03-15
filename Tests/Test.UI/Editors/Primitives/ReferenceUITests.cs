using System;
using System.Threading;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Editors.Primitives;

public class ReferenceUITests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateReference()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.That(MainWindow.Ribbon.IsEnabled("CreateReference"), Is.True);
        MainWindow.Ribbon.ClickButton("CreateReference");

        Assert.That(Pipe.GetValue<string>("$Selected.Shape.Name"), Is.EqualTo("Reference"));
        var refPanel = MainWindow.PropertyView.FindPanelByClass("ReferencePropertyPanel");
        Assert.That(refPanel, Is.Not.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ChangeReferencedShape()
    {
        TestDataGenerator.GenerateBox(MainWindow);
        Guid boxGuid = Pipe.GetValue<Guid>("$Selected.Shape.Guid");

        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        Assert.That(MainWindow.Ribbon.IsEnabled("CreateReference"), Is.True);
        MainWindow.Ribbon.ClickButton("CreateReference");

        var refPanel = MainWindow.PropertyView.FindPanelByClass("ReferencePropertyPanel");
        Assert.That(refPanel, Is.Not.Null);
        refPanel.Click("ShapeGuidSelectButton");
        var buttonMenu = MainWindow.FindContextMenu();
        Assert.That(buttonMenu, Is.Not.Null);
        buttonMenu.ClickMenuItem("SelectCurrent");
        Assert.That(Pipe.GetValue<Guid>("$Selected.Shape.Operands.[1].ShapeId"), Is.EqualTo(boxGuid));

        refPanel = MainWindow.PropertyView.FindPanelByClass("ReferencePropertyPanel");
        Assert.That(refPanel, Is.Not.Null);
        refPanel.Click("ShapeGuidSelectButton");
        buttonMenu = MainWindow.FindContextMenu();
        Assert.That(buttonMenu, Is.Not.Null);
        buttonMenu.ClickMenuItem("SelectTop");
        Assert.That(Pipe.GetValue("$Selected.Shape.Operands.[1].ShapeId"), Is.EqualTo("?null"));
    }

    //--------------------------------------------------------------------------------------------------

}