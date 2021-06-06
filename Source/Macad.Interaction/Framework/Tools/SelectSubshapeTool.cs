using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction
{
    public class SelectSubshapeTool : Tool
    {
        public delegate void SelectedFunc(SubshapeReference subshapeReferenceRef);

        //--------------------------------------------------------------------------------------------------

        readonly Body _TargetBody;
        readonly Shape _TargetShape;
        readonly SelectedFunc _SelectedFunc;
        readonly string _StatusText;
        readonly SubshapeType _SubshapeType;
        readonly ISelectionFilter _SelectionFilter;
        VisualShape _OverriddenVisualShape;

        //--------------------------------------------------------------------------------------------------

        public SelectSubshapeTool(SubshapeType subshapeType, Shape shape, string id, string statusText, 
                                  SelectedFunc selectedFunc, ISelectionFilter selectionFilter = null)
        {
            _SubshapeType = subshapeType;
            _TargetShape = shape;
            _TargetBody = shape.Body;
            _StatusText = statusText;
            _SelectionFilter = selectionFilter;
            Id = id;
            Debug.Assert(_TargetShape != null);
            _SelectedFunc = selectedFunc;
            Debug.Assert(_SelectedFunc != null);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            if (_TargetShape != _TargetBody?.Shape)
            {
                _OverriddenVisualShape = WorkspaceController.VisualObjects.Get(_TargetBody) as VisualShape;
                if (_OverriddenVisualShape != null)
                {
                    _OverriddenVisualShape.OverrideBrep = _TargetShape.GetTransformedBRep();
                    WorkspaceController.Invalidate();
                }
            }

            var toolAction = new SelectSubshapeAction(this, SubshapeTypeHelper.GetTypes(_SubshapeType), _TargetBody, _SelectionFilter);
            if (!WorkspaceController.StartToolAction(toolAction))
            {
                return false;
            }
            toolAction.Finished += _OnActionFinished;

            StatusText = _StatusText;

            switch (_SubshapeType)
            {
                case SubshapeType.Vertex:
                    WorkspaceController.HudManager?.SetCursor(Cursors.SelectVertex);
                    break;
                case SubshapeType.Edge:
                    WorkspaceController.HudManager?.SetCursor(Cursors.SelectEdge);
                    break;
                case SubshapeType.Wire:
                    WorkspaceController.HudManager?.SetCursor(Cursors.SelectWire);
                    break;
                case SubshapeType.Face:
                    WorkspaceController.HudManager?.SetCursor(Cursors.SelectFace);
                    break;
            }
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            bool finished = false;
            var selectAction = toolAction as SelectSubshapeAction;
            Debug.Assert(selectAction != null);

            if (selectAction.SelectedSubshapeType == SubshapeTypes.Face)
            {
                var face = TopoDS.Face(selectAction.SelectedSubshape);
                var brepAdaptor = new BRepAdaptor_Surface(face, true);
                if (brepAdaptor.GetGeomType() != GeomAbs_SurfaceType.GeomAbs_Plane)
                {
                    StatusText = "Selected face is not a plane type surface.";
                }

                finished = true;
            }

            if(finished)
            {
                var subshapeReference = _TargetShape.GetSubshapeReference(_TargetShape.GetTransformedBRep(), selectAction.SelectedSubshape);
                selectAction.Stop();
                Stop();

                if (subshapeReference == null)
                {
                    Messages.Error("A subshape reference could not be produced for this subshape.");
                    return;
                }

                _SelectedFunc.Invoke(subshapeReference);
            }
            else
            {
                selectAction.Reset();
            }

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------
        
        public override void Stop()
        {
            if (_OverriddenVisualShape != null)
            {
                _OverriddenVisualShape.OverrideBrep = null;
                WorkspaceController.Invalidate();
                _OverriddenVisualShape = null;
            }
            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------
        
        public override bool OnEntitySelectionChanging(IEnumerable<Entity> entitiesToSelect, IEnumerable<Entity> entitiesToUnSelect)
        {
            return entitiesToSelect.Any();
        }

        //--------------------------------------------------------------------------------------------------

    }
}