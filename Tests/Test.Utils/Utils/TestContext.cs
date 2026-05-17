using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Interaction.Panels;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Utils;

public sealed class Context : InteractiveContext
{
    public new static Context Current { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public TestHudManager TestHudManager => WorkspaceController.HudManager as TestHudManager;
    internal ViewportRenderWindow RenderWindow { get; private set; }
    public IViewportMouseControl MouseControl { get; set; } = new ViewportMouseControlDefault();
    public IViewportTouchControl TouchControl { get; set; } = new ViewportTouchControlDefault();

    //--------------------------------------------------------------------------------------------------

    Context()
    {
        MessageHandler.MessageThrown += MessageHub_MessageThrown;
        Clipboard = new TestClipboard();

        // Init parameter
        var viewportParameterSet = Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.EnableAntialiasing = false;
        viewportParameterSet.ShowViewCube = false;
        viewportParameterSet.ShowTrihedron = false;
        viewportParameterSet.SelectionPixelTolerance = 2;
        viewportParameterSet.VisualGridStepMinPixel = 0;
        viewportParameterSet.VisualGridMinStepsOnScreen = 0;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Dispose(bool disposing)
    {
        if (disposing)
        {
            MessageHandler.MessageThrown -= MessageHub_MessageThrown;
            RenderWindow?.Dispose();
            RenderWindow = null;
        }

        base.Dispose(disposing);
    }

    //--------------------------------------------------------------------------------------------------

    public static Context InitEmpty()
    {
        Current?.Dispose();
        Current = new Context();

        return Current;
    }

    //--------------------------------------------------------------------------------------------------

    public static Context InitWithDefault()
    {
        InitEmpty();

        Current = new Context
        {
            Document = new Model(), 
        };

        Current.WorkspaceController.HudManager = new TestHudManager();
        return Current;
    }

    //--------------------------------------------------------------------------------------------------

    public static Context InitWithView(int viewportSize)
    {
        InitWithDefault();

        Current.RenderWindow = new (Current.WorkspaceController, Color.Black, 1.0);
        Current.RenderWindow.Init(IntPtr.Zero, new Int32Rect(0, 0, viewportSize, viewportSize));

        // Neutralize View
        var ocView = Current.ViewportController.V3dView;
        ocView.SetBgGradientStyle(Aspect_GradientFillMethod.NONE, false);
        ocView.SetBackgroundColor(Color.Black.ToQuantityColor());
        ocView.ChangeRenderingParams().NbMsaaSamples = 0;

        Current.Workspace.GridEnabled = false;
        Current.Workspace.GridStep = 10;
        Current.WorkspaceController.V3dViewer.DisplayPrivilegedPlane(false);

        return Current;
    }

    //--------------------------------------------------------------------------------------------------

    public TestPropertyPanelManager EnablePropertyPanels()
    {
        var testppm = new TestPropertyPanelManager();
        Current.PropertyPanelManager = testppm;
        return testppm;
    }

    //--------------------------------------------------------------------------------------------------

    void MessageHub_MessageThrown(object sender, MessageItem e)
    {
        TestContext.Out.WriteLine(e.ToString());
        TestContext.Out.Flush();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void RaisePropertyChanged(string propertyName = "")
    {
        base.RaisePropertyChanged(propertyName);
        if (propertyName == nameof(InteractiveContext.WorkspaceController))
        {
            if (RenderWindow != null)
            {
                var size = RenderWindow.Size();
                RenderWindow.Dispose();
                RenderWindow = new(Current.WorkspaceController, Color.Black, 1.0);
                RenderWindow.Init(IntPtr.Zero, new Int32Rect(0, 0, size.Width, size.Height));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Deinit()
    {
        InitEmpty();
    }

    //--------------------------------------------------------------------------------------------------

    public void ClickAt(int x, int y, ModifierKeys modifierKeys = ModifierKeys.None)
    {
        WorkspaceController.ViewportLayoutManager.FindViewport(new(x, y), out var viewport, out var viewportPosition);
        MouseControl?.MouseMove(viewport, viewportPosition, MouseButtons.None, modifierKeys);
        MouseControl?.MouseDown(viewport, viewportPosition, MouseButtons.Left, 1, MouseButtons.Left, modifierKeys);
        MouseControl?.MouseUp(viewport, viewportPosition, MouseButtons.Left, MouseButtons.None, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void SelectAt(int x, int y, ModifierKeys modifierKeys = ModifierKeys.None)
    {
        WorkspaceController.ViewportLayoutManager.FindViewport(new(x, y), out var viewport, out var viewportPosition);
        MouseControl?.MouseMove(viewport, viewportPosition, MouseButtons.None, modifierKeys);
        MouseControl?.MouseDown(viewport, viewportPosition, MouseButtons.Left, 1, MouseButtons.Left, modifierKeys);
        MouseControl?.MouseUp(viewport, viewportPosition, MouseButtons.Left, MouseButtons.None, modifierKeys);
        MouseControl?.MouseMove(viewport, new(0, 0), MouseButtons.None, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseDown(int x, int y, MouseButtons buttons, ModifierKeys modifierKeys = ModifierKeys.None)
    {
        Debug.Assert(buttons != MouseButtons.None);
        WorkspaceController.ViewportLayoutManager.FindViewport(new(x, y), out var viewport, out var viewportPosition);
        MouseControl?.MouseDown(viewport, viewportPosition, buttons, 1, buttons, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void MouseUp(int x, int y, MouseButtons buttons, ModifierKeys modifierKeys = ModifierKeys.None)
    {
        Debug.Assert(buttons != MouseButtons.None);
        WorkspaceController.ViewportLayoutManager.FindViewport(new(x, y), out var viewport, out var viewportPosition);
        MouseControl?.MouseUp(viewport, viewportPosition, buttons, MouseButtons.None, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void MoveTo(int x, int y, MouseButtons pressedButtons = MouseButtons.None, ModifierKeys modifierKeys = ModifierKeys.None)
    {
        WorkspaceController.ViewportLayoutManager.FindViewport(new(x, y), out var viewport, out var viewportPosition);
        MouseControl?.MouseMove(viewport, viewportPosition, pressedButtons, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    #region LocalSettings

    readonly Dictionary<string, string> _SavedLocalSettings = new Dictionary<string, string>();

    //--------------------------------------------------------------------------------------------------

    public override T LoadLocalSettings<T>(string name)
    {
        if (!_SavedLocalSettings.TryGetValue(name, out var data))
            return null;

        return Serializer.Deserialize<T>(data, new SerializationContext(SerializationScope.Storage));
    }

    //--------------------------------------------------------------------------------------------------

    public override void SaveLocalSettings(string name, object obj)
    {
        var data = Serializer.Serialize(obj, new SerializationContext(SerializationScope.Storage));
        if (string.IsNullOrEmpty(data))
            return;
            
        _SavedLocalSettings[name] = data;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}