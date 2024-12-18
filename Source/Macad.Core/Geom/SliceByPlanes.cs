using System.Diagnostics;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core.Geom;

public class SliceByPlanes
{
    #region Structs

    public struct Slice
    {
        public TopoDS_Shape BRep { get; }
        public Pln CutPlane { get; }
        public double Interval { get; }

        public Slice(TopoDS_Shape brep, Pln cutPlane, double interval)
        {
            BRep = brep;
            CutPlane = cutPlane;
            Interval = interval;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Properties

    public TopoDS_Shape SourceShape { get; }
    public TopoDS_Face ReferenceFace { get; }
    public int SliceCount { get; }
    public Dir SliceDirection { get; private set; }

    public Slice[] Slices
    {
        get
        {
            return _Successful ? _Slices : null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    public SliceByPlanes(TopoDS_Shape sourceShape, TopoDS_Face refFace, int sliceCount, double[] intervals = null)
    {
        SourceShape = sourceShape;
        SliceCount = sliceCount;
        ReferenceFace = refFace;
        _Slices = new Slice[sliceCount];

        if (intervals != null)
        {
            Debug.Assert(intervals.Length == sliceCount);
            _Intervals = intervals;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    readonly Slice[] _Slices;
    double[] _Intervals;
    Pln _RefPlane;
    double _TotalThickness;
    bool _DebugOutput;
    bool _Successful;

    //--------------------------------------------------------------------------------------------------

    public bool CreateSlices(bool debugOutput)
    {
        _Successful = false;
        _DebugOutput = debugOutput;

        if (!(_FindParameters()
              && _CreateSlices()))
        {
            return false;
        }

        _Successful = true;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _FindParameters()
    {
        if (ReferenceFace == null)
        {
            Messages.Error("Reference face is not valid.");
            return false;
        }

        // Get Opface
        Pln cutPlane;
        var opFace = FaceAlgo.FindOppositeFace(SourceShape, ReferenceFace, farthest: true, FaceAlgo.FaceDistanceMethod.UseFacePlane);
        if (opFace != null)
        {
            // Calc cutting plane by the two faces
            if (!(FaceAlgo.GetCenteredPlaneFromFace(ReferenceFace, out cutPlane)
                  && FaceAlgo.GetCenteredPlaneFromFace(opFace, out var opPlane)))
            {
                Messages.Error("Cannot create cutting plane from reference or opposite face.");
                return false;
            }
            _TotalThickness = cutPlane.Distance(opPlane);
        }
        else 
        {
            // Try using vertex
            var opPnt = FaceAlgo.FindOppositeVertex(SourceShape, ReferenceFace, farthest: true, FaceAlgo.FaceDistanceMethod.UseFacePlane);
            if (opPnt == null)
            {
                Messages.Error("No opposite face or vertex found for given reference face, it seems that the shape has no thickness.");
                return false;
            }

            if (!FaceAlgo.GetCenteredPlaneFromFace(ReferenceFace, out cutPlane))
            {
                Messages.Error("Cannot create cutting plane from reference face.");
                return false;
            }
            _TotalThickness = cutPlane.Distance(opPnt.Value);
        }

        var sliceThickness = _TotalThickness / SliceCount;
        if (_Intervals == null)
        {
            _Intervals = new double[SliceCount];
            _Intervals.Fill(sliceThickness);
            _Intervals[0] = sliceThickness * 0.5;
        }

        SliceDirection = cutPlane.Axis.Direction.Reversed();
        _RefPlane = new Pln(new Ax3(cutPlane.Location, SliceDirection));

        if (_DebugOutput)
        {
            Messages.Trace($"Reference face index {SourceShape.Faces().IndexOf(ReferenceFace)}, " +
                           $"opposite face has index {SourceShape.Faces().IndexOf(opFace)}, " +
                           $"thickness is {sliceThickness}");
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    bool _CreateSlices()
    {
        double sliceOffset = 0;
        for (int sliceIndex = 0; sliceIndex < SliceCount; sliceIndex++)
        {
            sliceOffset += _Intervals[sliceIndex];
            var cutPlane = _RefPlane.Translated(SliceDirection.ToVec().Multiplied(sliceOffset));
            var cutPlaneFace = new TopoDS_Face();
            new BRep_Builder().MakeFace(cutPlaneFace, new Geom_Plane(cutPlane), 1e-7);

            // Create contour
            var common = new BRepAlgoAPI_Common(SourceShape, cutPlaneFace);
            if (!common.IsDone())
            {
                Messages.Error("Cannot create contour face from shape.");
                return false;
            }
            var bodySpaceShape = common.Shape();

            // Move to origin
            var transform = new Trsf(Ax3.XOY, cutPlane.Position);
            var transformer = new BRepBuilderAPI_Transform(bodySpaceShape, transform, true);
            var shape = transformer.Shape();

            var slice = new Slice(shape, cutPlane, _Intervals[sliceIndex]);

            _Slices[sliceIndex] = slice;
        }

        return true;
    }
        
    //--------------------------------------------------------------------------------------------------

    public TopoDS_Compound Reconstruct()
    {
        var compound = new TopoDS_Compound();
        var builder = new BRep_Builder();
        builder.MakeCompound(compound);

        double thicknessLeft = _TotalThickness;
        for (int index = 0; index < Slices.Length; index++)
        {
            var slice = Slices[index];
            double start = slice.Interval;
            if (index > 0)
            {
                start *= 0.5;
            }
            var startVector = SliceDirection.ToVec().Multiplied(start);

            double thickness = start;
            if (Slices.Length == 1)
            {
                thickness = _TotalThickness > 0 ? _TotalThickness : slice.Interval;
            } 
            else if (index == Slices.Length - 1)
            {
                if (thicknessLeft > thickness)
                {
                    thickness = thicknessLeft;
                }
                else
                {
                    thickness += slice.Interval * 0.5;
                }
            }
            else
            {
                thickness += _Slices[index + 1].Interval * 0.5;
            }
            if(thickness <= 0)
                continue; // Slice has no thickness
            thicknessLeft -= thickness;
            var thicknessVector = SliceDirection.ToVec().Multiplied(thickness);

            var basePlane = slice.CutPlane.Translated(startVector.ToPnt(), Pnt.Origin);
            var location = new TopLoc_Location(new Trsf(basePlane.Position, Ax3.XOY));
            var relocatedShape = slice.BRep.Located(location);
            var thickener = new BRepPrimAPI_MakePrism(relocatedShape, thicknessVector, true);
            builder.Add(compound, thickener.Shape());
        }

        return compound;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}