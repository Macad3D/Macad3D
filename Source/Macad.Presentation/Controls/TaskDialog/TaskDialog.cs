using System;
using System.Text.RegularExpressions;
using System.Windows;

namespace Macad.Presentation;

public partial class TaskDialog
{
    private const string HtmlHyperlinkPattern = "<a href=\".+\">.+</a>";
    private const string HtmlHyperlinkCapturePattern = "<a href=\"(?<link>.+)\">(?<text>.+)</a>";

    private static readonly Regex _hyperlinkRegex = new Regex(HtmlHyperlinkPattern);
    private static readonly Regex _hyperlinkCaptureRegex = new Regex(HtmlHyperlinkCapturePattern);

    internal const int CommandButtonIDOffset = 2000;
    internal const int RadioButtonIDOffset = 1000;
    internal const int CustomButtonIDOffset = 500;

    /// <summary>
    /// Occurs when a task dialog is about to show.
    /// </summary>
    /// <remarks>
    /// Use this event for both notification and modification of all task
    /// dialog showings. Changes made to the configuration options will be
    /// persisted.
    /// </remarks>
    public static event TaskDialogShowingEventHandler Showing;
    /// <summary>
    /// Occurs when a task dialog has been closed.
    /// </summary>
    public static new event TaskDialogClosedEventHandler Closed;

    /// <summary>
    /// Displays a task dialog with the given configuration options.
    /// </summary>
    /// <param name="options">
    /// A <see cref="T:Macad.Presentation.TaskDialogOptions"/> that specifies the
    /// configuration options for the dialog.
    /// </param>
    /// <returns>
    /// A <see cref="T:Macad.Presentation.TaskDialogResult"/> value that specifies
    /// which button is clicked by the user.
    /// </returns>
    public static TaskDialogResult Show(TaskDialogOptions options)
    {
        TaskDialogResult result = null;

        // Make a copy since we'll let Showing event possibly modify them
        TaskDialogOptions configOptions = options;

        OnShowing(new TaskDialogShowingEventArgs(ref configOptions));

        result = ShowTaskDialog(configOptions);

        OnClosed(new TaskDialogClosedEventArgs(result));

        return result;
    }

