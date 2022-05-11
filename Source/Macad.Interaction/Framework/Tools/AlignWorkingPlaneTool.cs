﻿using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Printing;
using System.Windows.Input;
using Macad.Core;
using Macad.Core.Auxiliary;
using Macad.Core.Topology;
using Macad.Interaction.Visual;
using Macad.Occt;

namespace Macad.Interaction
{
    public class AlignWorkingPlaneTool : Tool
    {
        [Flags]
        public enum AlignWorkingPlaneModes
        {
            AlignToFace   = 1 << 0,
            AlignToEdge   = 1 << 1,
            AlignToVertex = 1 << 2,
            AlignToDatum  = 1 << 4,
            All = 0xff
        }

        //--------------------------------------------------------------------------------------------------

        readonly AlignWorkingPlaneModes _Mode;

        //--------------------------------------------------------------------------------------------------

        public AlignWorkingPlaneTool(AlignWorkingPlaneModes mode) 
        {
            _Mode = mode;
        }

        //--------------------------------------------------------------------------------------------------

        public override bool Start()
        {
            var selectionFilters = new List<ISelectionFilter>();
            var allowedTypes = SubshapeTypes.None;

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
                selectionFilters.Add(new SignatureSelectionFilter(VisualPlane.SelectionSignature));
            }

            var toolAction = new SelectSubshapeAction(this, allowedTypes, null,
                                                      selectionFilters.Count > 0 ? new OrSelectionFilter(selectionFilters.ToArray()) : null);

            if (!WorkspaceController.StartToolAction(toolAction))
            {
                return false;
            }
            toolAction.Finished += _OnActionFinished;

            StatusText = "Select compnent to align to, or select X / Y / Z for default direction.";
            WorkspaceController.HudManager?.SetCursor(Cursors.WorkingPlane);

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        void _OnActionFinished(ToolAction toolAction)
        {
            bool finished = false;
            var selectAction = toolAction as SelectSubshapeAction;
            Debug.Assert(selectAction != null);

            if (selectAction.SelectedEntity is DatumPlane plane)
            {
                WorkspaceController.Workspace.WorkingPlane = new Pln(plane.GetCoordinateSystem());
                finished = true;
            }
            else
            {
                switch (selectAction.SelectedSubshapeType)
                {
                    case SubshapeTypes.Face:
                    {
                        var face = TopoDS.Face(selectAction.SelectedSubshape);
                        var brepAdaptor = new BRepAdaptor_Surface(face, true);
                        if (brepAdaptor.GetGeomType() != GeomAbs_SurfaceType.GeomAbs_Plane)
                        {
                            StatusText = "Selected face is not a plane type surface.";
                        }
                        else
                        {
                            double centerU = brepAdaptor.FirstUParameter() + (brepAdaptor.LastUParameter() - brepAdaptor.FirstUParameter()) / 2;
                            double centerV = brepAdaptor.FirstVParameter() + (brepAdaptor.LastVParameter() - brepAdaptor.FirstVParameter()) / 2;
                            var centerPnt = brepAdaptor.Value(centerU, centerV);

                            var dir = brepAdaptor.Plane().Axis.Direction;
                            if(face.Orientation() == TopAbs_Orientation.TopAbs_REVERSED)
                                dir.Reverse();
                            WorkspaceController.Workspace.WorkingPlane = new Pln(centerPnt, dir);
                            finished = true;
                        }

                        break;
                    }
                    case SubshapeTypes.Edge:
                    {
                        var edge = TopoDS.Edge(selectAction.SelectedSubshape);
                        double firstParam = 0, lastParam = 0;
                        var curve = BRep_Tool.Curve(edge, ref firstParam, ref lastParam);
                        if (curve != null)
                        {
                            var midpoint = curve.Value(firstParam + (lastParam - firstParam) / 2);

                            WorkspaceController.Workspace.WorkingPlane = new Pln(midpoint, WorkspaceController.Workspace.WorkingPlane.Axis.Direction);
                            finished = true;
                        }

                        break;
                    }
                    case SubshapeTypes.Vertex:
                    {
                        var vertex = TopoDS.Vertex(selectAction.SelectedSubshape);
                        WorkspaceController.Workspace.WorkingPlane = new Pln(BRep_Tool.Pnt(vertex), WorkspaceController.Workspace.WorkingPlane.Axis.Direction);
                        finished = true;
                        break;
                    }
                }
            }

            if (finished)
            {
                selectAction.Stop();
                Stop();
            }
            else
            {
                selectAction.Reset();
            }

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        public override bool OnKeyPressed(Key key)
        {
            switch (key)
            {
                case Key.Z:
                    WorkspaceController.Workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.AIS_TOPL_XYPlane);
                    break;

                case Key.Y:
                    WorkspaceController.Workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.AIS_TOPL_XZPlane);
                    break;

                case Key.X:
                    WorkspaceController.Workspace.SetDefaultWorkingPlane(AIS_TypeOfPlane.AIS_TOPL_YZPlane);
                    break;

                default:
                    return false;
            }

            Stop();
            return true;
        }

        //--------------------------------------------------------------------------------------------------

    }
}