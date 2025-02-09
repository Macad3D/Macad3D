using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Globalization;
using System.Linq;
using System.Windows.Data;
using System.Windows.Input;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Interaction.Panels;

[Flags]
[SerializeType]
public enum DocumentFilterFlags
{
    None = 0,
    ActiveLayer    = 1 << 0,
    Visible        = 1 << 1,

    SortDescending = 1 << 15,
    SortingKey     = 3 << 16,
    SortByName     = 1 << 16,
    SortByType     = 2 << 16,
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public class DocumentExplorerPanelModel : BaseObject
{
    #region Properties
        
    public virtual InteractiveContext Context
    {
        get { return InteractiveContext.Current; }
    }

    //--------------------------------------------------------------------------------------------------

    public CollectionView EntitiesView
    {
        get { return _EntitiesView; }
        private set
        {
            if (Equals(value, _EntitiesView)) 
                return;
            _EntitiesView = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public ObservableCollection<Entity> SelectedEntities { get; } = new();

    //--------------------------------------------------------------------------------------------------

    public string FilterString
    {
        get { return _FilterString; }
        set
        {
            if (Equals(value, _FilterString)) 
                return;
            _FilterString = value;
            EntitiesView?.Refresh();
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool DocumentIsEmpty
    {
        get { return _DocumentIsEmpty; }
        private set
        {
            if (value == _DocumentIsEmpty) 
                return;
            _DocumentIsEmpty = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    WorkspaceController _WorkspaceController;
    Model _Document;
    CollectionView _EntitiesView;
    string _FilterString;
    bool _DocumentIsEmpty;

    #endregion

    #region Commands

    public static ICommand ToggleVisibilityCommand = new RelayCommand<InteractiveEntity>(
        entity =>
        {
            if (entity != null)
            {
                entity.IsVisible = !entity.IsVisible;
                InteractiveContext.Current.UndoHandler.Commit();
            }
        });

    //--------------------------------------------------------------------------------------------------
        
    public static ICommand ClearFilterStringCommand = new RelayCommand<DocumentExplorerPanelModel>(
        (model) =>
        {
            model.FilterString = null;
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region c'tor

    internal DocumentExplorerPanelModel()
    {
        CoreContext.Current.PropertyChanged += Context_PropertyChanged;
        _UpdateEntitiesView();

        _WorkspaceController = InteractiveContext.Current.WorkspaceController;
        if (_WorkspaceController != null)
        {
            _WorkspaceController.Selection.SelectionChanged += _Selection_SelectionChanged;
        }

        EditorState.StateChanged += _EditorState_StateChanged;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Events

    void Context_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(CoreContext.Document))
        {
            SelectedEntities.Clear();
            if (_Document != null)
            {
                _Document.Layers.PropertyChanged -= _Layers_PropertyChanged;
                if (DocumentIsEmpty)
                {
                    _Document.CollectionChanged -= _Document_CollectionChanged;
                }
                _Document = null;
            }
            _UpdateEntitiesView(); // Clear view

            _Document = InteractiveContext.Current.Document;
            if (_Document != null)
            {
                _Document.Layers.PropertyChanged += _Layers_PropertyChanged;
                DocumentIsEmpty = _Document.EntityCount == 0;
                if (DocumentIsEmpty)
                {
                    _Document.CollectionChanged += _Document_CollectionChanged;
                }
            }

            FilterString = null;
            _UpdateEntitiesView();
        } 
        else if (e.PropertyName == nameof(InteractiveContext.WorkspaceController))
        {
            SelectedEntities.Clear();
            if (_WorkspaceController != null)
            {
                _WorkspaceController.Selection.SelectionChanged -= _Selection_SelectionChanged;
                _WorkspaceController = null;
            }

            _WorkspaceController = InteractiveContext.Current.WorkspaceController;

            if (_WorkspaceController != null)
            {
                _WorkspaceController.Selection.SelectionChanged += _Selection_SelectionChanged;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Document_CollectionChanged(object sender, System.Collections.Specialized.NotifyCollectionChangedEventArgs e)
    {
        if (!DocumentIsEmpty || _Document == null)
            return;

        DocumentIsEmpty = _Document.EntityCount == 0;
        if (!DocumentIsEmpty)
        {
            _Document.CollectionChanged -= _Document_CollectionChanged;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Selection_SelectionChanged(SelectionManager selectionManager)
    {
        var toRemove = SelectedEntities.Except(selectionManager.SelectedEntities).ToArray();
        foreach (var entity in toRemove)
        {
            SelectedEntities.Remove(entity);
        }

        var toAdd = selectionManager.SelectedEntities.Except(SelectedEntities);
        foreach (var entity in toAdd)
        {
            SelectedEntities.Add(entity);
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal void ChangeSelection(IEnumerable<object> itemsToSelect, IEnumerable<object> itemsToUnSelect)
    {
        InteractiveContext.Current.WorkspaceController.Selection.ChangeEntitySelection(itemsToSelect.OfType<InteractiveEntity>(), itemsToUnSelect.OfType<InteractiveEntity>());
        InteractiveContext.Current.WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public bool KeyDown(KeyEventArgs keyEventArgs)
    {
        // Forward to Workspace
        return InteractiveContext.Current.ShortcutHandler.KeyPressed("Workspace", keyEventArgs.Key, Keyboard.Modifiers);
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Filtering
        
    void _EditorState_StateChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(EditorState.DocumentFilterFlags))
        {
            _UpdateEntitiesSorting();
            EntitiesView.Refresh();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateEntitiesView()
    {
        if (EntitiesView != null)
        {
            EntitiesView.Filter -= _EntitiesView_Filter;
            EntitiesView.DetachFromSourceCollection();
            EntitiesView = null;
        }

        if (_Document == null)
        {
            return;
        }

        EntitiesView = CollectionViewSource.GetDefaultView(CoreContext.Current.Document) as CollectionView;
        EntitiesView.Filter += _EntitiesView_Filter;
        _UpdateEntitiesSorting();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateEntitiesSorting()
    {
        if (EntitiesView == null)
            return;

        DocumentFilterFlags flags = InteractiveContext.Current.EditorState.DocumentFilterFlags;

        EntitiesView.SortDescriptions.Clear();
        ListSortDirection direction = flags.Has(DocumentFilterFlags.SortDescending) 
                                          ? ListSortDirection.Descending 
                                          : ListSortDirection.Ascending;

        if (flags.Has(DocumentFilterFlags.SortByName))
        {
            EntitiesView.SortDescriptions.Add(new SortDescription(nameof(Entity.Name), direction));
        }
        else if(flags.Has(DocumentFilterFlags.SortByType))
        {
            EntitiesView.SortDescriptions.Add(new SortDescription(nameof(Entity.TypeName), direction));
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _EntitiesView_Filter(object obj)
    {
        InteractiveEntity entity = obj as InteractiveEntity;
        if (entity == null)
            return false;

        DocumentFilterFlags flags = InteractiveContext.Current.EditorState.DocumentFilterFlags;

        if (flags.Has(DocumentFilterFlags.Visible))
        {
            if (!entity.IsVisible)
                return false;
        }

        if (flags.Has(DocumentFilterFlags.ActiveLayer))
        {
            if (entity.Layer != _Document.Layers.ActiveLayer)
                return false;
        }

        if (!_FilterString.IsNullOrEmpty())
        {
            if (!entity.Name.Contains(_FilterString, StringComparison.InvariantCultureIgnoreCase))
                return false;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------
        
    void _Layers_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (InteractiveContext.Current.EditorState.DocumentFilterFlags.Has(DocumentFilterFlags.ActiveLayer))
        {
            EntitiesView.Refresh();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IconConverter

    public static ShapeTypeToImageSourceConverter ShapeTypeImageConverter = new();

    //--------------------------------------------------------------------------------------------------

    public class ShapeTypeToImageSourceConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (value == null || PresentationHelper.IsInDesignMode)
                return null;

            Type type = typeof(Body);
            if (value is ShapeType shapeType)
            {
                switch (shapeType)
                {
                    case ShapeType.Sketch:
                        type = typeof(Sketch);
                        break;
                    case ShapeType.Solid:
                        type = typeof(Solid);
                        break;
                    case ShapeType.Mesh:
                        type = typeof(Mesh);
                        break;
                }
            }

            return TypeToImageSourceConverter.Instance.Convert(type, targetType, parameter, culture);
        }

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            throw new NotImplementedException();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}