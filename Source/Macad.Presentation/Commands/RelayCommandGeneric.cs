using System;
using System.Globalization;
using System.Windows.Input;

namespace Macad.Presentation;

/// <summary>
/// Defines a command that is relayed to a pre-defined delegate handler.
/// </summary>
public class RelayCommand<T> : ICommand
{
    readonly Action<T> _execute;
    readonly Predicate<T> _canExecute;
    readonly Func<bool> _canExecute2;

    /// <summary>
    /// Initializes a new instance of the <see cref="RelayCommand"/> class.
    /// </summary>
    /// <param name="execute">A method to execute when the command fires.</param>
    public RelayCommand(Action<T> execute)
    {
        _execute = execute ?? throw new ArgumentNullException(nameof(execute));
    }

    /// <summary>
    /// Initializes a new instance of the <see cref="RelayCommand"/> class.
    /// </summary>
    /// <param name="execute">A method to execute when the command fires.</param>
    /// <param name="canExecute">A method to execute to determine whether the command can execure.</param>
    public RelayCommand(Action<T> execute, Predicate<T> canExecute)
    {
        _execute = execute ?? throw new ArgumentNullException(nameof(execute));
        _canExecute = canExecute;
    }

    /// <summary>
    /// Initializes a new instance of the <see cref="RelayCommand"/> class.
    /// </summary>
    /// <param name="execute">A method to execute when the command fires.</param>
    /// <param name="canExecute">A method to execute to determine whether the command can execure.</param>
    public RelayCommand(Action<T> execute, Func<bool> canExecute)
    {
        _execute = execute ?? throw new ArgumentNullException(nameof(execute));
        _canExecute2 = canExecute;
    }

    /// <summary>
    /// Defines the method that determines whether the command can execute in its current state.
    /// </summary>
    /// <param name="parameter">Data used by the command.  If the command does not require data to be passed, this object can be set to null.</param>
    /// <returns>
    /// true if this command can be executed; otherwise, false.
    /// </returns>
    [System.Diagnostics.DebuggerStepThrough]
    public bool CanExecute(object parameter)
    {
        if(_canExecute != null)
            return _canExecute.Invoke(ConvertParameter(parameter));

        if (_canExecute2 != null)
            return _canExecute2.Invoke();

        return true;
    }

    /// <summary>
    /// Occurs when changes occur that affect whether or not the command should execute.
    /// </summary>
    public event EventHandler CanExecuteChanged
    {
        add { CommandManager.RequerySuggested += value; }
        remove { CommandManager.RequerySuggested -= value; }
    }

    /// <summary>
    /// Defines the method to be called when the command is invoked.
    /// </summary>
    /// <param name="parameter">Data used by the command.  If the command does not require data to be passed, this object can be set to null.</param>
    public void Execute(object parameter)
    {
        _execute(ConvertParameter(parameter));
    }
    /// <summary>
    /// Defines the method to be called when the command is invoked.
    /// </summary>
    /// <param name="parameter">Data used by the command.  If the command does not require data to be passed, this object can be set to null.</param>
    public void Execute(T parameter)
    {
        _execute(parameter);
    }

    protected T ConvertParameter(object parameter)
    {
        if (parameter is string)
        {
            if (typeof(T) == typeof(string))
                return (T)parameter;

            var s = (string)parameter;
            if (string.IsNullOrEmpty(s))
                return default(T);

            if (typeof(T).IsEnum)
                return (T)Enum.Parse(typeof(T), s, true);

            return (T)Convert.ChangeType(s, typeof(T), CultureInfo.InvariantCulture);
        }

        if (parameter is T)
        {
            return (T)parameter;
        }

        if (parameter == null)
        {
            if (typeof(T) == typeof(double))
                return (T) (object) double.NaN;

            if (typeof(T) == typeof(float))
                return (T) (object) float.NaN;

            if (typeof(T) == typeof(int))
                return (T) (object) int.MinValue;
        }

        return default(T);
    }
}