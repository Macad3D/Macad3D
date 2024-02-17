using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Linq;
using System.Windows.Input;
using Macad.Common;

namespace Macad.Presentation;

/// <summary>
/// Provides commands and properties to the emulated TaskDialog view.
/// </summary>
public sealed class TaskDialogData : BaseObject, IActiveTaskDialog
{
    static readonly TimeSpan _CallbackTimerInterval = new TimeSpan(0, 0, 0, 0, 200);

    static bool? _IsInDesignMode;
    [System.Diagnostics.CodeAnalysis.SuppressMessage(
        "Microsoft.Security",
        "CA2122:DoNotIndirectlyExposeMethodsWithLinkDemands",
        Justification = "The security risk here is neglectible.")]
    internal static bool IsInDesignMode
    {
        get
        {
            if (!_IsInDesignMode.HasValue)
            {
                var prop = DesignerProperties.IsInDesignModeProperty;
                _IsInDesignMode
                    = (bool)DependencyPropertyDescriptor
                            .FromProperty(prop, typeof(System.Windows.FrameworkElement))
                            .Metadata.DefaultValue;

                // Just to be sure
                if (!_IsInDesignMode.Value
                    && System.Diagnostics.Process.GetCurrentProcess().ProcessName.StartsWith
                        ("devenv", StringComparison.Ordinal))
                {
                    _IsInDesignMode = true;
                }
            }

            return _IsInDesignMode.Value;
        }
    }

    TaskDialogOptions _Options;
    List<TaskDialogButtonData> _NormalButtons;
    List<TaskDialogButtonData> _CommandLinks;
    List<TaskDialogButtonData> _RadioButtons;
    int _DialogResult = -1;
    int _RadioResult = -1;
    bool _ExpandedInfoVisible;
    bool _VerificationChecked;
    bool _PreventClose;
    bool _ProgressBarMarqueeEnabled;
    double _ProgressBarMin;
    double _ProgressBarMax;
    double _ProgressBarValue;
    System.Windows.Threading.DispatcherTimer _CallbackTimer;
    DateTime _CallbackTimerStart;

    ICommand _CommandNormalButton;
    ICommand _CommandCommandLink;
    ICommand _CommandRadioButton;
    ICommand _CommandHyperlink;

    /// <summary>
    /// Initializes a new instance of the <see cref="TaskDialogData"/> class.
    /// </summary>
    public TaskDialogData()
    {
        _ProgressBarMin = 0d;
        _ProgressBarMax = 100d;
    }
    /// <summary>
    /// Initializes a new instance of the <see cref="TaskDialogData"/> class.
    /// </summary>
    /// <param name="options">Options to use.</param>
    public TaskDialogData(TaskDialogOptions options)
        : this()
    {
        _Options = options;

        _ExpandedInfoVisible = options.ExpandedByDefault;
        _VerificationChecked = options.VerificationByDefault;

        if (options.EnableCallbackTimer)
        {
            // By default it will run on the default dispatcher and with Background priority
            _CallbackTimer = new System.Windows.Threading.DispatcherTimer();

            _CallbackTimer.Interval = _CallbackTimerInterval;
            _CallbackTimer.Tick += CallbackTimer_Tick;
        }

        // If radio buttons are defined, set the radio result to the default selected radio
        if (RadioButtons.Count > 0)
        {
            _RadioResult = RadioButtons[DefaultButtonIndex].ID;
        }
    }

    /// <summary>
    /// Gets the window start position.
    /// </summary>
    public System.Windows.WindowStartupLocation StartPosition
    {
        get
        {
            return (_Options.Owner == null) ? System.Windows.WindowStartupLocation.CenterScreen : System.Windows.WindowStartupLocation.CenterOwner;
        }
    }
    /// <summary>
    /// Gets the window caption.
    /// </summary>
    public string Title
    {
        get
        {
            return String.IsNullOrEmpty(_Options.Title) ? AppDomain.CurrentDomain.FriendlyName : _Options.Title;
        }
        set
        {
            _Options.Title = value;

            RaisePropertyChanged();
        }
    }
    /// <summary>
    /// Gets the principal text for the dialog.
    /// </summary>
    public string MainInstruction
    {
        get
        {
            return _Options.MainInstruction;
        }
        set
        {
            _Options.MainInstruction = value;

            RaisePropertyChanged();
        }
    }
    /// <summary>
    /// Gets the supplemental text for the dialog.
    /// </summary>
    public string Content
    {
        get
        {
            return _Options.Content;
        }
        set
        {
            _Options.Content = value;

            RaisePropertyChanged();
        }
    }

