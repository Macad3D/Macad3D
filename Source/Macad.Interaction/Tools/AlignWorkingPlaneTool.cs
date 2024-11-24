using System;
using System.Collections.Generic;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Auxiliary;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction;

public class AlignWorkingPlaneTool : Tool
{
    [Flags]
    public enum AlignWorkingPlaneModes
    {
        AlignToFace    = 1 << 0,
        AlignToEdge    = 1 << 1,
        AlignToVertex  = 1 << 2,
        AlignToDatum   = 1 << 4,
        All = 0xff
    }

    //--------------------------------------------------------------------------------------------------

    readonly AlignWorkingPlaneModes _Mode;
    Pln _SavedWorkingPlane;
    Trihedron _DefaultPlanes;

    //--------------------------------------------------------------------------------------------------

    public AlignWorkingPlaneTool(AlignWorkingPlaneModes mode) 
    {
        _Mode = mode;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        var selectionFilters = new List<ISelectionFilter>();
        var allowedTypes = SubshapeTypes.None;
            
        _SavedWorkingPlane = WorkspaceController.Workspace.WorkingPlane;

        if (_Mode.HasFlag(AlignWorkingPlaneModes.AlignToFace))
        {
            allowedTypes |= SubshapeTypes.Face;
            selectionFilters.Add(new FaceSelectionFilter(FaceSelectionFilter.FaceType.Plane));
        }

        if (_Mode.HasFlag(AlignWorkingPlaneModes.AlignToEdge))
        {
            allowedTypes |= SubshapeTypes.Edge;
            selectionFilters.Add(new EdgeSelectionFilter(EdgeSelectionFilter.EdgeType.Any));
        }

        if (_Mode.HasFlag(AlignWorkingPlaneModes.AlignToVertex))
        {
            allowedTypes |= SubshapeTypes.Vertex;
            selectionFilters.Add(new VertexSelectionFilter(VertexSelectionFilter.VertexType.All));
        }

        if (_Mode.HasFlag(AlignWorkingPlaneModes.AlignToDatum))
        {
            _DefaultPlanes = new(WorkspaceController, Ax3.XOY, Trihedron.Components.Planes);
            Add(_DefaultPlanes);
            selectionFilters.Add(new SignatureSelectionFilter(VisualPlane.SelectionSignature));
        }

        var toolAction = new SelectSubshapeAction(allowedTypes, null,
                                                  selectionFilters.Count > 0 ? new OrSelectionFilter(selectionFilters.ToArray()) : null);

        if (!StartAction(toolAction))
        {
            return false;
        }
        toolAction.Finished += _ToolAction_Finished;
        toolAction.Preview += _ToolAction_Preview;

        SetHintMessage("__Select component__ to align to, or __select X / Y / Z__ for default direction.");
        SetCursor(Cursors.WorkingPlane);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        if (WorkspaceController.Workspace.WorkingPlane != _SavedWorkingPlane)
        {
            WorkspaceController.Workspace.WorkingPlane = _SavedWorkingPlane;
        }

        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    bool _GetPlaneFromAction(SelectSubshapeAction.EventArgs args, out Pln plane)
    {
        RemoveHintMessage();
        plane = WorkspaceController.Workspace.WorkingPlane;

        // DatumPlane?
        if (args.SelectedEntity is DatumPlane datumPlane)
        {
            plane = new Pln(datumPlane.GetCoordinateSystem());
            return true;
        }
            
        // Sketch?
        if (args.SelectedEntity is Body { Shape.ShapeType: ShapeType.Sketch } body)
        {
            if (Topo2dUtils.GetPlaneOfEdges(body.GetBRep(), out Geom_Plane geomPlane))
            {
                plane = geomPlane.Pln().Transformed(body.GetTransformation());

                switch (args.SelectedSubshapeType)
                {
                    case SubshapeTypes.Vertex:
                        var vertex = args.SelectedSubshape.ToVertex();
                        plane.Location = vertex.Pnt();
                        break;

                    case SubshapeTypes.Edge:
                        var edge = args.SelectedSubshape.ToEdge();
                        double first = 0, last = 0;
                        var curve = BRep_Tool.CurveOnSurface(edge, geomPlane, edge.Location(), ref first, ref last);
                        if (curve != null)
                        {
                            var uv = curve.Value(first.Lerp(last, 0.5));
                            plane.Location = plane.Value(uv);
                        }
                        break;
                }
                return true;
            }
        }
            
        // Subshape
        switch (args.SelectedSubshapeType)
        {
            case SubshapeTypes.Face:
            {
                var face = args.SelectedSubshape.ToFace();
                var brepAdaptor = new BRepAdaptor_Surface(face, true);
                if (brepAdaptor.GetSurfaceType() != GeomAbs_SurfaceType.Plane)
                {
                    SetHintMessage("Selected face is not a plane type surface.");
                }
                else
                {
                    double centerU = brepAdaptor.FirstUParameter() + (brepAdaptor.LastUParameter() - brepAdaptor.FirstUParameter()) / 2;
                    double centerV = brepAdaptor.FirstVParameter() + (brepAdaptor.LastVParameter() - brepAdaptor.FirstVParameter()) / 2;
                    var centerPnt = brepAdaptor.Value(centerU, centerV);

                    var dir = brepAdaptor.Plane().Axis.Direction;
                    if (face.Orientation() == TopAbs_Orientation.REVERSED)
                        dir.Reverse();
                    plane = new Pln(centerPnt, dir);
                    return true;
                }

                break;
            }
            case SubshapeTypes.Edge:
            {
                var edge = args.SelectedSubshape.ToEdge();
                double firstParam = 0, lastParam = 0;
                var curve = BRep_Tool.Curve(edge, ref firstParam, ref lastParam);
                if (curve != null)
                {
                    var midpoint = curve.Value(firstParam + (lastParam - firstParam) / 2);
                    plane.Location = midpoint;
                    return true;
                }
                break;
            }
            case SubshapeTypes.Vertex:
            {
                var vertex = args.SelectedSubshape.ToVertex();
                plane.Location = vertex.Pnt();
                return true;
            }
        }
        
        // Default plane
        if (args.SelectedAisObject != null)
        {
            bool found = false;
            switch(_DefaultPlanes.GetComponent(args.SelectedAisObject))
            {
                case Trihedron.Components.PlaneXY:
                    plane = Pln.XOY;
                    found = true;
                    break;
                case Trihedron.Components.PlaneZX:
                    plane = new Pln(new Ax3(Pnt.Origin, Dir.DY.Reversed(), Dir.DX));
                    found = true;
                    break;
                case Trihedron.Components.PlaneYZ:
                    plane = new Pln(new Ax3(Pnt.Origin, Dir.DX, Dir.DY));
                    found = true;
                    break;
            };

            if (found)
            {
                bool flip = !args.MouseEventData.PickAxis.IsOpposite(plane.Axis, Maths.HalfPI);
                if (flip)
                {
                    plane = new Pln(new Ax3(plane.Location, plane.Axis.Direction.Reversed(), plane.XAxis.Direction.Reversed()));
                }
                return true;
            }
        }

        plane = _SavedWorkingPlane;
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Preview(SelectSubshapeAction sender, SelectSubshapeAction.EventArgs args)
    {
        WorkspaceController.Workspace.WorkingPlane = _GetPlaneFromAction(args, out Pln plane) ? plane : _SavedWorkingPlane;
    }

    //--------------------------------------------------------------------------------------------------

    void _ToolAction_Finished(SelectSubshapeAction action, SelectSubshapeAction.EventArgs args)
    {
        if (_GetPlaneFromAction(args, out Pln plane))
        {
            _SavedWorkingPlane = plane;
            StopAction(action);
            Stop();
        }
        else
        {
            action.Reset();
        }
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnKeyPressed(Key key, ModifierKeys modifierKeys)
    {
        if (modifierKeys != ModifierKeys.None)
            return false;
        
        switch (key)
        {
            case Key.Z:
                WorkspaceController.Workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.TOPL_XYPlane);
                break;

            case Key.Y:
                WorkspaceController.Workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.TOPL_XZPlane);
                break;

            case Key.X:
                WorkspaceController.Workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.TOPL_YZPlane);
                break;

            default:
                return false;
        }

        _SavedWorkingPlane = WorkspaceController.Workspace.WorkingPlane;
        Stop();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}