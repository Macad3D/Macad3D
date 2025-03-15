using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Window;

[TestFixture]
public class ShortcutDialogTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ShowCheatSheet()
    {
        MainWindow.Click("ToolbarShowShortcutCheatSheet");

        var dlg = new WindowAdaptor(MainWindow, "ShortcutCheatSheet");
        dlg.Click("CloseBtn");

        Assert.IsFalse(WindowAdaptor.IsWindowOpen(MainWindow, "ShortcutCheatSheet"));
    }

    //--------------------------------------------------------------------------------------------------

}