    public string ExpandedInfo
    {
        get
        {
            return _Options.ExpandedInfo;
        }
        set
        {
            _Options.ExpandedInfo = value;

            RaisePropertyChanged("ContentExpandedInfo");
            RaisePropertyChanged("FooterExpandedInfo");
        }
    }
    /// <summary>
    /// Gets the expanded info text for the dialog's content area.
    /// </summary>
    public string ContentExpandedInfo
    {
        get
        {
            return _Options.ExpandToFooter ? null : _Options.ExpandedInfo;
        }
    }
    /// <summary>
    /// Gets the expanded info text for the dialog's footer area.
    /// </summary>
    public string FooterExpandedInfo
    {
        get
        {
            return _Options.ExpandToFooter ? _Options.ExpandedInfo : null;
        }
    }
    /// <summary>
    /// Gets a value indicating whether or not any expanded info text has
    /// been set.
    /// </summary>
    public bool HasExpandedInfo
    {
        get
        {
            return !String.IsNullOrEmpty(_Options.ExpandedInfo);
        }
    }
    /// <summary>
    /// Gets or sets a value indicating whether expanded info is visible.
    /// </summary>
    public bool ExpandedInfoVisible
    {
        get
        {
            return _ExpandedInfoVisible;
        }
        set
        {
            if (_ExpandedInfoVisible == value)
                return;

            _ExpandedInfoVisible = value;

            RaisePropertyChanged();
            RaisePropertyChanged("ContentExpandedInfoVisible");
            RaisePropertyChanged("FooterExpandedInfoVisible");

            var args = new TaskDialogNotificationArgs();

            args.Config = _Options;
            args.Notification = TaskDialogNotification.ExpandoButtonClicked;
            args.Expanded = _ExpandedInfoVisible;

            _OnCallback(args);
        }
    }
    /// <summary>
    /// Gets or sets a value indicating whether content area expanded info is visible.
    /// </summary>
    public bool ContentExpandedInfoVisible
    {
        get
        {
            return !_Options.ExpandToFooter && _ExpandedInfoVisible;
        }
    }
    /// <summary>
    /// Gets or sets a value indicating whether footer area expanded info is visible.
    /// </summary>
    public bool FooterExpandedInfoVisible
    {
        get
        {
            return _Options.ExpandToFooter && _ExpandedInfoVisible;
        }
    }
    /// <summary>
    /// Gets the verification text.
    /// </summary>
    public string VerificationText
    {
        get
        {
            return _Options.VerificationText;
        }
        set
        {
            _Options.VerificationText = value;
            RaisePropertyChanged();
        }
    }
    /// <summary>
    /// Gets or sets whether the verification checkbox was checked.
    /// </summary>
    public bool VerificationChecked
    {
        get
        {
            return _VerificationChecked;
        }
        set
        {
            if (_VerificationChecked == value)
                return;

            _VerificationChecked = value;

            RaisePropertyChanged();

            var args = new TaskDialogNotificationArgs();

            args.Config = _Options;
            args.Notification = TaskDialogNotification.VerificationClicked;
            args.VerificationFlagChecked = _VerificationChecked;

            _OnCallback(args);
        }
    }
    /// <summary>
    /// Gets the footer text.
    /// </summary>
    public string FooterText
    {
        get
        {
            return _Options.FooterText;
        }
        set
        {
            _Options.FooterText = value;
            RaisePropertyChanged();
        }
    }
    /// <summary>
    /// Gets the type of the main icon.
    /// </summary>
    public TaskDialogIcon MainIconType
    {
        get
        {
            return _Options.MainIcon;
        }
        set
        {
            _Options.MainIcon = value;

            RaisePropertyChanged();
        }
    }
    /// <summary>
    /// Gets the main icon.
    /// </summary>
    public System.Windows.Media.ImageSource MainIcon
    {
        get
        {
            return ConvertIconToImageSource(_Options.MainIcon, _Options.CustomMainIcon, true);
        }
    }
    /// <summary>
    /// Gets the footer icon.
    /// </summary>
    public System.Windows.Media.ImageSource FooterIcon
    {
        get
        {
            return ConvertIconToImageSource(_Options.FooterIcon, _Options.CustomFooterIcon, false);
        }
    }
    /// <summary>
    /// Gets the default button index.
    /// </summary>
    public int DefaultButtonIndex
    {
        get
        {
            return _Options.DefaultButtonIndex ?? 0;
        }
        set
        {
            _Options.DefaultButtonIndex = value;
            RaisePropertyChanged();
        }
    }
    /// <summary>
    /// Gets a value indicating whether or not Alt-F4, Esc, and the red X
    /// close button should work.
    /// </summary>
    public bool AllowDialogCancellation
    {
        get
        {
            // Alt-F4 should only work if there is a close button or some other
            //normal button marked as IsCancel or its been overridden
            return _Options.AllowDialogCancellation
                   || NormalButtons.Any(button => button.IsCancel)
                   || ((_Options.CommandButtons == null || _Options.CommandButtons.Length == 0)
                       && (_Options.RadioButtons == null || _Options.RadioButtons.Length == 0)
                       && (_Options.CustomButtons == null || _Options.CustomButtons.Length == 0));
        }
    }
    /// <summary>
    /// Gets a value indicating whether to show a progress bar.
    /// </summary>
    public bool ShowProgressBar
    {
        get
        {
            return _Options.ShowProgressBar || _Options.ShowMarqueeProgressBar;
        }
    }
    /// <summary>
    /// Gets a value indicating whether to show an indeterminate progress bar or a regular one.
    /// </summary>
    public bool ProgressBarIndeterminate
    {
        get
        {
            return _Options.ShowMarqueeProgressBar && _ProgressBarMarqueeEnabled;
        }
        private set
        {
            _Options.ShowMarqueeProgressBar = value;

            RaisePropertyChanged("ShowProgressBar");
            RaisePropertyChanged();
        }
    }
    /// <summary>
    /// Gets or sets the progress bar's minimum value.
    /// </summary>
    public double ProgressBarMinimum
    {
        get
        {
            return _ProgressBarMin;
        }
        private set
        {
            _ProgressBarMin = value;

            RaisePropertyChanged();
        }
    }
    /// <summary>
    /// Gets or sets the progress bar's maximum value.
    /// </summary>
    public double ProgressBarMaximum
    {
        get
        {
            return _ProgressBarMax;
        }
        private set
        {
            _ProgressBarMax = value;

            RaisePropertyChanged();
        }
    }
    /// <summary>
    /// Gets or sets the progress bar's current value.
    /// </summary>
    public double ProgressBarValue
    {
        get
        {
            return _ProgressBarValue;
        }
        private set
        {
            _ProgressBarValue = value;

            RaisePropertyChanged();
        }
    }
    /// <summary>
    /// Gets the button labels.
    /// </summary>
    public List<TaskDialogButtonData> NormalButtons
    {
        get
        {
            if (_NormalButtons == null)
            {
                // Even if no buttons are specified, show a Close button at minimum
                if (CommandLinks.Count == 0
                    && RadioButtons.Count == 0
                    && (_Options.CustomButtons == null || _Options.CustomButtons.Length == 0)
                    && _Options.CommonButtons == TaskDialogCommonButtons.None)
                {
                    _NormalButtons = new List<TaskDialogButtonData>();
                    _NormalButtons.Add(new TaskDialogButtonData(
                                           (int)TaskDialogCommonButtons.Close,
                                           TaskDialogCommonButtons.Close.ToString(),
                                           NormalButtonCommand,
                                           true, true));
                }
                else if (RadioButtons.Count > 0)
                {
                    _NormalButtons = new List<TaskDialogButtonData>();
                    _NormalButtons.Add(new TaskDialogButtonData(
                                           (int)TaskDialogCommonButtons.OK,
                                           TaskDialogCommonButtons.OK.ToString(),
                                           NormalButtonCommand,
                                           true));
                }
                else if (_Options.CustomButtons != null)
                {
                    int i = 0;
                    _NormalButtons =
                        (from button in _Options.CustomButtons
                         select new TaskDialogButtonData(
                             TaskDialog.CustomButtonIDOffset + i,
                             button,
                             NormalButtonCommand,
                             DefaultButtonIndex == i++,
                             button.Contains(TaskDialogCommonButtons.Cancel.ToString()) || button.Contains(TaskDialogCommonButtons.Close.ToString())))
                        .ToList();
                }
                else if (_Options.CommonButtons != TaskDialogCommonButtons.None)
                {
                    _NormalButtons = new List<TaskDialogButtonData>();
                    int i = 0;
                    for (var buttonBitValue = 1; buttonBitValue <= Enum.GetValues(typeof(TaskDialogCommonButtons)).Cast<int>().Max(); buttonBitValue <<= 1)
                    {
                        if (_Options.CommonButtons.HasFlag((TaskDialogCommonButtons) buttonBitValue))
                        {
                            _NormalButtons.Add(
                                new TaskDialogButtonData(
                                    buttonBitValue, 
                                    "_" + ((TaskDialogCommonButtons) buttonBitValue).ToString(), 
                                    NormalButtonCommand, 
                                    DefaultButtonIndex == i++,
                                    (TaskDialogCommonButtons) buttonBitValue == TaskDialogCommonButtons.Cancel || (TaskDialogCommonButtons) buttonBitValue == TaskDialogCommonButtons.Close));
                        }
                    }
                }
                else
                {
                    _NormalButtons = new List<TaskDialogButtonData>();
                }
            }

            return _NormalButtons;
        }
    }
    /// <summary>
    /// Gets the command link labels.
    /// </summary>
    public List<TaskDialogButtonData> CommandLinks
    {
        get
        {
            if (_CommandLinks == null)
            {
                if (_Options.CommandButtons == null || _Options.CommandButtons.Length == 0)
                {
                    _CommandLinks = new List<TaskDialogButtonData>();
                }
                else
                {
                    int i = 0;
                    _CommandLinks = (from button in _Options.CommandButtons
                                     select new TaskDialogButtonData(
                                         TaskDialog.CommandButtonIDOffset + i,
                                         button,
                                         CommandLinkCommand,
                                         DefaultButtonIndex == i++))
                        .ToList();
                }
            }

            return _CommandLinks;
        }
    }
    /// <summary>
    /// Gets the radio button labels.
    /// </summary>
    public List<TaskDialogButtonData> RadioButtons
    {
        get
        {
            if (_RadioButtons == null)
            {
                // If command buttons are defined, ignore any radio buttons (unless design mode)
                if ((!IsInDesignMode && CommandLinks.Count > 0)
                    || _Options.RadioButtons == null || _Options.RadioButtons.Length == 0)
                {
                    _RadioButtons = new List<TaskDialogButtonData>();
                }
                else
                {
                    int i = 0;
                    _RadioButtons = (from button in _Options.RadioButtons
                                     select new TaskDialogButtonData(
                                         TaskDialog.RadioButtonIDOffset + i,
                                         button,
                                         RadioButtonCommand,
                                         DefaultButtonIndex == i++))
                        .ToList();
                }
            }

            return _RadioButtons;
        }
    }
    /// <summary>
    /// Gets the value of the button or command that was ultimately chosen.
    /// </summary>
    public int DialogResult
    {
        get
        {
            return _DialogResult;
        }
    }
    /// <summary>
    /// Gets the value of the chosen radio option.
    /// </summary>
    public int RadioResult
    {
        get
        {
            return _RadioResult;
        }
    }

