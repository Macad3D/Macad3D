using System.Globalization;
using System.Linq;
using System.Windows.Data;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction
{
    public static class WorkspaceCommands
    {
        #region Helper

        static WorkspaceController _WorkspaceController
        {
            get { return InteractiveContext.Current?.WorkspaceController; }
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CanExecuteOnWorkspace()
        {
            return InteractiveContext.Current?.WorkspaceController?.Workspace != null;
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CanExecuteOnViewport()
        {
            return InteractiveContext.Current?.ViewportController?.Viewport != null;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        public static RelayCommand Escape { get; } = new(
            () =>
            {
                if (_WorkspaceController.CurrentTool != null)
                {
                    _WorkspaceController.CancelTool(_WorkspaceController.CurrentTool, false);
                    _WorkspaceController.Invalidate();
                }
            },
            () => true);

        //--------------------------------------------------------------------------------------------------
            
        #region Grid

        public static ActionCommand ToggleGrid { get; } = new(
            () =>
            {
                var workspace = InteractiveContext.Current?.WorkspaceController?.Workspace;
                if (workspace != null)
                {
                    workspace.GridEnabled = !workspace.GridEnabled;
                }
            },
            _CanExecuteOnWorkspace)
        {
            Header = () => "Show Grid",
            Description = () => "Toggles the grid visibility",
            Icon = () => InteractiveContext.Current?.Workspace?.GridType == Workspace.GridTypes.Rectangular ? "Grid-Rect" : "Grid-Circ",
            BindingSource = (InteractiveContext.Current, "Workspace.GridType"),
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(Workspace)}.{nameof(Workspace.GridEnabled)}", BindingMode.OneWay)
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<Workspace.GridTypes> SetGridType { get; } = new(
            param =>
            {
                var workspace = InteractiveContext.Current?.WorkspaceController?.Workspace;
                if (workspace != null)
                {
                    workspace.GridType = param;
                }
            }, _CanExecuteOnWorkspace)
        {
            Header = param => $"{param} Grid",
            Description = param => $"Change the grid type to {param}.",
            Icon = param => param == Workspace.GridTypes.Rectangular ? "Grid-Rect" : "Grid-Circ",
            IsCheckedBinding = param => BindingHelper.Create(InteractiveContext.Current, $"{nameof(Workspace)}.{nameof(Workspace.GridType)}", BindingMode.OneWay, EqualityToBoolConverter.Instance, param.ToString())
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<double> SetGridStepValue { get; } = new(
            param =>
            {
                var workspace = InteractiveContext.Current?.WorkspaceController?.Workspace;
                if (workspace != null && !double.IsNaN(param))
                {
                    workspace.GridStep = param;
                }
            },
            _CanExecuteOnWorkspace)
        {
            Header = param => double.IsNaN(param) ? "Stepping" : $"{param.ToString(CultureInfo.InvariantCulture)} mm",
            Description = param => double.IsNaN(param) ? "Set the stepping between the grid lines." : null,
            Icon = param => double.IsNaN(param) ? "Grid-Step" : null,
            IsCheckedBinding = param => BindingHelper.Create(InteractiveContext.Current, $"{nameof(Workspace)}.{nameof(Workspace.GridStep)}", BindingMode.OneWay, EqualityToBoolConverter.Instance, param)
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<double> SetGridRotationValue { get; } = new(
            param =>
            {
                var workspace = InteractiveContext.Current?.WorkspaceController?.Workspace;
                if (workspace != null && !double.IsNaN(param))
                {
                    workspace.GridRotation = param;
                }
            },
            _CanExecuteOnWorkspace)
        {
            Header = param => double.IsNaN(param) ? "Rotation" : $"{param.ToString(CultureInfo.InvariantCulture)} °",
            Description = param => double.IsNaN(param) ? "Set the rotation of the whole grid around it's origin'." : null,
            Icon = param => double.IsNaN(param) ? "Grid-Rotation" : null,
            IsCheckedBinding = param => BindingHelper.Create(InteractiveContext.Current, $"{nameof(Workspace)}.{nameof(Workspace.GridRotation)}", BindingMode.OneWay, EqualityToBoolConverter.Instance, param)
        };

        //--------------------------------------------------------------------------------------------------
        
        public static ActionCommand<int> SetGridDivisionsValue { get; } = new(
            param =>
            {
                var workspace = InteractiveContext.Current?.WorkspaceController?.Workspace;
                if (workspace != null && param != int.MinValue)
                {
                    workspace.GridDivisions = param;
                }
            },
            () => _CanExecuteOnWorkspace() && (InteractiveContext.Current?.Workspace?.GridType == Workspace.GridTypes.Circular))
        {
            Header = param => param == int.MinValue ? "Divisions" : param.ToString(),
            Description = param => param == int.MinValue ? "Set the number of divisions of a circular grid." : null,
            Icon = param => param == int.MinValue ? "Grid-Divisions" : null,
            IsCheckedBinding = param => BindingHelper.Create(InteractiveContext.Current, $"{nameof(Workspace)}.{nameof(Workspace.GridDivisions)}", BindingMode.OneWay, EqualityToBoolConverter.Instance, param)
        };

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Snapping

        public static ActionCommand ToggleSnappingEnabled { get; } = new(
            () =>
            {
                var editorState = InteractiveContext.Current?.EditorState;
                if (editorState != null)
                {
                    editorState.SnappingEnabled = !editorState.SnappingEnabled;
                }
            },
            _CanExecuteOnWorkspace)
        {
            Header = () => "Enable Snapping",
            Description = () => "Toggle the snapping of positions to selected elements.",
            Icon = () => "Snap-Enabled",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.SnappingEnabled)}", BindingMode.OneWay),
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ToggleSnapToGrid { get; } = new(
            () =>
            {
                var editorState = InteractiveContext.Current?.EditorState;
                if (editorState != null)
                {
                    editorState.SnapToGridSelected = !editorState.SnapToGridSelected;
                }
            },
            () => _CanExecuteOnWorkspace() && (InteractiveContext.Current?.EditorState?.SnappingEnabled ?? false))
        {
            Header = () => "Grid",
            Title = () => "Snap to Grid",
            Description = () => "Toggle the snapping of positions to the grid.",
            Icon = () => "Snap-Grid",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.SnapToGridSelected)}", BindingMode.OneWay),
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ToggleSnapToVertex { get; } = new(
            () =>
            {
                var editorState = InteractiveContext.Current?.EditorState;
                if (editorState != null)
                {
                    editorState.SnapToVertexSelected = !editorState.SnapToVertexSelected;
                }
            },
            () => _CanExecuteOnWorkspace() && (InteractiveContext.Current?.EditorState?.SnappingEnabled ?? false))
        {
            Header = () => "Vertex",
            Title = () => "Snap to Vertex",
            Description = () => "Toggle the snapping of positions to other vertices.",
            Icon = () => "Snap-Vertex",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.SnapToVertexSelected)}", BindingMode.OneWay),
        };

        //--------------------------------------------------------------------------------------------------
        
        public static ActionCommand ToggleSnapToEdge { get; } = new(
            () =>
            {
                var editorState = InteractiveContext.Current?.EditorState;
                if (editorState != null)
                {
                    editorState.SnapToEdgeSelected = !editorState.SnapToEdgeSelected;
                }
            },
            () => _CanExecuteOnWorkspace() && (InteractiveContext.Current?.EditorState?.SnappingEnabled ?? false))
        {
            Header = () => "Edge",
            Title = () => "Snap to Edge",
            Description = () => "Toggle the snapping of positions to other edges.",
            Icon = () => "Snap-Edge",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.SnapToEdgeSelected)}", BindingMode.OneWay),
        };

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Working Plane

        public static ActionCommand AlignWorkingPlane { get; } = new(
            () =>
            {
                var wsCtrl = InteractiveContext.Current?.WorkspaceController;
                if (wsCtrl != null)
                {
                    wsCtrl.StartTool(new AlignWorkingPlaneTool(AlignWorkingPlaneTool.AlignWorkingPlaneModes.All));
                    _WorkspaceController.Invalidate();
                }
            },
            () => _CanExecuteOnWorkspace() && !_WorkspaceController.LockWorkingPlane)
        {
            Header = () => "Align",
            Title = () => "Align Working Plane",
            Description = () => "Align the working plane to a face, edge or vertex.",
            Icon = () => "WorkingPlane-Align",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay, EqualityToBoolConverter.Instance, nameof(AlignWorkingPlaneTool))
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<int> SetWorkingPlane { get; } = new(
            (param) =>
            {
                var workspace = InteractiveContext.Current?.WorkspaceController?.Workspace;
                if (workspace == null)
                    return;

                switch (param)
                {
                    case 0: // XY
                        workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.AIS_TOPL_XYPlane);
                        break;

                    case 1: // XZ
                        workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.AIS_TOPL_XZPlane);
                        break;

                    case 2: // YZ
                        workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.AIS_TOPL_YZPlane);
                        break;
                }
                _WorkspaceController.Invalidate();
            },
            (param) => _CanExecuteOnWorkspace() && !_WorkspaceController.LockWorkingPlane)
        {
            Header = (param) =>
            {
                switch (param)
                {
                    case 0: return "World XY - in Z Direction";
                    case 1: return "World XZ - in Y Direction";
                    case 2: return "World ZY - in X Direction";
                    default: return "Unknown Direction";
                }
            },
            Icon = (param) => 
            {
                switch (param)
                {
                    case 0: return "WorkingPlane-SetXY";
                    case 1: return "WorkingPlane-SetXZ";
                    case 2: return "WorkingPlane-SetZY";
                    default: return "WorkingPlane-Set";
                }
            }
        };

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Transform

        public static ActionCommand Transform { get; } = new (
            () =>
            {
                var wsCtrl = InteractiveContext.Current?.WorkspaceController;
                if (wsCtrl == null)
                    return;

                var tool = wsCtrl.CurrentTool as TransformTool;
                if (tool != null)
                    tool.ToggleTransformMode();
                else
                    wsCtrl.StartTool( new TransformTool(
                        wsCtrl.Selection.SelectedEntities.Cast<ITransformable>(), 
                        InteractiveContext.Current.EditorState.TransformPivot, 
                        InteractiveContext.Current.EditorState.TransformOptions));
            },
            () =>
            {
                var selectionManager = InteractiveContext.Current?.WorkspaceController?.Selection;
                return selectionManager != null
                       && (selectionManager.SelectedEntities.Count > 0)
                       && (selectionManager.SelectedEntities.All(e => e is ITransformable));
            })
        {
            Header = () => "Transform",
            Title = () => "Transform Entity",
            Description = () => "Start transformation of selected entities and toggle between translation and rotation.",
            Icon = () => "Arrange-Transform",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.TwoWay, 
                                                    EqualityToBoolConverter.Instance, nameof(TransformTool)),
            HelpTopic = "5da4906e-c86b-4f91-8b30-f5163e152d1e"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<TransformTool.PivotPoint> SetTransformPivot { get; } = new (
            (param) =>
            {
                var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as TransformTool;
                if (tool != null)
                {
                    InteractiveContext.Current.EditorState.TransformPivot = param;
                    tool.ChangePivot(InteractiveContext.Current.EditorState.TransformPivot);
                }
            },
            (param) => _CanExecuteOnWorkspace() && InteractiveContext.Current?.WorkspaceController?.CurrentTool is TransformTool)
        {
            Header = (param) =>
            {
                switch (param)
                {
                    case TransformTool.PivotPoint.EntityPivot:    return "Entity Pivot";
                    case TransformTool.PivotPoint.BoundingCenter: return "Bounding Center";
                    case TransformTool.PivotPoint.MassCenter:     return "Mass Center";
                    default: return "Unknown";
                }
            },
            Icon = (param) =>
            {
                switch (param)
                {
                    case TransformTool.PivotPoint.EntityPivot:    return "Arrange-ShapePivot";
                    case TransformTool.PivotPoint.BoundingCenter: return "Arrange-BoundingCenter";
                    case TransformTool.PivotPoint.MassCenter:     return "Arrange-MassCenter";
                    default: return "Arrange-Transform";
                }
            },
            IsCheckedBinding = (param) => BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.TransformPivot)}", BindingMode.OneWay, 
                                                               EqualityToBoolConverter.Instance, param.ToString())
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<TransformTool.Options> ToggleTransformOption { get; } = new (
            (param) =>
            {
                var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as TransformTool;
                if (tool != null)
                {
                    InteractiveContext.Current.EditorState.TransformOptions = InteractiveContext.Current.EditorState.TransformOptions.Toggled(param);
                    tool.ChangeOptions(InteractiveContext.Current.EditorState.TransformOptions);
                }
            },
            (param) => _CanExecuteOnWorkspace() && InteractiveContext.Current?.WorkspaceController?.CurrentTool is TransformTool)
        {
            Header = (param) =>
            {
                switch (param)
                {
                    case TransformTool.Options.MultipleUseFirst:   return "Use Pivot of first Entity";
                    case TransformTool.Options.WorldSpaceOrientation: return "Use Worldspace Orientation";
                    case TransformTool.Options.LinkForeignOperands:   return "Link Foreign Operands";
                    default: return "Unknown";
                }
            },
            IsCheckedBinding = (param) => BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.TransformOptions)}", BindingMode.OneWay,
                                                               HasFlagToBoolConverter.Instance, param.ToString())
        };

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Viewport

        public static ActionCommand<Viewport.RenderModes> SetRenderMode { get; } = new(
            (param) =>
            {
                var viewport = InteractiveContext.Current?.ViewportController?.Viewport;
                if (viewport != null)
                {
                    viewport.RenderMode = param;
                    InteractiveContext.Current?.WorkspaceController.Invalidate();
                } 
            },
            (param) => _CanExecuteOnViewport()
        )
        {
            Header = (param) =>
            {
                switch (param)
                {
                    case Viewport.RenderModes.SolidShaded: return "Solid Shaded";
                    case Viewport.RenderModes.HLR:         return "Drawing";
                    case Viewport.RenderModes.Raytraced:   return "Raytraced";
                    default:                               return "Unknown";
                }
            },
            Icon = (param) => $"View-Render{param.ToString()}",
            IsCheckedBinding = (param) => BindingHelper.Create(InteractiveContext.Current, $"{nameof(ViewportController)}.{nameof(Viewport)}.{nameof(Viewport.RenderMode)}", 
                                                               BindingMode.OneWay, EqualityToBoolConverter.Instance, param.ToString())
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ZoomIn { get; } = new(
            () =>
            {
                InteractiveContext.Current?.ViewportController?.Zoom(0.5);
            },
            () => _CanExecuteOnViewport())
        {
            Header = () => "Zoom In",
            Icon = () => "Zoom-In"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ZoomOut { get; } = new(
            () =>
            {
                InteractiveContext.Current?.ViewportController?.Zoom(-0.5);
            },
            () => _CanExecuteOnViewport())
        {
            Header = () => "Zoom Out",
            Icon = () => "Zoom-Out"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ZoomFitAll { get; } = new(
            () =>
            {
                InteractiveContext.Current?.ViewportController?.ZoomFitAll();
            },
            () => _CanExecuteOnViewport())
        {
            Header = () => "Zoom All",
            Icon = () => "Zoom-All"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ZoomFitSelected { get; } = new(
            () =>
            {
                InteractiveContext.Current?.ViewportController?.ZoomFitSelected();
            },
            () => _CanExecuteOnViewport() && _WorkspaceController.Selection.SelectedEntities.Any())
        {
            Header = () => "Zoom Selection",
            Icon = () => "Zoom-Selection"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<ViewportController.PredefinedViews> SetPredefinedView { get; } = new(
            (param) =>
            {
                InteractiveContext.Current?.ViewportController?.SetPredefinedView(param);
            },
            (param) => _CanExecuteOnViewport())
        {
            Header = (param) => param.ToString(),
            Icon = (param) => $"View-{param.ToString()}"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<ViewportController.RubberbandSelectionMode> SetRubberbandSelectionMode { get; } = new(
            param =>
            {
                InteractiveContext.Current.EditorState.RubberbandSelectionMode = param; 
            },
            param => true)
        {
            Header = param => param + " Selection",
            Icon = param => "Selection-" + param,
            Description = param => "Change the rubberband selection mode.",
            IsCheckedBinding = param => BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.RubberbandSelectionMode)}", 
                                                             BindingMode.OneWay, EqualityToBoolConverter.Instance, param.ToString())
        };
        
        //--------------------------------------------------------------------------------------------------
        
        public static ActionCommand ToggleRubberbandIncludeTouched { get; } = new(
            () =>
            {
                var editorState = InteractiveContext.Current?.EditorState;
                if (editorState != null)
                {
                    editorState.RubberbandIncludeTouched = !editorState.RubberbandIncludeTouched;
                }
            },
            _CanExecuteOnWorkspace)
        {
            Header = () => "Include Touched",
            Icon = () => "Selection-Touched",
            Description = () => "Includes entities which were only touched, not enclosed.",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.RubberbandIncludeTouched)}", BindingMode.OneWay),
        };

        //--------------------------------------------------------------------------------------------------

        #endregion
        
        #region Topology Edit

        public static ActionCommand DeleteEntity { get; } = new(
            () =>
            {
                _WorkspaceController.Delete();
                InteractiveContext.Current.UndoHandler.Commit();
            },
            () => InteractiveContext.Current?.WorkspaceController?.CanDelete() ?? false)
        {
            Header = () => "Delete",
            Description = () => "Deletes the currently selected elements from the model.",
            Icon = () => "Edit-Delete"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand DoUndo { get; } = new(
            () =>
            {
                if (_WorkspaceController.PrepareUndo())
                {
                    InteractiveContext.Current.UndoHandler.DoUndo(1);
                    _WorkspaceController.Invalidate();
                }
            },
            () => InteractiveContext.Current?.UndoHandler?.CanUndo ?? false)
        {
            Header = () => "Undo",
            Description = () => "Revert the last operation",
            Icon = () => "Edit-Undo"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand DoRedo { get; } = new(
            () =>
            {
                if (_WorkspaceController.PrepareUndo())
                {
                    InteractiveContext.Current.UndoHandler.DoRedo(1);
                    _WorkspaceController.Invalidate();
                }
            },
            () => InteractiveContext.Current?.UndoHandler?.CanRedo ?? false)
        {
            Header = () => "Redo",
            Description = () => "Restore the last reverted operation.",
            Icon = () => "Edit-Redo"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand DuplicateEntity { get; } = new(
            () =>
            {
                var context = InteractiveContext.Current;
                context.WorkspaceController.Duplicate();
                context.UndoHandler.Commit();
            },
            () => InteractiveContext.Current?.WorkspaceController?.CanDuplicate() ?? false)
        {
            Header = () => "Duplicate",
            Description = () => "Duplicate the currently selected elements one time.",
            Icon = () => "Edit-Duplicate"
        };

        //--------------------------------------------------------------------------------------------------
        
        public static ActionCommand CopyToClipboard { get; } = new(
            () =>
            {
                var context = InteractiveContext.Current;
                context.WorkspaceController.CopyToClipboard();
            },
            () => InteractiveContext.Current?.WorkspaceController?.CanCopyToClipboard() ?? false)
        {
            Header = () => "Copy",
            Title = () => "Copy to Clipboard",
            Description = () => "Put a copy of the selected elements to the clipboard.",
            Icon = () => "Edit-Copy"
        };

        //--------------------------------------------------------------------------------------------------
        
        public static ActionCommand CutToClipboard { get; } = new(
            () =>
            {
                var context = InteractiveContext.Current;
                context.WorkspaceController.CopyToClipboard();
                context.WorkspaceController.Delete();
                context.UndoHandler.Commit();
            },
            () => (InteractiveContext.Current?.WorkspaceController?.CanCopyToClipboard() ?? false)
                  && (InteractiveContext.Current?.WorkspaceController?.CanDelete() ?? false))
        {
            Header = () => "Cut",
            Title = () => "Cut to Clipboard",
            Description = () => "Put a copy of the selected elements to the clipboard and remove them from the current document.",
            Icon = () => "Edit-Cut"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand PasteFromClipboard { get; } = new(
            () =>
            {
                var context = InteractiveContext.Current;
                context.WorkspaceController.PasteFromClipboard();
            },
            () => InteractiveContext.Current?.WorkspaceController?.CanPasteFromClipboard() ?? false)
        {
            Header = () => "Paste",
            Title = () => "Paste from Clipboard",
            Description = () => "Paste a copy of the elements in the clipboard to the current document.",
            Icon = () => "Edit-Paste"
        };

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Isolation and Visibility

        public static ActionCommand ToggleIsolateSelection { get; } = new(
            () =>
            {
                var workspaceController = _WorkspaceController;
                if (workspaceController.VisualObjects.EntityIsolationEnabled)
                {
                    workspaceController.VisualObjects.SetIsolatedEntities(null);
                }
                else
                {
                    workspaceController.VisualObjects.SetIsolatedEntities(workspaceController.Selection.SelectedEntities);
                }
                workspaceController.Invalidate();
            },
            () => _CanExecuteOnWorkspace() && 
                  (_WorkspaceController.VisualObjects.EntityIsolationEnabled
                   || InteractiveContext.Current?.WorkspaceController?.Selection?.SelectedEntities.Count > 0))
        {
            Header = () => "Isolate Selection",
            Description = () => "Hides all elements which are not selected to get a undisguised look at the selected elements.",
            Icon = () => "Selection-Isolate",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(InteractiveContext.WorkspaceController)}.{nameof(InteractiveContext.WorkspaceController.VisualObjects)}.{nameof(VisualObjectManager.EntityIsolationEnabled)}", BindingMode.OneWay)
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<InteractiveEntity> ToggleIsVisible { get; } = new(
            (entity) =>
            {
                if (entity != null)
                {
                    entity.IsVisible = !entity.IsVisible;
                }
                else foreach (var selectedEntity in InteractiveContext.Current?.WorkspaceController?.Selection?.SelectedEntities)
                {
                    selectedEntity.IsVisible = !selectedEntity.IsVisible;
                }
            },
            (entity) => _CanExecuteOnWorkspace()
                && (entity != null || InteractiveContext.Current?.WorkspaceController?.Selection?.SelectedEntities.Count > 0))
        {
            Header = (entity) => "Visibility",
            Description = (entity) => "Toggles the visibility of the entity.",
            Icon = (entity) => (entity?.IsVisible ?? true) ? "Generic-Visible" : "Generic-Hidden",
            BindingSource = (entity) => entity == null ? (null, "") : ((object)entity, "IsVisible"),
            IsCheckedBinding = (entity) => entity == null ? null : BindingHelper.Create(entity, "IsVisible", BindingMode.OneWay)
        };

        //--------------------------------------------------------------------------------------------------
        
        #endregion
    }
}