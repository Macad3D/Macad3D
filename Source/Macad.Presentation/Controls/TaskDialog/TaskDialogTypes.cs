using System;
using System.Drawing;

namespace Macad.Presentation;

/// <summary>
/// The signature of the callback that recieves notificaitons from a Task Dialog.
/// </summary>
/// <param name="dialog">The active dialog. Use this to manipulate various properties of the dialog as it is displayed.</param>
/// <param name="args">The notification arguments including the type of notification and information for the notification.</param>
/// <param name="callbackData">The value set on TaskDialog.CallbackData</param>
/// <returns>Return value meaning varies depending on the Notification member of args.</returns>
public delegate bool TaskDialogCallback(IActiveTaskDialog dialog, TaskDialogNotificationArgs args, object callbackData);

/// <summary>
/// Specifies the standard buttons that are displayed on a task dialog.
/// </summary>
public enum TaskDialogCommonButtons
{
    /// <summary>
    /// No common buttons.
    /// </summary>
    None = 0,
    /// <summary>
    /// OK common button. If selected Task Dialog will return DialogResult.OK.
    /// </summary>
    OK = 0x0001,
    /// <summary>
    /// Yes common button. If selected Task Dialog will return DialogResult.Yes.
    /// </summary>
    Yes = 0x0002,
    /// <summary>
    /// No common button. If selected Task Dialog will return DialogResult.No.
    /// </summary>
    No = 0x0004,
    /// <summary>
    /// Cancel common button. If selected Task Dialog will return DialogResult.Cancel.
    /// If this button is specified, the dialog box will respond to typical cancel actions (Alt-F4 and Escape).
    /// </summary>
    Cancel = 0x0008,
    /// <summary>
    /// Retry common button. If selected Task Dialog will return DialogResult.Retry.
    /// </summary>
    Retry = 0x0010,
    /// <summary>
    /// Close common button. If selected Task Dialog will return this value.
    /// </summary>
    Close = 0x0020,		
    /// <summary>
    /// The message box displays Yes and No buttons.
    /// </summary>
    YesNo = 0x0006,
    /// <summary>
    /// The message box displays Yes, No, and Cancel buttons.
    /// </summary>
    YesNoCancel = 0x000e,
    /// <summary>
    /// The message box displays OK and Cancel buttons.
    /// </summary>
    OKCancel = 0x0009,
    /// <summary>
    /// The message box displays Retry and Cancel buttons.
    /// </summary>
    RetryCancel = 0x0018,
}

/// <summary>
/// Defines configuration options for showing a task dialog.
/// </summary>
public struct TaskDialogOptions
{
    /// <summary>
    /// The default <see cref="T:TaskDialogOptions"/> to be used
    /// by all new <see cref="T:TaskDialog"/>s.
    /// </summary>
    /// <remarks>
    /// Use this to make application-wide defaults, such as for
    /// the caption.
    /// </remarks>
    public static TaskDialogOptions Default;

