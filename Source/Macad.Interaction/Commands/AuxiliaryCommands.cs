using System.Linq;
using Macad.Core;
using Macad.Core.Auxiliary;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction
{
    public static class AuxiliaryCommands
    {
        #region Helper

        static WorkspaceController _WorkspaceController
        {
            get { return InteractiveContext.Current?.WorkspaceController; }
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CanStartTool()
        {
            return (_WorkspaceController != null);
        }

        #endregion

        #region Datum Plane

        public static ActionCommand CreateDatumPlane { get; } = new(
            () =>
            {
                var plane = DatumPlane.Create();
                plane.Position = _WorkspaceController.Workspace.WorkingPlane.Location;
                plane.Rotation = _WorkspaceController.Workspace.WorkingPlane.Rotation();
                InteractiveContext.Current?.Document.AddChild(plane);
                InteractiveContext.Current?.UndoHandler.Commit();

                _WorkspaceController.Selection.SelectEntity(plane);
                _WorkspaceController.Invalidate();
            },
            () => _CanStartTool())
        {
            Header = () => "Datum Plane",
            Description = () => "Creates a new datum plane which can be used as a reference. A datum plan can be papered with an image.",
            Icon = () => "Auxiliary-DatumPlane",
            HelpTopic = "322f5cc2-0fc7-43f9-bb80-5e87cb3e3651"
        };

        //--------------------------------------------------------------------------------------------------
        public static ActionCommand SetWorkingPlaneToDatumPlane { get; } = new (
            () =>
            {
                var plane = _WorkspaceController.Selection.SelectedEntities.OfType<DatumPlane>().First();
                _WorkspaceController.Workspace.WorkingPlane = new Pln(plane.GetCoordinateSystem());
                _WorkspaceController.Invalidate();
            },
            () => _WorkspaceController.Selection.SelectedEntities.OfType<DatumPlane>().Count() == 1)
        {
            Header = () => "Set as Working Plane",
            Description = () => "Sets the working plane to the selected datum plane.",
            Icon = () => "WorkingPlane-Set"
        };

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}