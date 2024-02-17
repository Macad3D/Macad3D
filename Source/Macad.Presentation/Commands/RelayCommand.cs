using System;
using System.Windows.Input;

namespace Macad.Presentation;

/// <summary>
/// Defines a command that is relayed to a pre-defined delegate handler.
/// </summary>
public class RelayCommand : ICommand
{
    readonly Action _execute;
    readonly Func<bool> _canExecute;

    /// <summary>
    /// Initializes a new instance of the <see cref="RelayCommand"/> class.
    /// </summary>
    /// <param name="execute">A method to execute when the command fires.</param>
    public RelayCommand(Action execute)
        : this(execute, null)
    {
    }
    /// <summary>
    /// Initializes a new instance of the <see cref="RelayCommand"/> class.
    /// </summary>
    /// <param name="execute">A method to execute when the command fires.</param>
    /// <param name="canExecute">A method to execute to determine whether the command can execure.</param>
    public RelayCommand(Action execute, Func<bool> canExecute)
    {
        if (execute == null)
            throw new ArgumentNullException(nameof(execute));

        _execute = execute;
        _canExecute = canExecute;
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
        return (_canExecute is null) || _canExecute.Invoke();
    }

    [System.Diagnostics.DebuggerStepThrough]
    public bool CanExecute()
    {
        return (_canExecute is null) || _canExecute.Invoke();
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
        _execute();
    }

    public void Execute()
    {
        _execute();
    }
}