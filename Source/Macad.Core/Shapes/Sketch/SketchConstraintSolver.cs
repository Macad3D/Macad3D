using System.Collections.Generic;
using System.Linq;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes;

public class SketchConstraintSolver
{
    Dictionary<int, int> _PointMap;
    int _MaxPointKey;
    List<Constraint> _Constraints;
    Dictionary<int, Pnt2d> _Points;
    List<Parameter> _Parameters;

    //--------------------------------------------------------------------------------------------------

    Result _Solve(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, List<SketchConstraint> constraints, IEnumerable<int> fixedPoints, bool precise)
    {
        if (points.Count == 0 || constraints.Count == 0)
            return Result.Success;

        // Init with estimated counts
        _Parameters = new List<Parameter>();
        _PointMap = new Dictionary<int, int>(points.Count);
        _Constraints = new List<Constraint>(constraints.Count * 2);
        _Points = points;
        _MaxPointKey = _Points.Keys.Max();

        // Build constraints
        foreach (var sketchConstraint in constraints)
        {
            if (!sketchConstraint.MakeConstraint(points, segments, this))
            {
                Messages.Warning($"The constraint {constraints.IndexOf(sketchConstraint)} of type {sketchConstraint.GetType().Name} " +
                                 "has invalid parameters. It will be ignored.");
            }
        }

        // Build constraint for temporable fixed points
        if (fixedPoints != null)
        {
            foreach (var fixedPoint in fixedPoints)
            {
                FixPoint(fixedPoint);
            }
        }

        // Try to solve
        var result = Solver.Solve(_Parameters, _Constraints, precise);

        // Copy back points
        if (result == Result.Success)
        {
            for (var index = 0; index < _Parameters.Count; index++)
            {
                var param = _Parameters[index];
                if (param.PointKey < 0)
                    continue;

                if (param.Usage == Usage.Variable)
                {
                    points[param.PointKey] = new Pnt2d(_Parameters[index].Value, _Parameters[index + 1].Value);
                }

                index++; // Skip second value of every point
            }
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool Solve(Sketch sketch, IEnumerable<int> fixedPoints=null)
    {
        var solver = new SketchConstraintSolver();
        var result = solver._Solve(sketch.Points, sketch.Segments, sketch.Constraints, fixedPoints, true) == Result.Success;
        //Debug.WriteLine("Sketch constraints " + (result ? "solved successful." : "have no solution."));
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool Solve(Sketch sketch, Dictionary<int, Pnt2d> tempPoints, IEnumerable<int> fixedPoints=null)
    {
        var solver = new SketchConstraintSolver();
        var result = solver._Solve(tempPoints, sketch.Segments, sketch.Constraints, fixedPoints, false) == Result.Success;
        //Debug.WriteLine("Sketch constraints " + (result ? "solved successful." : "have no solution."));
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    #region Support functions for constraints

    int _GetPointIndex(int pointKey, bool isConstant)
    {
        if (_PointMap.TryGetValue(pointKey, out var index))
        {
            if (!isConstant && _Parameters[index].Usage == Usage.Constant)
                _Parameters[index].Usage = Usage.Variable;
            if (!isConstant && _Parameters[index+1].Usage == Usage.Constant)
                _Parameters[index+1].Usage = Usage.Variable;
            return index;
        }

        if (!_Points.TryGetValue(pointKey, out Pnt2d value))
        {
            return -1;
        }
            
        index = _Parameters.Count;
        _PointMap.Add(pointKey, index);
        _Parameters.Add(
            new Parameter
            {
                Value = value.X, 
                PointKey = pointKey, 
                Usage = isConstant ? Usage.Constant : Usage.Variable
            });
        _Parameters.Add(
            new Parameter
            {
                Value = value.Y, 
                PointKey = pointKey, 
                Usage = isConstant ? Usage.Constant : Usage.Variable
            });
        return index;
    }

    //--------------------------------------------------------------------------------------------------

    public bool SetPoint(ref Point point, int pointKey, bool isConstant)
    {
        if (pointKey < 0)
            return false;

        var index = _GetPointIndex(pointKey, isConstant);
        if (index < 0)
            return false;

        point.X = index;
        point.Y = index + 1;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool SetLine(ref Line line, int startPointKey, int endPointKey, bool isStartConstant, bool isEndConstant)
    {
        if ((startPointKey < 0) || ((endPointKey < 0)))
            return false;

        var startIndex = _GetPointIndex(startPointKey, isStartConstant);
        var endIndex = _GetPointIndex(endPointKey, isEndConstant);
        if (startIndex < 0 || endIndex < 0)
            return false;

        line.P1.X = startIndex;
        line.P1.Y = startIndex + 1;
        line.P2.X = endIndex;
        line.P2.Y = endIndex + 1;

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool SetCircle(ref Circle circle, int centerPointKey, double radius, bool isCenterConstant, bool isRadiusConstant)
    {
        if (centerPointKey < 0 || radius <= 0)
            return false;
            
        var centerPointIndex = _GetPointIndex(centerPointKey, isCenterConstant);
        if (centerPointIndex < 0)
            return false;

        circle.Center.X = centerPointIndex;
        circle.Center.Y = centerPointIndex + 1;
        SetParameter(out circle.Radius, radius, isRadiusConstant);

        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    public bool SetCircle(ref Circle circle, SketchSegment segment, List<Constraint> constraints, Dictionary<int, Pnt2d> points, bool isCenterConstant, bool isRadiusConstant)
    {
        var valid = true;
        if (segment is SketchSegmentCircle circSeg)
        {
            // Circle
            valid &= SetCircle(ref circle, circSeg.CenterPoint, circSeg.Radius(points), isCenterConstant, isRadiusConstant);

            var rimCon = new Constraint {Type = ConstraintType.PointOnCircle};
            rimCon.Circle1 = circle;
            valid &= SetPoint(ref rimCon.Point1, circSeg.RimPoint, false);
            constraints.Add(rimCon);
        }
        else if (segment is SketchSegmentArc arcSeg)
        {
            // Arc Rim
            int centerKey = 0;
            valid &= AddAuxiliaryPoint(out centerKey, arcSeg.Center(points), false);
            valid &= SetCircle(ref circle, centerKey, arcSeg.Radius(points), isCenterConstant, isRadiusConstant);

            for (int pointIndex = 0; pointIndex < 3; pointIndex++)
            {
                var conPoint = new Constraint
                {
                    Type = ConstraintType.PointOnCircle,
                    Circle1 = circle
                };
                valid &= SetPoint(ref conPoint.Point1, arcSeg.Points[pointIndex], false);
                constraints.Add(conPoint);
            }
        }
        else 
        {
            valid = false;
        }
        return valid;
    }

    //--------------------------------------------------------------------------------------------------

    public bool SetParameter(out int parameter, double value, bool isConstant)
    {
        parameter = _Parameters.Count;
        _Parameters.Add(
            new Parameter
            {
                Value = value,
                Usage = isConstant ? Usage.Constant : Usage.Variable,
                PointKey = -1
            });
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool AddAuxiliaryPoint(out int pointKey, Pnt2d point, bool isConstant)
    {
        _MaxPointKey++;
        pointKey = _MaxPointKey;
        _PointMap.Add(_MaxPointKey, _Parameters.Count);
        _Parameters.Add(
            new Parameter()
            {
                Value = point.X,
                Usage = isConstant ? Usage.Constant : Usage.Variable,
                PointKey = -1
            });
        _Parameters.Add(
            new Parameter()
            {
                Value = point.Y,
                Usage = isConstant ? Usage.Constant : Usage.Variable,
                PointKey = -1
            });

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public void AddConstraint(Constraint constraint)
    {
        _Constraints.Add(constraint);
    }

    //--------------------------------------------------------------------------------------------------

    public void FixPoint(int pointKey)
    {
        var index = _GetPointIndex(pointKey, true);
        if (index >= 0)
        {
            _Parameters[index].Usage = Usage.Immutable;
            _Parameters[index+1].Usage = Usage.Immutable;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion
}