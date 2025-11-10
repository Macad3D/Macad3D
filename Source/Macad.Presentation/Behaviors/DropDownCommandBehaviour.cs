using System;
using System.Windows;
using System.Windows.Input;
using Fluent;

namespace Macad.Presentation;

public class FluentDropDownCommandBehaviour : Behavior<DropDownButton>
{
    public static DependencyProperty OpenedCommandProperty = DependencyProperty.Register(nameof(OpenedCommand), typeof(ICommand), typeof(ClickCommandBehavior), new UIPropertyMetadata(null));

    public ICommand OpenedCommand
    {
        get { return (ICommand)GetValue(OpenedCommandProperty); }
        set { SetValue(OpenedCommandProperty, value); }
    }

    public static DependencyProperty OpenedCommandParameterProperty = DependencyProperty.Register(nameof(OpenedCommandParameter), typeof(object), typeof(ClickCommandBehavior), new UIPropertyMetadata(null));

    public object OpenedCommandParameter
    {
        get { return GetValue(OpenedCommandParameterProperty); }
        set { SetValue(OpenedCommandParameterProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static DependencyProperty ClosedCommandProperty = DependencyProperty.Register(nameof(ClosedCommand), typeof(ICommand), typeof(ClickCommandBehavior), new UIPropertyMetadata(null));

    public ICommand ClosedCommand
    {
        get { return (ICommand)GetValue(ClosedCommandProperty); }
        set { SetValue(ClosedCommandProperty, value); }
    }

    public static DependencyProperty ClosedCommandParameterProperty = DependencyProperty.Register(nameof(ClosedCommandParameter), typeof(object), typeof(ClickCommandBehavior), new UIPropertyMetadata(null));

    public object ClosedCommandParameter
    {
        get { return GetValue(ClosedCommandParameterProperty); }
        set { SetValue(ClosedCommandParameterProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnAttached(DropDownButton target)
    {
        target.DropDownOpened += target_DropDownOpened;
        target.DropDownClosed += target_DropDownClosed;
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnDetached(DropDownButton target)
    {
        target.DropDownOpened -= target_DropDownOpened;
        target.DropDownClosed -= target_DropDownClosed;
    }

    //--------------------------------------------------------------------------------------------------

    void target_DropDownOpened(object sender, EventArgs e)
    {
        OpenedCommand?.Execute(OpenedCommandParameter);
    }

    //--------------------------------------------------------------------------------------------------

    void target_DropDownClosed(object sender, EventArgs e)
    {
        ClosedCommand?.Execute(ClosedCommandParameter);
    }

    //--------------------------------------------------------------------------------------------------

}
