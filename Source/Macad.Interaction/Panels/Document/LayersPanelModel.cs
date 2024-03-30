using System.Collections.ObjectModel;
using System.Linq;
using System.Windows.Data;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Interaction.Panels;

public class LayersPanelModel : BaseObject
{
    #region Properties

    public CollectionView LayersView
    {
        get { return _LayersView; }
        private set
        {
            _LayersView = value; 
            RaisePropertyChanged();
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public ObservableCollection<Layer> SelectedLayers
    {
        get { return _SelectedLayers; }
    }

    //--------------------------------------------------------------------------------------------------

    public Layer SelectedLayer
    {
        get { return _SelectedLayer; }
        set
        {
            if (_SelectedLayer != value)
            {
                IsNameEditing = false;
                _SelectedLayer = value;
                RaisePropertyChanged();
            }

            if(_SelectedLayers.FirstOrDefault() != value)
            {
                _SelectedLayers.Clear();
                _SelectedLayers.Add(value);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsNameEditing
    {
        get { return _IsNameEditing; }
        set
        {
            _IsNameEditing = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    CollectionView _LayersView;
    LayerCollection _Layers;
    readonly ObservableCollection<Layer> _SelectedLayers = new();
    Layer _SelectedLayer;
    bool _IsNameEditing;
    Layer _RenamingLayer;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Commands

    public ActionCommand StartRenamingCommand { get; private set; }
    public ActionCommand ActivateLayerCommand { get; private set; }

    //--------------------------------------------------------------------------------------------------

    bool CanExecuteStartRenamingCommand()
    {
        return SelectedLayer != null
               && CoreContext.Current?.Layers != null
               && SelectedLayer != CoreContext.Current.Layers.Default
               && CoreContext.Current.Layers.Contains(SelectedLayer);
    }

    //--------------------------------------------------------------------------------------------------

    void ExecuteStartRenamingCommand()
    {
        IsNameEditing = true;
        _RenamingLayer = SelectedLayer;
    }

    //--------------------------------------------------------------------------------------------------

    internal void FinishRenaming(string newName)
    {
        if (_RenamingLayer != null)
        {
            _RenamingLayer.Name = newName;
            InteractiveContext.Current.UndoHandler.Commit();
        }
        _RenamingLayer = null;
        IsNameEditing = false;

        InteractiveContext.Current.Document.MarkAsUnsaved();
    }

    //--------------------------------------------------------------------------------------------------

    internal void CancelRenaming()
    {
        IsNameEditing = false;
        _RenamingLayer = null;
    }

    //--------------------------------------------------------------------------------------------------

    bool CanExecuteActivateLayerCommand()
    {
        return SelectedLayer != null
               && CoreContext.Current?.Layers != null
               && CoreContext.Current.Layers.Contains(SelectedLayer);
    }

    //--------------------------------------------------------------------------------------------------

    void ExecuteActivateLayerCommand()
    {
        CoreContext.Current.Layers.ActiveLayer = SelectedLayer;
    }

    //--------------------------------------------------------------------------------------------------

    void CreateCommands()
    {
        StartRenamingCommand = new ActionCommand(ExecuteStartRenamingCommand, CanExecuteStartRenamingCommand)
        {
            Header = () => "Rename",
            Title = () => "Rename Layer",
            Description = () => "Rename the selected layer.",
            Icon = () => "Generic-Rename",
            Shortcut = "F2"
        };
        ActivateLayerCommand = new ActionCommand(ExecuteActivateLayerCommand, CanExecuteActivateLayerCommand);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region C'tor

    public LayersPanelModel()
    {
        CreateCommands();

        InteractiveContext.Current.PropertyChanged += InteractiveContext_PropertyChanged;
        SelectedLayers.CollectionChanged += _SelectedLayers_CollectionChanged;

        _IsNameEditing = false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Callbacks

    void _SelectedLayers_CollectionChanged(object sender, System.Collections.Specialized.NotifyCollectionChangedEventArgs e)
    {
        SelectedLayer = _SelectedLayers.FirstOrDefault();
    }

    //--------------------------------------------------------------------------------------------------

    void InteractiveContext_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(InteractiveContext.Layers))
        {
            if (_LayersView != null)
            {
                _LayersView.DetachFromSourceCollection();
                LayersView = null;
            }
            _Layers = (sender as InteractiveContext)?.Layers;
            if (_Layers != null)
            {
                LayersView = new CollectionView(_Layers);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Drag'n'Drop
        
    public bool CanMove(Layer layer)
    {
        return layer != _Layers.Default;
    }

    //--------------------------------------------------------------------------------------------------
        
    public bool CanDrop(Layer dropToLayer)
    {
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public void MoveToIndex(Layer layer, int newIndex)
    {
        if (_Layers.Move(layer, newIndex))
        {
            InteractiveContext.Current.UndoHandler.Commit();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region View Interface
                
    internal bool KeyDown(KeyEventArgs keyEventArgs)
    {
        // Forward to Workspace
        return InteractiveContext.Current.ShortcutHandler.KeyPressed("Workspace", keyEventArgs.Key, Keyboard.Modifiers);
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion
}