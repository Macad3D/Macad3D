using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Windows.Data;
using System.Windows.Input;
using Macad.Common;

namespace Macad.Presentation;

public interface IActionCommand : ICommand
{
    string GetHeader(object parameter);
    string GetTitle(object parameter);
    string GetIcon(object parameter);
    string GetDescription(object parameter);
    string GetHelpTopic(object parameter);
    string GetShortcut(object parameter);
    (object Object, string Path) GetBindingSource(object parameter);
    Binding GetIsCheckedBinding(object parameter);

    //--------------------------------------------------------------------------------------------------

    public static Func<IActionCommand, object, string> GetShortcutDefaultHandler { get; set; }

    protected static string TryFindShortcut(IActionCommand command, object parameter)
    {
        if (GetShortcutDefaultHandler != null)
        {
            return GetShortcutDefaultHandler(command, parameter);
        }

        return null;
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public sealed class ActionCommand : RelayCommand, IActionCommand
{
    public Func<string> Header { get; set; }
    public string GetHeader(object parameter) => Header?.Invoke();

    public Func<string> Title { get; set; }
    public string GetTitle(object parameter) => Title?.Invoke();

    public Func<string> Icon { get; set; }
    public string GetIcon(object parameter) => Icon?.Invoke();

    public Func<string> Description { get; set; }
    public string GetDescription(object parameter) => Description?.Invoke();

    public (object Object, string Path) BindingSource { get; set; }
    public (object Object, string Path) GetBindingSource(object parameter) => BindingSource;

    public Binding IsCheckedBinding { get; set; }
    public Binding GetIsCheckedBinding(object parameter) => IsCheckedBinding;

    public string HelpTopic { get; set; }
    public string GetHelpTopic(object parameter) => HelpTopic;

    public string Shortcut { get; set; }
    public string GetShortcut(object parameter)
    {
        if(!Shortcut.IsNullOrEmpty())
            return Shortcut;
        return IActionCommand.TryFindShortcut(this, parameter);
    }

    //--------------------------------------------------------------------------------------------------

    public ActionCommand(Action execute) : base(execute)
    {
    }

    public ActionCommand(Action execute, Func<bool> canExecute) : base(execute, canExecute)
    {
    }

    //--------------------------------------------------------------------------------------------------

    public event PropertyChangedEventHandler PropertyChanged;

    void RaisePropertyChanged([CallerMemberName] string propertyName = null)
    {
        PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public sealed class ActionCommand<T> : RelayCommand<T>, IActionCommand
{
    public Func<T,string> Header { get; set; }
    public string GetHeader(object parameter) => Header?.Invoke(ConvertParameter(parameter));

    public Func<T,string> Title { get; set; }
    public string GetTitle(object parameter) => Title?.Invoke(ConvertParameter(parameter));

    public Func<T,string> Icon { get; set; }
    public string GetIcon(object parameter) => Icon?.Invoke(ConvertParameter(parameter));

    public Func<T,(object Object, string Path)> BindingSource { get; set; }
    public (object Object, string Path) GetBindingSource(object parameter) => BindingSource?.Invoke(ConvertParameter(parameter)) ?? (null, null);

    public Func<T,string> Description { get; set; }
    public string GetDescription(object parameter) => Description?.Invoke(ConvertParameter(parameter));

    public Func<T,Binding> IsCheckedBinding { get; set; }
    public Binding GetIsCheckedBinding(object parameter) => IsCheckedBinding?.Invoke(ConvertParameter(parameter));

    public Func<T,string> HelpTopic { get; set; }
    public string GetHelpTopic(object parameter) => HelpTopic?.Invoke(ConvertParameter(parameter));

    public Func<T,string> Shortcut { get; set; }
    public string GetShortcut(object parameter)
    {
        return Shortcut?.Invoke(ConvertParameter(parameter)) ?? IActionCommand.TryFindShortcut(this, parameter);
    }

    //--------------------------------------------------------------------------------------------------

    public ActionCommand(Action<T> execute) : base(execute)
    {
    }

    public ActionCommand(Action<T> execute, Predicate<T> canExecute) : base(execute, canExecute)
    {
    }

    public ActionCommand(Action<T> execute, Func<bool> canExecute) : base(execute, canExecute)
    {
    }
        
    //--------------------------------------------------------------------------------------------------

}