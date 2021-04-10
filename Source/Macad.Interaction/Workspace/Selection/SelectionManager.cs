using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using System.Windows;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;

namespace Macad.Interaction
{
    public sealed class SelectionManager : IDisposable
    {
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

        readonly WorkspaceController _WorkspaceController;

        //--------------------------------------------------------------------------------------------------

        public SelectionManager(WorkspaceController workspaceController)
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

        void ClearSelection(bool suppressEvent = false)
        {
            if (!suppressEvent && _RaiseSelectionChanging(null, SelectedEntities))
                return;

            SelectedEntities.Clear();
        }

        //--------------------------------------------------------------------------------------------------

        public void SelectEntity(InteractiveEntity entity, bool exclusiveSelection = true)
        {
            if (_RaiseSelectionChanging(
                entity != null ? new List<InteractiveEntity>() { entity } : new List<InteractiveEntity>(),
                exclusiveSelection ? SelectedEntities : null))
                return;

            if (exclusiveSelection)
            {
                ClearSelection(true);
            }

            if (entity != null)
            {
                _AddEntityToSelectionList(entity);
                _SyncToAisSelection();
            }
            else
            {
                _WorkspaceController.Workspace.AisContext.ClearSelected(false);
            }

            _RaiseSelectionChanged();
        }

        //--------------------------------------------------------------------------------------------------

        public void SelectEntities(IEnumerable<InteractiveEntity> entities, bool exclusiveSelection = true)
        {
            var entityList = entities?.ToList() ?? new List<InteractiveEntity>();
            if (_RaiseSelectionChanging(entityList,
                exclusiveSelection ? SelectedEntities : null))
                return;

            if (exclusiveSelection)
            {
                ClearSelection(true);
            }

            if (entities != null)
            {
                foreach (var entity in entityList)
                {
                    _AddEntityToSelectionList(entity);
                }
                _SyncToAisSelection();
            }
            else
            {
                _WorkspaceController.Workspace.AisContext.ClearSelected(false);
            }

            _RaiseSelectionChanged();
        }

        //--------------------------------------------------------------------------------------------------

        [SuppressMessage("ReSharper", "PossibleMultipleEnumeration")]
        public void ChangeEntitySelection(IEnumerable<InteractiveEntity> entitiesToSelect, IEnumerable<InteractiveEntity> entitiesToUnSelect)
        {
            if (_RaiseSelectionChanging(entitiesToSelect, entitiesToUnSelect))
                return;

            foreach (var entity in entitiesToUnSelect)
            {
                _RemoveEntityFromSelectionList(entity);
            }
            foreach (var entity in entitiesToSelect)
            {
                _AddEntityToSelectionList(entity);
            }

            _SyncToAisSelection();
            _RaiseSelectionChanged();
        }

        //--------------------------------------------------------------------------------------------------

        void _AddEntityToSelectionList(InteractiveEntity entity)
        {
            if (entity == null)
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
            var aisContext = _WorkspaceController.Workspace.AisContext;
            var aisSelected = new List<InteractiveEntity>();

            aisContext.InitSelected();
            while (aisContext.MoreSelected())
            {
                var selected = _WorkspaceController.VisualShapes.GetVisibleEntity(aisContext.SelectedInteractive());
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

        void _SyncToAisSelection()
        {
            var aisContext = _WorkspaceController.Workspace.AisContext;
            _WorkspaceController.VisualShapes.UpdateInvalidatedEntities();
            aisContext.ClearSelected(false);
            
            foreach (var entity in SelectedEntities)
            {
                var visualShape = _WorkspaceController.VisualShapes.GetVisualShape(entity);
                if (visualShape != null)
                {
                    aisContext.AddOrRemoveSelected(visualShape.AisObject, false);
                }
            }
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
                context.DeActivate();
                context.ParametersChanged -= _Context_ParametersChanged;
                _SelectionContexts.Remove(context);
                _SyncToAisSelection();
                (CurrentContext ?? _BaseContext).Activate();
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
}