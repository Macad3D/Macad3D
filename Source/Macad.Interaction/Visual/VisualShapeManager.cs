using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Common;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Visual
{
    public class VisualShapeManager : BaseObject, IDisposable
    {
        #region Members

        WorkspaceController _WorkspaceController;

        readonly Dictionary<TopoDS_Shape, InteractiveEntity> _BRepToInteractiveDictionary = new Dictionary<TopoDS_Shape, InteractiveEntity>();
        readonly Dictionary<InteractiveEntity, VisualShape> _InteractiveToVisualShapeDictionary = new Dictionary<InteractiveEntity, VisualShape>();
        readonly List<InteractiveEntity> _InvalidatedInteractiveEntities = new List<InteractiveEntity>();
        readonly List<InteractiveEntity> _IsolatedEntities = new List<InteractiveEntity>();

        #endregion

        public VisualShapeManager(WorkspaceController workspaceController)
        {
            _WorkspaceController = workspaceController;

            Entity.EntityRemoved += _Entity_EntityRemoved;
            InteractiveEntity.VisualChanged += _InteractiveEntity_VisualChanged;
        }

        //--------------------------------------------------------------------------------------------------

        public void Dispose()
        {
            InteractiveEntity.VisualChanged -= _InteractiveEntity_VisualChanged;
            Entity.EntityRemoved -= _Entity_EntityRemoved;
            
            _BRepToInteractiveDictionary.Clear();
            _InteractiveToVisualShapeDictionary.Clear();
            _InvalidatedInteractiveEntities.Clear();
            _IsolatedEntities.Clear();

            _WorkspaceController = null;
        }

        //--------------------------------------------------------------------------------------------------

        internal void InitEntities()
        {
            foreach (var entity in InteractiveContext.Current.Document.OfType<InteractiveEntity>())
            {
                entity.RaiseVisualChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        #region Isolation

        public delegate void VisualShapeManagerEventHandler(VisualShapeManager visualShapeManager);

        public static event VisualShapeManagerEventHandler IsolatedEntitiesChanged;

        //--------------------------------------------------------------------------------------------------

        public bool EntityIsolationEnabled
        {
            get { return _IsolatedEntities.Count != 0; }
        }

        //--------------------------------------------------------------------------------------------------

        public void SetIsolatedEntities(IEnumerable<InteractiveEntity> entitiesToIsolate)
        {
            _IsolatedEntities.Clear();
            if (entitiesToIsolate != null)
            {
                _IsolatedEntities.AddRange(entitiesToIsolate);
            }

            IsolatedEntitiesChanged?.Invoke(this);
            RaisePropertyChanged(nameof(EntityIsolationEnabled));
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<InteractiveEntity> GetIsolatedEntities()
        {
            if (_IsolatedEntities.Count == 0)
                return null;

            return _IsolatedEntities;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        public VisualShape GetVisualShape(InteractiveEntity obj, bool forceCreation=false)
        {
            if (obj == null)
                return null;

            if (_InteractiveToVisualShapeDictionary.ContainsKey(obj))
                return _InteractiveToVisualShapeDictionary[obj];

            if(forceCreation)
                return AddVisualShape(obj);

            return null;
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<VisualShape> GetVisualShapes()
        {
            return _InteractiveToVisualShapeDictionary.Select(kvp => kvp.Value);
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<VisualShape> GetVisualShapes(Func<InteractiveEntity, bool> selector)
        {
            return _InteractiveToVisualShapeDictionary.Where(kvp => selector(kvp.Key)).Select(kvp => kvp.Value);
        }

        //--------------------------------------------------------------------------------------------------

        public VisualShape AddVisualShape(InteractiveEntity entity)
        {
            foreach (var item in _BRepToInteractiveDictionary.Where(kvp => kvp.Value == entity).ToList())
            {
                _BRepToInteractiveDictionary.Remove(item.Key);
            }

            var ocShape = entity.GetTransformedBRep();
            if (ocShape != null)
            {
                _BRepToInteractiveDictionary.Add(ocShape, entity);

                var visualShape = GetVisualShape(entity);
                if (visualShape != null)
                {
                    visualShape.UpdateShape();
                }
                else
                {
                    visualShape = new VisualShape(_WorkspaceController, entity);
                    _InteractiveToVisualShapeDictionary.Add(entity, visualShape);
                }

                return visualShape;
            }
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        public void UpdateInvalidatedEntities()
        {
            var entitiesToUpdate = _InvalidatedInteractiveEntities.ToArray();
            foreach (var entity in entitiesToUpdate)
            {
                UpdateVisualShape(entity);
                _InvalidatedInteractiveEntities.Remove(entity);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void UpdateVisualShape(InteractiveEntity entity)
        {
            if (!entity.IsVisible)
            {
                RemoveShape(entity);
                return;
            }

            var visualShape = GetVisualShape(entity);
            if (visualShape == null)
            {
                AddVisualShape(entity);
                return;
            }

            var ocShape = entity.GetTransformedBRep();
            if (ocShape != null)
            {
                foreach (var item in _BRepToInteractiveDictionary.Where(kvp => kvp.Value == entity).ToList())
                {
                    _BRepToInteractiveDictionary.Remove(item.Key);
                }

                _BRepToInteractiveDictionary.Add(ocShape, entity);
            }

            visualShape.UpdateShape();
        }

        //--------------------------------------------------------------------------------------------------

        public void RemoveShape(InteractiveEntity entity)
        {
            var visualShape = GetVisualShape(entity);
            if (visualShape != null)
            {
                visualShape.Remove();
                _InteractiveToVisualShapeDictionary.Remove(entity);
            }

            foreach (var item in _BRepToInteractiveDictionary.Where(kvp => kvp.Value == entity).ToList())
            {
                _BRepToInteractiveDictionary.Remove(item.Key);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public InteractiveEntity GetVisibleEntity(AIS_InteractiveObject aisInteractiveObject)
        {
            if (aisInteractiveObject.Type() == AIS_KindOfInteractive.AIS_KOI_Shape)
            {
                var brep = (aisInteractiveObject as AIS_Shape)?.Shape();
                return GetVisibleEntity(brep);
            }
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        public InteractiveEntity GetVisibleEntity(TopoDS_Shape brep)
        {
            if (_BRepToInteractiveDictionary.TryGetValue(brep, out var value))
            {
                return value;
            }
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<InteractiveEntity> GetVisibleEntities()
        {
            return _InteractiveToVisualShapeDictionary.Keys;
        }

        //--------------------------------------------------------------------------------------------------

        public IEnumerable<TopoDS_Shape> GetVisibleBReps()
        {
            return _BRepToInteractiveDictionary.Keys;
        }

        //--------------------------------------------------------------------------------------------------

        void _Entity_EntityRemoved(Entity entity)
        {
            if (!(entity is InteractiveEntity interactiveEntity))
                return;

            _InvalidatedInteractiveEntities.Remove(interactiveEntity);

            // Remove visual
            RemoveShape(interactiveEntity);
        }

        //--------------------------------------------------------------------------------------------------
        
        void _InteractiveEntity_VisualChanged(InteractiveEntity entity)
        {
            if(!_InvalidatedInteractiveEntities.Contains(entity))
                _InvalidatedInteractiveEntities.Add(entity);

            _WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

    }
}