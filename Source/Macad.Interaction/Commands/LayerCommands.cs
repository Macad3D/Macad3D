using System.Linq;
using System.Windows.Data;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Interaction;

public static class LayerCommands
{
    static bool _IsValidLayer(Layer layer)
    {
        return CoreContext.Current?.Layers != null
               && layer != null
               && CoreContext.Current.Layers.Contains(layer);
    }

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateNewLayer { get; } = new(
        () =>
        {
            var cl = CoreContext.Current?.Layers;
            if(cl == null)
                return;

            var newLayer = new Layer() {Name = "Unnamed"};
            cl.Add(newLayer);
            CoreContext.Current.UndoHandler.Commit();
            CoreContext.Current.Document?.MarkAsUnsaved();
        },
        () => CoreContext.Current?.Layers != null)
    {
        Header = () => "Add",
        Description = () => "Creates a new layer.",
        Icon = () => "Generic-Add"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<Layer> DeleteLayer { get; } = new(
        layer =>
        {
            var cl = CoreContext.Current?.Layers;
            if (cl == null)
                return;

            if (!Dialogs.Dialogs.AssureLayerDeletion(false, layer.Name))
                return;

            cl.Remove(layer);
            CoreContext.Current.UndoHandler.Commit();
            CoreContext.Current.Document?.MarkAsUnsaved();
            InteractiveContext.Current.WorkspaceController.Invalidate();
        },
        layer => _IsValidLayer(layer) && CoreContext.Current?.Layers?.Default != layer
    )
    {
        Header = (layer) => "Delete",
        Description = (layer) => "Deletes the selected layer and moves related entities to the default layer.",
        Icon = (layer) => "Generic-Remove"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<Layer> ToggleIsVisible { get; } = new(
        layer =>
        {
            var cl = CoreContext.Current?.Layers;
            if (cl == null)
                return;
                
            layer ??= cl.ActiveLayer;
            if (layer == null)
                return;

            layer.IsVisible = !layer.IsVisible;
            CoreContext.Current.UndoHandler.Commit();
            CoreContext.Current.Document?.MarkAsUnsaved();
            InteractiveContext.Current.WorkspaceController.Invalidate();
        },
        _IsValidLayer
    )
    {
        Header = (layer) => "Visibility",
        Description = (layer) => "Toggles the visibility of the active layer. Entities of invisible layers are not shown.",
        Icon = (layer) => (layer?.IsVisible ?? true) ? "Generic-Visible" : "Generic-Hidden",
        BindingSource = (layer) => layer == null ? ((object)InteractiveContext.Current, "Layers.ActiveLayer.IsVisible")
                                       : ((object)layer, "IsVisible"),
        IsCheckedBinding = (layer) => layer == null ? BindingHelper.Create(InteractiveContext.Current, "Layers.ActiveLayer.IsVisible", BindingMode.OneWay)
                                          : BindingHelper.Create(layer, "IsVisible", BindingMode.OneWay)
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<Layer> ToggleIsLocked { get; } = new(
        layer =>
        {
            var cl = CoreContext.Current?.Layers;
            if (cl == null)
                return;

            layer ??= cl.ActiveLayer;
            if (layer == null)
                return;

            layer.IsLocked = !layer.IsLocked;
            CoreContext.Current.UndoHandler.Commit();
            CoreContext.Current.Document?.MarkAsUnsaved();
            InteractiveContext.Current.WorkspaceController.Invalidate();
        },
        _IsValidLayer
    )
    {
        Header = (layer) => "Locking",
        Description = (layer) => "Toggles the locking of the active layer. Entities of locked layers are not selectable.",
        Icon = (layer) => (layer?.IsLocked ?? true) ? "Generic-Locked" : "Generic-Unlocked", 
        BindingSource = (layer) => layer == null ? ((object)InteractiveContext.Current, "Layers.ActiveLayer.IsLocked")
                                       : ((object)layer, "IsLocked"),
        IsCheckedBinding = (layer) => layer == null ? BindingHelper.Create(InteractiveContext.Current, "Layers.ActiveLayer.IsLocked", BindingMode.OneWay)
                                          : BindingHelper.Create(layer, "IsLocked", BindingMode.OneWay)
    };


    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<Layer> ToggleIsolation { get; } = new(
        layer =>
        {
            var cl = CoreContext.Current?.Layers;
            if (cl == null)
                return;

            cl.IsolateActiveLayer = !cl.IsolateActiveLayer;
            CoreContext.Current.UndoHandler.Commit();
            CoreContext.Current.Document?.MarkAsUnsaved();
            InteractiveContext.Current.WorkspaceController.Invalidate();
        },
        layer => CoreContext.Current?.Layers != null
    ) 
    {
        Header = (layer) => "Isolation",
        Description = (layer) => "Isolates active layer. Only entities of the active layer are selectable.",
        Icon = (layer) => "Layer-Isolation",
        IsCheckedBinding = (layer) => BindingHelper.Create(InteractiveContext.Current, "Layers.IsolateActiveLayer", BindingMode.OneWay)
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<Layer> MoveEntityToLayer { get; } = new(
        ExecuteMoveEntityToLayer,
        layer => _IsValidLayer(layer) && (InteractiveContext.Current?.WorkspaceController?.Selection?.SelectedEntities.Any() ?? false)
    ) 
    {
        Header = (layer) => "Move to Layer",
        Title = (layer) => "Move Entities to Layer",
        Description = (layer) => "Moves the selected entities to the selected layer.",
        Icon = (layer) => "Layer-MoveToLayer"
    };

    static void ExecuteMoveEntityToLayer(Layer layer)
    {
        var cl = CoreContext.Current?.Layers;
        if (cl == null)
            return;

        foreach (var entity in InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities)
        {
            entity.Layer = layer;
        }
        CoreContext.Current.UndoHandler?.Commit();

        CoreContext.Current.Document?.MarkAsUnsaved();
        InteractiveContext.Current.WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<Layer> SelectAllEntities { get; } = new(
        layer =>
        {
            var cl = CoreContext.Current?.Layers;
            if (cl == null)
                return;

            InteractiveContext.Current.WorkspaceController.Selection.SelectEntities(CoreContext.Current.Document.Where(body => body.Layer == layer));

            InteractiveContext.Current.Document?.MarkAsUnsaved();
            InteractiveContext.Current.WorkspaceController.Invalidate();
        },
        _IsValidLayer
    )        
    {
        Header = (layer) => "Select All",
        Description = (layer) => "Selectes all entities of the selected layer.",
        Icon = (layer) => "Layer-SelectAllEntities"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand LayerVisualPanel { get; } = new(
        () =>
        {
            // Left empty by intension, the visual panel is shown as drop down content
        },
        () => true)
    {
        Header = () => "Visual",
        Title = () => "Visual Properties",
        Description = () => "Opens the visual property panel of the active layer.",
        Icon = () => "Layer-VisualProps"
    };

    //--------------------------------------------------------------------------------------------------


}