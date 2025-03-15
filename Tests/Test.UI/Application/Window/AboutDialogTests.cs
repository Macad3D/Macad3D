using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Window;

[TestFixture]
public class AboutDialogTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateNewModelNoChange()
    {
        MainWindow.Ribbon.ClickFileMenuItem("ShowAboutDialog");

        var dlg = new WindowAdaptor(MainWindow, "AboutDialog");
        dlg.Click("CloseBtn");

        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "AboutDialog"));
    }

    //--------------------------------------------------------------------------------------------------

}