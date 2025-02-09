using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Linq;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class Sketch : Shape2D
{
    #region Subtypes

    [Flags]
    public enum ElementType
    {
        None = 0,
        Point = 1,
        Segment = 2,
        Constraint = 4,
        All = Point | Segment | Constraint
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties
        
    //--------------------------------------------------------------------------------------------------

    public override ShapeType ShapeType
    {
        get { return ShapeType.Sketch; }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Dictionary<int, SketchSegment> Segments
    {
        get { return _Segments; }
        set
        {
            if (_Segments != value)
            {
                SaveUndo(ElementType.Segment);
                _Segments = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public Dictionary<int,Pnt2d> Points
    {
        get { return _Points; }
        set
        {
            if (_Points != value)
            {
                SaveUndo(ElementType.Point);
                _Points = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public List<SketchConstraint> Constraints
    {
        get { return _Constraints; }
        set
        {
            if (_Constraints != value)
            {
                SaveUndo(ElementType.Constraint);
                _Constraints = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool ConstraintSolverFailed
    {
        get { return _ConstraintSolverFailed; }
        set
        {
            if (_ConstraintSolverFailed != value)
            {
                _ConstraintSolverFailed = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Initialization

    public static Sketch Create()
    {
        return new Sketch();
    }

    #endregion

    #region Members

    Dictionary<int, SketchSegment> _Segments = new Dictionary<int, SketchSegment>();
    Dictionary<int, Pnt2d> _Points = new Dictionary<int, Pnt2d>();
    List<SketchConstraint> _Constraints = new List<SketchConstraint>();
    bool _ConstraintSolverFailed;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Elements

    public int AddPoint(Pnt2d point)
    {
        SaveUndo(ElementType.Point);
        var index = Points.Keys.Any() ? Points.Keys.Max() + 1 : 0;
        Points.Add(index, point);
        Invalidate();
        RaisePropertyChanged(nameof(Points));
        OnElementsChanged(ElementType.Point);
        return index;
    }

    //--------------------------------------------------------------------------------------------------

    public void MergePoints(int replace, int with)
    {
        Debug.Assert(with != replace);
        SaveUndo(ElementType.Point);
        SaveUndo(ElementType.Segment);

        Points[replace] = Points[with];

        bool changedSegments = false;
        List<SketchSegment> segmentsToRemove = null;
        foreach (var segment in Segments.Values)
        {
            for (var i = 0; i < segment.Points.Length; i++)
            {
                if (!changedSegments)
                {
                    SaveUndo(ElementType.Segment);
                    changedSegments = true;
                }
                if (segment.Points[i] == replace)
                    segment.Points[i] = with;
            }

            if (segment.IsPeriodic)
            {
                // Remove if min 2 points are identical
                if (segment.Points.Count(p => p == with) > 1)
                {
                    (segmentsToRemove ??= new()).Add(segment);
                }
            }
            else if (segment.StartPoint == segment.EndPoint)
            {
                // Remove if start and end point are identical
                (segmentsToRemove ??= new()).Add(segment);
            }
        }

        bool changedConstraints = false;
        foreach (var constraint in Constraints)
        {
            if (constraint.Points == null)
                continue;

            for (var i = 0; i < constraint.Points.Length; i++)
            {
                if (!changedConstraints)
                {
                    SaveUndo(ElementType.Constraint);
                    changedConstraints = true;
                }
                if (constraint.Points[i] == replace)
                    constraint.Points[i] = with;
            }
        }

        Points.Remove(replace);
        segmentsToRemove?.ForEach(seg => DeleteSegment(seg));

        Invalidate();

        RaisePropertyChanged(nameof(Points));
        if (changedSegments)
            RaisePropertyChanged(nameof(Segments));
        if (changedConstraints)
            RaisePropertyChanged(nameof(Constraints));

        ElementType types = ElementType.Point;
        if (changedConstraints) types |= ElementType.Constraint;
        if (changedSegments) types |= ElementType.Segment;
        OnElementsChanged(types);
    }

    //--------------------------------------------------------------------------------------------------

    public bool SetPoint(int index, Pnt2d pnt2d)
    {
        if (!Points.ContainsKey(index))
            return false;

        SaveUndo(ElementType.Point);
        Points[index] = pnt2d;

        Invalidate();
        RaisePropertyChanged(nameof(Points));
        OnElementsChanged(ElementType.Point);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public void DeletePoint(int point)
    {
        SaveUndo(ElementType.Point);

        // Look out for segments who reference this point
        bool changedSegments = false;
        var segs = Segments.ToArray();
        var removedSegs = new List<int>();
        foreach (var segmentKvp in segs)
        {
            for (var i = 0; i < segmentKvp.Value.Points.Length; i++)
            {
                if (segmentKvp.Value.Points[i] == point)
                {
                    if (!changedSegments)
                    {
                        SaveUndo(ElementType.Segment);
                        changedSegments = true;
                    }
                    removedSegs.Add(segmentKvp.Key);
                    _Segments.Remove(segmentKvp.Key);
                }
            }
        }
        _Points.Remove(point);

        var deletedPoints = DeleteOrphanedPoints(false);
        deletedPoints.Add(point);

        // Look out for constraints who reference this point
        bool changedConstraints = false;
        var cons = Constraints.ToArray();
        foreach (var constraint in cons)
        {
            if (constraint.Points != null)
            {
                for (var i = 0; i < constraint.Points.Length; i++)
                {
                    if (deletedPoints.Contains(constraint.Points[i]))
                    {
                        if (!changedConstraints)
                        {
                            SaveUndo(ElementType.Constraint);
                            changedConstraints = true;
                        }
                        _Constraints.Remove(constraint);
                    }
                }
            }
            if (constraint.Segments != null)
            {
                for (var i = 0; i < constraint.Segments.Length; i++)
                {
                    if (removedSegs.Contains(constraint.Segments[i]))
                    {
                        if (!changedConstraints)
                        {
                            SaveUndo(ElementType.Constraint);
                            changedConstraints = true;
                        }
                        _Constraints.Remove(constraint);
                    }
                }
            }
        }

        if (changedSegments)
            RaisePropertyChanged(nameof(Segments));
        if (changedConstraints)
            RaisePropertyChanged(nameof(Constraints));
        RaisePropertyChanged(nameof(Points));

        ElementType types = ElementType.Point;
        if (changedConstraints) types |= ElementType.Constraint;
        if (changedSegments) types |= ElementType.Segment;
        OnElementsChanged(types);
    }

    //--------------------------------------------------------------------------------------------------

    public int AddSegment(SketchSegment segment)
    {
        SaveUndo(ElementType.Segment);
        var index = Segments.Keys.Any() ? Segments.Keys.Max() + 1 : 0;
        Segments.Add(index, segment);

        Invalidate();
        RaisePropertyChanged(nameof(Segments));
        OnElementsChanged(ElementType.Segment);
        return index;
    }

    //--------------------------------------------------------------------------------------------------

    public void DeleteSegment(SketchSegment segToDelete)
    {
        SaveUndo(ElementType.Point);
        SaveUndo(ElementType.Segment);
        int segIdToDelete = _Segments.First(kvp => kvp.Value == segToDelete).Key;

        // Look out for constraints who reference this segment
        bool changedConstraints = false;
        var cons = Constraints.ToArray();
        foreach (var constraint in cons)
        {
            if (constraint.Segments == null)
                continue;

            for (var i = 0; i < constraint.Segments.Length; i++)
            {
                if (constraint.Segments[i] == segIdToDelete)
                {
                    if (!changedConstraints)
                    {
                        SaveUndo(ElementType.Constraint);
                        changedConstraints = true;
                    }
                    _Constraints.Remove(constraint);
                }
            }
        }

        // Remove segment
        _Segments.Remove(segIdToDelete);

        if (changedConstraints)
            RaisePropertyChanged(nameof(Constraints));
        RaisePropertyChanged(nameof(Segments));

        var deletedPoints = DeleteOrphanedPoints();

        // Look out for constraints who reference this segment
        foreach (var constraint in cons)
        {
            if (constraint.Points == null)
                continue;

            for (var i = 0; i < constraint.Points.Length; i++)
            {
                if (deletedPoints.Contains(constraint.Points[i]))
                {
                    if (!changedConstraints)
                    {
                        SaveUndo(ElementType.Constraint);
                        changedConstraints = true;
                    }
                    _Constraints.Remove(constraint);
                }
            }
        }

        ElementType types = ElementType.Segment | ElementType.Point;
        if (changedConstraints) types |= ElementType.Constraint;

        OnElementsChanged(types);

        Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public int AddConstraint(SketchConstraint constraint)
    {
        SaveUndo(ElementType.Constraint);
        Constraints.Add(constraint);

        Invalidate();
        RaisePropertyChanged(nameof(Constraints));
        OnElementsChanged(ElementType.Constraint);
        return Constraints.Count - 1;
    }

    //--------------------------------------------------------------------------------------------------

    public bool SetConstraintParameter(SketchConstraint constraint, double parameter)
    {
        if (!Constraints.Contains(constraint))
            return false;

        SaveUndo(ElementType.Constraint);
        constraint.Parameter = parameter;

        Invalidate();
        RaisePropertyChanged(nameof(Constraints));
        OnElementsChanged(ElementType.Constraint);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public (IDictionary<int, int> pointMap, IDictionary<int, int> segmentMap, IEnumerable<int> constraints)
        AddElements(IDictionary<int, Pnt2d> points, int[] mergePointIndices, IDictionary<int, SketchSegment> segments, IEnumerable<SketchConstraint> constraints)
    {
        ElementType changedTypes = 0;
        Dictionary<int, int> pointMap = null;
        Dictionary<int, int> segmentMap = null;

        if (points != null)
        {
            pointMap = new(points.Count);

            SaveUndo(ElementType.Point);
            changedTypes |= ElementType.Point;
            var nextIndex = Points.Keys.Any() ? Points.Keys.Max() + 1 : 0;

            foreach (var pointKvp in points)
            {
                int newPointIndex;
                if (mergePointIndices != null && mergePointIndices[pointKvp.Key] >= 0)
                {
                    newPointIndex = mergePointIndices[pointKvp.Key];
                }
                else
                {
                    newPointIndex = nextIndex;
                    Points.Add(newPointIndex, pointKvp.Value);
                    nextIndex++;
                }

                pointMap.Add(pointKvp.Key, newPointIndex);
            }
        }

        if (segments != null)
        {
            segmentMap = new();
            SaveUndo(ElementType.Segment);
            changedTypes |= ElementType.Segment;
            var nextIndex = Segments.Keys.Any() ? Segments.Keys.Max() + 1 : 0;

            foreach (var segmentKvp in segments)
            {
                var segment = segmentKvp.Value;
                if (pointMap != null)
                {
                    for (int i = 0; i < segment.Points.Length; i++)
                    {
                        segment.Points[i] = pointMap[segment.Points[i]];
                    }
                }

                Segments.Add(nextIndex, segment);
                segmentMap.Add(segmentKvp.Key, nextIndex);
                nextIndex++;
            }
        }

        List<int> newConstraints = default;
        if (constraints != null)
        {
            SaveUndo(ElementType.Constraint);
            changedTypes |= ElementType.Constraint;
            SaveUndo(ElementType.Point);
            changedTypes |= ElementType.Point;
            int nextIndex = Constraints.Count;
            newConstraints = new();

            foreach (var constraint in constraints)
            {
                if ((pointMap != null) && (constraint.Points != null))
                {
                    for (int i = 0; i < constraint.Points.Length; i++)
                    {
                        constraint.Points[i] = pointMap[constraint.Points[i]];
                    }
                }
                if ((segmentMap != null) && (constraint.Segments != null))
                {
                    for (int i = 0; i < constraint.Segments.Length; i++)
                    {
                        constraint.Segments[i] = segmentMap[constraint.Segments[i]];
                    }
                }

                Constraints.Add(constraint);
                newConstraints.Add(nextIndex);
                nextIndex++;
            }
        }

        if (changedTypes != 0)
            OnElementsChanged(changedTypes);

        Invalidate();

        return (pointMap, segmentMap, newConstraints);
    }

    //--------------------------------------------------------------------------------------------------

    public void DeleteConstraint(SketchConstraint conToDelete)
    {
        SaveUndo(ElementType.Constraint);

        // Remove constraint
        _Constraints.Remove(conToDelete);

        Invalidate();
        RaisePropertyChanged(nameof(Constraints));
        OnElementsChanged(ElementType.Constraint);
    }

    //--------------------------------------------------------------------------------------------------

    public void DeleteElements(IEnumerable<int> points, IEnumerable<int> segments, IEnumerable<SketchConstraint> constraints)
    {
        ElementType changedTypes = 0;

        var pointsToDelete = points?.ToList() ?? [];
        var segsToDelete = segments?.ToList() ?? [];
        var consToDelete = constraints?.ToList() ?? [];

        if (pointsToDelete.Count > 0)
        {
            // Enhance deletion list for all elements referencing any of the points to delete
            segsToDelete.AddRange(_Segments.Where(kvp => kvp.Value.Points.ContainsAny(pointsToDelete)).Select(kvp => kvp.Key));
            consToDelete.AddRange(Constraints.Where(con => con.Points?.ContainsAny(pointsToDelete) ?? false));
        }

        // Delete segments
        if (segsToDelete.Count > 0)
        {
            // Enhance deletion list for all elements referencing any of the points to delete
            consToDelete.AddRange(Constraints.Where(con => con.Segments?.ContainsAny(segsToDelete) ?? false));

            SaveUndo(ElementType.Segment);
            changedTypes |= ElementType.Segment;

            foreach (var segIndex in segsToDelete.Distinct())
            {
                _Segments.Remove(segIndex);
            }

            // Check which points are without any segment
            var pointsWithoutSegment = new List<int>(_Points.Keys);
            foreach (var segment in _Segments.Values)
            {
                pointsWithoutSegment.RemoveAll(pointIndex => segment.Points.Contains(pointIndex));
            }
            pointsToDelete.AddRange(pointsWithoutSegment);
        }

        // Delete points
        if (points != null)
        {
            SaveUndo(ElementType.Point);
            changedTypes |= ElementType.Point;

            foreach (var pointIndex in pointsToDelete.Distinct())
            {
                _Points.Remove(pointIndex);
            }
        }

        // Delete constraints
        if (consToDelete.Count > 0)
        {
            SaveUndo(ElementType.Constraint);
            changedTypes |= ElementType.Constraint;
            foreach (var constraint in consToDelete.Distinct())
            {
                _Constraints.Remove(constraint);
            }
        }

        _CheckForInvalidReferences(false);

        if (changedTypes != 0)
            OnElementsChanged(changedTypes);

        Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    List<int> DeleteOrphanedPoints(bool doPropertyChangeCalls = true)
    {
        // Check which points are without any segment
        var pointsToDelete = new List<int>(_Points.Keys);
        foreach (var segment in _Segments.Values)
        {
            pointsToDelete.RemoveAll(pointIndex => segment.Points.Contains(pointIndex));
            if (!pointsToDelete.Any())
                break;
        }

        if (pointsToDelete.Any())
        {
            if (doPropertyChangeCalls)
                SaveUndo(ElementType.Point);
            foreach (var pointIndex in pointsToDelete)
            {
                _Points.Remove(pointIndex);
            }

            if (doPropertyChangeCalls)
                RaisePropertyChanged(nameof(Points));
        }

        return pointsToDelete;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Checks all segments and constraints to references wo points or segments which do not exist and removes them.
    /// </summary>
    [SuppressMessage("ReSharper", "PossibleMultipleEnumeration")]
    void _CheckForInvalidReferences(bool reportMessage)
    {
        var segmentsToDelete = _Segments.Values.Where(seg => !_Points.Keys.ContainsAll(seg.Points));
        if (segmentsToDelete.Any())
        {
            foreach (var segment in segmentsToDelete.ToArray())
            {
                if (reportMessage)
                {
                    Messages.Warning($"Sketch {Name} contains a segment of type {segment.GetType().Name} which references to points which do not exist. The segment will be deleted.");
                }

                DeleteSegment(segment);
            }
        }

        var constraintsToDelete = _Constraints.Where(con => !((con.Points == null || _Points.Keys.ContainsAll(con.Points))
                                                              && (con.Segments == null || _Segments.Keys.ContainsAll(con.Segments))));
        if (constraintsToDelete.Any())
        {
            foreach (var constraint in constraintsToDelete.ToArray())
            {
                if (reportMessage)
                {
                    Messages.Warning($"Sketch {Name} contains a constraint of type {constraint.GetType().Name} which references to points or segments which do not exist. The constraint will be deleted.");
                }

                DeleteConstraint(constraint);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Clear()
    {
        SaveUndo(ElementType.Point);
        SaveUndo(ElementType.Segment);
        SaveUndo(ElementType.Constraint);

        var points = _Points.Keys.ToArray();
        var segments = _Segments.Keys.ToArray();

        _Constraints.Clear();
        foreach (var segIndex in segments)
        {
            _Segments.Remove(segIndex);
        }
        foreach (var pointIndex in points)
        {
            _Points.Remove(pointIndex);
        }
            
        OnElementsChanged(ElementType.Segment | ElementType.Point | ElementType.Constraint);

        Invalidate();
    }

    //--------------------------------------------------------------------------------------------------

    public delegate void SketchElementChange(Sketch sketch, ElementType types);

    public event SketchElementChange ElementsChanged;

    public void OnElementsChanged(ElementType types)
    {
        if (ElementsChanged != null) ElementsChanged(this, types);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Undo

    public void SaveUndo(ElementType type)
    {
        if (type.HasFlag(ElementType.Point))
        {
            SaveUndo(nameof(Points), new Dictionary<int,Pnt2d>(_Points));
        }
        if (type.HasFlag(ElementType.Segment))
        {
            var newDict = new Dictionary<int, SketchSegment>(_Segments.Count);
            foreach (var segmentKvp in Segments)
            {
                newDict.Add(segmentKvp.Key, segmentKvp.Value.Clone());
            }
            SaveUndo(nameof(Segments), newDict);
        }
        if (type.HasFlag(ElementType.Constraint))
        {
            SaveUndo(nameof(Constraints), _Constraints.ConvertAll(con => con.Clone()));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnAfterUndo()
    {
        foreach (var kvp in _Segments)
        {
            kvp.Value.Invalidate();
        }

        OnElementsChanged(ElementType.All);

        base.OnAfterUndo();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    public bool SolveConstraints(bool canFail, IEnumerable<int> fixedPoints=null)
    {
        if (Constraints.Count == 0)
        {
            ConstraintSolverFailed = false;
            return true;
        }

        bool success = SketchConstraintSolver.Solve(this, fixedPoints);
        if (!success)
        {
            // If constraints can not be solved with fixed points, try again without.
            // Solving the constraints has a higher prio than leave the points untouched.
            success = SketchConstraintSolver.Solve(this);
        }

        if (success)
        {
            Invalidate();
            RaisePropertyChanged("Points");
            OnElementsChanged(ElementType.Point);
            if (canFail)
            {
                ConstraintSolverFailed = false;
            }
            return true;
        }
        if (canFail)
        {
            Messages.Error("Sketch constraints failed to solve.");
            ConstraintSolverFailed = true;
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool MakeInternal(MakeFlags flags)
    {
        if (!Segments.Any() || !Points.Any())
        {
            var makeVertex = new BRepBuilderAPI_MakeVertex(Pnt.Origin);
            BRep = makeVertex.Vertex();
            HasErrors = false;
            return base.MakeInternal(flags);
        }

        if (ConstraintSolverFailed)
        {
            Messages.Warning("Sketch constraints failed to solve.", "The solver is not able to fulfill all constraints. Check your constraints or try to move your segments closer to the desired result.");
        }

        // Create edges
        var freeSegmentEdges = new Dictionary<SketchSegment, TopoDS_Edge>();
        foreach (var segmentKvp in _Segments)
        {
            var segment = segmentKvp.Value;
            if(segment.IsAuxilliary)
                continue;

            var segEdge = segment.MakeEdge(_Points);
            if (segEdge == null)
            {
                Messages.Warning($"The segment {segmentKvp.Key} of type {segment.GetType().Name} failed creating an edge.");
                continue;
            }
            freeSegmentEdges.Add(segment, segEdge);
            AddNamedSubshape("seg", segEdge, segmentKvp.Key);
        }

        // Create wires
        var wires = new List<TopoDS_Wire>();
        while (freeSegmentEdges.Any())
        {
            var nextSegmentEdge = freeSegmentEdges.First();
            var frontSegment = nextSegmentEdge.Key;
            freeSegmentEdges.Remove(nextSegmentEdge.Key);

            var makeWire = new BRepBuilderAPI_MakeWire(nextSegmentEdge.Value);

            if ((frontSegment.StartPoint != -1) || (frontSegment.EndPoint != -1))
            {
                var backSegment = frontSegment;
                while (freeSegmentEdges.Any())
                {
                    nextSegmentEdge = freeSegmentEdges.FirstOrDefault(kvp => kvp.Key.IsConnected(frontSegment));
                    if (nextSegmentEdge.Value != null)
                    {
                        frontSegment = nextSegmentEdge.Key;
                    }
                    else
                    {
                        nextSegmentEdge = freeSegmentEdges.FirstOrDefault(kvp => kvp.Key.IsConnected(backSegment));
                        if (nextSegmentEdge.Value != null)
                        {
                            backSegment = nextSegmentEdge.Key;
                        }
                        else
                        {
                            // disconnected segment
                            break;
                        }
                    }

                    makeWire.Add(nextSegmentEdge.Value);
                    freeSegmentEdges.Remove(nextSegmentEdge.Key);
                }
            }

            // Get wire shape
            var wire = makeWire.Wire();
            if (wire == null)
            {
                Messages.Error("Error when creating a wire.");
                return false;
            }

            wires.Add(wire);
        }

        // Create resulting shape
        var builder = new TopoDS_Builder();
        var shape = new TopoDS_Compound();
        builder.MakeCompound(shape);

        foreach (var wire in wires)
        {
            builder.Add(shape, wire);
        }

        BRep = shape;

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Serialization

    public override void OnDeserialized(SerializationContext context)
    {
        _CheckForInvalidReferences(true);
        base.OnDeserialized(context);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}