using System;
using System.Diagnostics;
using System.IO;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using System.Windows;
using Macad.Common.Interop;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Window;

public static class CrashHandler
{
    public static void Init(string crashDumpDirectory)
    {
        _CrashDumpDirectory = crashDumpDirectory;
        AppDomain.CurrentDomain.UnhandledException += _CurrentDomain_UnhandledException;
        Application.Current.DispatcherUnhandledException += _Current_DispatcherUnhandledException;

        foreach (var dumpFile in Directory.EnumerateFiles(_CrashDumpDirectory, "Macad_*.dmp"))
        {
            try
            {
                File.Delete(dumpFile);
            }
            // ReSharper disable once EmptyGeneralCatchClause
            catch (Exception)
            {
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    static string _CrashDumpDirectory;
    static bool _InCrashState;

    //--------------------------------------------------------------------------------------------------

    static void _Current_DispatcherUnhandledException(object sender, System.Windows.Threading.DispatcherUnhandledExceptionEventArgs args)
    {
        if (_UnhandledException())
        {
            if (args != null)
                args.Handled = true;
            Application.Current?.Shutdown();
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _CurrentDomain_UnhandledException(object sender, UnhandledExceptionEventArgs args)
    {
        _UnhandledException();
        Application.Current?.Shutdown();
    }

    //--------------------------------------------------------------------------------------------------

    static bool _UnhandledException()
    {
        if (_InCrashState || Debugger.IsAttached)
            return false;

        _InCrashState = true;

        MessageBoxResult mbres = MessageBoxResult.OK;
        Task.Run(() =>
        {
            mbres = MessageBox.Show(
                "An unhandled exception occurred, and the application is terminating.\n\n"
                + "If you click OK, it is tried to save a copy of the open documents.\n"
                + "Also two crashdump files will be saved to the users temp directory. "
                + "These can be used by the developer to trace the crash.\n\n"
                + "The crashdump files will be deleted on the next start of the application.",
                "Ooops...", MessageBoxButton.OKCancel, MessageBoxImage.Error);
        }).Wait();
        if(mbres != MessageBoxResult.OK)
            return false;

        using (new WaitCursor())
        {
            _Dump(false);
            _Dump(true);
            _SaveDocuments();
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    static void _SaveDocuments()
    {
        try
        {
            string fileName = AppContext.Current?.Document?.FilePath;
            if (!string.IsNullOrEmpty(fileName))
            {
                string dirName = Path.GetDirectoryName(fileName) ?? _CrashDumpDirectory;
                fileName = Path.Combine(dirName, $"{Path.GetFileNameWithoutExtension(fileName)}_{DateTime.Now:yyyy-MM-yy_HHmmss}.{Model.FileExtension}");
                AppContext.Current.Document.SaveToFile(fileName);
            }
        }
        // ReSharper disable once EmptyGeneralCatchClause
        catch (Exception)
        {
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _Dump(bool full)
    {
        var fileName = Path.Combine(_CrashDumpDirectory, $"Macad_{ (full ? "Full" : "Small")}_{DateTime.Now:yyyy-MM-yy_HHmmss}.dmp");
        var fileStream = File.Create(fileName);
        if (fileStream.SafeFileHandle == null)
            return;

        var info = new Win32Api.MINIDUMP_EXCEPTION_INFORMATION
        {
            ClientPointers = 1,
            ExceptionPointers = Marshal.GetExceptionPointers(),
            ThreadId = Win32Api.GetCurrentThreadId()
        };

        Win32Api.MiniDumpWriteDump(
            Win32Api.GetCurrentProcess(), Win32Api.GetCurrentProcessId(),
            fileStream.SafeFileHandle.DangerousGetHandle(), 
            full ? Win32Api.MINIDUMP_TYPE.MiniDumpWithFullMemory : Win32Api.MINIDUMP_TYPE.MiniDumpNormal,
            ref info, IntPtr.Zero, IntPtr.Zero);

        fileStream.Close();
    }

    //--------------------------------------------------------------------------------------------------
}