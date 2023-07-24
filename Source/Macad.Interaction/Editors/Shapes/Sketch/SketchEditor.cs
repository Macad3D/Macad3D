using System;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class SketchEditor : Editor<Sketch>
    {
        Plane _PlaneVisual;

        //--------------------------------------------------------------------------------------------------

        protected override void OnStart()
        {
            CreatePanel<SketchPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);
        }

        //--------------------------------------------------------------------------------------------------

        public override void EnrichContextMenu(ContextMenuItems itemList)
        {
            itemList.AddCommand(SketchCommands.StartSketchEditor, Entity);
            itemList.AddCommand(ModelCommands.CreateExtrude, Entity);
            itemList.AddCommand(ModelCommands.CreateRevolve, Entity);
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnToolsStart()
        {
            Shape.ShapeChanged += _Shape_ShapeChanged;
            _UpdateHints();
        }

        //--------------------------------------------------------------------------------------------------

        protected override void OnToolsStop()
        {
            Remove(_PlaneVisual);
            _PlaneVisual = null;
            Shape.ShapeChanged -= _Shape_ShapeChanged;              
        }

        //--------------------------------------------------------------------------------------------------
        
        void _Shape_ShapeChanged(Shape shape)
        {
            if (shape == Entity)
            {
                _UpdateHints();
            }
        }
    
        //--------------------------------------------------------------------------------------------------

        void _UpdateHints()
        {
            var trsf = Entity.Body.GetTransformation();
            var brep = Entity.GetBRep();
            if(brep == null)
                return;

            // Plane
            if (_PlaneVisual == null)
            {
                _PlaneVisual = new Plane(WorkspaceController, Plane.Style.None)
                {
                    Transparency = 0.8,
                    Boundary = false,
                    Color = Colors.Auxillary
                };
                Add(_PlaneVisual);
            }
            
            var bbox = brep.BoundingBox();
            var extents = bbox.Extents();
            var center = bbox.Center();
            if (bbox.IsXThin(5.0))
            {
                extents.X = 5.0;
            }
            if (bbox.IsYThin(5.0))
            {
                extents.Y = 5.0;
            }
            var add = Math.Max(extents.X, extents.Y) * 0.1;

            _PlaneVisual.Set(Pln.XOY.Translated(Pnt.Origin, center));
            _PlaneVisual.Size = new XY(extents.X + add, extents.Y + add);
            _PlaneVisual.SetLocalTransformation(trsf);

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<SketchEditor>();
        }

        //--------------------------------------------------------------------------------------------------

    }
}