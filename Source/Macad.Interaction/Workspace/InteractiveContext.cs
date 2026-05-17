using System.Collections.Generic;
using System.Collections.ObjectModel;
using Macad.Common;
using Macad.Core;
using Macad.Interaction.Panels;

namespace Macad.Interaction;

public abstract class InteractiveContext : CoreContext
{
    /// <summary>
    /// The controller for the currently active document.
    /// </summary>
    public ModelController DocumentController
    {
        get { return field; }
        protected set
        {
            field = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override Workspace Workspace
    {
        get
        {
            return base.Workspace;
        }
        protected set
        {
            if (base.Workspace == value)
                return;

            WorkspaceController = null; // Safe Reset
            WorkspaceController = value == null ? null : new WorkspaceController(value);
            base.Workspace = value;
            RaisePropertyChanged(nameof(WorkspaceController));
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The controller for the currently active workspace. 
    /// </summary>
    public WorkspaceController WorkspaceController
    {
        get { return field; }
        private set
        {
            if (field == value)
                return;

            field?.Dispose();
            field = value;
            RaisePropertyChanged(nameof(ViewportController));
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The controller for the currently active viewport. This is a shortcut to the ViewportController of the WorkspaceController.
    /// The active viewport is the viewport which is currently active in the workspace. It can change at any time.
    /// </summary>
    public ViewportController ViewportController => WorkspaceController?.ViewportController;

    //--------------------------------------------------------------------------------------------------

    public Clipboard Clipboard { get; protected set; }

    //--------------------------------------------------------------------------------------------------

    public IPropertyPanelManager PropertyPanelManager { get; set; }

    //--------------------------------------------------------------------------------------------------

    public IList<Color> RecentUsedColors
    {
        get
        {
            if (_RecentUsedColors == null)
                _RecentUsedColors = LoadLocalSettings<List<Color>>("RecentUsedColors") ?? new List<Color>();

            return _RecentUsedColors;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public EditorState EditorState
    {
        get
        {
            if(_EditorState == null)
                _EditorState = LoadLocalSettings<EditorState>("EditorState") ?? new EditorState();

            return _EditorState;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public ShortcutHandler ShortcutHandler { get; }

    //--------------------------------------------------------------------------------------------------

    List<Color> _RecentUsedColors;
    EditorState _EditorState;

    //--------------------------------------------------------------------------------------------------


    protected InteractiveContext()
    {
        InteractionModule.Initialize();
        Current = this;
        DocumentController = new ModelController();
        ShortcutHandler = new ShortcutHandler();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Dispose(bool disposing)
    {
        DocumentController?.Dispose();
        DocumentController = null;
        WorkspaceController?.Dispose();
        WorkspaceController = null;
        _EditorState?.Dispose();
        base.Dispose(disposing);
    }

    //--------------------------------------------------------------------------------------------------

    #region Statics

    public new static InteractiveContext Current { get; private set; }

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    public override void SaveSettings()
    {
        base.SaveSettings();

        if(_RecentUsedColors != null)
            SaveLocalSettings("RecentUsedColors", _RecentUsedColors);
        if(EditorState != null)
            SaveLocalSettings("EditorState", EditorState);
    }

    //--------------------------------------------------------------------------------------------------

    #region ScriptMru
        
    public ObservableCollection<string> RecentUsedScripts
    {
        get
        {
            if (_RecentUsedScripts == null)
                _RecentUsedScripts = LoadLocalSettings<ObservableCollection<string>>("RecentUsedScripts") ?? new ObservableCollection<string>();

            return _RecentUsedScripts;
        }
    }

    const int _MaxScriptMruCount = 10;

    ObservableCollection<string> _RecentUsedScripts;

    //--------------------------------------------------------------------------------------------------
        
    internal void AddToScriptMruList(string filePath)
    {
        var recentList = RecentUsedScripts;
        var index = recentList.IndexOfFirst(s => s.CompareIgnoreCase(filePath) == 0);
        if (index >= 0)
        {
            // Move to top of list
            recentList.Move(index, 0);
            recentList[0] = filePath;
            return;
        }

        if(recentList.Count >= _MaxScriptMruCount)
            recentList.RemoveAt(recentList.Count-1);

        recentList.Insert(0, filePath);

        SaveLocalSettings("RecentUsedScripts", recentList);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Events

    public delegate void InteractiveContextEventHandler<in TEventArgs>(InteractiveContext sender, TEventArgs e);

    //--------------------------------------------------------------------------------------------------

    public record struct ActiveViewportChangedEventArgs(ViewportController Viewport);

    /// <summary>
    /// Raised when the active viewport changed.
    /// </summary>
    public event InteractiveContextEventHandler<ActiveViewportChangedEventArgs> ActiveViewportChanged;

    protected internal override void OnViewportActivated(Viewport oldViewport, Viewport newViewport)
    {
        if (ReferenceEquals(newViewport, oldViewport))
            return;

        base.OnViewportActivated(oldViewport, newViewport);
        RaisePropertyChanged(nameof(ViewportController));
        ActiveViewportChanged?.Invoke(this, new(ViewportController));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}