    /// <summary>
    /// Gets the command associated with custom and common buttons.
    /// </summary>
    public ICommand NormalButtonCommand
    {
        get
        {
            if (_CommandNormalButton == null)
            {
                _CommandNormalButton = new RelayCommand<int>((i) =>
                {
                    _DialogResult = i;

                    var args = new TaskDialogNotificationArgs();

                    args.Config = _Options;
                    args.Notification = TaskDialogNotification.ButtonClicked;
                    args.ButtonId = i;

                    _OnCallback(args);

                    _RaiseRequestCloseEvent();
                });
            }

            return _CommandNormalButton;
        }
    }
    /// <summary>
    /// Gets the command associated with command links.
    /// </summary>
    public ICommand CommandLinkCommand
    {
        get
        {
            if (_CommandCommandLink == null)
            {
                _CommandCommandLink = new RelayCommand<int>((i) =>
                {
                    _DialogResult = i;

                    _RaiseRequestCloseEvent();
                });
            }

            return _CommandCommandLink;
        }
    }
    /// <summary>
    /// Gets the command associated with radio buttons.
    /// </summary>
    public ICommand RadioButtonCommand
    {
        get
        {
            if (_CommandRadioButton == null)
            {
                _CommandRadioButton = new RelayCommand<int>((i) =>
                {
                    _RadioResult = i;

                    var args = new TaskDialogNotificationArgs();

                    args.Config = _Options;
                    args.Notification = TaskDialogNotification.RadioButtonClicked;
                    args.ButtonId = i;

                    _OnCallback(args);
                });
            }

            return _CommandRadioButton;
        }
    }
    /// <summary>
    /// Gets the command associated with hyperlinks.
    /// </summary>
    public ICommand HyperlinkCommand
    {
        get
        {
            if (_CommandHyperlink == null)
            {
                _CommandHyperlink = new RelayCommand<string>((uri) =>
                {
                    var args = new TaskDialogNotificationArgs();

                    args.Config = _Options;
                    args.Notification = TaskDialogNotification.HyperlinkClicked;
                    args.Hyperlink = uri;

                    _OnCallback(args);
                });
            }

            return _CommandHyperlink;
        }
    }

