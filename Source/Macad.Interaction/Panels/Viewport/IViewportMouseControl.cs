using System;
using System.Windows;
using System.Windows.Input;

namespace Macad.Interaction.Panels;

public enum MouseWheel
{
    Vertical,
    Horizontal
}

//--------------------------------------------------------------------------------------------------

[Flags]
public enum MouseButtons
{
    None     = 0,
    Left     = 1 << 0,
    Middle   = 1 << 1,
    Right    = 1 << 2,
    XButton1 = 1 << 3,
    XButton2 = 1 << 4,
}

//--------------------------------------------------------------------------------------------------

public interface IViewportMouseControl
{
    void MouseMove(ViewportController viewport, Point pos, MouseButtons pressedButtons, ModifierKeys modifierKeys);
    void MouseWheel(ViewportController viewport, Point pos, MouseWheel wheel, int delta, MouseButtons pressedButtons, ModifierKeys modifierKeys);
    void MouseDown(ViewportController viewport, Point pos, MouseButtons changedButtons, int clickCount, MouseButtons pressedButtons, ModifierKeys modifierKeys);
    void MouseUp(ViewportController viewport, Point pos, MouseButtons changedButtons, MouseButtons pressedButtons, ModifierKeys modifierKeys);
    void Cancel();
}

//--------------------------------------------------------------------------------------------------