using System;
using System.ComponentModel;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;

namespace Macad.Presentation;

/// <summary>
/// Interaction logic for CommandLink.xaml
/// </summary>
public partial class CommandLink : UserControl
{
    /// <summary>
    /// Occurs when a <see cref="CommandLink"/> is clicked.
    /// </summary>
    [Category("Behavior")]
    public event RoutedEventHandler Click
    {
        add
        {
            CommandLinkButton.Click += value;
        }
        remove
        {
            CommandLinkButton.Click -= value;
        }
    }

    /// <summary>
    /// Initializes a new instance of the <see cref="CommandLink"/> class.
    /// </summary>
    public CommandLink()
    {
        this.InitializeComponent();

        this.Loaded += new RoutedEventHandler(CommandLink_Loaded);
    }

    /// <summary>
    /// Handles the Loaded event of the CommandLink control.
    /// </summary>
    /// <param name="sender">The source of the event.</param>
    /// <param name="e">The <see cref="System.Windows.RoutedEventArgs"/> instance containing the event data.</param>
    private void CommandLink_Loaded(object sender, RoutedEventArgs e)
    {
        if (this.DataContext != null && this.DataContext is TaskDialogButtonData)
        {
            if ((this.DataContext as TaskDialogButtonData).IsDefault)
            {
                CommandLinkButton.Focus();
            }
        }
    }
}

//--------------------------------------------------------------------------------------------------

/// <summary>
/// Chops up multiline command link text appropriately.
/// </summary>
internal class CommandLinkTextConverter : IValueConverter
{
    public object Convert(object value, Type targetType, object parameter, System.Globalization.CultureInfo culture)
    {
        if (value == null)
            return null;

        if (value.GetType() != typeof(String))
        {
            throw new InvalidOperationException();
        }
        if (targetType != typeof(String))
        {
            throw new InvalidOperationException();
        }

        if (parameter == null || parameter.ToString() == "1")
        {
            if (value.ToString().Contains("\n"))
            {
                return value.ToString().Substring(0, value.ToString().IndexOf("\n"));
            }
            else
            {
                return value;
            }
        }
        else if (parameter.ToString() == "2")
        {
            if (value.ToString().Contains("\n"))
            {
                return value.ToString().Substring(value.ToString().IndexOf("\n") + 1);
            }
            else
            {
                return null;
            }
        }
        else
        {
            return value;
        }
    }
    public object ConvertBack(object value, Type targetType, object parameter, System.Globalization.CultureInfo culture)
    {
        throw new NotSupportedException();
    }
}

//--------------------------------------------------------------------------------------------------

/// <summary>
/// Determines visibility for command link extra text.
/// </summary>
internal class CommandLinkExtraTextVisibilityConverter : IValueConverter
{
    public object Convert(object value, Type targetType, object parameter, System.Globalization.CultureInfo culture)
    {
        if (value == null)
            return Visibility.Collapsed;

        if (value.GetType() != typeof(String))
        {
            throw new InvalidOperationException();
        }
        if (targetType != typeof(Visibility))
        {
            throw new InvalidOperationException();
        }

        return (String.IsNullOrEmpty(value.ToString()) || !value.ToString().Contains("\n")) ? Visibility.Collapsed : Visibility.Visible;
    }
    public object ConvertBack(object value, Type targetType, object parameter, System.Globalization.CultureInfo culture)
    {
        throw new NotSupportedException();
    }
}

//--------------------------------------------------------------------------------------------------