using System.Runtime.CompilerServices;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;

namespace Macad.Interaction.Editors.Shapes
{
    public class PipeEditor : Editor<Pipe>
    {
        PipePropertyPanel _Panel;
        SketchPropertyPanel _SketchPanel;

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<PipePropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);

            if (Entity.Predecessor is Sketch sketch)
            {
                _SketchPanel = PropertyPanel.CreatePanel<SketchPropertyPanel>(sketch);
                InteractiveContext.Current.PropertyPanelManager?.AddPanel(_SketchPanel, _Panel);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_SketchPanel);
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);
        }
        
        //--------------------------------------------------------------------------------------------------

        public override void EnrichContextMenu(CustomMenuItems itemList)
        {
            if (Entity.Predecessor is Sketch sketch)
            {
                itemList.AddCommand(SketchCommands.StartSketchEditor, sketch);
            }
            if (Entity.Profile == Pipe.ProfileType.Custom && Entity.Operands.Count > 1 && Entity.Operands[1] is Sketch profile)
            {
                itemList.AddCommand(SketchCommands.StartSketchEditor, profile, "Edit Profile");
            }
        }

        //--------------------------------------------------------------------------------------------------

        [ModuleInitializer]
        public static void Register()
        {
            RegisterEditor<PipeEditor>();
        }

        //--------------------------------------------------------------------------------------------------

    }
}