using System;
using System.Collections.Generic;
using System.Diagnostics;
using Macad.Common;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Core.Topology;

namespace Macad.Interaction;

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
    readonly HashSet<VisualObject> _InOrExcludedShapes = new();
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
            VisualObject.AisObjectChanged -= _VisualObject_AisObjectChanged;
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
        var visShape = _WorkspaceController.VisualObjects.Get(entity, true);
        if(visShape != null)
            Include(visShape);
    }

    //--------------------------------------------------------------------------------------------------

    public void Include(VisualObject visObject)
    {
        if (_Options.HasFlag(Options.IncludeAll))
        {
            if (_InOrExcludedShapes.Contains(visObject))
            {
                _InOrExcludedShapes.Remove(visObject);
                _RaiseParametersChanged();
            }
            return;
        }

        if (_InOrExcludedShapes.Contains(visObject))
            return;

        _InOrExcludedShapes.Add(visObject);
        _RaiseParametersChanged();
    }

    //--------------------------------------------------------------------------------------------------

    public void Exclude(InteractiveEntity entity)
    {
        var visObject = _WorkspaceController.VisualObjects.Get(entity, true);
        if (visObject != null)
            Exclude(visObject);
    }

    //--------------------------------------------------------------------------------------------------

    public void Exclude(VisualObject visObject)
    {
        if (!_Options.HasFlag(Options.IncludeAll))
        {
            if (_InOrExcludedShapes.Contains(visObject))
            {
                _InOrExcludedShapes.Remove(visObject);
                _RaiseParametersChanged();
            }
            return;
        }

        if (_InOrExcludedShapes.Contains(visObject))
            return;

        _InOrExcludedShapes.Add(visObject);
        _RaiseParametersChanged();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region AIS Context Control

    public void Activate()
    {
        Debug.Assert(!_IsActive);

        VisualObject.AisObjectChanged += _VisualObject_AisObjectChanged;

        _UpdateFilter();

        _IsActive = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void DeActivate()
    {
        if (!_IsActive)
            return;

        VisualObject.AisObjectChanged -= _VisualObject_AisObjectChanged;

        var aisContext = _WorkspaceController?.AisContext;
        aisContext?.RemoveFilters();
            
        _IsActive = false;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateFilter()
    {
        var aisContext = _WorkspaceController?.AisContext;
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
        var visShapes = _WorkspaceController.VisualObjects.GetAll();
        foreach (var visualShape in visShapes)
        {
            _UpdateShape(visualShape);
        }
    }
            

    //--------------------------------------------------------------------------------------------------

    public void UpdateShape(VisualObject visualObject)
    {
        _UpdateShape(visualObject);
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateShape(VisualObject visualObject)
    {
        var aisContext = _WorkspaceController?.AisContext;
        var aisObject = visualObject?.AisObject;
        if (aisContext == null || aisObject == null)
            return;

        bool includeByDefault = _Options.HasFlag(Options.IncludeAll);
        bool isInOrExcluded = _InOrExcludedShapes.Contains(visualObject);
        bool activate = includeByDefault ? !isInOrExcluded : isInOrExcluded;

        if (visualObject.IsSelectable)
        {
            // Enlist all requested modes
            SubshapeTypes activateSubshapeTypes = activate ? _SubshapeTypes : SubshapeTypes.None;
            var snapHandler = _WorkspaceController.CurrentTool?.GetSnapHandler() ?? _WorkspaceController.CurrentEditor?.GetSnapHandler();
            if (!_SubshapeTypes.HasFlag(SubshapeTypes.Vertex) && (snapHandler?.NeedActiveSubshapes(SubshapeType.Vertex) ?? false))
            {
                activateSubshapeTypes = activateSubshapeTypes.Added(SubshapeTypes.Vertex);
            }
            if (!_SubshapeTypes.HasFlag(SubshapeTypes.Edge) && (snapHandler?.NeedActiveSubshapes(SubshapeType.Edge) ?? false))
            {
                activateSubshapeTypes = activateSubshapeTypes.Added(SubshapeTypes.Edge);
            }
            if (!_SubshapeTypes.HasFlag(SubshapeTypes.Wire) && (snapHandler?.NeedActiveSubshapes(SubshapeType.Wire) ?? false))
            {
                activateSubshapeTypes = activateSubshapeTypes.Added(SubshapeTypes.Wire);
            }
            if (!_SubshapeTypes.HasFlag(SubshapeTypes.Face) && (snapHandler?.NeedActiveSubshapes(SubshapeType.Face) ?? false))
            {
                activateSubshapeTypes = activateSubshapeTypes.Added(SubshapeTypes.Face);
            }

            visualObject.SetSelectionModes(activate, activateSubshapeTypes);
        }
        else
        {
            visualObject.SetSelectionModes(false, SubshapeTypes.None);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _VisualObject_AisObjectChanged(VisualObject visualObject)
    {
        if (visualObject.AisObject != null)
        {
            UpdateShape(visualObject);
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