    /// <summary>
    /// The owner window of the task dialog box.
    /// </summary>
    public System.Windows.Window Owner;
    /// <summary>
    /// Caption of the window.
    /// </summary>
    public string Title;
    /// <summary>
    /// A large 32x32 icon that signifies the purpose of the dialog, using
    /// one of the built-in system icons.
    /// </summary>
    public TaskDialogIcon MainIcon;
    /// <summary>
    /// A large 32x32 icon that signifies the purpose of the dialog, using
    /// a custom Icon resource. If defined <see cref="MainIcon"/> will be
    /// ignored.
    /// </summary>
    public Icon CustomMainIcon;
    /// <summary>
    /// Principal text.
    /// </summary>
    public string MainInstruction;
    /// <summary>
    /// Supplemental text that expands on the principal text.
    /// </summary>
    public string Content;
    /// <summary>
    /// Extra text that will be hidden by default.
    /// </summary>
    public string ExpandedInfo;
    /// <summary>
    /// Indicates that the expanded info should be displayed when the
    /// dialog is initially displayed.
    /// </summary>
    public bool ExpandedByDefault;
    /// <summary>
    /// Indicates that the expanded info should be displayed at the bottom
    /// of the dialog's footer area instead of immediately after the
    /// dialog's content.
    /// </summary>
    public bool ExpandToFooter;
    /// <summary>
    /// Standard buttons.
    /// </summary>
    public TaskDialogCommonButtons CommonButtons;
    /// <summary>
    /// Application-defined options for the user.
    /// </summary>
    public string[] RadioButtons;
    /// <summary>
    /// Buttons that are not from the set of standard buttons. Use an
    /// ampersand to denote an access key.
    /// </summary>
    public string[] CustomButtons;
    /// <summary>
    /// Command link buttons.
    /// </summary>
    public string[] CommandButtons;
    /// <summary>
    /// Zero-based index of the button to have focus by default.
    /// </summary>
    public int? DefaultButtonIndex;
    /// <summary>
    /// Text accompanied by a checkbox, typically for user feedback such as
    /// Do-not-show-this-dialog-again options.
    /// </summary>
    public string VerificationText;
    /// <summary>
    /// Indicates that the verification checkbox in the dialog is checked
    /// when the dialog is initially displayed.
    /// </summary>
    public bool VerificationByDefault;
    /// <summary>
    /// A small 16x16 icon that signifies the purpose of the footer text,
    /// using one of the built-in system icons.
    /// </summary>
    public TaskDialogIcon FooterIcon;
    /// <summary>
    /// A small 16x16 icon that signifies the purpose of the footer text,
    /// using a custom Icon resource. If defined <see cref="FooterIcon"/>
    /// will be ignored.
    /// </summary>
    public Icon CustomFooterIcon;
    /// <summary>
    /// Additional footer text.
    /// </summary>
    public string FooterText;
    /// <summary>
    /// Indicates that the dialog should be able to be closed using Alt-F4,
    /// Escape, and the title bar's close button even if no cancel button
    /// is specified the CommonButtons.
    /// </summary>
    /// <remarks>
    /// You'll want to set this to true if you use CustomButtons and have
    /// a Cancel-like button in it.
    /// </remarks>
    public bool AllowDialogCancellation;
    /// <summary>
    /// Indicates that a Progress Bar is to be displayed.
    /// </summary>
    /// <remarks>
    /// You can set the state, whether paused, in error, etc., as well as
    /// the range and current value by setting a callback and timer to
    /// control the dialog at custom intervals.
    /// </remarks>
    public bool ShowProgressBar;
    /// <summary>
    /// Indicates that an Marquee Progress Bar is to be displayed.
    /// </summary>
    /// <remarks>
    /// You can set start and stop the animation by setting a callback and
    /// timer to control the dialog at custom intervals.
    /// </remarks>
    public bool ShowMarqueeProgressBar;
    /// <summary>
    /// A callback that receives messages from the Task Dialog when
    /// various events occur.
    /// </summary>
    public TaskDialogCallback Callback;
    /// <summary>
    /// Reference object that is passed to the callback.
    /// </summary>
    public object CallbackData;
    /// <summary>
    /// Indicates that the task dialog's callback is to be called
    /// approximately every 200 milliseconds.
    /// </summary>
    /// <remarks>
    /// Enable this in order to do updates on the task dialog periodically,
    /// such as for a progress bar, current download speed, or estimated
    /// time to complete, etc.
    /// </remarks>
    public bool EnableCallbackTimer;
}

