using System.Drawing;
using FlaUI.Core.Input;
using Macad.Test.UI.Framework;
using NUnit.Framework;

namespace Macad.Test.UI.Application.Window;

[TestFixture]
public class MainWindowTests : UITestBase
{
    [SetUp]
    public void SetUp()
    {
        Reset();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DragTitlebarForMovement()
    {
        var startLeft = MainWindow.Window.BoundingRectangle.Left;
        var startTop = MainWindow.Window.BoundingRectangle.Top;
        Mouse.Drag(new Point(startLeft + 200, startTop + 10), 20, 100);

        Assert.That(MainWindow.Window.BoundingRectangle.Left - startLeft, Is.EqualTo(20));
        Assert.That(MainWindow.Window.BoundingRectangle.Top - startTop, Is.EqualTo(100));
    }

    //--------------------------------------------------------------------------------------------------

}