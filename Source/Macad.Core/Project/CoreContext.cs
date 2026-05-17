using System;
using System.Linq;
using Macad.Core.Topology;
using Macad.Common;

namespace Macad.Core;

/// <summary>
/// The CoreContext is a singleton holding the global state of the core module. Most functionality
/// of the classes in the core module access the state using this class.
/// </summary>
public abstract class CoreContext: BaseObject, IDisposable
{
    /// <summary>
    /// The current instance of the CoreContext. It will be set automatically when a new context
    /// class is instantiated.
    /// </summary>
    public static CoreContext Current
    {
        get { return field; }
        set
        {
            field?.Dispose();
            field = value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The currently active workspace.
    /// </summary>
    public virtual Workspace Workspace
    {
        get { return _Workspace; }
        protected set
        {
            _Workspace = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The currently active document.
    /// </summary>
    public virtual Model Document
    {
        get { return _Document; }
        set
        {
            _Document = value;
                
            RaisePropertyChanged();
            RaisePropertyChanged(nameof(UndoHandler));
            RaisePropertyChanged(nameof(Layers));
            Layers?.OnActivated();
                
            if (!(_Document is null) && !_Document.Workspaces.Contains(_Workspace))
                Workspace = _Document.Workspaces.FirstOrDefault();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public UndoHandler UndoHandler
    {
        get { return Document?.UndoHandler; }
    }

    //--------------------------------------------------------------------------------------------------

    public LayerCollection Layers
    {
        get { return Document?.Layers; }
    }

    //--------------------------------------------------------------------------------------------------

    public MessageHandler MessageHandler { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public ParameterSets Parameters
    {
        get
        {
            if(_ParameterSets == null)
                _ParameterSets = LoadLocalSettings<ParameterSets>("Parameters") ?? new ParameterSets();

            return _ParameterSets;
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected CoreContext()
    {
        CoreModule.Initialize();
        Current = this;
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
        if (disposing)
        {
            MessageHandler?.Dispose();
        }

        _Workspace = null;
        _Document = null;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void SaveSettings()
    {
        if(_ParameterSets != null)
            SaveLocalSettings("Parameters", _ParameterSets);
    }

    //--------------------------------------------------------------------------------------------------

    public virtual void SaveLocalSettings(string name, object obj) {}

    //--------------------------------------------------------------------------------------------------

    public virtual T LoadLocalSettings<T>(string name) where T : class
    {
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    Model _Document;
    Workspace _Workspace;
    ParameterSets _ParameterSets;

    //--------------------------------------------------------------------------------------------------

    #region Events

    protected internal virtual void OnViewportActivated(Viewport oldViewport, Viewport newViewport)
    {
        // Left empty by intent, can be used by derived classes to react on viewport changes
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}