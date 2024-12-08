using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using Macad.Common;
using Macad.Core.Topology;

namespace Macad.Interaction;

public sealed class SelectionManager : IDisposable
{
    public enum SelectionMode
    {
        Exclusive,
        Add,
        Toggle
    }

    //--------------------------------------------------------------------------------------------------

    public List<InteractiveEntity> SelectedEntities
    {
        get
        {
            for (var i = _SelectionContexts.Count - 1; i >= 0; i--)
            {
                var sel = _SelectionContexts[i].SelectedEntities;
                if (sel != null)
                    return sel;
            }

            return _BaseContext.SelectedEntities;
        }
    }

    //--------------------------------------------------------------------------------------------------

    static readonly List<InteractiveEntity> _EmptyList = new(0);
    readonly WorkspaceController _WorkspaceController;

    //--------------------------------------------------------------------------------------------------

    internal SelectionManager(WorkspaceController workspaceController)
    {
        _WorkspaceController = workspaceController;
        _BaseContext = new SelectionContext(workspaceController, SelectionContext.Options.IncludeAll | SelectionContext.Options.NewSelectedList);
        _BaseContext.Activate();
        Entity.EntityRemoved += _Entity_EntityRemoved;
    }

    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
        Entity.EntityRemoved -= _Entity_EntityRemoved;
        _BaseContext.Dispose();
        SelectedEntities.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    #region Selection

    //--------------------------------------------------------------------------------------------------

    public void ClearSelection()
    {
        ChangeEntitySelection(_EmptyList, SelectedEntities);
    }

    //--------------------------------------------------------------------------------------------------

    public void SelectEntity(InteractiveEntity entity, SelectionMode mode = SelectionMode.Exclusive)
    {
        SelectEntities(new []{entity}, mode);
    }

    //--------------------------------------------------------------------------------------------------

    public void SelectEntities(IEnumerable<InteractiveEntity> entities, SelectionMode mode = SelectionMode.Exclusive)
    {
        List<InteractiveEntity> toSelect = null;
        List<InteractiveEntity> toDeselect = null;
        entities ??= _EmptyList;

        switch (mode)
        {
            case SelectionMode.Exclusive:
                toSelect = entities.Except(SelectedEntities).ToList();
                toDeselect = SelectedEntities.Except(entities).ToList();
                break;
            case SelectionMode.Add:
                toSelect = entities.Except(SelectedEntities).ToList();
                toDeselect = _EmptyList;
                break;
            case SelectionMode.Toggle:
                toSelect = entities.Except(SelectedEntities).ToList();
                toDeselect = SelectedEntities.Intersect(entities).ToList();
                break;
        }

        ChangeEntitySelection(toSelect, toDeselect);
    }
        
    //--------------------------------------------------------------------------------------------------

    public void DeselectEntity(InteractiveEntity entity)
    {
        DeselectEntities(new []{entity});
    }

    //--------------------------------------------------------------------------------------------------

    public void DeselectEntities(IEnumerable<InteractiveEntity> entities)
    {
        if (entities == null)
            return;

        List<InteractiveEntity> toDeselect = entities.Intersect(SelectedEntities).ToList();
        if (toDeselect.Count == 0)
            return;

        ChangeEntitySelection(_EmptyList, toDeselect);
    }

    //--------------------------------------------------------------------------------------------------

