using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Interaction.Panels;

namespace Macad.Interaction;

public abstract class InteractiveContext : CoreContext
{
    public ModelController DocumentController
    {
        get { return _DocumentController; }
        protected set
        {
            _DocumentController = value;
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

    public WorkspaceController WorkspaceController
    {
        get { return _WorkspaceController; }
        private set
        {
            if (_WorkspaceController == value)
                return;

            _WorkspaceController?.Dispose();
            _WorkspaceController = value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override Viewport Viewport
    {
        get
        {
            return base.Viewport;
        }
        protected set
        {
            base.Viewport = value;
            if (value == null)
            {
                ViewportController = null;
                WorkspaceController.ActiveViewport = null;
            }
            else
            {
                WorkspaceController.ActiveViewport = base.Viewport;
                ViewportController = WorkspaceController.GetViewController(base.Viewport);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public ViewportController ViewportController
    {
        get
        {
            return _ViewportController;
        }
        private set
        {
            _ViewportController = value;

            RaisePropertyChanged();
        }
    }

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

    ViewportController _ViewportController;
    ModelController _DocumentController;
    List<Color> _RecentUsedColors;
    EditorState _EditorState;
    WorkspaceController _WorkspaceController;

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
        ViewportController = null;
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

    const int _MaxScriptMruCount = 1;

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
}