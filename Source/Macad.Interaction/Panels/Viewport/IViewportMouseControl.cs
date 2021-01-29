using System.Windows;
using System.Windows.Input;

namespace Macad.Interaction.Panels
{
    public interface IViewportMouseControl
    {
        ViewportController ViewportController { set; }

        void MouseMove(Point pos, MouseDevice mouseDevice);
        void MouseWheel(Point pos, int delta, InputDevice device);
        void MouseDown(Point pos, MouseButton changedButton, MouseDevice mouseDevice);
        void MouseUp(Point pos, MouseButton changedButton, int clickCount, MouseDevice mouseDevice);
        void Cancel();
    }
}