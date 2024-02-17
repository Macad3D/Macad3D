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
        get { return _Current; }
        set
        {
            _Current?.Dispose();
            _Current = value;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public virtual Workspace Workspace
    {
        get { return _Workspace; }
        protected set
        {
            _Workspace = value;
            Viewport = _Workspace?.Viewports.FirstOrDefault();
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public virtual Viewport Viewport
    {
        get { return _Viewport; }
        protected set
        {
            _Viewport = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

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
        _Viewport = null;
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

    static CoreContext _Current;
    Model _Document;
    Workspace _Workspace;
    Viewport _Viewport;
    ParameterSets _ParameterSets;

    //--------------------------------------------------------------------------------------------------

}