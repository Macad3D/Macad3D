using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class CreateTaperTool : Tool
    {
        enum Phase
        {
            Face,
            BaseEdgeOrVertex
        }

        //--------------------------------------------------------------------------------------------------

        enum ToolMode
        {
            CreateNew,
            Reselect
        }

        //--------------------------------------------------------------------------------------------------

        readonly ToolMode _Mode;
        Phase _Phase;

        readonly Body _TargetBody;
        readonly Shape _TargetShape;
        readonly Taper _TaperToChange;
        TopoDS_Face _TargetFace;
        TopoDS_Shape _TargetBrep;

        List<TopoDS_Shape> _SubshapesOfFace;
        Axis _DirectionPreview;

        //--------------------------------------------------------------------------------------------------

        /// <summary>
        /// Create a new taper shape by selecting a target face.
        /// </summary>
        public CreateTaperTool(Body targetBody) 
        {
            _TargetBody = targetBody;
            _TargetShape = _TargetBody?.Shape;
            Debug.Assert(_TargetShape != null);

            _Mode = ToolMode.CreateNew;
        }

        //--------------------------------------------------------------------------------------------------

        /// <summary>
        /// Reselect target face of an taper shape.
        /// </summary>
        public CreateTaperTool(Taper taperToChange)
        {
            _TaperToChange = taperToChange;
            Debug.Assert(_TaperToChange != null);
            _TargetBody = _TaperToChange.Body;
            Debug.Assert(_TargetBody != null);
            _TargetShape = _TaperToChange.Operands[0] as Shape;
            Debug.Assert(_TargetShape != null);

            _Mode = ToolMode.Reselect;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            _TargetBrep = _TargetShape.GetTransformedBRep();

            if (_Mode == ToolMode.Reselect)
            {
                var visualShape = WorkspaceController.VisualObjects.Get(_TargetBody) as VisualShape;
                if (visualShape != null)
                {
                    visualShape.OverrideBrep = _TargetBrep;
                    WorkspaceController.Invalidate();
                }
            }

            _Phase = Phase.Face;
            var toolAction = new SelectSubshapeAction(this, SubshapeTypes.Face, _TargetBody,
                new OrSelectionFilter(new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane), 
                                      new FaceSelectionFilter(FaceSelectionFilter.FaceType.Cone),
                                      new FaceSelectionFilter(FaceSelectionFilter.FaceType.Cylinder)));
            if (!WorkspaceController.StartToolAction(toolAction))
                return false;
            toolAction.Previewed += _OnActionPreview;
            toolAction.Finished += _OnActionFinished;

            WorkspaceController.HudManager?.SetHintMessage(this, "Select face to taper.");
            WorkspaceController.HudManager?.SetCursor(Cursors.SelectFace);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            switch (_Phase)
            {
                case Phase.Face:
                    _OnFaceSelected(toolAction as SelectSubshapeAction);
                    break;
                case Phase.BaseEdgeOrVertex:
                    _OnEdgeOrVertexSelected(toolAction as SelectSubshapeAction);
                    break;
            }

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionPreview(ToolAction toolAction)
        {
            if (_Phase == Phase.BaseEdgeOrVertex)
            {
                if (_GetPreviewAxis(toolAction as SelectSubshapeAction, out var axis))
                {
                    _DirectionPreview ??= new Axis(WorkspaceController, Axis.Style.NoResize | Axis.Style.ArrowHead)
                    {
                        Length = 1.5,
                        Width = 3.0,
                        Color = Colors.Highlight
                    };
                    _DirectionPreview.Set(axis.Axis);
                }
                else
                {
                    _DirectionPreview?.Remove();
                    _DirectionPreview = null;
                }

                WorkspaceController.Invalidate();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _OnFaceSelected(SelectSubshapeAction selectAction)
        {
            if (selectAction.SelectedSubshapeType == SubshapeTypes.Face)
            {
                var face = TopoDS.Face(selectAction.SelectedSubshape);
                var brepAdaptor = new BRepAdaptor_Surface(face, true);
                if (brepAdaptor.GetGeomType() != GeomAbs_SurfaceType.GeomAbs_Plane
                    && brepAdaptor.GetGeomType() != GeomAbs_SurfaceType.GeomAbs_Cylinder
                    && brepAdaptor.GetGeomType() != GeomAbs_SurfaceType.GeomAbs_Cone)
                {
                    WorkspaceController.HudManager?.SetHintMessage(this, "Selected face is not a plane, cylinder or cone type surface.");
                    selectAction.Reset();
                    return;
                }

                selectAction.Stop();

                _TargetFace = face;
                _Phase = Phase.BaseEdgeOrVertex;
                _SubshapesOfFace = new List<TopoDS_Shape>();
                var edges = face.Edges().Where(
                    edge =>
                    {
                        var analysis = new ShapeAnalysis_Edge();
                        return !analysis.IsSeam(edge, face);
                    }).ToList();
                _SubshapesOfFace.AddRange(edges);

                var vertices = face.Vertices().Where(
                    vertex =>
                    {
                        var vertexEdges = edges.Where(edge => edge.Vertices().ContainsSame(vertex));
                        return vertexEdges.Count() > 1;
                    });
                _SubshapesOfFace.AddRange(vertices);

                var newAction = new SelectSubshapeAction(this, _SubshapesOfFace);
                if (!WorkspaceController.StartToolAction(newAction))
                {
                    Stop();
                    return;
                }
                newAction.Previewed += _OnActionPreview;
                newAction.Finished += _OnActionFinished;

                WorkspaceController.HudManager?.SetHintMessage(this, "Select base edge or vertex to define direction of taper.");
                WorkspaceController.HudManager?.SetCursor(Cursors.SelectEdge);
            }
        }

        //--------------------------------------------------------------------------------------------------

        double _FindEdgeParam(TopoDS_Edge edge, SelectSubshapeAction selectAction)
        {
            // Calculate parameter on the edge
            double umin = 0, umax = 0;
            var curve = BRep_Tool.Curve(edge, ref umin, ref umax);
            var viewAxis = selectAction.LastMouseEventData.PickAxis;
            var extrema = new GeomAPI_ExtremaCurveCurve(curve, new Geom_Line(viewAxis));
            if (extrema.NbExtrema() > 0)
            {
                double param1 = 0, param2 = 0;
                extrema.LowerDistanceParameters(ref param1, ref param2);
                return param1;
            }
            else
            {
                return Taper.CalculateBaseParameter(edge, 0.5);
            }
        }

        //--------------------------------------------------------------------------------------------------

        bool _GetPreviewAxis(SelectSubshapeAction selectAction, out Ax2 axis)
        {
            if (selectAction.SelectedSubshapeType == SubshapeTypes.Edge)
            {
                var edge = selectAction.SelectedSubshape.ToEdge();
                var edgeParam = _FindEdgeParam(edge, selectAction);
                return Taper.ComputeAxisFromEdge(_TargetFace, edge, edgeParam, out axis);
            }
            
            if (selectAction.SelectedSubshapeType == SubshapeTypes.Vertex)
            {
                var vertex = selectAction.SelectedSubshape.ToVertex();
                return Taper.ComputeAxisFromVertex(_TargetFace, vertex, out axis);
            }

            axis = Ax2.XOY;
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnEdgeOrVertexSelected(SelectSubshapeAction selectAction)
        {
            if (selectAction.SelectedSubshapeType == SubshapeTypes.Edge
                || selectAction.SelectedSubshapeType == SubshapeTypes.Vertex)
            {
                selectAction.Stop();
                Stop();
                
                var faceRef = _TargetShape.GetSubshapeReference(_TargetBrep, _TargetFace);
                if (faceRef == null)
                {
                    Messages.Error("A subshape reference could not be produced for this face.");
                    Stop();
                    return;
                }

                var baseSubshapeRef = _TargetShape.GetSubshapeReference(_TargetBrep, selectAction.SelectedSubshape);
                if (baseSubshapeRef == null)
                {
                    Messages.Error("A subshape reference could not be produced for the selected edge or vertex.");
                    return;
                }

                // Calculate parameter on the edge, if any
                double? edgeParam = null;
                if (selectAction.SelectedSubshapeType == SubshapeTypes.Edge)
                {
                    edgeParam = _FindEdgeParam(selectAction.SelectedSubshape.ToEdge(), selectAction);
                }

                // Create or update
                if (_Mode == ToolMode.CreateNew)
                {
                    // Create new
                    var taper = Taper.Create(_TargetBody, faceRef, baseSubshapeRef, 10.0);
                    if (taper != null)
                    {
                        if (edgeParam.HasValue)
                            taper.BaseParameter = edgeParam.Value;
                        InteractiveContext.Current.UndoHandler.Commit();
                        InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(_TargetBody);
                    }
                }
                else if(_Mode == ToolMode.Reselect)
                {
                    // Reselected face and base subshape
                    _TaperToChange.Face = faceRef;
                    _TaperToChange.BaseEdgeOrVertex = baseSubshapeRef;
                    if (edgeParam.HasValue)
                        _TaperToChange.BaseParameter = edgeParam.Value;
                    else
                        _TaperToChange.CalculateBaseParameter(0.5);
                    _TaperToChange.Invalidate();
                    InteractiveContext.Current.UndoHandler.Commit();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Stop()
        {
            var visualShape = WorkspaceController.VisualObjects.Get(_TargetBody) as VisualShape;
            if (visualShape != null)
            {
                visualShape.OverrideBrep = null;
            }

            _DirectionPreview?.Remove();
            _DirectionPreview = null;

            base.Stop();
        }

        //--------------------------------------------------------------------------------------------------
    }
}