using FlaUI.Core.WindowsAPI;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Edit;

[TestFixture]
public class HudElementsTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ValueElement_EnterValues()
    {
        // Init
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");

        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.True);
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
        MainWindow.Viewport.MoveRelative(0.55, 0.6);

        // Enter numbers
        Pipe.TypeText("2");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("4");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("1");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.False);
        Assert.AreEqual("Box_1", Pipe.GetValue<string>("$Selected.Name"));
        Assert.AreEqual(2, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
        Assert.AreEqual(4, Pipe.GetValue<double>("$Selected.Shape.DimensionY"));
        Assert.AreEqual(1, Pipe.GetValue<double>("$Selected.Shape.DimensionZ"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ValueElement_Periods()
    {
        // Init
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.True);
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
        MainWindow.Viewport.MoveRelative(0.55, 0.6);

        // Enter numbers
        Pipe.TypeText("2.4");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("4..5");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText(".8");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.False);
        Assert.AreEqual(2.4, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
        Assert.AreEqual(4.5, Pipe.GetValue<double>("$Selected.Shape.DimensionY"));
        Assert.AreEqual(0.8, Pipe.GetValue<double>("$Selected.Shape.DimensionZ"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void ValueElement_Minus()
    {
        // Init
        MainWindow.Ribbon.SelectTab(RibbonTabs.Edit);
        MainWindow.Ribbon.SetButtonChecked("SnapEnable", true);
        MainWindow.Ribbon.SetButtonChecked("SnapToGrid", true);
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.True);
        MainWindow.Viewport.ClickRelative(0.5, 0.5);
        MainWindow.Viewport.MoveRelative(0.55, 0.6);

        // Enter numbers
        Pipe.TypeText("-2.4");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("4-.5");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("2");
        Pipe.TypeKey(VirtualKeyShort.BACK);
        Pipe.TypeText("-1");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.False);
        Assert.AreEqual(-2.4, Pipe.GetValue<double>("$Selected.Position.X"));
        Assert.AreEqual(4.5, Pipe.GetValue<double>("$Selected.Shape.DimensionY"));
        Assert.AreEqual(-1, Pipe.GetValue<double>("$Selected.Shape.DimensionZ"));
    }

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void ValueElement_Formular()
    {
        // Init
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateBox");
        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.True);
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
        MainWindow.Viewport.MoveRelative(0.55, 0.6);

        // Enter numbers
        Pipe.TypeText("=10/2.5");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("4==5");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("=.8");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.That(MainWindow.Ribbon.IsChecked("CreateBox"), Is.False);
        Assert.AreEqual(4.0, Pipe.GetValue<double>("$Selected.Shape.DimensionX"));
        Assert.AreEqual(45, Pipe.GetValue<double>("$Selected.Shape.DimensionY"));
        Assert.AreEqual(0.8, Pipe.GetValue<double>("$Selected.Shape.DimensionZ"));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ValueElement_EnterSubsequentValues()
    {
        // Init
        MainWindow.Ribbon.SelectTab(RibbonTabs.Model);
        MainWindow.Ribbon.ClickButton("CreateCylinder");

        Assert.That(MainWindow.Ribbon.IsChecked("CreateCylinder"), Is.True);
        MainWindow.Viewport.ClickRelative(0.3, 0.3);
        MainWindow.Viewport.MoveRelative(0.55, 0.6);

        // Enter numbers
        Pipe.TypeText("2");
        Pipe.TypeKey(VirtualKeyShort.ENTER);
        Pipe.TypeText("4");
        Pipe.TypeKey(VirtualKeyShort.ENTER);

        Assert.That(MainWindow.Ribbon.IsChecked("CreateCylinder"), Is.False);
        Assert.AreEqual("Cylinder_1", Pipe.GetValue<string>("$Selected.Name"));
        Assert.AreEqual(2, Pipe.GetValue<double>("$Selected.Shape.Radius"));
        Assert.AreEqual(4, Pipe.GetValue<double>("$Selected.Shape.Height"));
    }

    //--------------------------------------------------------------------------------------------------

}