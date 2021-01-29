using System.Windows;

namespace Macad.Interaction.Panels
{
    public interface IViewportTouchControl
    {
        ViewportController ViewportController { set; }

        void TouchDown(int id, Point pos);
        void TouchUp(int id, Point pos);
        void TouchMove(int id, Point pos);
    }
}