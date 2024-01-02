using System;
using System.Linq;
using Macad.Core.Shapes;
using Macad.Core.Topology;

namespace Macad.Interaction;

internal static class CommandHelper
{
    static WorkspaceController _WorkspaceController => InteractiveContext.Current?.WorkspaceController;

    //--------------------------------------------------------------------------------------------------

    public static Tool CurrentTool => InteractiveContext.Current.WorkspaceController?.CurrentTool;
    public static SelectionManager Selection => InteractiveContext.Current.WorkspaceController?.Selection;
    public static void Invalidate() => InteractiveContext.Current.WorkspaceController.Invalidate();
    public static bool StartTool(Tool tool) => InteractiveContext.Current.WorkspaceController.StartTool(tool);
    public static void Commit() => InteractiveContext.Current.UndoHandler.Commit();

    //--------------------------------------------------------------------------------------------------

    public static bool CanStartTool()
    {
        return _WorkspaceController != null;
    }
    
    //--------------------------------------------------------------------------------------------------
    
    public static bool CanExecuteOnSingle(Func<InteractiveEntity,bool> predicate)
    {
        return _WorkspaceController?.Selection != null
               && _WorkspaceController.Selection.SelectedEntities.Count > 0
               && predicate((_WorkspaceController.Selection.SelectedEntities.First()));
    }
    
    //--------------------------------------------------------------------------------------------------
    
    public static bool CanExecuteOnMulti(Func<InteractiveEntity,bool> predicate)
    {
        return _WorkspaceController?.Selection != null
               && _WorkspaceController.Selection.SelectedEntities.Count > 0
               && _WorkspaceController.Selection.SelectedEntities.All(predicate);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanExecuteOnSingleSolid()
    {
        return _WorkspaceController?.Selection != null
               && _WorkspaceController.Selection.SelectedEntities.Count == 1
               && (_WorkspaceController.Selection.SelectedEntities.First() as Body)?.Shape?.ShapeType == ShapeType.Solid;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanExecuteOnMultiSolid()
    {
        return _WorkspaceController?.Selection != null
               && _WorkspaceController.Selection.SelectedEntities.Count > 0
               && _WorkspaceController.Selection.SelectedEntities.All(e => (e as Body)?.Shape?.ShapeType == ShapeType.Solid);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanExecuteOnSingleSketch()
    {
        return _WorkspaceController?.Selection != null
               && _WorkspaceController.Selection.SelectedEntities.Count == 1
               && (_WorkspaceController.Selection.SelectedEntities.First() as Body)?.Shape?.ShapeType == ShapeType.Sketch;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanExecuteOnMultiSketch()
    {
        return _WorkspaceController?.Selection != null
               && _WorkspaceController.Selection.SelectedEntities.Count > 0
               && _WorkspaceController.Selection.SelectedEntities.All(e => (e as Body)?.Shape?.ShapeType == ShapeType.Sketch);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanExecuteOnWorkspace()
    {
        return InteractiveContext.Current?.WorkspaceController?.Workspace != null;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool CanExecuteOnViewport()
    {
        return InteractiveContext.Current?.ViewportController?.Viewport != null;
    }

    //--------------------------------------------------------------------------------------------------

}