using System.Globalization;
using System.Linq;
using System.Windows.Data;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Presentation;

using static Macad.Interaction.CommandHelper;

namespace Macad.Interaction;

public static class WorkspaceCommands
{
    #region Tools

    public static ActionCommand Escape { get; } = new(
        () =>
        {
            if (CurrentTool != null)
            {
                InteractiveContext.Current.WorkspaceController.CancelTool(CurrentTool, false);
                Invalidate();
            }
        },
        () => true)
    {
        Header = () => "Stop Current Tool",
        Description = () => "Stops or cancels the current tool.",
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand StartEditing { get; } = new(
        () =>
        {
            var editor = InteractiveContext.Current?.WorkspaceController?.CurrentEditor;
            if (editor == null)
                return;

            var command = editor.GetStartEditingCommand();
            if (command.Command?.CanExecute(command.Parameter) ?? false)
            {
                command.Command.Execute(command.Parameter);
            }
        },
        () =>
        {
            var startEditingCommand = InteractiveContext.Current?.WorkspaceController?.CurrentEditor?.GetStartEditingCommand();
            if (startEditingCommand == null)
                return false;

            return startEditingCommand.Value.Command?.CanExecute(startEditingCommand.Value.Parameter) ?? false;
        })
    {
        Title = () =>
        {
            var startEditingCommand = InteractiveContext.Current?.WorkspaceController?.CurrentEditor?.GetStartEditingCommand();
            if (startEditingCommand?.Command != null)
            {
                return startEditingCommand.Value.Command.GetTitle(startEditingCommand.Value.Parameter);
            }

            return "Start Editing";
        },
        Header = () =>
        {
            var startEditingCommand = InteractiveContext.Current?.WorkspaceController?.CurrentEditor?.GetStartEditingCommand();
            if (startEditingCommand?.Command != null)
            {
                return startEditingCommand.Value.Command.GetHeader(startEditingCommand.Value.Parameter);
            }

            return "Edit";
        },
        Description = () =>
        {
            var startEditingCommand = InteractiveContext.Current?.WorkspaceController?.CurrentEditor?.GetStartEditingCommand();
            if (startEditingCommand?.Command != null)
            {
                return startEditingCommand.Value.Command.GetDescription(startEditingCommand.Value.Parameter);
            }

            return "Starts the editing tool of the current selected entity.";
        },
        Icon = () =>
        {
            var startEditingCommand = InteractiveContext.Current?.WorkspaceController?.CurrentEditor?.GetStartEditingCommand();
            if (startEditingCommand?.Command != null)
            {
                return startEditingCommand.Value.Command.GetIcon(startEditingCommand.Value.Parameter);
            }

            return "Tool-SketchEditor";
        },
    };

    //--------------------------------------------------------------------------------------------------

    #endregion

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
        CanExecuteOnWorkspace)
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
        }, CanExecuteOnWorkspace)
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
        CanExecuteOnWorkspace)
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
        CanExecuteOnWorkspace)
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
        () => CanExecuteOnWorkspace() && (InteractiveContext.Current?.Workspace?.GridType == Workspace.GridTypes.Circular))
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
        CanExecuteOnWorkspace)
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
        () => CanExecuteOnWorkspace() && (InteractiveContext.Current?.EditorState?.SnappingEnabled ?? false))
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
        () => CanExecuteOnWorkspace() && (InteractiveContext.Current?.EditorState?.SnappingEnabled ?? false))
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
        () => CanExecuteOnWorkspace() && (InteractiveContext.Current?.EditorState?.SnappingEnabled ?? false))
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
                Invalidate();
            }
        },
        () => CanExecuteOnWorkspace() && !InteractiveContext.Current.WorkspaceController.LockWorkingPlane)
    {
        Header = () => "Align",
        Title = () => "Align Working Plane",
        Description = () => "Align the working plane to a face, edge or vertex.",
        Icon = () => "WorkingPlane-Align",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay, 
                                                EqualityToBoolConverter.Instance, nameof(AlignWorkingPlaneTool))
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
                    workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.TOPL_XYPlane);
                    break;

                case 1: // XZ
                    workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.TOPL_XZPlane);
                    break;

                case 2: // YZ
                    workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.TOPL_YZPlane);
                    break;
            }
            Invalidate();
        },
        (param) => CanExecuteOnWorkspace() && !InteractiveContext.Current.WorkspaceController.LockWorkingPlane)
    {
        Header = (param) =>
        {
            switch (param)
            {
                case 0:  return "World XY - in Z Direction";
                case 1:  return "World XZ - in Y Direction";
                case 2:  return "World ZY - in X Direction";
                default: return "Unknown Direction";
            }
        },
        Icon = (param) => 
        {
            switch (param)
            {
                case 0:  return "WorkingPlane-SetXY";
                case 1:  return "WorkingPlane-SetXZ";
                case 2:  return "WorkingPlane-SetZY";
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
        (param) => CanExecuteOnWorkspace() && InteractiveContext.Current?.WorkspaceController?.CurrentTool is TransformTool)
    {
        Header = (param) =>
        {
            switch (param)
            {
                case TransformTool.PivotPoint.EntityPivot:    return "Entity Pivot";
                case TransformTool.PivotPoint.BoundingCenter: return "Bounding Center";
                case TransformTool.PivotPoint.MassCenter:     return "Mass Center";
                default:                                      return "Unknown";
            }
        },
        Icon = (param) =>
        {
            switch (param)
            {
                case TransformTool.PivotPoint.EntityPivot:    return "Arrange-ShapePivot";
                case TransformTool.PivotPoint.BoundingCenter: return "Arrange-BoundingCenter";
                case TransformTool.PivotPoint.MassCenter:     return "Arrange-MassCenter";
                default:                                      return "Arrange-Transform";
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
        (param) => CanExecuteOnWorkspace() && InteractiveContext.Current?.WorkspaceController?.CurrentTool is TransformTool)
    {
        Header = (param) =>
        {
            switch (param)
            {
                case TransformTool.Options.MultipleUseFirst:      return "Use Pivot of first Entity";
                case TransformTool.Options.WorldSpaceOrientation: return "Use Worldspace Orientation";
                case TransformTool.Options.LinkForeignOperands:   return "Link Foreign Operands";
                default:                                          return "Unknown";
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
        (param) => CanExecuteOnViewport()
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
        () => CanExecuteOnViewport())
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
        () => CanExecuteOnViewport())
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
        () => CanExecuteOnViewport())
    {
        Header = () => "Zoom All",
        Title = () => "Zoom to Fit All",
        Description = () => "Adjusts the position and scale of the viewport so all visible entities are in view.",
        Icon = () => "Zoom-All"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ZoomFitSelected { get; } = new(
        () =>
        {
            InteractiveContext.Current?.ViewportController?.ZoomFitSelected();
        },
        () => CanExecuteOnViewport() && Selection.SelectedEntities.Any())
    {
        Header = () => "Zoom Selection",
        Title = () => "Zoom to Fit Selected",
        Description = () => "Adjusts the position and scale of the viewport so all visible and selected entities are in view.",
        Icon = () => "Zoom-Selection"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<ViewportController.PredefinedViews> SetPredefinedView { get; } = new(
        (param) =>
        {
            InteractiveContext.Current?.ViewportController?.SetPredefinedView(param);
        },
        (param) => CanExecuteOnViewport() && !InteractiveContext.Current.ViewportController.LockedToPlane)
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
        CanExecuteOnWorkspace)
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
            InteractiveContext.Current.WorkspaceController.Delete();
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
            if (InteractiveContext.Current.WorkspaceController.PrepareUndo())
            {
                InteractiveContext.Current.UndoHandler.DoUndo(1);
                Invalidate();
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
            if (InteractiveContext.Current.WorkspaceController.PrepareUndo())
            {
                InteractiveContext.Current.UndoHandler.DoRedo(1);
                Invalidate();
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
            InteractiveContext.Current.WorkspaceController.Duplicate();
            Commit();
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
            InteractiveContext.Current.WorkspaceController.CopyToClipboard();
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
            InteractiveContext.Current.WorkspaceController.CopyToClipboard();
            InteractiveContext.Current.WorkspaceController.Delete();
            Commit();
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
            InteractiveContext.Current.WorkspaceController.PasteFromClipboard();
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
            var workspaceController = InteractiveContext.Current.WorkspaceController;
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
        () => CanExecuteOnWorkspace() && 
              (InteractiveContext.Current.WorkspaceController.VisualObjects.EntityIsolationEnabled
               || Selection?.SelectedEntities.Count > 0))
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
        (entity) => CanExecuteOnWorkspace()
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