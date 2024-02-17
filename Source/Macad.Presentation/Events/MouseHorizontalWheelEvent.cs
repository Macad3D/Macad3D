using System;
using System.Windows.Input;

namespace Macad.Presentation;
/*
 * https://stackoverflow.com/questions/4158101/how-to-horizontally-scroll-in-wpf-using-mouse-tilt-wheel
 */

public delegate void MouseHorizontalWheelEventHandler(object sender, MouseHorizontalWheelEventArgs e);

public class MouseHorizontalWheelEventArgs : MouseEventArgs
{
    public int Delta { get; }

    public MouseHorizontalWheelEventArgs(MouseDevice mouse, int timestamp, int delta)
        : base(mouse, timestamp) {
        Delta = delta;
    }
        
    protected override void InvokeEventHandler(Delegate genericHandler, object genericTarget)
    {
        MouseHorizontalWheelEventHandler handler = (MouseHorizontalWheelEventHandler) genericHandler;
        handler(genericTarget, this);
    }
}