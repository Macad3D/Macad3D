using System.Windows;

namespace Macad.Presentation;

public enum ControlPosition
{
    Standalone,
    Left,
    HCenter,
    Right
}

public class GroupControls : DependencyObject
{
    public static readonly DependencyProperty PositionProperty =
        DependencyProperty.RegisterAttached("Position", typeof(ControlPosition), typeof(GroupControls), new PropertyMetadata(ControlPosition.Standalone));

    public static ControlPosition GetPosition(DependencyObject d)
    {
        return (ControlPosition)d.GetValue(PositionProperty);
    }

    public static void SetPosition(DependencyObject d, ControlPosition value)
    {
        d.SetValue(PositionProperty, value);
    }
}