/// <summary>
/// Provides data for all task dialog buttons.
/// </summary>
public class TaskDialogButtonData
{
    /// <summary>
    /// Gets the button's ID value to return when clicked.
    /// </summary>
    public int ID { get; private set; }
    /// <summary>
    /// Gets the button's text label.
    /// </summary>
    public string Text { get; private set; }
    /// <summary>
    /// Gets a value indicating whether or not the button should be the default.
    /// </summary>
    public bool IsDefault { get; private set; }
    /// <summary>
    /// Gets a value indicating whether or not the button should be a cancel.
    /// </summary>
    public bool IsCancel { get; private set; }
    /// <summary>
    /// Gets the button's command.
    /// </summary>
    public System.Windows.Input.ICommand Command { get; private set; }

    /// <summary>
    /// Initializes a new instance of the <see cref="TaskDialogButtonData"/> class.
    /// </summary>
    public TaskDialogButtonData()
    {
    }
    /// <summary>
    /// Initializes a new instance of the <see cref="TaskDialogButtonData"/> struct.
    /// </summary>
    /// <param name="id">The id value for the button.</param>
    /// <param name="text">The text label.</param>
    /// <param name="command">The command to associate.</param>
    /// <param name="isDefault">Whether the button should be the default.</param>
    /// <param name="isCancel">Whether the button should be a cancel.</param>
    public TaskDialogButtonData(int id, string text, System.Windows.Input.ICommand command = null, bool isDefault = false, bool isCancel = false)
    {
        ID = id;
        Text = text;
        Command = command;
        IsDefault = isDefault;
        IsCancel = isCancel;
    }
}

/// <summary>
/// Progress bar state.
/// </summary>
public enum TaskDialogProgressBarState
{
    /// <summary>
    /// Normal.
    /// </summary>
    Normal = 1,

    /// <summary>
    /// Error state.
    /// </summary>
    Error = 2,

    /// <summary>
    /// Paused state.
    /// </summary>
    Paused = 3
}

/// <summary>
/// Defines methods for manipulating an active dialog during a callback.
/// </summary>
/// 
public interface IActiveTaskDialog
{
    // TODO Support more of the methods exposed by VistaActiveTaskDialog class

    /// <summary>
    /// Used to indicate whether the hosted progress bar should be displayed in marquee mode or not.
    /// </summary>
    /// <param name="marquee">Specifies whether the progress bar sbould be shown in Marquee mode.
    /// A value of true turns on Marquee mode.</param>
    /// <returns>If the function succeeds the return value is true.</returns>
    bool SetMarqueeProgressBar(bool marquee);
    /// <summary>
    /// Sets the state of the progress bar.
    /// </summary>
    /// <param name="newState">The state to set the progress bar.</param>
    /// <returns>If the function succeeds the return value is true.</returns>
    bool SetProgressBarState(TaskDialogProgressBarState newState);
    /// <summary>
    /// Set the minimum and maximum values for the hosted progress bar.
    /// </summary>
    /// <param name="minRange">Minimum range value. By default, the minimum value is zero.</param>
    /// <param name="maxRange">Maximum range value.  By default, the maximum value is 100.</param>
    /// <returns>If the function succeeds the return value is true.</returns>
    bool SetProgressBarRange(Int16 minRange, Int16 maxRange);
    /// <summary>
    /// Set the current position for a progress bar.
    /// </summary>
    /// <param name="newPosition">The new position.</param>
    /// <returns>Returns the previous value if successful, or zero otherwise.</returns>
    int SetProgressBarPosition(int newPosition);
    /// <summary>
    /// Sets the animation state of the Marquee Progress Bar.
    /// </summary>
    /// <param name="startMarquee">true starts the marquee animation and false stops it.</param>
    /// <param name="speed">The time in milliseconds between refreshes.</param>
    void SetProgressBarMarquee(bool startMarquee, uint speed);

    string Title { get; set; }
		
    string Content { get; set; }

    string ExpandedInfo { get; set; }

    string FooterText { get; set; }

    string MainInstruction { get; set; }

