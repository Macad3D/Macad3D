using System.Linq;
using Macad.Core;
using Macad.Core.Auxiliary;
using Macad.Occt;
using Macad.Presentation;

using static Macad.Interaction.CommandHelper;

namespace Macad.Interaction;

public static class AuxiliaryCommands
{
    #region Datum Plane

    public static ActionCommand CreateDatumPlane { get; } = new(
        () =>
        {
            var plane = DatumPlane.Create();
            plane.Position = InteractiveContext.Current.Workspace.WorkingPlane.Location;
            plane.Rotation = InteractiveContext.Current.Workspace.WorkingPlane.Rotation();
            InteractiveContext.Current?.Document.Add(plane);
            InteractiveContext.Current?.UndoHandler.Commit();

            Selection.SelectEntity(plane);
            Invalidate();
        },
        CanStartTool)
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
            var plane = Selection.SelectedEntities.OfType<DatumPlane>().First();
            InteractiveContext.Current.Workspace.WorkingPlane = new Pln(plane.GetCoordinateSystem());
            Invalidate();
        },
        () => Selection.SelectedEntities.OfType<DatumPlane>().Count() == 1)
    {
        Header = () => "Set as Working Plane",
        Description = () => "Sets the working plane to the selected datum plane.",
        Icon = () => "WorkingPlane-Set"
    };

    //--------------------------------------------------------------------------------------------------

    #endregion
}