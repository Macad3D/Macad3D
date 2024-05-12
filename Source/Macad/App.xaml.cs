using System;
using System.Globalization;
using System.IO;
using System.Runtime.InteropServices;
using System.Threading;
using System.Windows;
using Macad.Common;
using Macad.Common.Interop;
using Macad.Presentation;
using Microsoft.Win32;

namespace Macad.Window;

/// <summary>
/// Interaction logic for App.xaml
/// </summary>
public partial class App : Application
{
    // All WPF applications should execute on a single-threaded apartment (STA) thread
    [STAThread]
    protected override void OnStartup(StartupEventArgs e)
    {
        CultureInfo culture = new CultureInfo("en");
        Thread.CurrentThread.CurrentCulture = culture;
        Thread.CurrentThread.CurrentUICulture = culture;
        CultureInfo.DefaultThreadCurrentCulture = culture;
        CultureInfo.DefaultThreadCurrentUICulture = culture;

        string tempDir = Path.GetTempPath();
        CrashHandler.Init(tempDir);

        // Check command line arguments
        var cmdLine = new CommandLine(e.Args);

        // Check if we are running under wine to disable some not-working features
        bool bIsWine = false;
        if (Registry.LocalMachine.OpenSubKey(@"Software\Wine", false) is { } regkey)
        {
            bIsWine = true;
            regkey.Close();
        }
            
        // Show Welcome Dialog while initializing
        bool bSkipWelcome = cmdLine.NoWelcomeDialog || cmdLine.HasPathToOpen || cmdLine.HasScriptToRun;
        if (!bSkipWelcome && !bIsWine)
        {
            WelcomeDialog.ShowAsync();
        }

        // Set AppUserModelID for Shell-Features like JumpList, Taskbar-Grouping
        Win32Api.SetCurrentProcessExplicitAppUserModelID("Macad.1");

        CreateInstanceMutexes();

        // Init OCCT
#if DEBUG
        Environment.SetEnvironmentVariable(@"CSF_DEBUG", "1");
#endif
        // Init statics
        GlobalEventHandler.Init();

        // Init context
        AppContext.Initialize(cmdLine);

        // Start main window
        MainWindow = new MainWindow(new MainWindowModel());
        WelcomeDialog.Current?.SetMainWindow(MainWindow);
        MainWindow.Show();

        ShutdownMode = ShutdownMode.OnMainWindowClose;

        if (!bSkipWelcome && bIsWine)
        {
            WelcomeDialog.Show(MainWindow);
        }

        base.OnStartup(e);
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnExit(ExitEventArgs e)
    {
        base.OnExit(e);
        AppContext.Current?.Dispose();
    }

    //--------------------------------------------------------------------------------------------------

    /*
     * Creates the two mutexes checked for by the installer/uninstaller to see if
     * the program is still running.
     * One of the mutexes is created in the global name space (which makes it
     * possible to access the mutex across user sessions in Windows XP); the other
     * is created in the session name space(because versions of Windows NT prior
     * to 4.0 TSE don't have a global name space and don't support the 'Global\'
     * prefix).
     */
    void CreateInstanceMutexes()
    {
        const string mutexName = "MacadInstanceRunning";
        /* By default on Windows NT, created mutexes are accessible only by the user
         * running the process. We need our mutexes to be accessible to all users, so
         * that the mutex detection can work across user sessions in Windows XP. To
         * do this we use a security descriptor with a null DACL.
         */
        IntPtr ptrSecurityDescriptor = IntPtr.Zero;
        try
        {
            var securityDescriptor = new Win32Api.SECURITY_DESCRIPTOR();
            Win32Api.InitializeSecurityDescriptor(out securityDescriptor, Win32Api.SECURITY_DESCRIPTOR_REVISION);
            Win32Api.SetSecurityDescriptorDacl(ref securityDescriptor, true, IntPtr.Zero, false);
            ptrSecurityDescriptor = Marshal.AllocCoTaskMem(Marshal.SizeOf(securityDescriptor));
            Marshal.StructureToPtr(securityDescriptor, ptrSecurityDescriptor, false);

            var securityAttributes = new Win32Api.SECURITY_ATTRIBUTES();
            securityAttributes.nLength = Marshal.SizeOf(securityAttributes);
            securityAttributes.lpSecurityDescriptor = ptrSecurityDescriptor;
            securityAttributes.bInheritHandle = false;

            if (Win32Api.CreateMutex(ref securityAttributes, false, mutexName) == IntPtr.Zero
                || Win32Api.CreateMutex(ref securityAttributes, false, @"Global\" + mutexName) == IntPtr.Zero)
            {
                var lastError = Win32Error.GetLastError();
                // if we get the ERROR_ALREADY_EXISTS value, there is
                // already another instance of this application running.
                // That is ok and no error.
                if (lastError != Win32Error.ERROR_ALREADY_EXISTS)
                {
                    Console.WriteLine($"InstanceMutex creation failed: {Marshal.GetLastWin32Error()}");
                }
            }
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
        }

        if(ptrSecurityDescriptor != IntPtr.Zero)
            Marshal.FreeCoTaskMem(ptrSecurityDescriptor);
    }

    //--------------------------------------------------------------------------------------------------

    public App()
    {
        InitializeComponent();
    }
}