    /// <summary>
    /// Updates the main instruction icon. Note the type (standard via enum or
    /// custom via Icon type) must be used when upating the icon.
    /// </summary>
    /// <param name="icon">Task Dialog standard icon.</param>
    void UpdateMainIcon(TaskDialogIcon icon);
    /// <summary>
    /// Updates the main instruction icon. Note the type (standard via enum or
    /// custom via Icon type) must be used when upating the icon.
    /// </summary>
    /// <param name="icon">The icon to set.</param>
    void UpdateMainIcon(Icon icon);
    /// <summary>
    /// Updates the footer icon. Note the type (standard via enum or
    /// custom via Icon type) must be used when upating the icon.
    /// </summary>
    /// <param name="icon">Task Dialog standard icon.</param>
    void UpdateFooterIcon(TaskDialogIcon icon);
    /// <summary>
    /// Updates the footer icon. Note the type (standard via enum or
    /// custom via Icon type) must be used when upating the icon.
    /// </summary>
    /// <param name="icon">The icon to set.</param>
    void UpdateFooterIcon(Icon icon);
}

/// <summary>
/// Task Dialog callback notifications. 
/// </summary>
public enum TaskDialogNotification
{
    /// <summary>
    /// Sent by the Task Dialog once the dialog has been created and before it is displayed.
    /// The value returned by the callback is ignored.
    /// </summary>
    Created = 0,

    //// Spec is not clear what this is so not supporting it.
    ///// <summary>
    ///// Sent by the Task Dialog when a navigation has occurred.
    ///// The value returned by the callback is ignored.
    ///// </summary>   
    // Navigated = 1,

    /// <summary>
    /// Sent by the Task Dialog when the user selects a button or command link in the task dialog.
    /// The button ID corresponding to the button selected will be available in the
    /// TaskDialogNotificationArgs. To prevent the Task Dialog from closing, the application must
    /// return true, otherwise the Task Dialog will be closed and the button ID returned to via
    /// the original application call.
    /// </summary>
    ButtonClicked = 2,            // wParam = Button ID

    /// <summary>
    /// Sent by the Task Dialog when the user clicks on a hyperlink in the Task Dialog’s content.
    /// The string containing the HREF of the hyperlink will be available in the
    /// TaskDialogNotificationArgs. To prevent the TaskDialog from shell executing the hyperlink,
    /// the application must return TRUE, otherwise ShellExecute will be called.
    /// </summary>
    HyperlinkClicked = 3,            // lParam = (LPCWSTR)pszHREF

    /// <summary>
    /// Sent by the Task Dialog approximately every 200 milliseconds when TaskDialog.CallbackTimer
    /// has been set to true. The number of milliseconds since the dialog was created or the
    /// notification returned true is available on the TaskDialogNotificationArgs. To reset
    /// the tickcount, the application must return true, otherwise the tickcount will continue to
    /// increment.
    /// </summary>
    Timer = 4,            // wParam = Milliseconds since dialog created or timer reset

    /// <summary>
    /// Sent by the Task Dialog when it is destroyed and its window handle no longer valid.
    /// The value returned by the callback is ignored.
    /// </summary>
    Destroyed = 5,

    /// <summary>
    /// Sent by the Task Dialog when the user selects a radio button in the task dialog.
    /// The button ID corresponding to the button selected will be available in the
    /// TaskDialogNotificationArgs.
    /// The value returned by the callback is ignored.
    /// </summary>
    RadioButtonClicked = 6,            // wParam = Radio Button ID

    /// <summary>
    /// Sent by the Task Dialog once the dialog has been constructed and before it is displayed.
    /// The value returned by the callback is ignored.
    /// </summary>
    DialogConstructed = 7,

    /// <summary>
    /// Sent by the Task Dialog when the user checks or unchecks the verification checkbox.
    /// The verificationFlagChecked value is available on the TaskDialogNotificationArgs.
    /// The value returned by the callback is ignored.
    /// </summary>
    VerificationClicked = 8,             // wParam = 1 if checkbox checked, 0 if not, lParam is unused and always 0

