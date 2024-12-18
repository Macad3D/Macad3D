using System;
using System.Linq;
using System.Runtime.InteropServices;
using FlaUI.Core.AutomationElements;
using FlaUI.Core.Definitions;
using FlaUI.Core.Input;
using FlaUI.Core.Tools;
using FlaUI.UIA3.Converters;
using Macad.Common;
using Macad.Common.Interop;
using NUnit.Framework;
using Mouse = FlaUI.Core.Input.Mouse;

namespace Macad.Test.UI.Framework;

public class MainWindowAdaptor : WindowAdaptor
{
    public RibbonAdaptor Ribbon
    {
        get { return _Ribbon ??= new RibbonAdaptor(Window); }
    }

    public PropertyViewAdaptor PropertyView
    {
        get { return _PropertyView ??= new PropertyViewAdaptor(Window); }
    }

    public DocumentExplorerAdaptor Document
    {
        get { return _DocumentExplorer ??= new DocumentExplorerAdaptor(Window); }
    }

    public ViewportAdaptor Viewport
    {
        get { return new ViewportAdaptor(Window); /* Must be cached in unit test code, it will be recreated on New Model */ }
    }

    public LayersAdaptor Layers
    {
        get { return _Layers ??= new LayersAdaptor(Window); }
    }

    public ApplicationAdaptor Application
    {
        get { return _Application; }
    }

    //--------------------------------------------------------------------------------------------------

    RibbonAdaptor _Ribbon;
    PropertyViewAdaptor _PropertyView;
    DocumentExplorerAdaptor _DocumentExplorer;
    LayersAdaptor _Layers;
    ApplicationAdaptor _Application;

    //--------------------------------------------------------------------------------------------------

    public MainWindowAdaptor(ApplicationAdaptor app)
        : base(app, "MacadMainWindow")
    {
        _Application = app;
        Window.Focus();
        Wait.UntilResponsive(Window);
    }

    //--------------------------------------------------------------------------------------------------

    public bool SendFileDrop(string path)
    {
        var point = Window.BoundingRectangle.Center();
        Mouse.Position = point;

        var dropfiles = new Win32Api.DROPFILES();
        var sizeOfDropfiles = Marshal.SizeOf<Win32Api.DROPFILES>();
        dropfiles.pFiles = sizeOfDropfiles;
        dropfiles.pt.x = (int) point.X;
        dropfiles.pt.y = (int) point.Y;
        dropfiles.fNC = true;
        dropfiles.fWide = false;

        var hmem = Marshal.AllocHGlobal(sizeOfDropfiles + path.Length + 2);
        var hmemPtr = Win32Api.GlobalLock(hmem);
        var ptr = hmemPtr;

        Marshal.StructureToPtr(dropfiles, ptr, false);
        ptr += sizeOfDropfiles;
        var pathBytes = path.ToUtf8Bytes();
        Marshal.Copy(pathBytes, 0, ptr, pathBytes.Length);
        ptr += path.Length;
        Marshal.WriteInt16(ptr, 0); // double 0 to terminate file list
        Win32Api.GlobalUnlock(hmemPtr);

        var success = Win32Api.PostMessage(Window.ToNative().CurrentNativeWindowHandle, Win32Api.WM_DROPFILES, hmem, IntPtr.Zero);
        if(!success)
            Marshal.FreeHGlobal(hmem);
        return success;
    }

    //--------------------------------------------------------------------------------------------------

    public void ClickCloseButton(bool jump = true)
    {
        var button = Window.FindAllChildren(cf => cf.ByControlType(ControlType.Button)).LastOrDefault()?.AsButton();
        Assert.IsNotNull(button, $"Closebutton not found in main window.");
        button.Click(!jump);
        Wait.UntilInputIsProcessed();
    }

    //--------------------------------------------------------------------------------------------------

    public ContextMenuAdaptor FindContextMenu(string contextMenuId=null)
    {
        return new ContextMenuAdaptor(this, contextMenuId);
    }

    //--------------------------------------------------------------------------------------------------


}