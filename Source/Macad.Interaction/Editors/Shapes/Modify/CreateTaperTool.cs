using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Interaction.Visual;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public class CreateTaperTool : Tool
{
    enum ToolMode
    {
        CreateNew,
        Reselect
    }

    //--------------------------------------------------------------------------------------------------

    readonly ToolMode _Mode;

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

    protected override bool OnStart()
    {
        _TargetBrep = _TargetShape.GetTransformedBRep();

        if (_Mode == ToolMode.Reselect)
        {
            OverrideVisualShape(_TargetBody, _TargetBrep);
        }

        var toolAction = new SelectSubshapeAction(SubshapeTypes.Face, _TargetBody,
                                                  new OrSelectionFilter(new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane), 
                                                                        new FaceSelectionFilter(FaceSelectionFilter.FaceType.Cone),
                                                                        new FaceSelectionFilter(FaceSelectionFilter.FaceType.Cylinder)));
        if (!StartAction(toolAction))
            return false;
        toolAction.Finished += _SelectFaceAction_Finished;

        SetHintMessage("__Select face__ to taper.");
        SetCursor(Cursors.SelectFace);
        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    void _SelectFaceAction_Finished(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
    {
        if (args.SelectedSubshapeType == SubshapeTypes.Face)
        {
            var face = args.SelectedSubshape.ToFace();
            var brepAdaptor = new BRepAdaptor_Surface(face, true);
            if (brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane
                && brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Cylinder
                && brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Cone)
            {
                SetHintMessage("Selected face is not a plane, cylinder or cone type surface.");
                action.Reset();
                return;
            }

            StopAction(action);

            _TargetFace = face;
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

            var newAction = new SelectSubshapeAction(_SubshapesOfFace);
            if (!StartAction(newAction))
            {
                Stop();
                return;
            }
            newAction.Preview += _SelectBaseAction_Preview;
            newAction.Finished += _SelectBaseAction_Finished;

            SetHintMessage("Select base edge or vertex to define direction of taper.");
            SetCursor(Cursors.SelectEdge);
            WorkspaceController.Invalidate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    bool _GetPreviewAxis(SelectSubshapeAction.EventArgs args, out Ax2 axis)
    {
        if (args.SelectedSubshapeType == SubshapeTypes.Edge)
        {
            var edge = args.SelectedSubshape.ToEdge();
            var edgeParam = EdgeAlgo.FindEdgeParameter(edge, args.MouseEventData.PickAxis);
            return Taper.ComputeAxisFromEdge(_TargetFace, edge, edgeParam, out axis);
        }
            
        if (args.SelectedSubshapeType == SubshapeTypes.Vertex)
        {
            var vertex = args.SelectedSubshape.ToVertex();
            return Taper.ComputeAxisFromVertex(_TargetFace, vertex, out axis);
        }

        axis = Ax2.XOY;
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    void _SelectBaseAction_Preview(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
    {
        if (_GetPreviewAxis(args, out var axis))
        {
            if (_DirectionPreview == null)
            {
                _DirectionPreview = new Axis(WorkspaceController, Axis.Style.NoResize | Axis.Style.ArrowHead)
                {
                    Length = 1.5,
                    Width = 3.0,
                    Color = Colors.Highlight
                };
                Add(_DirectionPreview);
            }

            _DirectionPreview.Set(axis.Axis);
        }
        else
        {
            Remove(_DirectionPreview);
            _DirectionPreview = null;
        }

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    void _SelectBaseAction_Finished(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
    {
        if (args.SelectedSubshapeType is not (SubshapeTypes.Edge or SubshapeTypes.Vertex))
        {
            return;
        }

        StopAction(action);
        Stop();
                
        var faceRef = _TargetShape.GetSubshapeReference(_TargetBrep, _TargetFace);
        if (faceRef == null)
        {
            Messages.Error("A subshape reference could not be produced for this face.");
            Stop();
            return;
        }

        var baseSubshapeRef = _TargetShape.GetSubshapeReference(_TargetBrep, args.SelectedSubshape);
        if (baseSubshapeRef == null)
        {
            Messages.Error("A subshape reference could not be produced for the selected edge or vertex.");
            return;
        }

        // Calculate parameter on the edge, if any
        double? edgeParam = null;
        if (args.SelectedSubshapeType == SubshapeTypes.Edge)
        {
            edgeParam = EdgeAlgo.FindEdgeParameter(args.SelectedSubshape.ToEdge(), args.MouseEventData.PickAxis);
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
                CommitChanges();
                WorkspaceController.Selection.SelectEntity(_TargetBody);
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
            CommitChanges();
        }

        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

}