using System.Diagnostics;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes
{
    [SerializeType]
    public sealed class Extrude : ModifierBase
    {
        #region Properties

        [SerializeMember]
        public double Depth
        {
            get { return _Depth; }
            set
            {
                if (_Depth != value)
                {
                    SaveUndo();
                    _Depth = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public bool Symmetric
        {
            get { return _Symmetric; }
            set
            {
                if (_Symmetric != value)
                {
                    SaveUndo();
                    _Symmetric = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public override ShapeType ShapeType
        {
            get { return IsSkipped ? GetOperand(0)?.GetShapeType() ?? ShapeType.Unknown : ShapeType.Solid; }
        }

        //--------------------------------------------------------------------------------------------------
        
        [SerializeMember]
        public SubshapeReference Face
        {
            get { return _Face; }
            set
            {
                if (_Face != value)
                {
                    SaveUndo();
                    _Face = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Members

        double _Depth;        
        bool _Symmetric;
        SubshapeReference _Face;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Create

        public Extrude()
        {
            _Depth = 1;
        }

        //--------------------------------------------------------------------------------------------------

        public static Extrude Create(Body body)
        {
            Debug.Assert(body != null);
            Debug.Assert(body.Shape.ShapeType == ShapeType.Sketch);

            var extrude = new Extrude();
            body.AddShape(extrude);

            return extrude;
        }

        //--------------------------------------------------------------------------------------------------
        
        public static Extrude Create(Body body, SubshapeReference faceRef)
        {
            Debug.Assert(body != null);
            Debug.Assert(faceRef != null);
            Debug.Assert(body.Shape.ShapeType == ShapeType.Solid);

            var extrude = new Extrude
            {
                Face = faceRef
            };
            body.AddShape(extrude);

            return extrude;
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
                Messages.Error("Extrude needs exactly one source shape.");
                return false;
            }

            bool result = false;
            switch (GetOperand(0).GetShapeType())
            {
                case ShapeType.Sketch:
                    result = _Make2D();
                    break;

                case ShapeType.Solid:
                    result = _Make3D();
                    break;
            }

            return result && base.MakeInternal(flags);
        }

        //--------------------------------------------------------------------------------------------------

        bool _Make2D()
        {
            // We work with 2D shapes as source
            var faceShape = GetOperand2DFaces(0, null);
            if (faceShape == null)
                return false;

            // Get plane
            if (!FaceAlgo.GetPlaneOfFaces(faceShape, out var plane))
                return false;

            // If extrusion vector has zero length, just copy the source shape converted to faces
            if (Depth == 0)
            {
                BRep = faceShape;
                return base.MakeInternal(MakeFlags.NoTransformation);
            }

            // Generate vector
            var vector = plane.Axis.Direction.ToVec().Multiplied(Depth);

            // Offset if symmetric
            if (Symmetric)
            {
                var offset = vector.Reversed().Multiplied(0.5);
                var transform = new BRepBuilderAPI_Transform(faceShape, new Trsf(Pnt.Origin, offset.ToPnt()));
                faceShape = transform.Shape();
            }

            // Do it!
            var makePrism = new BRepPrimAPI_MakePrism(faceShape, vector);

            // Get final shape
            BRep = makePrism.Shape();
            return true;
        }

        //--------------------------------------------------------------------------------------------------
        
        bool _Make3D()
        {
            // We work with solid shape and face as source
            var solid = GetOperandBRep(0);
            if (solid == null || _Face == null)
                return false;
            
            // If extrusion vector has zero length, just copy the source shape converted to faces
            if (Depth == 0)
            {
                BRep = solid;
                return base.MakeInternal(MakeFlags.NoTransformation);
            }

            // Get face
            var face = GetOperandFace(0, _Face);
            if (face == null)
            {
                Messages.Error("The selected face is lost, please reselect.");
                return false;
            }

            // Generate direction vector
            var direction = FaceAlgo.GetFaceCenterNormal(face).Direction;

            // Do it!
            var makePrism = new BRepFeat_MakePrism(solid, face, face, direction, Depth > 0 ? 1 : 0, false);
            makePrism.Perform(Depth);

			UpdateModifiedSubshapes(solid, makePrism);

            // Get final shape
            BRep = makePrism.Shape();
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}