    /// <summary>
    /// Occurs when a close call should be performed.
    /// </summary>
    public event EventHandler RequestClose;

    /// <summary>
    /// Returns a value indicating whether or not the dialog should cancel a closing event.
    /// </summary>
    /// <returns><c>true</c> if dialog closing should be canceled; otherwise, <c>false</c></returns>
    public bool ShouldCancelClosing()
    {
        return _PreventClose;
    }
    /// <summary>
    /// Notifies any callback handlers that the dialog has been constructed but not yet shown.
    /// </summary>
    public void NotifyConstructed()
    {
        var args = new TaskDialogNotificationArgs();

        args.Config = _Options;
        args.Notification = TaskDialogNotification.DialogConstructed;

        _OnCallback(args);
    }
    /// <summary>
    /// Notifies any callback handlers that the dialog has been created but not yet shown.
    /// </summary>
    public void NotifyCreated()
    {
        var args = new TaskDialogNotificationArgs();

        args.Config = _Options;
        args.Notification = TaskDialogNotification.Created;

        _OnCallback(args);
    }
    /// <summary>
    /// Notifies any callback handlers periodically if a callback timer has been set.
    /// </summary>
    public void NotifyShown()
    {
        if (_Options.EnableCallbackTimer)
        {
            _CallbackTimerStart = DateTime.Now;
            _CallbackTimer.Start();
        }
    }
    /// <summary>
    /// Notifies any callback handlers that the dialog is destroyed.
    /// </summary>
    public void NotifyClosed()
    {
        var args = new TaskDialogNotificationArgs();

        args.Config = _Options;
        args.Notification = TaskDialogNotification.Destroyed;

        _OnCallback(args);
    }

