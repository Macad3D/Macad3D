using System.Collections.Generic;
using System.Windows;

namespace Macad.Presentation;

public class ScreenTip : Fluent.ScreenTip
{
    #region Dependency Properties

    public static readonly DependencyProperty CommandProperty = DependencyProperty.Register(
        nameof(Command), typeof(IActionCommand), typeof(ScreenTip), new PropertyMetadata(default(IActionCommand)));

    public IActionCommand Command
    {
        get { return (IActionCommand)GetValue(CommandProperty); }
        set { SetValue(CommandProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty CommandParameterProperty = DependencyProperty.Register(
        nameof(CommandParameter), typeof(object), typeof(ScreenTip), new PropertyMetadata(default(object)));

    public object CommandParameter
    {
        get { return (object)GetValue(CommandParameterProperty); }
        set { SetValue(CommandParameterProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty ShortcutProperty = DependencyProperty.Register(
        nameof(Shortcut), typeof(string), typeof(ScreenTip), new PropertyMetadata(default(string)));

    public string Shortcut
    {
        get { return (string)GetValue(ShortcutProperty); }
        set { SetValue(ShortcutProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    public ScreenTip()
    {
        Opened += _OnToolTipOpened;
    }

    //--------------------------------------------------------------------------------------------------

    void _OnToolTipOpened(object sender, RoutedEventArgs e)
    {
        IActionCommand cmd = Command;
        if(cmd == null)
            return;

        object param = CommandParameter;
        Title = cmd.GetTitle(param) ?? cmd.GetHeader(param);
        Text = cmd.GetDescription(param);
        HelpTopic = cmd.GetHelpTopic(param);
        Shortcut = cmd.GetShortcut(param);
    }

    //--------------------------------------------------------------------------------------------------

}