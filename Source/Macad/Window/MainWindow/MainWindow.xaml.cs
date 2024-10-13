using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls.Primitives;
using System.Windows.Input;
using System.Windows.Interop;
using System.Windows.Threading;
using Fluent;
using Macad.Common;
using Macad.Common.Interop;
using Macad.Interaction;

namespace Macad.Window;

/// <summary>
/// Interaction logic for MainWindow.xaml
/// </summary>
public partial class MainWindow : RibbonWindow
{
    public static MainWindow Current { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public MainWindowModel Model => (MainWindowModel)DataContext;

    //--------------------------------------------------------------------------------------------------

    public SpaceNavigator SpaceNavigator { get; } = new SpaceNavigator();

    //--------------------------------------------------------------------------------------------------
        
    public MainWindow(MainWindowModel model)
    {
        Current = this;
        DataContext = model;

        Loaded += _MainWindow_Loaded;
        Unloaded += _MainWindow_Unloaded;
        Closing += _MainWindow_Closing;
        SourceInitialized += _MainWindow_OnSourceInitialized;
        DragOver += _MainWindow_DragOver;
        Drop += _MainWindow_Drop;
        KeyDown += _MainWindow_KeyDown;

        InitializeComponent();

        ScreenTip.HelpPressed += _ScreenTipOnHelpPressed;
    }

    //--------------------------------------------------------------------------------------------------

    #region Window Callbacks

    void _MainWindow_Loaded(object sender, RoutedEventArgs e)
    {
        // Init Space Navigator
        SpaceNavigator.Init(this);

        AppCommands.InitApplication.Execute();
        Dispatcher.CurrentDispatcher.BeginInvoke(AppCommands.RunStartupCommands.Execute, DispatcherPriority.Loaded);

        Docking.Viewport.Focus();
        SplashScreen.Close();
    }

    //--------------------------------------------------------------------------------------------------

    void _MainWindow_Unloaded(object sender, RoutedEventArgs e)
    {
        // Deinit space navigator
        SpaceNavigator.DeInit();
    }

    //--------------------------------------------------------------------------------------------------

    void _MainWindow_Closing(object sender, CancelEventArgs e)
    {
        AppCommands.PrepareWindowClose.Execute(e);

        if(!e.Cancel && !AppContext.IsInSandbox)
        {
            WindowPlacement.SaveWindowPlacement(MainWindow.Current, "MainWindowPlacement");
            AppContext.Current.SaveSettings();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _MainWindow_KeyDown(object sender, KeyEventArgs e)
    {
        if (e.OriginalSource is TextBoxBase)
            return;

        e.Handled = Model.GlobalKeyDown(e);
    }

    //--------------------------------------------------------------------------------------------------

    void _MainWindow_OnSourceInitialized(object sender, EventArgs e)
    {
        var hwnd = new WindowInteropHelper(this).Handle;
        Win32Api.DragAcceptFiles(hwnd, true);

        var hwndSource = PresentationSource.FromVisual(this) as HwndSource;
        Debug.Assert(hwndSource != null, nameof(hwndSource) + " != null");
        hwndSource.AddHook(WndProc);

        if (!AppContext.IsInSandbox)
        {
            WindowPlacement.LoadWindowPlacement(this, "MainWindowPlacement");
        }
        else
        {
            this.Left = 0;
            this.Top = 0;
        }
    }

    //--------------------------------------------------------------------------------------------------

    IntPtr WndProc(IntPtr hwnd, int msg, IntPtr wParam, IntPtr lParam, ref bool handled)
    {
        switch (msg)
        {
            case Win32Api.WM_DROPFILES:
            {
                handled = true;
                const int maxPath = 260;
                var hDrop = wParam;
                var count = Win32Api.DragQueryFile(hDrop, 0xFFFFFFFF, null, 0);
                if (count > 0)
                    count = 1; // Currently, we only import the first

                for (uint i = 0; i < count; i++)
                {
                    int size = (int)Win32Api.DragQueryFile(hDrop, i, null, 0);
                    var filename = new StringBuilder(size + 1);
                    Win32Api.DragQueryFile(hDrop, i, filename, maxPath);

                    _ImportDroppedFile(filename.ToString());
                }

                Win32Api.DragFinish(hDrop);
                break;
            }

            case Win32Api.WM_ENABLE:
            {
                bool bIsEnabled = wParam.ToInt32() == 1;
                Docking.Viewport.SetWindowEnabled(bIsEnabled);
                break;
            }
        }

        return IntPtr.Zero;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Drop Files

    string _ExtractDropFile(DragEventArgs e)
    {
        if (e.Data.GetDataPresent(DataFormats.FileDrop))
        {
            // Note that you can have more than one file.
            var files = (string[]) e.Data.GetData(DataFormats.FileDrop);
            if (files != null)
            {
                var filePath = files.First();
                if(ExchangeCommands.ImportDroppedFile.CanExecute(filePath))
                {
                    return filePath;
                }
            }
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    void _MainWindow_Drop(object sender, DragEventArgs e)
    {
        if (e.Handled)
            return;

        _ImportDroppedFile(_ExtractDropFile(e));
    }

    //--------------------------------------------------------------------------------------------------

    void _MainWindow_DragOver(object sender, DragEventArgs e)
    {
        if (ExchangeCommands.ImportDroppedFile.CanExecute(_ExtractDropFile(e)))
        {
            e.Effects = DragDropEffects.None;
            e.Handled = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ImportDroppedFile(string filePath)
    {
        if (filePath.IsNullOrEmpty() || !ExchangeCommands.ImportDroppedFile.CanExecute(filePath))
            return;

        Activate();

        ExchangeCommands.ImportDroppedFile.Execute(filePath);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Help

    void _ApplicationCommandsHelp_Executed(object sender, ExecutedRoutedEventArgs e)
    {
        AppCommands.ShowHelp.Execute(e.Parameter as string ?? e.Source);
    }

    //--------------------------------------------------------------------------------------------------

    void _ScreenTipOnHelpPressed(object sender, ScreenTipHelpEventArgs e)
    {
        AppCommands.ShowHelpTopic.Execute(e.HelpTopic as string);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}