using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using Macad.Common;
using NUnit.Framework;
using System;
using System.IO;
using System.Runtime.InteropServices;

namespace Macad.Test.UI.Framework;

public class FileDialogAdaptor : WindowAdaptor
{
    //--------------------------------------------------------------------------------------------------

    readonly WindowAdaptor _MainWindow;

    //--------------------------------------------------------------------------------------------------

    public enum Button
    {
        LoadSave = 1,
        Cancel = 2,
    }

    //--------------------------------------------------------------------------------------------------

    public FileDialogAdaptor(WindowAdaptor mainWindow)
        : base(mainWindow, cf => 
              cf.ByName("Saving Model...")
          .Or(cf.ByName("Open Model..."))
          .Or(cf.ByClassName("#32770"))
          .Or(cf.ByClassName("DirectUIHWND"))
          .Or(cf.ByClassName("DUIViewWndClassName"))
          .Or(cf.ByClassName("CabinetWClass"))
          .Or(cf.ByClassName("FileDialogHost"))
          .Or(cf.ByClassName("Shell_Dialog")))
    {
        _MainWindow = mainWindow;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool IsDialogOpen(WindowAdaptor mainWindow)
    {
        return mainWindow.Window.FindFirstChild(cf => cf.ByClassName("#32770"))?.AsWindow() != null;
    }
        
    //--------------------------------------------------------------------------------------------------

    public override void Click(string id, bool jump = true, bool doubleClick = false)
    {
        var buttonCtrl = _FormControl.FindFirstDescendant(cf => cf.ByClassName("Button").And(cf.ByAutomationId(id)))?.AsButton();
        Assert.That(buttonCtrl, Is.Not.Null, $"Button {id} not found in form.");
        if(doubleClick)
            buttonCtrl.DoubleClick(!jump);
        else
            buttonCtrl.Click(!jump);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(_FormControl);
    }

    //--------------------------------------------------------------------------------------------------

    public void ClickButton(Button button, bool jump = true)
    {
        Click(((int)button).ToString(), jump);
    }

    //--------------------------------------------------------------------------------------------------

    public static string GetTempPath()
    {
        return Path.GetFullPath(Path.Combine(TestContext.CurrentContext.TestDirectory, @"..\..\.intermediate\Data\UITests\Temp"));
    }

    //--------------------------------------------------------------------------------------------------

    public void Load(string path, bool jump = true)
    {
        var fileNameCtrl = Window.FindFirstDescendant(cf => cf.ByAutomationId("1148").And(cf.ByControlType(ControlType.Edit)));
        Assert.IsNotNull(fileNameCtrl, $"ComboBox FileNameControlHost not found in file dialog.");
        Assert.That(fileNameCtrl.Patterns.Value.IsSupported, $"Value pattern not supported on element FileNameControlHost.");
        fileNameCtrl.Patterns.Value.Pattern.SetValue(path);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(Window);

        ClickButton(Button.LoadSave, jump);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(Window);
    }
    //--------------------------------------------------------------------------------------------------

    public static string DoLoadModel(WindowAdaptor mainWindow, string path)
    {
        var fileDlg = new FileDialogAdaptor(mainWindow);
        Assert.That(fileDlg, Is.Not.Null);
        Assert.That(fileDlg.Title, Is.EqualTo("Open Model..."));

        fileDlg.Load(path);
        return path;
    }

    //--------------------------------------------------------------------------------------------------

    public void Save(string path, bool jump = true, bool checkFile = true)
    {
        if (Path.GetDirectoryName(path).IsNullOrEmpty())
        {
            path = Path.Combine(GetTempPath(), path);
        }
        Directory.CreateDirectory(Path.GetDirectoryName(path));
        if(File.Exists(path))
            File.Delete(path);

        // Windows uses multiple dialog templates. On some builds the filename textbox
        // is not exposed in the UIA tree at all. In those cases the only reliable way
        // to set the filename is to locate the underlying Win32 Edit control.
        var dialogHwnd = new IntPtr(Window.Properties.NativeWindowHandle.Value);
        var editHwnd = FileDialogNative.FindFilenameEdit(dialogHwnd);

        Assert.AreNotEqual(IntPtr.Zero, editHwnd, "Could not locate filename Edit control.");

        FileDialogNative.SetEditText(editHwnd, path);

        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(Window);

        ClickButton(Button.LoadSave, jump);
        Wait.UntilInputIsProcessed();
        Wait.UntilResponsive(Window);

        if (checkFile)
        {
            CheckFileExists(path);
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal static class FileDialogNative
    {
        private const int EM_SETSEL = 0x00B1;
        private const int EM_REPLACESEL = 0x00C2;

        public static IntPtr FindFilenameEdit(IntPtr dialogHwnd)
        {
            IntPtr result = IntPtr.Zero;

            Win32.EnumChildWindows(dialogHwnd, (hwnd, lParam) =>
            {
                var edit = Win32.FindWindowEx(hwnd, IntPtr.Zero, "Edit", null);
                if (edit != IntPtr.Zero)
                {
                    result = edit;
                    return false; // stop enumeration
                }

                return true; // continue
            }, IntPtr.Zero);

            return result;
        }

        public static void SetEditText(IntPtr editHwnd, string text)
        {
            // Select all
            Win32.SendMessage(editHwnd, EM_SETSEL, 0, -1);

            // Replace
            Win32.SendMessage(editHwnd, EM_REPLACESEL, 1, text);
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal static class Win32
    {
        [DllImport("user32.dll", SetLastError = true, CharSet = CharSet.Auto)]
        public static extern IntPtr FindWindowEx(
            IntPtr parentHandle,
            IntPtr childAfter,
            string className,
            string windowTitle);

        [DllImport("user32.dll", CharSet = CharSet.Auto)]
        public static extern IntPtr SendMessage(
            IntPtr hWnd,
            int msg,
            int wParam,
            int lParam);

        [DllImport("user32.dll", CharSet = CharSet.Auto)]
        public static extern IntPtr SendMessage(
            IntPtr hWnd,
            int msg,
            int wParam,
            string lParam);

        public delegate bool EnumChildProc(IntPtr hwnd, IntPtr lParam);

        [DllImport("user32.dll")]
        public static extern bool EnumChildWindows(
            IntPtr hwnd,
            EnumChildProc callback,
            IntPtr lParam);
    }

    //--------------------------------------------------------------------------------------------------

    public void SelectFileType(string pattern)
    {
        // File Save
        var boxCtrl = _FormControl.FindFirstDescendant(cf => cf.ByControlType(ControlType.ComboBox).And(cf.ByAutomationId("FileTypeControlHost")))?.AsComboBox();
        if (boxCtrl == null)
        {
            // File Open
            boxCtrl = _FormControl.FindFirstDescendant(cf => cf.ByControlType(ControlType.ComboBox).And(cf.ByAutomationId("1136")))?.AsComboBox();
        }
        Assert.IsNotNull(boxCtrl, $"ComboBox not found in dialog.");

        SelectComboBoxItem(boxCtrl.AutomationId, pattern);
    }

    //--------------------------------------------------------------------------------------------------

    public static string DoSaveModel(WindowAdaptor mainWindow, string filename = "Saved_Model.Model", bool checkFile = true)
    {
        Directory.CreateDirectory(GetTempPath());

        var path = Path.Combine(GetTempPath(), filename);
        File.Delete(path);

        var fileDlg = new FileDialogAdaptor(mainWindow);
        Assert.That(fileDlg, Is.Not.Null);
        Assert.That(fileDlg.Title, Is.EqualTo("Saving Model..."));

        fileDlg.Save(path, checkFile: checkFile);
        return path;
    }

    //--------------------------------------------------------------------------------------------------

    public static void CheckFileExists(string path)
    {
        Assert.That(path, Does.Exist.After(3).Seconds.PollEvery(100));
    }

    //--------------------------------------------------------------------------------------------------

    public void Cancel()
    {
        ClickButton(Button.Cancel);
    }

    //--------------------------------------------------------------------------------------------------

}