using System.Collections.Generic;
using System.Linq;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes;

public abstract class SketchEditorElement
{
    protected readonly SketchEditorTool SketchEditorTool;
    protected Trsf Transform;
    protected Pln Plane;
    bool _IsSelected;
    bool _IsCreating;
    bool _IsVisible = true;
        
    //--------------------------------------------------------------------------------------------------

    protected SketchEditorElement(SketchEditorTool sketchEditorTool, Trsf transform, Pln plane)
    {
        SketchEditorTool = sketchEditorTool;
        Transform = transform;
        Plane = plane;
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsSelected
    {
        get { return _IsSelected; }
        set
        {
            if (_IsSelected != value)
            {
                _IsSelected = value;
                UpdateVisual();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsCreating
    {
        get { return _IsCreating; }
        set
        {
            if (_IsCreating != value)
            {
                _IsCreating = value;
                UpdateVisual();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsVisible
    {
        get { return _IsVisible; }
        set
        {
            if(_IsVisible == value)
                return;

            _IsVisible = value;
            if (_IsVisible)
            {
                UpdateVisual();
            }
            else
            {
                Remove();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public abstract void UpdateVisual();
    public abstract void OnPointsChanged(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, Dictionary<int, int> markerCounts = default);
    public abstract void Activate(bool selectable);
    public abstract void Remove();
    public abstract bool IsOwnerOf(AIS_InteractiveObject aisObject);
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

public sealed class SketchEditorElements
{
    public bool ConstraintsVisible
    {
        get { return _ConstraintsVisible; }
        set
        {
            if (_ConstraintsVisible == value)
                return;

            _ConstraintsVisible = value;
            _MarkerCounts.Clear();
            ConstraintElements.ForEach(element =>
            {
                element.IsVisible = value;
                element.OnPointsChanged(_SketchEditorTool.Sketch.Points, _SketchEditorTool.Sketch.Segments, _MarkerCounts);
            });
        }
    }

    //--------------------------------------------------------------------------------------------------

    List<SketchEditorSegmentElement> SegmentElements { get; } = new();
    List<SketchEditorConstraintElement> ConstraintElements { get; } = new();
    List<SketchEditorPointElement> PointElements { get; } = new();
    List<SketchEditorElement> Elements { get; } = new();

    //--------------------------------------------------------------------------------------------------

    readonly SketchEditorTool _SketchEditorTool;
    readonly Dictionary<int, int> _MarkerCounts = new();
    bool _ConstraintsVisible = true;

    //--------------------------------------------------------------------------------------------------

    internal SketchEditorElements(SketchEditorTool sketchEditorTool)
    {
        _SketchEditorTool = sketchEditorTool;
    }

    //--------------------------------------------------------------------------------------------------
        
    public IEnumerable<int> GetSelectedPointIndices()
    {
        return PointElements.Where(c => c.IsSelected).Select(c => c.PointIndex);
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<SketchSegment> GetSelectedSegments()
    {
        return SegmentElements.Where(c => c.IsSelected).Select(c => c.Segment);
    }

    //--------------------------------------------------------------------------------------------------
        
    public IEnumerable<int> GetSelectedSegmentIndices()
    {
        return SegmentElements.Where(c => c.IsSelected).Select(c => c.SegmentIndex);
    }

    //--------------------------------------------------------------------------------------------------
        
    public IEnumerable<SketchConstraint> GetSelectedConstraints()
    {
        return ConstraintElements.Where(c => c.IsSelected).Select(c => c.Constraint);
    }

    //--------------------------------------------------------------------------------------------------

    internal void Select(IEnumerable<int> pointIndices, IEnumerable<int> segmentIndices)
    {
        Elements.ForEach(c =>
        {
            c.IsSelected = false;
        });

        if (pointIndices != null)
        {
            foreach (var element in pointIndices.Select(index => PointElements.First(element => element.PointIndex == index)))
            {
                element.IsSelected = true;
            }
        }

        if (segmentIndices != null)
        {
            foreach (var element in segmentIndices.Select(index => SegmentElements.First(element => element.SegmentIndex == index)))
            {
                element.IsSelected = true;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Select(AIS_InteractiveObject detectedObject)
    {
        foreach (var element in Elements)
        {
            if (element.IsOwnerOf(detectedObject))
            {
                element.IsSelected = true;
                break;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Select(List<SketchConstraint> constraints)
    {
        foreach (var element in ConstraintElements.Where(ce => constraints.Contains(ce.Constraint)))
        {
            element.IsSelected = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void DeselectAll()
    {
        Elements.ForEach(c =>
        {
            c.IsSelected = false;
        });
    }
        
    //--------------------------------------------------------------------------------------------------

    public SketchEditorElement FindOwner(AIS_InteractiveObject detectedObject)
    {
        if (detectedObject == null)
            return null;

        foreach (var element in Elements)
        {
            if (element.IsOwnerOf(detectedObject))
            {
                return element;
            }
        }

        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public void Activate(bool points, bool segments, bool constraints)
    {
        PointElements.ForEach(p => p.Activate(points));
        SegmentElements.ForEach(s => s.Activate(segments));
        ConstraintElements.ForEach(c => c.Activate(constraints));
    }

    //--------------------------------------------------------------------------------------------------
        
    internal void RemoveAll()
    {
        Elements.ForEach(c =>
        {
            c.Remove();
        });
        Elements.Clear();
        SegmentElements.Clear();
        ConstraintElements.Clear();
        PointElements.Clear();
    }

    //--------------------------------------------------------------------------------------------------
        
    internal void InitElements(Dictionary<int, Pnt2d> tempPoints)
    {
        var sketch = _SketchEditorTool.Sketch;
        var plane = sketch.Plane;

        foreach (var segmentKvp in sketch.Segments)
        {
            var element = new SketchEditorSegmentElement(_SketchEditorTool, segmentKvp.Key, segmentKvp.Value, _SketchEditorTool.Transform, plane);
            element.OnPointsChanged(tempPoints, sketch.Segments, _MarkerCounts);
            SegmentElements.Add(element);
        }

        foreach (var constraint in sketch.Constraints)
        {
            var element = new SketchEditorConstraintElement(_SketchEditorTool, constraint, _SketchEditorTool.Transform, plane);
            element.OnPointsChanged(tempPoints, sketch.Segments, _MarkerCounts);
            ConstraintElements.Add(element);
        }

        foreach (var pointKvp in sketch.Points)
        {
            var element = new SketchEditorPointElement(_SketchEditorTool, pointKvp.Key, pointKvp.Value, _SketchEditorTool.Transform, plane);
            PointElements.Add(element);
        }

        _UpdateElementList();

        Elements.ForEach(c =>
        {
            c.Activate(true);
            c.UpdateVisual();
        });

        _SketchEditorTool.WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    internal void OnSketchChanged(Sketch sketch, Sketch.ElementType types)
    {
        if (sketch == _SketchEditorTool.Sketch)
        {
            if (types.HasFlag(Sketch.ElementType.Point))
            {
                // Check for lost points
                var lostPoints = PointElements.Where(pc => !sketch.Points.ContainsKey(pc.PointIndex)).ToArray();
                foreach (var lostPoint in lostPoints)
                {
                    lostPoint.Remove();
                    PointElements.Remove(lostPoint);
                }
            }
            if (types.HasFlag(Sketch.ElementType.Segment))
            {
                // Check for lost segments
                var lostSegs = SegmentElements.Where(sc => !sketch.Segments.ContainsValue(sc.Segment)).ToArray();
                foreach (var lostSeg in lostSegs)
                {
                    lostSeg.Remove();
                    SegmentElements.Remove(lostSeg);
                }
            }
            if (types.HasFlag(Sketch.ElementType.Constraint))
            {
                // Check for lost constraints
                var lostCons = ConstraintElements.Where(cc => !sketch.Constraints.Contains(cc.Constraint)).ToArray();
                foreach (var lostCon in lostCons)
                {
                    lostCon.Remove();
                    ConstraintElements.Remove(lostCon);
                }
            }

            // Check for new ones
            if (types.HasFlag(Sketch.ElementType.Point))
            {
                // Check for new points
                var newPoints = sketch.Points.Where(kvp => !PointElements.Exists(pc => pc.PointIndex == kvp.Key));
                foreach (var pointKvp in newPoints)
                {
                    var element = new SketchEditorPointElement(_SketchEditorTool, pointKvp.Key, pointKvp.Value, _SketchEditorTool.Transform, sketch.Plane);
                    element.UpdateVisual();
                    element.Activate(true);
                    PointElements.Add(element);
                }
            }
            if (types.HasFlag(Sketch.ElementType.Segment))
            {
                // Check for new segments
                var newSegs = sketch.Segments.Where(seg => !SegmentElements.Exists(sc => sc.Segment == seg.Value));
                foreach (var segmentKvp in newSegs)
                {
                    var element = new SketchEditorSegmentElement(_SketchEditorTool, segmentKvp.Key, segmentKvp.Value, _SketchEditorTool.Transform, sketch.Plane);
                    element.OnPointsChanged(sketch.Points, sketch.Segments, _MarkerCounts);
                    element.UpdateVisual();
                    element.Activate(true);
                    SegmentElements.Add(element);
                }
            }
            if (types.HasFlag(Sketch.ElementType.Constraint))
            {
                // Check for new constraints
                var newCons = sketch.Constraints.Where(con => !ConstraintElements.Exists(cc => cc.Constraint == con));
                foreach (var sketchConstraint in newCons)
                {
                    var element = new SketchEditorConstraintElement(_SketchEditorTool, sketchConstraint, _SketchEditorTool.Transform, sketch.Plane);
                    element.OnPointsChanged(sketch.Points, sketch.Segments, _MarkerCounts);
                    element.UpdateVisual();
                    element.Activate(true);
                    ConstraintElements.Add(element);
                }
            }

            // Update elements
            _UpdateElementList();

            if (types.HasFlag(Sketch.ElementType.Point))
            {
                OnPointsChanged(sketch.Points, sketch.Segments);
            }

            _SketchEditorTool.WorkspaceController.Invalidate();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void OnPointsChanged(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments)
    {
        _MarkerCounts.Clear();
        Elements.ForEach(c => c.OnPointsChanged(points, segments, _MarkerCounts));
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateElementList()
    {
        Elements.Clear();
        Elements.AddRange(PointElements);
        Elements.AddRange(ConstraintElements);
        Elements.AddRange(SegmentElements);
    }

    //--------------------------------------------------------------------------------------------------

    internal void OnGizmoScaleChanged(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments)
    {
        _MarkerCounts.Clear();
        ConstraintElements.ForEach(cc => cc.OnGizmoScaleChanged(points, segments, _MarkerCounts));
        _SketchEditorTool.WorkspaceController.Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    internal void OnViewRotated(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments)
    {
        _MarkerCounts.Clear();
        ConstraintElements.ForEach(cc => cc.OnViewRotated(points, segments, _MarkerCounts));
        _SketchEditorTool.WorkspaceController.Invalidate();
    }

}