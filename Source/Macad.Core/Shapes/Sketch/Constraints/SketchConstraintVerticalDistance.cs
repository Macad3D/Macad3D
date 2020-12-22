using System.Collections.Generic;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.SketchSolve;

namespace Macad.Core.Shapes
{
    [SerializeType]
    public class SketchConstraintVerticalDistance : SketchConstraint
    {
        [SerializeMember]
        public double Distance { get; set; }

        public override double Parameter
        {
            get { return Distance; }
            set { Distance = value; }
        }

        //--------------------------------------------------------------------------------------------------

        // Implement for serialization
        SketchConstraintVerticalDistance()
        { }

        //--------------------------------------------------------------------------------------------------

        public SketchConstraintVerticalDistance(int point, double distance)
        {
            Points = new[] { point };
            Distance = distance;
        }

        //--------------------------------------------------------------------------------------------------

        public override SketchConstraint Clone()
        {
            return new SketchConstraintVerticalDistance(Points[0], Distance);
        }

        //--------------------------------------------------------------------------------------------------

        public override bool MakeConstraint(Dictionary<int, Pnt2d> points, Dictionary<int, SketchSegment> segments, SketchConstraintSolver solver)
        {
            bool valid = true;

            var con = new Constraint { Type = ConstraintType.PointVerticalDistance };
            valid &= solver.SetPoint(ref con.Point1, Points[0], false);
            valid &= solver.SetParameter(out con.Parameter, Distance, true);

            if (valid)
            {
                solver.AddConstraint(con);
            }

            return valid;
        }
        
        //--------------------------------------------------------------------------------------------------

        public static List<SketchConstraint> Create(Sketch sketch, List<int> points, List<int> segments)
        {
            var list = new List<SketchConstraint>();

            foreach (var pointIndex in points)
            {
                list.Add(new SketchConstraintVerticalDistance(pointIndex, sketch.Points[pointIndex].Y));
            }
            return list;
        }

        //--------------------------------------------------------------------------------------------------
   }
}