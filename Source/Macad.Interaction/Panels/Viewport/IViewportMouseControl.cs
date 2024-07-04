using System.Windows;
using System.Windows.Input;

namespace Macad.Interaction.Panels;

public enum MouseWheel
{
    Vertical,
    Horizontal
}

//--------------------------------------------------------------------------------------------------

public interface IViewportMouseControl
{
    ViewportController ViewportController { set; }

    void MouseMove(Point pos, MouseDevice mouseDevice, ModifierKeys modifierKeys);
    void MouseWheel(Point pos, MouseWheel wheel, int delta, InputDevice device, ModifierKeys modifierKeys);
    void MouseDown(Point pos, MouseButton changedButton, int clickCount, MouseDevice mouseDevice, ModifierKeys modifierKeys);
    void MouseUp(Point pos, MouseButton changedButton, MouseDevice mouseDevice, ModifierKeys modifierKeys);
    void Cancel();
}

//--------------------------------------------------------------------------------------------------