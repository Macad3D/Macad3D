using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.Remoting;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction
{
    public sealed class SelectionContext : IDisposable
    {
        [Flags]
        public enum Options
        {
            None = 0,
            IncludeAll = 1 << 0,
            NewSelectedList = 1 << 1,
        }

        //--------------------------------------------------------------------------------------------------

        public List<InteractiveEntity> SelectedEntities { get; }

        readonly WorkspaceController _WorkspaceController;
        readonly HashSet<VisualShape> _InOrExcludedShapes = new HashSet<VisualShape>();
        readonly Options _Options;
        bool _IsActive = false;
        SubshapeTypes _SubshapeTypes;
        ISelectionFilter _SelectionFilter;

        //--------------------------------------------------------------------------------------------------

        public SelectionContext(WorkspaceController workspaceController, Options options)
        {
            _WorkspaceController = workspaceController;
            _Options = options;
            
            if (_Options.HasFlag(Options.NewSelectedList))
            {
                SelectedEntities = new List<InteractiveEntity>();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void Dispose()
        {
            if (_IsActive)
            {
                VisualShape.AisObjectChanged -= _VisualShape_AisObjectChanged;
                _IsActive = false;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void SetSubshapeSelection(SubshapeTypes enabledTypes)
        {
            if (_SubshapeTypes == enabledTypes)
                return;

            _SubshapeTypes = enabledTypes;
            _RaiseParametersChanged();
        }

        //--------------------------------------------------------------------------------------------------

        public void SetSelectionFilter(ISelectionFilter filter)
        {
            _SelectionFilter = filter;
            _UpdateFilter();
        }

        //--------------------------------------------------------------------------------------------------

        #region In-/Exclusion

        public void Include(InteractiveEntity entity)
        {
            var visShape = _WorkspaceController.VisualShapes.GetVisualShape(entity, true);
            if(visShape != null)
                Include(visShape);
        }

        //--------------------------------------------------------------------------------------------------

        public void Include(VisualShape visShape)
        {
            if (_Options.HasFlag(Options.IncludeAll))
            {
                if (_InOrExcludedShapes.Contains(visShape))
                {
                    _InOrExcludedShapes.Remove(visShape);
                    _RaiseParametersChanged();
                }
                return;
            }

            if (_InOrExcludedShapes.Contains(visShape))
                return;

            _InOrExcludedShapes.Add(visShape);
            _RaiseParametersChanged();
        }

        //--------------------------------------------------------------------------------------------------

        public void Exclude(InteractiveEntity entity)
        {
            var visShape = _WorkspaceController.VisualShapes.GetVisualShape(entity, true);
            if (visShape != null)
                Exclude(visShape);
        }

        //--------------------------------------------------------------------------------------------------

        public void Exclude(VisualShape visShape)
        {
            if (!_Options.HasFlag(Options.IncludeAll))
            {
                if (_InOrExcludedShapes.Contains(visShape))
                {
                    _InOrExcludedShapes.Remove(visShape);
                    _RaiseParametersChanged();
                }
                return;
            }

            if (_InOrExcludedShapes.Contains(visShape))
                return;

            _InOrExcludedShapes.Add(visShape);
            _RaiseParametersChanged();
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region AIS Context Control

        public void Activate()
        {
            Debug.Assert(!_IsActive);

            VisualShape.AisObjectChanged += _VisualShape_AisObjectChanged;

            _UpdateFilter();

            _IsActive = true;
        }

        //--------------------------------------------------------------------------------------------------

        public void DeActivate()
        {
            Debug.Assert(_IsActive);

            VisualShape.AisObjectChanged -= _VisualShape_AisObjectChanged;

            var aisContext = _WorkspaceController?.Workspace?.AisContext;
            aisContext?.RemoveFilters();
            
            _IsActive = false;
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateFilter()
        {
            var aisContext = _WorkspaceController?.Workspace?.AisContext;
            aisContext?.Filters().Clear();
            if (_SelectionFilter != null)
            {
                aisContext?.AddFilter(_SelectionFilter.GetNativeFilter());
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void UpdateAis()
        {
            // Update shapes
            bool includeByDefault = _Options.HasFlag(Options.IncludeAll);
            var visShapes = _WorkspaceController.VisualShapes.GetVisualShapes();
            foreach (var visualShape in visShapes)
            {
                bool isInOrExcluded = _InOrExcludedShapes.Contains(visualShape);
                UpdateShape(visualShape, includeByDefault ? !isInOrExcluded : isInOrExcluded);
            }
        }
            

        //--------------------------------------------------------------------------------------------------

        public void UpdateShape(VisualShape visualShape)
        {
            bool includeByDefault = _Options.HasFlag(Options.IncludeAll);
            bool isInOrExcluded = _InOrExcludedShapes.Contains(visualShape);
            UpdateShape(visualShape, includeByDefault ? !isInOrExcluded : isInOrExcluded);
        }

        //--------------------------------------------------------------------------------------------------

        public void UpdateShape(VisualShape visualShape, bool activate)
        {
            var aisContext = _WorkspaceController?.Workspace?.AisContext;
            if (aisContext == null)
                return;

            var aisObject = visualShape.AisObject;
            if (visualShape.IsSelectable())
            {
                // Get already activated modes
                var colActivatedModes = new TColStd_ListOfInteger();
                aisContext.ActivatedModes(aisObject, colActivatedModes);
                var activatedModes = colActivatedModes.ToList();

                // Enlist all requested modes
                var modesToBeActivated = new bool[5];
                var snapHandler = _WorkspaceController.SnapHandler;

                modesToBeActivated[0] = activate && _SubshapeTypes == SubshapeTypes.None;
                modesToBeActivated[SubshapeType.Vertex.ToAisSelectionMode()] = activate && _SubshapeTypes.HasFlag(SubshapeTypes.Vertex) || snapHandler.NeedActiveSubshapes(SubshapeType.Vertex);
                modesToBeActivated[SubshapeType.Edge.ToAisSelectionMode()] = activate && _SubshapeTypes.HasFlag(SubshapeTypes.Edge) || snapHandler.NeedActiveSubshapes(SubshapeType.Edge);
                modesToBeActivated[SubshapeType.Wire.ToAisSelectionMode()] = activate && _SubshapeTypes.HasFlag(SubshapeTypes.Wire) || snapHandler.NeedActiveSubshapes(SubshapeType.Wire);
                modesToBeActivated[SubshapeType.Face.ToAisSelectionMode()] = activate && _SubshapeTypes.HasFlag(SubshapeTypes.Face) || snapHandler.NeedActiveSubshapes(SubshapeType.Face);

                // Deactivate all modes which are not requested
                foreach (var mode in activatedModes)
                {
                    if(!modesToBeActivated[mode])
                        aisContext.SetSelectionModeActive(aisObject, mode, false, AIS_SelectionModesConcurrency.AIS_SelectionModesConcurrency_Multiple);
                }
            
                // Activate all requested modes
                for (int mode = 0; mode < 5; mode++)
                {
                    if(modesToBeActivated[mode])
                        aisContext.SetSelectionModeActive(aisObject, mode, true, AIS_SelectionModesConcurrency.AIS_SelectionModesConcurrency_Multiple);
                }
            }
            else
            {
                aisContext.Deactivate(visualShape.AisObject);
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _VisualShape_AisObjectChanged(VisualShape theShape)
        {
            if (theShape.AisObject != null)
            {
                UpdateShape(theShape);
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Events

        public delegate void ParametersChangedEventHandler(SelectionContext selectionContext);

        //--------------------------------------------------------------------------------------------------

        public event ParametersChangedEventHandler ParametersChanged;

        //--------------------------------------------------------------------------------------------------

        void _RaiseParametersChanged()
        {
            ParametersChanged?.Invoke(this);
        }


        #endregion

    }
}