    void _RaiseRequestCloseEvent()
    {
        _OnRequestClose(EventArgs.Empty);
    }

    void _OnRequestClose(EventArgs e)
    {
        if (RequestClose != null)
        {
            RequestClose(this, e);
        }
    }

    void _OnCallback(TaskDialogNotificationArgs e)
    {
        if (_Options.Callback != null)
        {
            HandleCallbackReturn(e, _Options.Callback(this, e, _Options.CallbackData));
        }
    }

    void HandleCallbackReturn(TaskDialogNotificationArgs e, bool returnValue)
    {
        switch (e.Notification)
        {
            default: // all others
                // Return value ignored according to MSDN
                break;
            case TaskDialogNotification.ButtonClicked:
                // TRUE : prevent dialog from closing
                _PreventClose = returnValue;
                break;
            case TaskDialogNotification.Timer:
                // TRUE : reset tickcount
                if (returnValue)
                    _CallbackTimerStart = DateTime.Now;
                break;
        }
    }

    void CallbackTimer_Tick(object sender, EventArgs e)
    {
        var args = new TaskDialogNotificationArgs();

        args.Config = _Options;
        args.Notification = TaskDialogNotification.Timer;
        args.TimerTickCount = Convert.ToUInt32(Math.Round(DateTime.Now.Subtract(_CallbackTimerStart).TotalMilliseconds, 0));

        _OnCallback(args);
    }

