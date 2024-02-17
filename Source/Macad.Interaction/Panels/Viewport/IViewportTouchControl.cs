using System.Windows;
using System.Windows.Input;

namespace Macad.Interaction.Panels;

public interface IViewportTouchControl
{
    ViewportController ViewportController { set; }

    void TouchDown(int id, Point pos, ModifierKeys modifierKeys);
    void TouchUp(int id, Point pos, ModifierKeys modifierKeys);
    void TouchMove(int id, Point pos, ModifierKeys modifierKeys);
}