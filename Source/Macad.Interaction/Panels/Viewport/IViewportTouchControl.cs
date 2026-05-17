using System.Windows;
using System.Windows.Input;

namespace Macad.Interaction.Panels;

public interface IViewportTouchControl
{
    void TouchDown(int id, ViewportController viewport, Point pos, ModifierKeys modifierKeys);
    void TouchUp(int id, ViewportController viewport, Point pos, ModifierKeys modifierKeys);
    void TouchMove(int id, ViewportController viewport, Point pos, ModifierKeys modifierKeys);
}