    [System.Diagnostics.CodeAnalysis.SuppressMessage("Microsoft.Security", "CA2122:DoNotIndirectlyExposeMethodsWithLinkDemands")]
    System.Windows.Media.ImageSource ConvertIconToImageSource(TaskDialogIcon icon, Icon customIcon, bool isLarge)
    {
        System.Windows.Media.ImageSource iconSource = null;
        Icon sysIcon = null;
        Bitmap altBmp = null;

        try
        {
            switch (icon)
            {
                default:
                case TaskDialogIcon.None:
                    break;
                case TaskDialogIcon.Information:
                    sysIcon = SystemIcons.Information;
                    break;
                case TaskDialogIcon.Warning:
                    sysIcon = SystemIcons.Warning;
                    break;
                case TaskDialogIcon.Error:
                    sysIcon = SystemIcons.Error;
                    break;
                case TaskDialogIcon.Question:
                    sysIcon = SystemIcons.Question;
                    break;
            }

            // Custom Icons always take priority
            if (customIcon != null)
            {
                iconSource = System.Windows.Interop.Imaging.CreateBitmapSourceFromHIcon(
                    customIcon.Handle,
                    System.Windows.Int32Rect.Empty,
                    System.Windows.Media.Imaging.BitmapSizeOptions.FromEmptyOptions());
            }
            else if (sysIcon != null)
            {
                iconSource = System.Windows.Interop.Imaging.CreateBitmapSourceFromHIcon(
                    sysIcon.Handle,
                    System.Windows.Int32Rect.Empty,
                    System.Windows.Media.Imaging.BitmapSizeOptions.FromEmptyOptions());
            }
            else if (altBmp != null)
            {
                iconSource = System.Windows.Interop.Imaging.CreateBitmapSourceFromHBitmap(
                    altBmp.GetHbitmap(),
                    IntPtr.Zero,
                    System.Windows.Int32Rect.Empty,
                    System.Windows.Media.Imaging.BitmapSizeOptions.FromEmptyOptions());
            }
        }
        finally
        {
            // Not responsible for disposing of custom icons

            if (sysIcon != null)
                sysIcon.Dispose();
            if (altBmp != null)
                altBmp.Dispose();
        }

        return iconSource;
    }

    bool IActiveTaskDialog.SetMarqueeProgressBar(bool marquee)
    {
        //options.ShowProgressBar = false; // do we need this? does setting marquee to true override in the native implementation?
			
        ProgressBarIndeterminate = marquee;

        return true;
    }
    bool IActiveTaskDialog.SetProgressBarState(TaskDialogProgressBarState newState)
    {
        // TODO Support progress bar state colors on the emulated form
        // Might be able to do it with some triggers... binding directly to the
        //Foreground property will overwrite default OS progress bar color
        return false;
    }
    bool IActiveTaskDialog.SetProgressBarRange(short minRange, short maxRange)
    {
        ProgressBarMinimum = Convert.ToDouble(minRange);
        ProgressBarMaximum = Convert.ToDouble(maxRange);

        return true;
    }
    int IActiveTaskDialog.SetProgressBarPosition(int newPosition)
    {
        int prevValue = Convert.ToInt32(ProgressBarValue);

        ProgressBarValue = Convert.ToDouble(newPosition);

        return prevValue;
    }
    void IActiveTaskDialog.SetProgressBarMarquee(bool startMarquee, uint speed)
    {
        // speed setting is ignored

        _ProgressBarMarqueeEnabled = startMarquee;

        RaisePropertyChanged("ProgressBarIndeterminate");
    }

    void IActiveTaskDialog.UpdateMainIcon(TaskDialogIcon icon)
    {
        _Options.MainIcon = icon;

        RaisePropertyChanged("MainIconType");
        RaisePropertyChanged("MainIcon");
    }
    void IActiveTaskDialog.UpdateMainIcon(Icon icon)
    {
        _Options.CustomMainIcon = icon;

        RaisePropertyChanged("MainIcon");
    }
    void IActiveTaskDialog.UpdateFooterIcon(TaskDialogIcon icon)
    {
        _Options.FooterIcon = icon;

        RaisePropertyChanged("FooterIcon");
    }
    void IActiveTaskDialog.UpdateFooterIcon(Icon icon)
    {
        _Options.CustomFooterIcon = icon;

        RaisePropertyChanged("FooterIcon");
    }
}