    [SuppressMessage("ReSharper", "PossibleMultipleEnumeration")]
    public void ChangeEntitySelection(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
    {
        if (_RaiseSelectionChanging(entitiesToSelect, entitiesToUnSelect))
            return;

        entitiesToUnSelect.ForEach(_RemoveEntityFromSelectionList);
        entitiesToSelect.ForEach(_AddEntityToSelectionList);

        _SyncToAisSelection();
        _RaiseSelectionChanged();
    }

    //--------------------------------------------------------------------------------------------------

    void _AddEntityToSelectionList(InteractiveEntity entity)
    {
        if (entity == null || SelectedEntities.Contains(entity))
            return;

        SelectedEntities.Add(entity);
    }

    //--------------------------------------------------------------------------------------------------

    void _RemoveEntityFromSelectionList(InteractiveEntity entity)
    {
        if (entity == null)
            return;

        SelectedEntities.Remove(entity);
    }

    //--------------------------------------------------------------------------------------------------

    void _SyncFromAisSelection()
    {
        var aisContext = _WorkspaceController.AisContext;
        var aisSelected = new List<InteractiveEntity>();

        aisContext.InitSelected();
        while (aisContext.MoreSelected())
        {
            var selected = _WorkspaceController.VisualObjects.GetEntity(aisContext.SelectedInteractive());
            if (selected != null)
                aisSelected.Add(selected);

            aisContext.NextSelected();
        }

        var toSelect = aisSelected.Except(SelectedEntities).ToArray();
        var toDeselect = SelectedEntities.Except(aisSelected).ToArray();

        if (_RaiseSelectionChanging(toSelect, toDeselect))
            return;

        foreach (var entity in toDeselect)
        {
            _RemoveEntityFromSelectionList(entity);
        }

        foreach (var entity in toSelect)
        {
            _AddEntityToSelectionList(entity);
        }

        _RaiseSelectionChanged();
    }

    //--------------------------------------------------------------------------------------------------

    [SuppressMessage("ReSharper", "PossibleMultipleEnumeration")]
    void _SyncToAisSelection()
    {
        var aisContext = _WorkspaceController.AisContext;
        _WorkspaceController.VisualObjects.UpdateInvalidatedEntities();

        aisContext.ClearSelected(false);
        var aisObjToSelect = SelectedEntities.Select(entity => _WorkspaceController.VisualObjects.Get(entity)?.AisObject)
                                             .Where(vo => vo != null);
        foreach (var selected in aisObjToSelect)
        {
            aisContext.AddOrRemoveSelected(selected, false);
        }
        aisContext.UpdateSelected(false);
        aisContext.ClearDetected(false);
    }

    //--------------------------------------------------------------------------------------------------

    public class SelectionChangingCancelEventArgs : CancelEventArgs
    {
        public IEnumerable<InteractiveEntity> EntitiesToUnSelect { get; }
        public IEnumerable<InteractiveEntity> EntitiesToSelect { get; }

        public SelectionChangingCancelEventArgs(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
        {
            EntitiesToSelect = entitiesToSelect ?? new List<InteractiveEntity>();
            EntitiesToUnSelect = entitiesToUnSelect ?? new List<InteractiveEntity>();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public delegate void SelectionChangingEventHandler(SelectionManager selectionManager, SelectionChangingCancelEventArgs eventArgs);

    //--------------------------------------------------------------------------------------------------

    public event SelectionChangingEventHandler SelectionChanging;

    //--------------------------------------------------------------------------------------------------

    bool _RaiseSelectionChanging(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
    {
        if (SelectionChanging != null)
        {
            var eventArgs = new SelectionChangingCancelEventArgs(entitiesToSelect, entitiesToUnSelect);
            SelectionChanging.Invoke(this, eventArgs);
            return eventArgs.Cancel;
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public delegate void SelectionChangedEventHandler(SelectionManager selectionManager);

    //--------------------------------------------------------------------------------------------------

    public event SelectionChangedEventHandler SelectionChanged;

    //--------------------------------------------------------------------------------------------------

    void _RaiseSelectionChanged()
    {
        SelectionChanged?.Invoke(this);
    }

    //--------------------------------------------------------------------------------------------------

    void _Entity_EntityRemoved(Entity entity)
    {
        if (!(entity is InteractiveEntity interactiveEntity))
            return;

        // Deselect
        _RemoveEntityFromSelectionList(interactiveEntity);
        _RaiseSelectionChanged();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region SelectionContext

    readonly SelectionContext _BaseContext;
    readonly List<SelectionContext> _SelectionContexts = new List<SelectionContext>();

    public SelectionContext CurrentContext {  get { return _SelectionContexts.LastOrDefault(); } }

    bool _ContextUpdatePending = false;

    //--------------------------------------------------------------------------------------------------

    public SelectionContext OpenContext(SelectionContext.Options options = SelectionContext.Options.None)
    {
        (CurrentContext ?? _BaseContext).DeActivate();

        var context = new SelectionContext(_WorkspaceController, options);
        context.ParametersChanged += _Context_ParametersChanged;
        _SelectionContexts.Add(context);
        context.Activate();
        _SyncToAisSelection();
        Invalidate();
        return context;
    }

    //--------------------------------------------------------------------------------------------------

    public void CloseContext(SelectionContext context)
    {
        if (_SelectionContexts.Contains(context))
        {
            bool wasCurrent = context == CurrentContext;
            context.DeActivate();
            context.ParametersChanged -= _Context_ParametersChanged;
            _SelectionContexts.Remove(context);
            if (wasCurrent)
            {
                (CurrentContext ?? _BaseContext).Activate();
                _SyncToAisSelection();
            }
        }
        Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _Context_ParametersChanged(SelectionContext selectionContext)
    {
        Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public void Invalidate()
    {
        _ContextUpdatePending = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void Update()
    {
        if (!_ContextUpdatePending)
            return;

        var ctx = CurrentContext ?? _BaseContext;
        ctx.UpdateAis();

        _ContextUpdatePending = false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}