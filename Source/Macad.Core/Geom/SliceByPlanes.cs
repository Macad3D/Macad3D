using System;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Geom
{
    public class SliceByPlanes
    {
        #region Structs

        public struct Slice
        {
            public TopoDS_Shape BRep { get; }
            public Pln CutPlane { get; }

            public Slice(TopoDS_Shape brep, Pln cutPlane)
            {
                BRep = brep;
                CutPlane = cutPlane;
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Properties

        public TopoDS_Shape SourceShape { get; }
        public TopoDS_Face ReferenceFace { get; }
        public int SliceCount { get; }
        public Dir SliceDirection { get; private set; }
        public double SliceThickness { get; private set; }

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

        public SliceByPlanes(TopoDS_Shape sourceShape, TopoDS_Face refFace, int sliceCount)
        {
            SourceShape = sourceShape;
            SliceCount = sliceCount;
            ReferenceFace = refFace;
            _Slices = new Slice[sliceCount];
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Make

        readonly Slice[] _Slices;
        Pln _RefPlane;
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
            var opFace = FaceAlgo.FindOppositeFace(SourceShape, ReferenceFace, farthest: true, FaceAlgo.FaceDistanceMethod.UseFacePlane);
            if (opFace == null)
            {
                Messages.Error("Reference face has no opposite face, so it seems that the shape has no thickness.");
                return false;
            }

            // Calc cutting plane
            if (!(FaceAlgo.GetCenteredPlaneFromFace(ReferenceFace, out var cutPlane)
                && FaceAlgo.GetCenteredPlaneFromFace(opFace, out var opPlane)))
            {
                Messages.Error("Cannot create cutting plane from reference or opposite face.");
                return false;
            }

            SliceThickness = cutPlane.Distance(opPlane);
            SliceDirection = cutPlane.Axis.Direction.Reversed();
            _RefPlane = new Pln(new Ax3(cutPlane.Location, SliceDirection));

            if (_DebugOutput)
            {
                Messages.Trace($"Reference face index {SourceShape.Faces().IndexOf(ReferenceFace)}, " +
                               $"opposite face has index {SourceShape.Faces().IndexOf(opFace)}, " +
                               $"thickness is {SliceThickness}");
            }

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool _CreateSlices()
        {
            var sliceInterval = SliceThickness / SliceCount;
            for (int sliceIndex = 0; sliceIndex < SliceCount; sliceIndex++)
            {
                var sliceOffset = sliceInterval * (sliceIndex + 0.5);
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

                var slice = new Slice(shape, cutPlane);

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

            var thicknessVector = SliceDirection.ToVec().Multiplied(SliceThickness / Slices.Length);
            if (thicknessVector.SquareMagnitude() == 0)
            {
                Messages.Error("Sliced shape has no thickness.");
                return compound;
            }

            for (int index = 0; index < Slices.Length; index++)
            {
                var basePlane = Slices[index].CutPlane.Translated(thicknessVector.Multiplied(0.5).ToPnt(), Pnt.Origin);
                var location = new TopLoc_Location(new Trsf(basePlane.Position, Ax3.XOY));
                var relocatedShape = Slices[index].BRep.Located(location);
                var thickener = new BRepPrimAPI_MakePrism(relocatedShape, thicknessVector, true);
                builder.Add(compound, thickener.Shape());
            }

            return compound;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}