    /// <summary>
    /// Sent by the Task Dialog when the user presses F1 on the keyboard while the dialog has focus.
    /// The value returned by the callback is ignored.
    /// </summary>
    Help = 9,

    /// <summary>
    /// Sent by the task dialog when the user clicks on the dialog's expando button.
    /// The expanded value is available on the TaskDialogNotificationArgs.
    /// The value returned by the callback is ignored.
    /// </summary>
    ExpandoButtonClicked = 10            // wParam = 0 (dialog is now collapsed), wParam != 0 (dialog is now expanded)
}

/// <summary>
/// Arguments passed to the TaskDialog callback.
/// </summary>
public class TaskDialogNotificationArgs
{
    /// <summary>
    /// What the TaskDialog callback is a notification of.
    /// </summary>
    private TaskDialogNotification notification;
    /// <summary>
    /// The button ID if the notification is about a button. This a DialogResult
    /// value or the ButtonID member of a TaskDialogButton set in the
    /// TaskDialog.Buttons or TaskDialog.RadioButtons members.
    /// </summary>
    private int buttonId;
    /// <summary>
    /// The HREF string of the hyperlink the notification is about.
    /// </summary>
    private string hyperlink;
    /// <summary>
    /// The number of milliseconds since the dialog was opened or the last time the
    /// callback for a timer notification reset the value by returning true.
    /// </summary>
    private uint timerTickCount;
    /// <summary>
    /// The state of the verification flag when the notification is about the verification flag.
    /// </summary>
    private bool verificationFlagChecked;
    /// <summary>
    /// The state of the dialog expando when the notification is about the expando.
    /// </summary>
    private bool expanded;
    private TaskDialogOptions config;

    /// <summary>
    /// What the TaskDialog callback is a notification of.
    /// </summary>
    public TaskDialogNotification Notification
    {
        get { return this.notification; }
        set { this.notification = value; }
    }
    /// <summary>
    /// The button ID if the notification is about a button. This a DialogResult
    /// value or the ButtonID member of a TaskDialogButton set in the
    /// TaskDialog.Buttons member.
    /// </summary>
    public int ButtonId
    {
        get { return this.buttonId; }
        set { this.buttonId = value; }
    }
    /// <summary>
    /// The HREF string of the hyperlink the notification is about.
    /// </summary>
    public string Hyperlink
    {
        get { return this.hyperlink; }
        set { this.hyperlink = value; }
    }
    /// <summary>
    /// The number of milliseconds since the dialog was opened or the last time the
    /// callback for a timer notification reset the value by returning true.
    /// </summary>
    public uint TimerTickCount
    {
        get { return this.timerTickCount; }
        set { this.timerTickCount = value; }
    }
    /// <summary>
    /// The state of the verification flag when the notification is about the verification flag.
    /// </summary>
    public bool VerificationFlagChecked
    {
        get { return this.verificationFlagChecked; }
        set { this.verificationFlagChecked = value; }
    }
    /// <summary>
    /// The state of the dialog expando when the notification is about the expando.
    /// </summary>
    public bool Expanded
    {
        get { return this.expanded; }
        set { this.expanded = value; }
    }
    /// <summary>
    /// Gets or sets the configuration options for the dialog.
    /// </summary>
    /// <remarks>
    /// Changes to any of the options will be ignored.
    /// </remarks>
    public TaskDialogOptions Config
    {
        get { return this.config; }
        set { this.config = value; }
    }
}

/// <summary>
/// The System icons the TaskDialog supports.
/// </summary>
public enum TaskDialogIcon
{
    /// <summary>
    /// No Icon.
    /// </summary>
    None = 0,
    /// <summary>
    /// System warning icon.
    /// </summary>
    Warning, 
    /// <summary>
    /// System Error icon.
    /// </summary>
    Error, 
    /// <summary>
    /// System Information icon.
    /// </summary>
    Information,
    Question
}