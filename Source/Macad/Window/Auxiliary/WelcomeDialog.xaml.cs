using System;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Threading;
using System.Windows.Threading;
using Macad.Common.Interop;
using Macad.Presentation;

namespace Macad.Window;

/// <summary>
/// Interaction logic for WelcomeDialog.xaml
/// </summary>
public partial class WelcomeDialog
{
    #region Statics

    internal static WelcomeDialog Current { get; private set; }

    //--------------------------------------------------------------------------------------------------

    internal static void Show(System.Windows.Window ownerWindow)
    {
        Debug.Assert(Current == null);

        Current = new WelcomeDialog
        {
            Owner = ownerWindow
        };
        Current.Show();
    }

    //--------------------------------------------------------------------------------------------------

    internal static void ShowAsync()
    {
        Debug.Assert(Current == null);

        var thread = new Thread(() =>
        {
            Current = new WelcomeDialog();
            Current.Show();
            Dispatcher.Run();
        });
        thread.SetApartmentState(ApartmentState.STA);
        thread.IsBackground = true;
        thread.Start();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    public WelcomeDialogModel Model;

    //--------------------------------------------------------------------------------------------------

    System.Windows.Window _MainWindow;
    object _InstanceLock = new();

    //--------------------------------------------------------------------------------------------------

    WelcomeDialog()
    {
    }

    //--------------------------------------------------------------------------------------------------

    new void Show()
    {
        Model = new WelcomeDialogModel();
        DataContext = Model;

        InitializeComponent();

        Closing += _Closing;
        Closed += _OnClosed;

        Dispatcher.InvokeAsync(() => Model.DeferredInit());

        base.Show();
    }

    //--------------------------------------------------------------------------------------------------

    void _Closing(object sender, System.ComponentModel.CancelEventArgs e)
    {
        if (Owner != null)
        {
            // Running in sync
            return;
        }

        using (new WaitCursor())
        {
            while (_MainWindow == null)
            {
                Thread.Sleep(100);
            }

            lock (_InstanceLock)
            {
                Current = null;

                _MainWindow.ContentRendered -= _MainWindow_OnContentRendered;
                _MainWindow.Closed -= _MainWindow_OnClosed;
            }

            _MainWindow.Dispatcher.Invoke(() =>
            {
                IntPtr handle = new System.Windows.Interop.WindowInteropHelper(_MainWindow).Handle;
                Win32Api.EnableWindow(new HandleRef(_MainWindow, handle), true);
                _MainWindow.Activate();
            });
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _OnClosed(object sender, EventArgs e)
    {
        if (Owner != null)
        {
            // Running in sync
            return;
        }

        Dispatcher.BeginInvokeShutdown(DispatcherPriority.Normal);
    }

    //--------------------------------------------------------------------------------------------------

    void _SafeClose()
    {
        if (Current.Dispatcher.CheckAccess())
            Current.Close();
        else
            Current.Dispatcher.Invoke(() => Current.Close());
    }

    //--------------------------------------------------------------------------------------------------

    void _MainWindow_OnContentRendered(object sender, EventArgs e)
    {
        lock (_InstanceLock)
        {
            if (Current == null)
                return;

            bool wasForeground = false;
            IntPtr hWndMain = new System.Windows.Interop.WindowInteropHelper(_MainWindow).Handle;
            var hRefWndMain = new HandleRef(_MainWindow, hWndMain);

            Dispatcher.Invoke(() =>
            {
                IntPtr hWndWelcome = new System.Windows.Interop.WindowInteropHelper(this).Handle;
                var hRefWndWelcome = new HandleRef(this, hWndWelcome);
                wasForeground = Win32Api.GetForegroundWindow() == hWndWelcome;
                Win32Api.SetWindowLong(hRefWndWelcome, Win32Api.GWL_HWNDPARENT, hRefWndMain);
            });

            Win32Api.EnableWindow(hRefWndMain, false);
            if (wasForeground)
            {
                Win32Api.SetForegroundWindow(hRefWndMain);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _MainWindow_OnClosed(object sender, EventArgs e)
    {
        _SafeClose();
    }

    //--------------------------------------------------------------------------------------------------

    public void SetMainWindow(System.Windows.Window mainWindow)
    {
        _MainWindow = mainWindow;
        _MainWindow.Closed += _MainWindow_OnClosed;
        _MainWindow.ContentRendered += _MainWindow_OnContentRendered;

        Dispatcher.InvokeAsync(() => Model.AppInitialized());
    }



    //--------------------------------------------------------------------------------------------------

}