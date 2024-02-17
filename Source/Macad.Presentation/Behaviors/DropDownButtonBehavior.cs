using System.Windows;
using System.Windows.Controls.Primitives;

namespace Macad.Presentation;

public class DropDownButtonBehavior : Behavior<ButtonBase>
{
    #region DropDownContent

    public static readonly DependencyProperty DropDownContentProperty = DependencyProperty.Register("DropDownContent", typeof(Popup), typeof(DropDownButtonBehavior));
    public Popup DropDownContent
    {
        get
        {
            return (Popup)GetValue(DropDownContentProperty);
        }
        set
        {
            SetValue(DropDownContentProperty, value);
        }
    }

    #endregion //DropDownContent

    ButtonBase _Button;

    public override void OnAttached(ButtonBase target)
    {
        _Button = target;
        target.Click += target_Click;
        if (DropDownContent != null)
        {
            DropDownContent.PlacementTarget = _Button;
        }
    }

    public override void OnDetached(ButtonBase target)
    {
        target.MouseLeftButtonDown -= target_Click;
    }

    void target_Click(object sender, RoutedEventArgs e)
    {
        _OpenDropDown();
    }

    void _OpenDropDown()
    {
        if (DropDownContent == null)
        {
            // Show context menu instead
            if (_Button?.ContextMenu == null)
                return;

            _Button.ContextMenu.Placement = PlacementMode.Bottom;
            _Button.ContextMenu.PlacementTarget = _Button;
            _Button.ContextMenu.IsOpen = true;
            return;
        }

        if (!DropDownContent.IsOpen)
        {
            DropDownContent.IsOpen = true;
        }
    }
}