    /// <summary>
    /// Displays a task dialog that has a message and that returns a result.
    /// </summary>
    /// <param name="owner">
    /// The <see cref="T:System.Windows.Window"/> that owns this dialog.
    /// </param>
    /// <param name="messageText">
    /// A <see cref="T:System.String"/> that specifies the text to display.
    /// </param>
    /// <returns>
    /// A <see cref="T:Macad.Presentation.TaskDialogResults"/> value that
    /// specifies which button is clicked by the user.
    /// </returns>
    public static TaskDialogResults ShowMessage(Window owner, string messageText)
    {
        TaskDialogOptions options = TaskDialogOptions.Default;

        options.Owner = owner;
        options.Content = messageText;
        options.CommonButtons = TaskDialogCommonButtons.Close;

        return Show(options).Result;
    }
    /// <summary>
    /// Displays a task dialog that has a message and that returns a result.
    /// </summary>
    /// <param name="owner">
    /// The <see cref="T:System.Windows.Window"/> that owns this dialog.
    /// </param>
    /// <param name="messageText">
    /// A <see cref="T:System.String"/> that specifies the text to display.
    /// </param>
    /// <param name="caption">
    /// A <see cref="T:System.String"/> that specifies the title bar
    /// caption to display.
    /// </param>
    /// <returns>
    /// A <see cref="T:Macad.Presentation.TaskDialogResults"/> value that
    /// specifies which button is clicked by the user.
    /// </returns>
    public static TaskDialogResults ShowMessage(Window owner, string messageText, string caption)
    {
        return ShowMessage(owner, messageText, caption, TaskDialogCommonButtons.Close);
    }
    /// <summary>
    /// Displays a task dialog that has a message and that returns a result.
    /// </summary>
    /// <param name="owner">
    /// The <see cref="T:System.Windows.Window"/> that owns this dialog.
    /// </param>
    /// <param name="messageText">
    /// A <see cref="T:System.String"/> that specifies the text to display.
    /// </param>
    /// <param name="caption">
    /// A <see cref="T:System.String"/> that specifies the title bar
    /// caption to display.
    /// </param>
    /// <param name="buttons">
    /// A <see cref="T:Macad.Presentation.TaskDialogCommonButtons"/> value that
    /// specifies which button or buttons to display.
    /// </param>
    /// <returns>
    /// A <see cref="T:Macad.Presentation.TaskDialogResults"/> value that
    /// specifies which button is clicked by the user.
    /// </returns>
    public static TaskDialogResults ShowMessage(Window owner, string messageText, string caption, TaskDialogCommonButtons buttons)
    {
        return ShowMessage(owner, messageText, caption, buttons, TaskDialogIcon.None);
    }
    /// <summary>
    /// Displays a task dialog that has a message and that returns a result.
    /// </summary>
    /// <param name="owner">
    /// The <see cref="T:System.Windows.Window"/> that owns this dialog.
    /// </param>
    /// <param name="messageText">
    /// A <see cref="T:System.String"/> that specifies the text to display.
    /// </param>
    /// <param name="caption">
    /// A <see cref="T:System.String"/> that specifies the title bar
    /// caption to display.
    /// </param>
    /// <param name="buttons">
    /// A <see cref="T:Macad.Presentation.TaskDialogCommonButtons"/> value that
    /// specifies which button or buttons to display.
    /// </param>
    /// <param name="icon">
    /// A <see cref="T:Macad.Presentation.TaskDialogIcon"/> that specifies the
    /// icon to display.
    /// </param>
    /// <returns>
    /// A <see cref="T:Macad.Presentation.TaskDialogResults"/> value that
    /// specifies which button is clicked by the user.
    /// </returns>
    public static TaskDialogResults ShowMessage(Window owner, string messageText, string caption, TaskDialogCommonButtons buttons, TaskDialogIcon icon)
    {
        TaskDialogOptions options = TaskDialogOptions.Default;

        options.Owner = owner;
        options.Title = caption;
        options.MainInstruction = messageText;
        options.CommonButtons = buttons;
        options.MainIcon = icon;

        return Show(options).Result;
    }

    public static TaskDialogResults ShowMessage(Window owner, string mainInstruction, string messageText, string caption, TaskDialogCommonButtons buttons, TaskDialogIcon icon)
    {
        TaskDialogOptions options = TaskDialogOptions.Default;

        options.Owner = owner;
        options.Title = caption;
        options.MainInstruction = mainInstruction;
        options.Content = messageText;
        options.CommonButtons = buttons;
        options.MainIcon = icon;

        return Show(options).Result;
    }

    /// <summary>
    /// Displays a task dialog that has a message and that returns a result.
    /// </summary>
    /// <param name="owner">
    /// The <see cref="T:System.Windows.Window"/> that owns this dialog.
    /// </param>
    /// <param name="title">
    /// A <see cref="T:System.String"/> that specifies the title bar
    /// caption to display.
    /// </param>
    /// <param name="mainInstruction">
    /// A <see cref="T:System.String"/> that specifies the main text to display.
    /// </param>
    /// <param name="content">
    /// A <see cref="T:System.String"/> that specifies the body text to display.
    /// </param>
    /// <param name="expandedInfo">
    /// A <see cref="T:System.String"/> that specifies the expanded text to display when toggled.
    /// </param>
    /// <param name="verificationText">
    /// A <see cref="T:System.String"/> that specifies the text to display next to a checkbox.
    /// </param>
    /// <param name="footerText">
    /// A <see cref="T:System.String"/> that specifies the footer text to display.
    /// </param>
    /// <param name="buttons">
    /// A <see cref="T:Macad.Presentation.TaskDialogCommonButtons"/> value that
    /// specifies which button or buttons to display.
    /// </param>
    /// <param name="mainIcon">
    /// A <see cref="T:Macad.Presentation.TaskDialogIcon"/> that specifies the
    /// main icon to display.
    /// </param>
    /// <param name="footerIcon">
    /// A <see cref="T:Macad.Presentation.TaskDialogIcon"/> that specifies the
    /// footer icon to display.
    /// </param>
    /// <returns></returns>
    public static TaskDialogResults ShowMessage(Window owner, string title, string mainInstruction, string content, string expandedInfo, string verificationText, string footerText, TaskDialogCommonButtons buttons, TaskDialogIcon mainIcon, TaskDialogIcon footerIcon)
    {
        TaskDialogOptions options = TaskDialogOptions.Default;

        if (owner != null)
            options.Owner = owner;
        if (!String.IsNullOrEmpty(title))
            options.Title = title;
        if (!String.IsNullOrEmpty(mainInstruction))
            options.MainInstruction = mainInstruction;
        if (!String.IsNullOrEmpty(content))
            options.Content = content;
        if (!String.IsNullOrEmpty(expandedInfo))
            options.ExpandedInfo = expandedInfo;
        if (!String.IsNullOrEmpty(verificationText))
            options.VerificationText = verificationText;
        if (!String.IsNullOrEmpty(footerText))
            options.FooterText = footerText;
        options.CommonButtons = buttons;
        options.MainIcon = mainIcon;
        options.FooterIcon = footerIcon;

        return Show(options).Result;
    }

