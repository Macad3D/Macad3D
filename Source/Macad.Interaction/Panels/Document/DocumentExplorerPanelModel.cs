using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Globalization;
using System.Linq;
using System.Windows;
using System.Windows.Data;
using System.Windows.Input;
using System.Windows.Threading;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Presentation;
using Macad.Presentation.TreeView;

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

    /// <summary>
    /// The items shown at root level: folder nodes first, then interactive entities.
    /// </summary>
    public ObservableCollection<object> RootItems { get; } = new();

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The items selected in the tree: interactive entities and folder nodes.
    /// </summary>
    public ObservableCollection<object> SelectedItems { get; } = new();

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The selected folder, if exactly one folder is selected.
    /// </summary>
    public Folder SelectedFolder
    {
        get
        {
            var nodes = SelectedItems.OfType<DocumentExplorerFolderNode>().Take(2).ToArray();
            return nodes.Length == 1 ? nodes[0].Folder : null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The folder new folders are created in: the selected folder, else the folder
    /// of the single selected entity, else root (null).
    /// </summary>
    public Folder TargetFolder
    {
        get
        {
            if (SelectedFolder != null)
                return SelectedFolder;
            var entities = SelectedItems.OfType<InteractiveEntity>().Take(2).ToArray();
            return entities.Length == 1 ? entities[0].Folder : null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public string FilterString
    {
        get { return _FilterString; }
        set
        {
            if (Equals(value, _FilterString))
                return;
            _FilterString = value;
            _RequestSync();
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

    public bool IsNameEditing
    {
        get { return _RenamingItem != null; }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The item whose name is currently edited in the tree: a folder node or an interactive entity.
    /// </summary>
    public object RenamingItem
    {
        get { return _RenamingItem; }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// The selected interactive entity, if exactly one item is selected and it is an entity shown in the tree.
    /// </summary>
    public InteractiveEntity SelectedEntity
    {
        get
        {
            return SelectedItems.Count == 1 && SelectedItems[0] is InteractiveEntity entity && _ShownEntities.Contains(entity)
                       ? entity : null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsTreeEmpty
    {
        get { return RootItems.Count == 0; }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    WorkspaceController _WorkspaceController;
    Model _Document;
    FolderCollection _Folders;
    string _FilterString;
    bool _DocumentIsEmpty;
    bool _SyncRequested;
    object _RenamingItem;
    Folder _KeepVisibleFolder;
    bool _IsChangingSelection;
    readonly Dictionary<Folder, DocumentExplorerFolderNode> _FolderNodes = new();
    readonly HashSet<InteractiveEntity> _ShownEntities = new();

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

    public static ICommand ZoomFitCommand = new RelayCommand<InteractiveEntity>(
        entity =>
        {
            switch (entity)
            {
                case Body body:
                {
                    var brep = body.GetTransformedBRep();
                    if (brep != null)
                    {
                        InteractiveContext.Current.ViewportController.ZoomFit(brep.BoundingBox());
                    }
                    break;
                }

                case ITransformable transformable:
                {
                    InteractiveContext.Current.ViewportController.PanToCenter(transformable.Position);
                    break;
                }
            }
        });

    //--------------------------------------------------------------------------------------------------

    public static ICommand ClearFilterStringCommand = new RelayCommand<DocumentExplorerPanelModel>(
        (model) =>
        {
            model.FilterString = null;
        });

    //--------------------------------------------------------------------------------------------------

    public ActionCommand AddFolderCommand { get; private set; }
    public ActionCommand RenameFolderCommand { get; private set; }
    public ActionCommand RemoveFolderCommand { get; private set; }
    public ActionCommand RenameEntityCommand { get; private set; }
    public RelayCommand<DragParameters> DragCommand { get; private set; }
    public RelayCommand<DropParameters> DropCommand { get; private set; }

    //--------------------------------------------------------------------------------------------------

    void _CreateCommands()
    {
        // Adding and removing differ from the plain folder commands: the target is taken from
        // the explorer's selection, and a new folder starts in rename mode.
        AddFolderCommand = new ActionCommand(_ExecuteAddFolder, () => FolderCommands.CreateFolder.CanExecute(null))
        {
            Header = () => FolderCommands.CreateFolder.Header(null),
            Description = () => FolderCommands.CreateFolder.Description(null),
            Icon = () => FolderCommands.CreateFolder.Icon(null)
        };

        RenameFolderCommand = new ActionCommand(_ExecuteRenameFolder, () => SelectedFolder != null)
        {
            Header = () => "Rename Folder",
            Description = () => "Renames the selected folder.",
            Icon = () => "Generic-Rename",
            Shortcut = "F2"
        };

        RemoveFolderCommand = new ActionCommand(_ExecuteRemoveFolder, () => SelectedItems.OfType<DocumentExplorerFolderNode>().Any())
        {
            Header = () => FolderCommands.RemoveFolder.Header(null),
            Description = () => FolderCommands.RemoveFolder.Description(null),
            Icon = () => FolderCommands.RemoveFolder.Icon(null),
            Shortcut = "Del"
        };

        RenameEntityCommand = new ActionCommand(_ExecuteRenameEntity, () => SelectedEntity != null)
        {
            Header = () => "Rename Element",
            Description = () => "Renames the selected element.",
            Icon = () => "Generic-Rename",
            Shortcut = "F2"
        };

        DragCommand = new RelayCommand<DragParameters>(_ => { }, _CanExecuteDrag);
        DropCommand = new RelayCommand<DropParameters>(_ExecuteDrop, _CanExecuteDrop);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region c'tor

    internal DocumentExplorerPanelModel()
    {
        _CreateCommands();

        CoreContext.Current.PropertyChanged += Context_PropertyChanged;
        _AttachDocument(InteractiveContext.Current.Document);

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
            SelectedItems.Clear();
            _AttachDocument(InteractiveContext.Current.Document);
            FilterString = null;
        }
        else if (e.PropertyName == nameof(InteractiveContext.WorkspaceController))
        {
            SelectedItems.Clear();
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

    void _AttachDocument(Model document)
    {
        if (_Document != null)
        {
            _Document.Layers.PropertyChanged -= _Layers_PropertyChanged;
            _Document.CollectionChanged -= _Document_CollectionChanged;
            _Document = null;
        }
        if (_Folders != null)
        {
            _Folders.CollectionChanged -= _Folders_CollectionChanged;
            _Folders = null;
        }

        _CancelRenaming();
        _KeepVisibleFolder = null;
        _Document = document;
        if (_Document != null)
        {
            _Document.Layers.PropertyChanged += _Layers_PropertyChanged;
            _Document.CollectionChanged += _Document_CollectionChanged;
            _Folders = _Document.Folders;
            _Folders.CollectionChanged += _Folders_CollectionChanged;
        }

        _SyncTree();
    }

    //--------------------------------------------------------------------------------------------------

    void _Document_CollectionChanged(object sender, NotifyCollectionChangedEventArgs e)
    {
        _RequestSync();
    }

    //--------------------------------------------------------------------------------------------------

    void _Folders_CollectionChanged(object sender, NotifyCollectionChangedEventArgs e)
    {
        _RequestSync();
    }

    //--------------------------------------------------------------------------------------------------

    void _Folder_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName is nameof(Folder.ParentId) or nameof(Folder.Name))
        {
            _RequestSync();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Selection_SelectionChanged(SelectionManager selectionManager)
    {
        if (!_IsChangingSelection)
        {
            // Selection was changed outside the explorer, folders are no longer meant
            foreach (var node in SelectedItems.OfType<DocumentExplorerFolderNode>().ToArray())
            {
                SelectedItems.Remove(node);
            }
        }

        var toRemove = SelectedItems.OfType<InteractiveEntity>().Except(selectionManager.SelectedEntities).ToArray();
        foreach (var entity in toRemove)
        {
            SelectedItems.Remove(entity);
        }

        var toAdd = selectionManager.SelectedEntities.Except(SelectedItems.OfType<InteractiveEntity>()).ToArray();
        foreach (var entity in toAdd)
        {
            SelectedItems.Add(entity);
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal void ChangeSelection(IEnumerable<object> itemsToSelect, IEnumerable<object> itemsToUnSelect)
    {
        var select = itemsToSelect.ToArray();
        var unselect = itemsToUnSelect.ToArray();

        foreach (var node in unselect.OfType<DocumentExplorerFolderNode>())
        {
            SelectedItems.Remove(node);
        }
        foreach (var node in select.OfType<DocumentExplorerFolderNode>())
        {
            if (!SelectedItems.Contains(node))
                SelectedItems.Add(node);
        }

        var workspaceController = InteractiveContext.Current.WorkspaceController;
        if (workspaceController == null)
            return;

        _IsChangingSelection = true;
        try
        {
            workspaceController.Selection.ChangeEntitySelection(select.OfType<InteractiveEntity>(), unselect.OfType<InteractiveEntity>());
        }
        finally
        {
            _IsChangingSelection = false;
        }
        workspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public bool KeyDown(KeyEventArgs keyEventArgs)
    {
        if (Keyboard.Modifiers == ModifierKeys.None)
        {
            if (keyEventArgs.Key == Key.F2)
            {
                if (RenameFolderCommand.CanExecute())
                {
                    RenameFolderCommand.Execute();
                    return true;
                }
                if (RenameEntityCommand.CanExecute())
                {
                    RenameEntityCommand.Execute();
                    return true;
                }
            }

            if (keyEventArgs.Key == Key.Delete && RemoveFolderCommand.CanExecute())
            {
                bool hasEntities = SelectedItems.OfType<InteractiveEntity>().Any();
                if (!_RemoveSelectedFolders() || !hasEntities)
                    return true; // Cancelled, or nothing else to delete
            }
        }

        // Forward to Workspace
        return InteractiveContext.Current.ShortcutHandler.KeyPressed("Workspace", keyEventArgs.Key, Keyboard.Modifiers);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Folder Commands

    void _ExecuteAddFolder()
    {
        var parent = TargetFolder;
        var folder = FolderUtils.AddFolder(parent);
        if (folder == null)
            return;

        if (parent != null)
            parent.IsExpanded = true;

        _KeepVisibleFolder = folder;
        _SyncTree();
        if (!_FolderNodes.TryGetValue(folder, out var node))
            return;

        ChangeSelection(new object[] { node }, SelectedItems.ToArray());
        Dispatcher.CurrentDispatcher.InvokeAsync(() => _StartRenaming(node), DispatcherPriority.Loaded);
    }

    //--------------------------------------------------------------------------------------------------

    void _ExecuteRemoveFolder()
    {
        _RemoveSelectedFolders();
    }

    //--------------------------------------------------------------------------------------------------

    bool _RemoveSelectedFolders()
    {
        var folders = SelectedItems.OfType<DocumentExplorerFolderNode>().Select(n => n.Folder).ToArray();
        return FolderUtils.RemoveFolders(folders);
    }

    //--------------------------------------------------------------------------------------------------

    void _ExecuteRenameFolder()
    {
        var folder = SelectedFolder;
        if (folder != null && _FolderNodes.TryGetValue(folder, out var node))
        {
            _StartRenaming(node);
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Renaming

    void _ExecuteRenameEntity()
    {
        var entity = SelectedEntity;
        if (entity == null)
            return;

        // The entity must be shown to edit its name
        if (FolderUtils.ExpandToEntities([entity]))
        {
            Dispatcher.CurrentDispatcher.InvokeAsync(() => _StartRenaming(entity), DispatcherPriority.Loaded);
        }
        else
        {
            _StartRenaming(entity);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _StartRenaming(object item)
    {
        _CancelRenaming();
        bool isShown = item switch
        {
            DocumentExplorerFolderNode node => _FolderNodes.ContainsValue(node),
            InteractiveEntity entity => _ShownEntities.Contains(entity),
            _ => false
        };
        if (!isShown)
            return;

        _RenamingItem = item;
        RaisePropertyChanged(nameof(RenamingItem));
        RaisePropertyChanged(nameof(IsNameEditing));
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns the current name of the item edited, to initialize the edit box.
    /// </summary>
    internal static string GetItemName(object item)
    {
        return item switch
        {
            DocumentExplorerFolderNode node => node.Folder.Name,
            InteractiveEntity entity => entity.Name,
            _ => null
        };
    }

    //--------------------------------------------------------------------------------------------------

    internal void FinishRenaming(string newName)
    {
        var item = _RenamingItem;
        if (item == null)
            return;

        _CancelRenaming();
        switch (item)
        {
            case DocumentExplorerFolderNode node:
                FolderUtils.RenameFolder(node.Folder, newName);
                break;
            case InteractiveEntity entity:
                EntityUtils.RenameEntity(entity, newName);
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    internal void CancelRenaming()
    {
        _CancelRenaming();
    }

    //--------------------------------------------------------------------------------------------------

    void _CancelRenaming()
    {
        if (_KeepVisibleFolder != null && (_RenamingItem as DocumentExplorerFolderNode)?.Folder == _KeepVisibleFolder)
        {
            _KeepVisibleFolder = null;
            _RequestSync();
        }

        if (_RenamingItem == null)
            return;

        _RenamingItem = null;
        RaisePropertyChanged(nameof(RenamingItem));
        RaisePropertyChanged(nameof(IsNameEditing));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Drag and Drop

    static object _ToModelObject(object item)
    {
        return item is DocumentExplorerFolderNode node ? node.Folder : item;
    }

    //--------------------------------------------------------------------------------------------------

    bool _CanExecuteDrag(DragParameters parameter)
    {
        return parameter?.DraggedObject is InteractiveEntity or DocumentExplorerFolderNode;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns the folder dropped items are moved into, or null for root.
    /// </summary>
    static Folder _GetDropTarget(DropParameters parameter)
    {
        // On insertion, DropToObject is the parent item of the insertion position.
        // On a drop onto empty space, DropToObject is null.
        return parameter.DropToObject switch
        {
            DocumentExplorerFolderNode node => node.Folder,
            InteractiveEntity entity when !parameter.IsInsertion => entity.Folder,
            _ => null
        };
    }

    //--------------------------------------------------------------------------------------------------

    bool _CanExecuteDrop(DropParameters parameter)
    {
        if (parameter?.DroppedObjects == null)
            return false;

        return FolderUtils.CanMoveToFolder(parameter.DroppedObjects.Select(_ToModelObject), _GetDropTarget(parameter));
    }

    //--------------------------------------------------------------------------------------------------

    void _ExecuteDrop(DropParameters parameter)
    {
        if (!_CanExecuteDrop(parameter))
            return;

        var target = _GetDropTarget(parameter);
        if (FolderUtils.MoveToFolder(parameter.DroppedObjects.Select(_ToModelObject), target) && target != null)
        {
            target.IsExpanded = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Tree

    bool _IsFiltering
    {
        get
        {
            var flags = InteractiveContext.Current.EditorState.DocumentFilterFlags;
            return !_FilterString.IsNullOrEmpty()
                   || flags.HasFlag(DocumentFilterFlags.Visible)
                   || flags.HasFlag(DocumentFilterFlags.ActiveLayer);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RequestSync()
    {
        if (_SyncRequested)
            return;

        _SyncRequested = true;
        Dispatcher.CurrentDispatcher.InvokeAsync(() =>
        {
            if (_SyncRequested)
                _SyncTree();
        }, DispatcherPriority.Normal);
    }

    //--------------------------------------------------------------------------------------------------

    void _SyncTree()
    {
        _SyncRequested = false;

        if (_Document == null)
        {
            foreach (var node in _FolderNodes.Values)
                _DetachNode(node);
            _FolderNodes.Clear();
            _ShownEntities.Clear();
            RootItems.Clear();
            DocumentIsEmpty = true;
            RaisePropertyChanged(nameof(IsTreeEmpty));
            return;
        }

        // Update folder nodes
        var folders = _Folders.ToArray();
        foreach (var removed in _FolderNodes.Keys.Except(folders).ToArray())
        {
            var node = _FolderNodes[removed];
            if (node == _RenamingItem)
                _CancelRenaming();
            SelectedItems.Remove(node);
            _DetachNode(node);
            _FolderNodes.Remove(removed);
        }
        foreach (var added in folders.Where(f => !_FolderNodes.ContainsKey(f)))
        {
            var node = new DocumentExplorerFolderNode(added);
            added.PropertyChanged += _Folder_PropertyChanged;
            _FolderNodes.Add(added, node);
        }

        bool isFiltering = _IsFiltering;
        foreach (var node in _FolderNodes.Values)
            node.SetFiltering(isFiltering);

        // Collect visible entities per folder
        var shownEntities = _SortEntities(_Document.Where(_Filter)).ToArray();
        _ShownEntities.Clear();
        _ShownEntities.UnionWith(shownEntities);
        if (_RenamingItem is InteractiveEntity renamingEntity && !_ShownEntities.Contains(renamingEntity))
            _CancelRenaming();

        var entitiesByFolder = shownEntities
                               .GroupBy(e => _Folders.Find(e.FolderId))
                               .ToDictionary(g => g.Key ?? _RootKey, g => g.ToList());

        var shownNodes = new HashSet<DocumentExplorerFolderNode>();
        _Sync(RootItems, _BuildChildren(null, entitiesByFolder, isFiltering, shownNodes));

        // Folders hidden by the filter must not be acted on
        foreach (var hidden in SelectedItems.OfType<DocumentExplorerFolderNode>().Where(n => !shownNodes.Contains(n)).ToArray())
        {
            SelectedItems.Remove(hidden);
        }

        DocumentIsEmpty = _Document.EntityCount == 0 && folders.Length == 0;
        RaisePropertyChanged(nameof(IsTreeEmpty));
    }

    //--------------------------------------------------------------------------------------------------

    static readonly Folder _RootKey = new();

    //--------------------------------------------------------------------------------------------------

    bool _IsSameOrAncestorOfKeepVisible(Folder folder)
    {
        return _KeepVisibleFolder != null && _Folders.IsSameOrAncestor(folder, _KeepVisibleFolder);
    }

    //--------------------------------------------------------------------------------------------------

    void _DetachNode(DocumentExplorerFolderNode node)
    {
        node.Folder.PropertyChanged -= _Folder_PropertyChanged;
        node.Detach();
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Builds the wanted children of the folder (null = root), syncs the child nodes, and
    /// returns the wanted children. While filtering, folders without matches below are left out.
    /// </summary>
    List<object> _BuildChildren(Folder parent, Dictionary<Folder, List<InteractiveEntity>> entitiesByFolder, bool isFiltering,
                                HashSet<DocumentExplorerFolderNode> shownNodes)
    {
        var result = new List<object>();
        foreach (var folder in _SortFolders(_Folders.GetChildren(parent)))
        {
            var node = _FolderNodes[folder];
            var children = _BuildChildren(folder, entitiesByFolder, isFiltering, shownNodes);
            _Sync(node.Children, children);
            if (isFiltering && children.Count == 0 && !_IsSameOrAncestorOfKeepVisible(folder))
                continue;
            result.Add(node);
            shownNodes.Add(node);
        }

        if (entitiesByFolder.TryGetValue(parent ?? _RootKey, out var entities))
        {
            result.AddRange(entities);
        }
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Changes the target collection in place to match the wanted list, so that item containers
    /// and their state are preserved.
    /// </summary>
    static void _Sync(ObservableCollection<object> target, IList<object> wanted)
    {
        var wantedSet = new HashSet<object>(wanted);
        for (int i = target.Count - 1; i >= 0; i--)
        {
            if (!wantedSet.Contains(target[i]))
                target.RemoveAt(i);
        }

        for (int i = 0; i < wanted.Count; i++)
        {
            if (i < target.Count && ReferenceEquals(target[i], wanted[i]))
                continue;

            int index = target.IndexOf(wanted[i]);
            if (index >= 0)
                target.Move(index, i);
            else
                target.Insert(i, wanted[i]);
        }
    }

    //--------------------------------------------------------------------------------------------------

    IEnumerable<Folder> _SortFolders(IEnumerable<Folder> folders)
    {
        var flags = InteractiveContext.Current.EditorState.DocumentFilterFlags;
        return flags.HasFlag(DocumentFilterFlags.SortDescending)
                   ? folders.OrderByDescending(f => f.Name, StringComparer.CurrentCultureIgnoreCase)
                   : folders.OrderBy(f => f.Name, StringComparer.CurrentCultureIgnoreCase);
    }

    //--------------------------------------------------------------------------------------------------

    IEnumerable<InteractiveEntity> _SortEntities(IEnumerable<InteractiveEntity> entities)
    {
        var flags = InteractiveContext.Current.EditorState.DocumentFilterFlags;
        bool descending = flags.HasFlag(DocumentFilterFlags.SortDescending);

        Func<InteractiveEntity, string> key = null;
        if (flags.HasFlag(DocumentFilterFlags.SortByName))
            key = e => e.Name;
        else if (flags.HasFlag(DocumentFilterFlags.SortByType))
            key = e => e.TypeName;

        if (key == null)
            return entities;

        // Entities of the same type are sorted by name
        return descending
                   ? entities.OrderByDescending(key, StringComparer.CurrentCulture).ThenByDescending(e => e.Name, StringComparer.CurrentCulture)
                   : entities.OrderBy(key, StringComparer.CurrentCulture).ThenBy(e => e.Name, StringComparer.CurrentCulture);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Filtering

    void _EditorState_StateChanged(object sender, PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(EditorState.DocumentFilterFlags))
        {
            _RequestSync();
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _Filter(InteractiveEntity entity)
    {
        if (entity == null)
            return false;

        DocumentFilterFlags flags = InteractiveContext.Current.EditorState.DocumentFilterFlags;

        if (flags.HasFlag(DocumentFilterFlags.Visible))
        {
            if (!entity.IsVisible)
                return false;
        }

        if (flags.HasFlag(DocumentFilterFlags.ActiveLayer))
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
        if (InteractiveContext.Current.EditorState.DocumentFilterFlags.HasFlag(DocumentFilterFlags.ActiveLayer))
        {
            _RequestSync();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Converter

    public static IsRenamingItemToVisibilityConverter IsRenamingConverter = new();

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Shows the rename box of an item: values are the item and the item being renamed.
    /// </summary>
    public class IsRenamingItemToVisibilityConverter : IMultiValueConverter
    {
        public object Convert(object[] values, Type targetType, object parameter, CultureInfo culture)
        {
            return values.Length == 2 && values[0] != null && ReferenceEquals(values[0], values[1])
                       ? Visibility.Visible : Visibility.Collapsed;
        }

        public object[] ConvertBack(object value, Type[] targetTypes, object parameter, CultureInfo culture)
        {
            throw new NotImplementedException();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static IsFolderNodeValueConverter IsFolderNodeConverter = new();

    //--------------------------------------------------------------------------------------------------

    public class IsFolderNodeValueConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            return value is DocumentExplorerFolderNode;
        }

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            throw new NotImplementedException();
        }
    }

    //--------------------------------------------------------------------------------------------------

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
