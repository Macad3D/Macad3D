using System.Collections.Generic;
using System.Linq;
using Macad.Interaction.Visual;
using Macad.Core.Components;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Topology;

public sealed class BodyEditor : Editor<Body>
{
    VisualShape _GhostVisualObject;
    BodyShapePropertyPanel _ShapePanel;
    readonly Dictionary<Component, Editor> _ComponentEditors = new();

    //--------------------------------------------------------------------------------------------------

    protected override void OnStart()
    {
        CreatePanel<BodyPropertyPanel>(Entity, PropertyPanelSortingKey.Body);
        _ShapePanel = CreatePanel<BodyShapePropertyPanel>(Entity, PropertyPanelSortingKey.BodyShape);

        _UpdateComponents();

        Entity.PropertyChanged += _Body_PropertyChanged;
        InteractiveEntity.VisualChanged += _InteractiveEntity_VisualChanged;
        Layer.InteractivityChanged += _Layer_InteractivityChanged;

        _UpdateGhost();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnStop() 
    {
        Layer.InteractivityChanged -= _Layer_InteractivityChanged;
        InteractiveEntity.VisualChanged -= _InteractiveEntity_VisualChanged;                 
        Entity.PropertyChanged -= _Body_PropertyChanged;

        _GhostVisualObject?.Remove();
        _GhostVisualObject = null;

        _ShapePanel = null;

        foreach (var componentEditor in _ComponentEditors.Values)
        {
            componentEditor.Stop();
        }
        _ComponentEditors.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    #region Forwarding Editor Events

    protected override IEnumerable<WorkspaceControl> GetChildren()
    {
        if (_ShapePanel?.SelectedEditor != null)
        {
            yield return _ShapePanel?.SelectedEditor;
        }

        foreach (var editor in _ComponentEditors.Values)
        {
            yield return editor;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override (IActionCommand, object) GetStartEditingCommand()
    {
        return _ShapePanel?.SelectedEditor?.GetStartEditingCommand() ?? base.GetStartEditingCommand();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    void _Body_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(Body.IsVisible))
        {
            _UpdateGhost();
        }
        else if (e.PropertyName == nameof(Body.Components))
        {
            _UpdateComponents();
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    void _InteractiveEntity_VisualChanged(InteractiveEntity entity)
    {
        if (entity == Entity)
        {
            _GhostVisualObject?.Update();
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    void _Layer_InteractivityChanged(Layer layer)
    {
        if (Entity?.Layer == layer)
        {
            _UpdateGhost();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateGhost()
    {
        if (Entity.IsVisible && Entity.Layer.IsVisible)
        {
            _GhostVisualObject?.Remove();
            _GhostVisualObject = null;
        }
        else
        {
            _GhostVisualObject ??= new VisualShape(WorkspaceController, Entity, VisualShape.Options.Ghosting);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateComponents()
    {
        // Add new
        foreach (var component in Entity.Components.Except(_ComponentEditors.Keys))
        {
            var editor = Editor.CreateEditor(component);
            if (editor != null)
            {
                _ComponentEditors.Add(component, editor);
                editor.Start();
            }
        }

        // Remove old
        foreach (var component in _ComponentEditors.Keys.Except(Entity.Components).ToList())
        {
            _ComponentEditors[component]?.Stop();
            _ComponentEditors.Remove(component);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void EnrichContextMenu(ContextMenuItems itemList)
    {
        if (Entity?.Shape?.ShapeType == ShapeType.Mesh)
        {
            itemList.AddCommand(ToolboxCommands.ConvertToSolid);
        }

        _ShapePanel?.SelectedEditor?.EnrichContextMenu(itemList);
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        RegisterEditor<BodyEditor>();
    }
}