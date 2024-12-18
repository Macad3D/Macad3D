using System;
using System.Windows;
using Macad.Common;

namespace Macad.Interaction.Panels;

public abstract class PropertyPanel : PanelBase, IDisposable
{
    public static readonly DependencyProperty HeaderButtonsProperty = 
        DependencyProperty.Register("HeaderButtons", typeof(FrameworkElement), typeof(PropertyPanel), new PropertyMetadata(default(FrameworkElement)));

    public FrameworkElement HeaderButtons
    {
        get { return (FrameworkElement) GetValue(HeaderButtonsProperty); }
        set { SetValue(HeaderButtonsProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty HeaderProperty = DependencyProperty.Register(
        "Header", typeof(string), typeof(PropertyPanel), new PropertyMetadata("Unknown"));

    public string Header
    {
        get { return (string) GetValue(HeaderProperty); }
        set { SetValue(HeaderProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty IsCollapsedProperty = DependencyProperty.Register(
        "IsCollapsed", typeof(bool), typeof(PropertyPanel), new PropertyMetadata(default(bool)));

    public bool IsCollapsed
    {
        get { return (bool) GetValue(IsCollapsedProperty); }
        set { SetValue(IsCollapsedProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    protected WorkspaceController WorkspaceController { get; private set; }

    protected IPropertyPanelManager PanelManager { get; private set; }

    // The instance will be consumed by property view, so must be public
    // ReSharper disable once MemberCanBeProtected.Global
    public BaseObject Instance { get; set; } 

    bool _IsDisposed = false;
        
    //--------------------------------------------------------------------------------------------------

    protected PropertyPanel()
    {
        SourceUpdated += OnSourceUpdated;
    }

    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
        Dispose(true);
        GC.SuppressFinalize(this);
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void Dispose(bool disposing)
    {
        if (_IsDisposed)
            return;
                    
        Cleanup();
        WorkspaceController = null;
        PanelManager = null;
        Instance = null;
        SourceUpdated -= OnSourceUpdated;

        _IsDisposed = true;
    }

    //--------------------------------------------------------------------------------------------------

    public abstract void Initialize(BaseObject instance);
    public abstract void Cleanup();

    //--------------------------------------------------------------------------------------------------

    #region Value Commit

    protected virtual void OnSourceUpdated(object sender, System.Windows.Data.DataTransferEventArgs e)
    {
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual void CommitChange()
    {
        InteractiveContext.Current?.UndoHandler?.Commit();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    public static T CreatePanel<T>(BaseObject instance) where T: PropertyPanel
    {
        if (InteractiveContext.Current?.PropertyPanelManager == null)
            return null;

        var panel = Activator.CreateInstance(typeof(T)) as T;
        if (panel != null)
        {
            panel.WorkspaceController = InteractiveContext.Current.WorkspaceController;
            panel.PanelManager = InteractiveContext.Current.PropertyPanelManager;
            panel.Instance = instance;
            panel.Initialize(instance);
        }
        return panel;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void OnAddedToPane(IPropertyPanelManager manager)
    {}

    //--------------------------------------------------------------------------------------------------

}