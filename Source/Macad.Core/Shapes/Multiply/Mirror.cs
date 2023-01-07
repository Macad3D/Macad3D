using System;
using System.Diagnostics;
using System.Linq;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes
{
    [SerializeType]
    public sealed class Mirror : ModifierBase
    {
        #region Enums

        public enum MirrorMode
        {
            EdgeOrFace
        }
        
        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Properties

        [SerializeMember]
        public MirrorMode Mode
        {
            get { return _Mode; }
            set
            {
                if (_Mode != value)
                {
                    SaveUndo();
                    _Mode = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public SubshapeReference ReferenceShape
        {
            get { return _ReferenceShape; }
            set
            {
                if (_ReferenceShape != value)
                {
                    SaveUndo();
                    _ReferenceShape = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public double Offset
        {
            get { return _Offset; }
            set
            {
                if (_Offset != value)
                {
                    SaveUndo();
                    _Offset = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override ShapeType ShapeType
        {
            get
            {
                return GetOperand(0)?.GetShapeType() ?? ShapeType.Unknown;
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Member

        MirrorMode _Mode;
        SubshapeReference _ReferenceShape;
        double _Offset;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Create

        public Mirror()
        {
            _Mode = MirrorMode.EdgeOrFace;
        }

        //--------------------------------------------------------------------------------------------------

        public static Mirror Create(Body targetBody, SubshapeReference mirrorEdgeOrFace)
        {
            Debug.Assert(targetBody != null);
            Debug.Assert(mirrorEdgeOrFace != null);

            var mirror = new Mirror()
            {
                _Mode = MirrorMode.EdgeOrFace,
                _ReferenceShape = mirrorEdgeOrFace
            };

            targetBody.AddShape(mirror);

            return mirror;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Make

        protected override bool MakeInternal(MakeFlags flags)
        {
            ClearSubshapeLists();

            // Currently we work with 1 source shape only
            if (Operands.Count != 1)
            {
                Messages.Error("This modifier needs exactly one source shape.");
                return false;
            }

            // We work with 2D shapes as source
            var sourceShape = GetOperand(0);

            switch (sourceShape.GetShapeType())
            {
                case ShapeType.Sketch:
                    if (!_MakeSketch(sourceShape))
                        return false;
                    break;

                case ShapeType.Solid:
                    if (!_MakeSolid(sourceShape))
                        return false;
                    break;

                default:
                    Messages.Error("This modifier needs a sketch or solid as source shape.");
                    return false;
            }

            return base.MakeInternal(flags);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Solid Type

        bool _MakeSolid(in IShapeOperand sourceShape)
        {
            var sourceBRep = GetOperandBRep(0);
            if (sourceBRep == null)
                return false;

            // Create Axis
            Trsf transform;
            switch (Mode)
            {
                case MirrorMode.EdgeOrFace:
                    if (!_CreateMirrorTransform_Face(sourceShape, out transform))
                        return false;
                    break;

                default:
                    Messages.Error("Internal error: Unsupported mode.");
                    return false;
            }

            // Do it!
            var makeTransform = new BRepBuilderAPI_Transform(sourceBRep, transform);
            if (!makeTransform.IsDone())
            {
                Messages.Error("Failed transforming shape.");
                return false;
            }

            var shapeListArgs = new TopTools_ListOfShape();
            shapeListArgs.Append(sourceBRep);

            var shapeListTools = new TopTools_ListOfShape();
            shapeListTools.Append(makeTransform.Shape());

            var algo = new BRepAlgoAPI_Fuse();
            algo.SetArguments(shapeListArgs);
            algo.SetTools(shapeListTools);
            algo.Build();
            if (!algo.IsDone())
            {
                Messages.Error("Failed fusing operation failed.");
                return false;
            }


            // Finalize
            BRep = algo.Shape();
            return true;
        }
        
        //--------------------------------------------------------------------------------------------------

        bool _CreateMirrorTransform_Face(IShapeOperand sourceShape, out Trsf transform)
        {
            transform = new Trsf();

            var face = GetOperandFace(0, _ReferenceShape);
            if (face == null)
            {
                Messages.Error("The selected mirror face is lost, please reselect.");
                return false;
            }

            // Find location and tangent in the middle of the surface
            var adaptor = new BRepAdaptor_Surface(face);
            double midParamU = (adaptor.FirstUParameter() + adaptor.LastUParameter()) / 2;
            double midParamV = (adaptor.FirstVParameter() + adaptor.LastVParameter()) / 2;

            Pnt midPoint = new Pnt();
            Vec d1U = new Vec();
            Vec d1V = new Vec();
            adaptor.Surface().D1(midParamU, midParamV, ref midPoint, ref d1U, ref d1V);
            Vec normal = d1U.Crossed(d1V).Normalized();

            var axis = new Ax2(midPoint, normal.ToDir(), d1U.ToDir());
            if(face.Orientation() == TopAbs_Orientation.REVERSED)
                normal.Reverse();

            axis.Translate(normal.Multiplied(_Offset));

            transform.SetMirror(axis);

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Sketch Type

        bool _MakeSketch(in IShapeOperand sourceShape)
        {
            var sourceBRep = GetOperandBRep(0);
            if (sourceBRep == null)
                return false;

            // Create Axis
            Trsf2d transform;
            switch (Mode)
            {
                case MirrorMode.EdgeOrFace:
                    if (!_CreateMirrorTransform_Edge(sourceShape, out transform, ref sourceBRep))
                        return false;
                    break;

                default:
                    Messages.Error("Internal error: Unsupported mode.");
                    return false;
            }

            // Do it!
            var resultShape = Topo2dUtils.TransformSketchShape(sourceBRep, new[] {transform}, true);
            if (resultShape == null)
                return false;

            // Finalize
            BRep = resultShape;
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool _CreateMirrorTransform_Edge(IShapeOperand sourceShape, out Trsf2d transform, ref TopoDS_Shape sourceBRep)
        {
            transform = new Trsf2d();

            var edge = GetOperandEdge(0, _ReferenceShape);
            if (edge == null)
            {
                Messages.Error("The selected mirror edge is lost, please reselect.");
                return false;
            }

            var tedge = edge.TShape() as BRep_TEdge;
            var curveRep = tedge.CurvesList().FirstOrDefault() as BRep_CurveOnSurface;
            if (curveRep == null)
            {
                Messages.Error("The selected mirror edge must be sketch curve.");
                return false;
            }

            var curve = curveRep.PCurve();

            // Find location and tangent in the middle of the curve
            double first = 0;
            double last = 0;
            curveRep.Range(ref first, ref last);
            double midParam = (first + last) / 2;
            Pnt2d midPoint = new Pnt2d();
            Vec2d tangent = new Vec2d();
            curve.D1(midParam, ref midPoint, ref tangent);

            var axis = new Ax2d(midPoint, new Dir2d(tangent));
            var dir = axis.Direction.Rotated( edge.Orientation() == TopAbs_Orientation.FORWARD ? -90 : 90 );
            axis.Translate(dir.ToVec().Multiplied(_Offset));

            transform.SetMirror(axis);

            // If edge is linear and offset is 0, the edge should be eliminated
            if (Offset == 0 && curve is Geom2d_Line)
            {
                var reShape = new BRepTools_ReShape();
                reShape.Remove(edge);
                sourceBRep = reShape.Apply(sourceBRep);
            }

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}