using System.Windows;
using System.Windows.Controls;
using System.Windows.Input;

namespace Macad.Presentation;
// https://stackoverflow.com/questions/8203329/moving-to-next-control-on-enter-keypress-in-wpf

public static class GlobalEventHandler
{
    static bool _IsRegistered;

    //--------------------------------------------------------------------------------------------------

    public static void Init()
    {
        if (!_IsRegistered)
        {
            EventManager.RegisterClassHandler(typeof(TextBox), TextBox.KeyDownEvent, new KeyEventHandler(_TextBox_KeyDown));
            _IsRegistered = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _TextBox_KeyDown(object sender, KeyEventArgs e)
    {
        if (e.Key == Key.Enter & (sender as TextBox)?.AcceptsReturn == false) _MoveToNextUIElement(e);
    }

    //--------------------------------------------------------------------------------------------------

    static void _MoveToNextUIElement(KeyEventArgs e)
    {
        // Creating a FocusNavigationDirection object and setting it to a
        // local field that contains the direction selected.
        FocusNavigationDirection focusDirection = FocusNavigationDirection.Next;

        // MoveFocus takes a TraveralReqest as its argument.
        TraversalRequest request = new TraversalRequest(focusDirection);

        // Gets the element with keyboard focus.
        UIElement elementWithFocus = Keyboard.FocusedElement as UIElement;

        // Change keyboard focus.
        if (elementWithFocus != null)
        {
            if (elementWithFocus.MoveFocus(request)) e.Handled = true;
        }
    }
}