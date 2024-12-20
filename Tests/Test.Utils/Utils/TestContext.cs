using System;
using System.Collections.Generic;
using System.Windows;
using System.Windows.Input;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Utils;

public sealed class Context : InteractiveContext
{
    public new static Context Current { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public TestHudManager TestHudManager => WorkspaceController.HudManager as TestHudManager;

    //--------------------------------------------------------------------------------------------------

    Context()
    {
        MessageHandler.MessageThrown += MessageHub_MessageThrown;

        var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        viewportParameterSet.ShowViewCube = false;
        viewportParameterSet.ShowTrihedron = false;
        viewportParameterSet.SelectionPixelTolerance = 2;
        viewportParameterSet.VisualGridStepMinPixel = 0;
        viewportParameterSet.VisualGridMinStepsOnScreen = 0;

        Clipboard = new TestClipboard();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Dispose(bool disposing)
    {
        if (disposing)
        {
            MessageHandler.MessageThrown -= MessageHub_MessageThrown;
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
        Current?.Dispose();
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
            
        // Set render parameter
        var parameterSet = Current.Parameters.Get<ViewportParameterSet>();
        parameterSet.EnableAntialiasing = false;

        Current.ViewportController.InitWindow(IntPtr.Zero, new Int32Rect(0, 0, viewportSize, viewportSize));

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

    public void Deinit()
    {
        InitEmpty();
    }

    //--------------------------------------------------------------------------------------------------

    public void ClickAt(int x, int y, ModifierKeys modifierKeys = ModifierKeys.None)
    {
        ViewportController.MouseMove(new Point(x, y), modifierKeys);
        ViewportController.MouseDown(modifierKeys);
        ViewportController.MouseUp(modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void SelectAt(int x, int y, ModifierKeys modifierKeys = ModifierKeys.None)
    {
        ViewportController.MouseMove(new Point(x, y), modifierKeys);
        ViewportController.MouseDown(modifierKeys);
        ViewportController.MouseUp(modifierKeys);
        ViewportController.MouseMove(new Point(0, 0), modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------

    public void MoveTo(int x, int y, ModifierKeys modifierKeys = ModifierKeys.None)
    {
        ViewportController.MouseMove(new Point(x, y), modifierKeys);
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