    /// <summary>
    /// Raises the <see cref="E:Showing"/> event.
    /// </summary>
    /// <param name="e">The <see cref="TaskDialogShowingEventArgs"/> instance containing the event data.</param>
    private static void OnShowing(TaskDialogShowingEventArgs e)
    {
        if (Showing != null)
        {
            Showing(null, e);
        }
    }
    /// <summary>
    /// Raises the <see cref="E:Closed"/> event.
    /// </summary>
    /// <param name="e">The <see cref="TaskDialogClosedEventArgs"/> instance containing the event data.</param>
    private static void OnClosed(TaskDialogClosedEventArgs e)
    {
        if (Closed != null)
        {
            Closed(null, e);
        }
    }
    private static TaskDialogResult ShowTaskDialog(TaskDialogOptions options)
    {
        TaskDialog td = new TaskDialog(options.Owner);
        TaskDialogData tdvm = new TaskDialogData(options);

        td.DataContext = tdvm;

        if (options.Owner != null && options.Owner.IsVisible)
        {
            td.Owner = options.Owner;
        }

        td.ShowDialog();

        TaskDialogResult result = null;
        int diagResult = -1;
        TaskDialogResults simpResult = TaskDialogResults.None;
        bool verificationChecked = false;
        int radioButtonResult = -1;
        int? commandButtonResult = null;
        int? customButtonResult = null;

        diagResult = tdvm.DialogResult;
        radioButtonResult = tdvm.RadioResult - RadioButtonIDOffset;
        verificationChecked = tdvm.VerificationChecked;

        if (diagResult >= CommandButtonIDOffset)
        {
            simpResult = TaskDialogResults.Command;
            commandButtonResult = diagResult - CommandButtonIDOffset;
        }
        //else if (diagResult >= RadioButtonIDOffset)
        //{
        //    simpResult = (TaskDialogResults)diagResult;
        //    radioButtonResult = diagResult - RadioButtonIDOffset;
        //}
        else if (diagResult >= CustomButtonIDOffset)
        {
            simpResult = TaskDialogResults.Custom;
            customButtonResult = diagResult - CustomButtonIDOffset;
        }
        // This occurs usually when the red X button is clicked
        else if (diagResult == -1)
        {
            simpResult = TaskDialogResults.Cancel;
        }
        else
        {
            simpResult = (TaskDialogResults)diagResult;
        }

        result = new TaskDialogResult(
            simpResult,
            (String.IsNullOrEmpty(options.VerificationText) ? null : (bool?)verificationChecked),
            ((options.RadioButtons == null || options.RadioButtons.Length == 0) ? null : (int?)radioButtonResult),
            ((options.CommandButtons == null || options.CommandButtons.Length == 0) ? null : commandButtonResult),
            ((options.CustomButtons == null || options.CustomButtons.Length == 0) ? null : customButtonResult));

        return result;
    }
    private static bool DetectHyperlinks(string content, string expandedInfo, string footerText)
    {
        return DetectHyperlinks(content) || DetectHyperlinks(expandedInfo) || DetectHyperlinks(footerText);
    }
    private static bool DetectHyperlinks(string text)
    {
        if (String.IsNullOrEmpty(text))
            return false;
        return _hyperlinkRegex.IsMatch(text);
    }
}