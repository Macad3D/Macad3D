using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core.Components;
using Macad.Core.Topology;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Topology
{
    public sealed class BodyEditor : Editor<Body>
    {
        BodyPropertyPanel _Panel;
        BodyShapePropertyPanel _ShapePanel;
        VisualShape _GhostVisualObject;
        readonly Dictionary<Component, Editor> _ComponentEditors = new Dictionary<Component, Editor>();

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<BodyPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Body);

            _ShapePanel = PropertyPanel.CreatePanel<BodyShapePropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_ShapePanel, PropertyPanelSortingKey.BodyShape);

            _UpdateComponents();

            Entity.PropertyChanged += _Body_PropertyChanged;
            InteractiveEntity.VisualChanged += _InteractiveEntity_VisualChanged;                 

            _UpdateGhost();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop() 
        {
            InteractiveEntity.VisualChanged -= _InteractiveEntity_VisualChanged;                 
            Entity.PropertyChanged -= _Body_PropertyChanged;

            _GhostVisualObject?.Remove();
            _GhostVisualObject = null;

            foreach (var componentEditor in _ComponentEditors.Values)
            {
                componentEditor.Stop();
            }
            _ComponentEditors.Clear();

            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_ShapePanel);
            _ShapePanel = null;
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
            _Panel = null;
        }

        //--------------------------------------------------------------------------------------------------

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
            _ShapePanel.EnrichMainContextMenu(itemList);
        }

        //--------------------------------------------------------------------------------------------------

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<BodyEditor>();
        }
    }
}