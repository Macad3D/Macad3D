namespace Macad.Presentation;

/// <summary>
/// Specifies identifiers to indicate the return value of a task dialog box.
/// </summary>
public enum TaskDialogResults
{
    // IMPORTANT
    // Values 0 - 8 are in a very specific order to match that of the DialogResult
    //enum in the WinForms namespace. This explains the skipped numbers, as they
    //are unused values (such as Abort and Ignore). Close is not technically in the
    //original enum, but is consistent with Win32 TaskDialogIndirect behavior.

    /// <summary>
    /// Nothing is returned from the dialog box.
    /// </summary>
    None = 0,
    /// <summary>
    /// The dialog box return value is Ok (usually sent from a button
    /// labeled Ok).
    /// </summary>
    Ok = TaskDialogCommonButtons.OK,
    /// <summary>
    /// The dialog box return value is Yes (usually sent from a button
    /// labeled Yes).
    /// </summary>
    Yes = TaskDialogCommonButtons.Yes,
    /// <summary>
    /// The dialog box return value is No (usually sent from a button
    /// labeled No).
    /// </summary>
    No = TaskDialogCommonButtons.No,
    /// <summary>
    /// The dialog box return value is Cancel (usually sent from a button
    /// labeled Cancel). Can also be as a result of clicking the red X in
    /// the top right corner.
    /// </summary>
    Cancel = TaskDialogCommonButtons.Cancel,
    /// <summary>
    /// The dialog box return value is Retry (usually sent from a button
    /// labeled Retry).
    /// </summary>
    Retry = TaskDialogCommonButtons.Retry,
    /// <summary>
    /// The dialog box return value is Close (usually sent from a button
    /// labeled Close),
    /// </summary>
    Close = TaskDialogCommonButtons.Close,
    /// <summary>
    /// The dialog box return value is a custom command (usually sent from
    /// a command button).
    /// </summary>
    Command = 0x1000,
    /// <summary>
    /// The dialog box return value is a custom button (usually sent from
    /// a custom-defined button).
    /// </summary>
    Custom = 0x1001
}

/// <summary>
/// Specifies data for the return values of a task dialog box.
/// </summary>
public class TaskDialogResult
{
    /// <summary>
    /// Represents a result with no data.
    /// </summary>
    public static readonly TaskDialogResult Empty = new TaskDialogResult();

    /// <summary>
    /// Gets the <see cref="T:TaskDialogResults"/> of the TaskDialog.
    /// </summary>
    public TaskDialogResults Result { get; private set; }
    /// <summary>
    /// Gets a value indicating whether or not the verification checkbox
    /// was checked. A null value indicates that the checkbox wasn't shown.
    /// </summary>
    public bool? VerificationChecked { get; private set; }
    /// <summary>
    /// Gets the zero-based index of the radio button that was clicked.
    /// A null value indicates that no radio button was clicked.
    /// </summary>
    public int? RadioButtonResult { get; private set; }
    /// <summary>
    /// Gets the zero-based index of the command button that was clicked.
    /// A null value indicates that no command button was clicked.
    /// </summary>
    public int? CommandButtonResult { get; private set; }
    /// <summary>
    /// Gets the zero-based index of the custom button that was clicked.
    /// A null value indicates that no custom button was clicked.
    /// </summary>
    public int? CustomButtonResult { get; private set; }

    /// <summary>
    /// Initializes a new instance of the <see cref="T:TaskDialog.TaskDialogResult"/> class.
    /// </summary>
    private TaskDialogResult()
    {
    }
    /// <summary>
    /// Initializes a new instance of the <see cref="TaskDialogResult"/> class.
    /// </summary>
    /// <param name="result">The simple TaskDialog result.</param>
    /// <param name="verificationChecked">Wether the verification checkbox was checked.</param>
    /// <param name="radioButtonResult">The radio button result, if any.</param>
    /// <param name="commandButtonResult">The command button result, if any.</param>
    /// <param name="customButtonResult">The custom button result, if any.</param>
    internal TaskDialogResult(TaskDialogResults result, bool? verificationChecked = null, int? radioButtonResult = null, int? commandButtonResult = null, int? customButtonResult = null)
        : this()
    {
        Result = result;
        VerificationChecked = verificationChecked;
        RadioButtonResult = radioButtonResult;
        CommandButtonResult = commandButtonResult;
        CustomButtonResult = customButtonResult;
    }
}