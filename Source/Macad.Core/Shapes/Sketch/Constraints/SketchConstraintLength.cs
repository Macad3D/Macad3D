using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes;

[SerializeType]
public class SketchConstraintLength : SketchConstraint, ISketchConstraintCreator
{
    [SerializeMember]
    public double Length { get; set; }

    public override double Parameter
    {
        get { return Length; }
        set { Length = value; }
    }

    //--------------------------------------------------------------------------------------------------

    // Implement for serialization
    SketchConstraintLength()
    { }

    //--------------------------------------------------------------------------------------------------

    public SketchConstraintLength(int lineSegment, double length)
    {
        Segments = new[] { lineSegment };
        Length = length;
    }

    //--------------------------------------------------------------------------------------------------

    public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
    {
        var lineSegment = segments[Segments[0]] as SketchSegmentLine;
        if (lineSegment == null) return false;

        var con = new Constraint { Type = ConstraintType.LineLength };

        bool valid = Length > 0;
        valid &= solver.SetParameter(out con.Parameter, Length, true);
        valid &= solver.SetLine(ref con.Line1, lineSegment.Points[0], lineSegment.Points[1], false, false);

        if(valid)
        {
            solver.AddConstraint(con);
        }
        return valid;
    }

    //--------------------------------------------------------------------------------------------------

    public override SketchConstraint Clone()
    {
        return new SketchConstraintLength(Segments[0], Length);
    }
        
    //--------------------------------------------------------------------------------------------------

    public static bool CanCreate(Sketch sketch, List<int> points, List<int> segments)
    {
        return points.Count == 0 
               && segments.Count > 0
               && SketchConstraintHelper.AllSegmentsOfType<SketchSegmentLine>(sketch, segments)
               && !SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintFixed>(sketch, segments)
               && !SketchConstraintHelper.AnyConstrainedSegment<SketchConstraintLength>(sketch, segments);
    }

    //--------------------------------------------------------------------------------------------------

    public static List<SketchConstraint> Create(Sketch sketch, List<int> points, List<int> segments)
    {
        var list = new List<SketchConstraint>();

        foreach (var segmentIndex in segments)
        {
            var line = sketch.Segments[segmentIndex] as SketchSegmentLine;
            Debug.Assert(line != null);

            var length = line.Length(sketch.Points);
            if (length > 0)
            {
                list.Add(new SketchConstraintLength(segmentIndex, length));
            }
        }
        return list;
    }
}