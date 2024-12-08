using System;
using System.Linq;
using System.Windows.Input;
using Macad.Common;
using Macad.Core;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Occt.Helper;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public class OffsetSegmentSketchTool : SketchTool
{
    class OffsetData
    {
        internal BRepOffsetAPI_MakeOffset MakeOffset;
        internal TopoDS_Face Face;
        internal AIS_Shape PreviewShape;
        internal TopoDS_Shape Result;
        internal TopoDS_Shape Original;
    }

    //--------------------------------------------------------------------------------------------------

    OffsetData[] _Data;
    SketchSegment[] _Segments;
    TopoDS_Edge[] _Edges;
    Axis _DirectionPreview;
    ValueHudElement _OffsetHudElement;
    LabelHudElement _JoinTypeHudElement;
    double _CurrentDistance = 0;
    GeomAbs_JoinType _CurrentJoinType = GeomAbs_JoinType.Arc;

    const string _MessageRefPoint = "__Select__ a position on a segment as reference point for the distance.";
    const string _MessageDistance = "__Select__ distance to offset, press `k:Ctrl` to round to grid stepping, press `k:Space` to toggle between join types.";

    //--------------------------------------------------------------------------------------------------

    protected override bool OnStart()
    {
        if (SketchEditorTool.SelectedSegments.Count == 0)
            return false;
        _Segments = SketchEditorTool.SelectedSegments.ToArray();

        if (!_InitOffsets())
            return false;

        // Init interactions
        SketchEditorTool.Elements.ConstraintsVisible = false;

        var toolAction = new PointOnSketchElementAction(SketchEditorTool)
        {
            SelectedElementsOnly = true,
            AllowPoints = false
        };
        if (!StartAction(toolAction))
            return false;
        toolAction.Preview += _PointOnElementAction_Preview;
        toolAction.Finished += _PointOnElementAction_Finished;

        SetHintMessage(_MessageRefPoint);
        SetCursor(Cursors.SetPoint);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void Cleanup()
    {
        _Data?.ForEach(data =>
        {
            if (data.PreviewShape != null)
            {
                WorkspaceController.AisContext.Erase(data.PreviewShape, false);
                data.PreviewShape = null;
            }
        });

        if (_OffsetHudElement != null)
        {
            _OffsetHudElement.ValueEntered -= _OffsetHudElement_ValueEntered;
            _OffsetHudElement = null;
        }
        _UpdateSegmentElementsVisibility(true);
        _DirectionPreview = null;
        
        base.Cleanup();
    }

    //--------------------------------------------------------------------------------------------------

    void _PointOnElementAction_Preview(PointOnSketchElementAction action, PointOnSketchElementAction.PreviewEventArgs eventArgs)
    {
        if (_GetDirectionAxis(eventArgs, out var axis))
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

            _DirectionPreview.Set(axis);
        }
        else
        {
            Remove(_DirectionPreview);
            _DirectionPreview = null;
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    void _PointOnElementAction_Finished(PointOnSketchElementAction action, PointOnSketchElementAction.EventArgs eventArgs)
    {
        if (!_GetDirectionAxis(eventArgs, out var axis))
        {
            action.Reset();
            return;
        }

        StopAction(action);
        // Reactivate vertices and segments for snapping
        SketchEditorTool.Elements.Activate(true, true, false);

        Remove(_DirectionPreview);
        _DirectionPreview = null;

        AxisValueAction distanceAction = new(axis);
        distanceAction.Preview += _DistanceAction_Preview;
        distanceAction.Finished += _DistanceAction_Finished;
        StartAction(distanceAction);

        _OffsetHudElement = new()
        {
            Label = "Distance",
            Units = ValueUnits.Length,
            Value = 0
        };
        Add(_OffsetHudElement);
        _OffsetHudElement.ValueEntered += _OffsetHudElement_ValueEntered;

        _JoinTypeHudElement = new()
        {
            Text = $"Join Type: {_CurrentJoinType}"
        };
        Add(_JoinTypeHudElement);

        _UpdateSegmentElementsVisibility(false);
        _UpdatePreviews();
        SetHintMessage(_MessageDistance);
        SetCursor(Cursors.SetHeight);
    }
    
    //--------------------------------------------------------------------------------------------------

    bool _GetDirectionAxis(PointOnSketchElementAction.EventArgs eventArgs, out Ax1 axis)
    {
        if (eventArgs.ElementType == Sketch.ElementType.Segment)
        {
            int index = Array.IndexOf(_Segments, eventArgs.Segment);
            if (index >= 0)
            {
                var edge = _Edges[index];
                Pnt point = new();
                Vec tangent = new();
                edge.Adaptor().D1(eventArgs.Parameter, ref point, ref tangent);
                point.Transform(Sketch.GetTransformation());
                axis = new(new Pnt(point.X, point.Y, 0.0), tangent.ToDir().Crossed(Dir.DZ));
                if (edge.Orientation() == TopAbs_Orientation.REVERSED)
                    axis.Reverse();
                return true;
            }
        }

        axis = Ax1.OZ;
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    void _DistanceAction_Preview(AxisValueAction sender, AxisValueAction.EventArgs args)
    {
        _CurrentDistance = args.Value;
        if (args.MouseEventData.ModifierKeys.HasFlag(ModifierKeys.Control))
        {
            _CurrentDistance = Maths.RoundToNearest(_CurrentDistance, WorkspaceController.Workspace.GridStep);
        }

        _DoOffsets();
        _OffsetHudElement.Value = _CurrentDistance;
        _UpdatePreviews();
    }

    //--------------------------------------------------------------------------------------------------
    
    void _DistanceAction_Finished(AxisValueAction sender, AxisValueAction.EventArgs args)
    {
        if (_Data.Any(data => data.Result == null))
        {
            sender.Reset();
            return;
        }

        StopAction(sender);
        _FinalizeOffsets();
    }

    //--------------------------------------------------------------------------------------------------

    void _OffsetHudElement_ValueEntered(ValueHudElement hudElement, double newValue)
    {
        _CurrentDistance = newValue;
        if (!_DoOffsets())
            return;

        _FinalizeOffsets();
    }

    //--------------------------------------------------------------------------------------------------

    public override bool OnKeyPressed(Key key, ModifierKeys modifierKeys)
    {
        if (key == Key.Space)
        {
            switch (_CurrentJoinType)
            {
                case GeomAbs_JoinType.Arc:
                    _SetJoinType( GeomAbs_JoinType.Intersection );
                    break;
                case GeomAbs_JoinType.Intersection:
                    _SetJoinType( GeomAbs_JoinType.Arc );
                    break;
            }
        }
        return base.OnKeyPressed(key, modifierKeys);
    }

    //--------------------------------------------------------------------------------------------------
    
    void _UpdateSegmentElementsVisibility(bool show)
    {
        if (_Segments == null)
            return; 

        SketchEditorTool.Elements.SegmentElements.IntersectBy(_Segments, element => element.Segment)
                        .ForEach(element => element.IsVisible = show);
        
        // Hide orphan points
        foreach (var pointIndex in _Segments.SelectMany(segment => segment.Points).Distinct())
        {
            var segmentsWithPoint = Sketch.Segments.Values.Where(seg => seg.Points.Contains(pointIndex));
            if(_Segments.ContainsAll(segmentsWithPoint))
            {
                SketchEditorTool.Elements.PointElements.First(element => element.PointIndex == pointIndex).IsVisible = show;
            }
        }

        if (show)
        {
            SketchEditorTool.Elements.OnPointsChanged(Sketch.Points, Sketch.Segments);
        }
    }

    //---------------------
    void _SetJoinType(GeomAbs_JoinType newType)
    {
        _CurrentJoinType = newType;
        _Data.ForEach(data => data.MakeOffset = new(data.Face, _CurrentJoinType, false));
        _JoinTypeHudElement.Text = $"Join Type: {_CurrentJoinType}";
        _DoOffsets();
        _UpdatePreviews();
    }

    //--------------------------------------------------------------------------------------------------

    bool _InitOffsets()
    {
        return ProcessingScope.ExecuteWithGuards(Sketch, "Creating offsets", () =>
        {
            Geom_Surface surface = new Geom_Plane(Pln.XOY);
            BRepBuilderAPI_MakeFace makeFace = new(surface, 1e-6);

            _Edges = _Segments
                    .Select(seg => seg.MakeCurve(Sketch.Points))
                    .Select(curve => curve != null ? new BRepBuilderAPI_MakeEdge(curve, surface).Edge() : null)
                    .ToArray();
            var wires = Topo2dUtils.BuildWiresFromEdges(_Edges.WhereNotNull()).Wires();
            wires.ForEach(makeFace.Add);

            // Fix orientation of that faces
            var shapeFix = new ShapeFix_Shape(makeFace.Face());
            if (!shapeFix.Perform())
                return false;
            var faces = shapeFix.Shape().Faces();
            if (!faces.Any())
                return false;
            
            // Create one algo per face
            _Data = new OffsetData[faces.Count];
            for (int faceIndex = 0; faceIndex < faces.Count; faceIndex++)
            {
                var face = faces[faceIndex];
                _Data[faceIndex] = new OffsetData
                {
                    Face = face,
                    MakeOffset = new(face, _CurrentJoinType, false),
                    Original = TopoUtils.CreateCompound(face.Wires())
                };

                // Find new edges to get correct orientation later on selecting
                foreach (var faceEdge in face.Edges())
                {
                    int index = Array.FindIndex(_Edges, edge => EdgeAlgo.HasCoincidentVertices(edge, faceEdge));
                    if (index >= 0)
                    {
                        _Edges[index] = faceEdge;
                    }
                }
            }

            return _DoOffsets();
        });
    }

    //--------------------------------------------------------------------------------------------------

    bool _DoOffsets()
    {
        if (_CurrentDistance.IsEqual(0, 1e-6))
        {
            _Data.ForEach(data => data.Result = data.Original);
            return true;
        }

        _Data.ForEach(data => data.Result = null);

        return ProcessingScope.ExecuteWithGuards(Sketch, "Creating offsets", () =>
        {
            foreach (var data in _Data)
            {
                data.Result = null;

                var makeOffset = data.MakeOffset;
                makeOffset.Perform(_CurrentDistance);
                if (!makeOffset.IsDone()) 
                    continue;
                
                makeOffset.Build();
                data.Result = makeOffset.Shape();
            }
            
            // If one failes, the op failes
            return _Data.All(data => data.Result != null);
        });
    }

    //--------------------------------------------------------------------------------------------------

    void _FinalizeOffsets()
    {
        ProcessingScope.ExecuteWithGuards(Sketch, "Creating segments", () =>
        {
            ConvertToEditableSketch converter = new(Sketch);
            foreach (var data in _Data)
            {
                converter.Add(data.Result);
            }

            // Remove old segments
            _Segments.ForEach(Sketch.DeleteSegment);
            _Segments = null;

            return true;
        });
        Sketch.Body?.Model?.UndoHandler?.Commit();
        Stop();
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdatePreviews()
    {
        foreach (var data in _Data)
        {
            if (data.PreviewShape == null)
            {
                if (data.Result != null)
                {
                    var previewShape = new AIS_Shape((data.Result ?? data.Original).Located(new TopLoc_Location(Sketch.GetTransformation())));
                    previewShape.SetZLayer(-3); // TOP
                    previewShape.SetWidth(2.0);
                    AisHelper.DisableGlobalClipPlanes(previewShape);

                    var paramSet = InteractiveContext.Current.Parameters.Get<SketchEditorParameterSet>();
                    previewShape.SetAngleAndDeviation(paramSet.DeviationAngle.ToRad());
                    previewShape.SetColor(Colors.SketchEditorSegments.ToQuantityColor());
                    WorkspaceController.AisContext.Display(previewShape, false);
                    WorkspaceController.AisContext.Deactivate(previewShape);
                    data.PreviewShape = previewShape;
                }
            }
            else
            {
                if (data.Result != null)
                {
                    data.PreviewShape.Set(data.Result.Located(new TopLoc_Location(Sketch.GetTransformation())));
                    WorkspaceController.AisContext.RecomputePrsOnly(data.PreviewShape, false);
                    WorkspaceController.AisContext.Deactivate(data.PreviewShape);
                }
                else
                {
                    WorkspaceController.AisContext.Erase(data.PreviewShape, false);
                    data.PreviewShape = null;
                }
            }
        }
        WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

}