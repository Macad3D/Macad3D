using System.Diagnostics;
using System.Linq;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes
{
    [SerializeType]
    public sealed class Imprint : ModifierBase
    {
        #region Enums

        public enum ImprintMode
        {
            Default,
            Raise,
            Lower,
            Cutout
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Properties

        [SerializeMember]
        public ImprintMode Mode
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
        public double Depth
        {
            get { return _Depth; }
            set
            {
                if ((value >= 0) && (_Depth != value))
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
        public double DraftAngle
        {
            get { return _DraftAngle; }
            set
            {
                if ((value > -90) && (value < 90) && (_DraftAngle != value))
                {
                    SaveUndo();
                    _DraftAngle = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
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

        public Sketch Sketch
        {
            get { return GetOperand(1) as Sketch; }
        }

        //--------------------------------------------------------------------------------------------------

        public override ShapeType ShapeType
        {
            get { return ShapeType.Solid; }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
        
        #region Members

        ImprintMode _Mode;
        double _Depth;
        double _DraftAngle;
        SubshapeReference _Face;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Create

        public Imprint()
        {
            _Mode = ImprintMode.Raise;
            _Depth = 1.0;
            _DraftAngle = 0.0;
        }

        //--------------------------------------------------------------------------------------------------

        public static Imprint Create(Body body, SubshapeReference faceRef, Shape sketch)
        {
            Debug.Assert(body != null);
            var modifierShape = new Imprint(){
                _Face = faceRef
            };
            modifierShape.AddOperand(sketch);
            body.AddShape(modifierShape);

            return modifierShape;
        }

        //--------------------------------------------------------------------------------------------------

        public static Imprint Create(Body body, SubshapeReference faceRef)
        {
            var face = body?.Shape.FindSubshape(faceRef, null).FirstOrDefault()?.ToFace();
            if (face == null)
                return null;

            if (!FaceAlgo.GetCenteredPlaneFromFace(face, out var plane))
            {
                return null;
            }
            return Create(body, faceRef, new Sketch() {Body = body});
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Make

        protected override bool MakeInternal(MakeFlags flags)
        {
            ClearSubshapeLists();

            // Currently we work with 2 source shape only
            if ((Operands.Count != 2) || (_Face == null))
                return false;

            // Get Target
            var targetShape = GetOperandBRep(0);
            if (targetShape == null)
                return false;

            var faceShape = GetOperandFace(0, _Face);
            if (faceShape == null)
                return false;

            if (!FaceAlgo.GetCenteredPlaneFromFace(faceShape, out var facePlane))
            {
                Messages.Error("Target face is not planar.");
                return false;
            }

            var baseFacesShape = GetOperand2DFaces(1, facePlane);
            if (baseFacesShape == null)
            {
                Messages.Error("Cannot create faces from 2D operand.");
                return false;
            }

            // If extrusion vector has zero length, or the shape is empty, just copy the source shape
            if (Depth == 0 || !baseFacesShape.Faces().Any())
            {
                return Skip();
            }

            // Do it!
            if (DraftAngle != 0)
            {
                // DraftPrism needs to change the sign of depth and draft angle
                var sign = _Mode == ImprintMode.Raise ? 1 : -1;

                // Make with draft 
                var singleBaseFaces = baseFacesShape.Faces();
                foreach (var singleBaseFace in singleBaseFaces)
                {
                    var makePrism = new BRepFeat_MakeDPrism(targetShape, singleBaseFace, faceShape, _DraftAngle.ToRad()*sign, _Mode == ImprintMode.Raise ? 1 : 0, true);
                    if (_Mode == ImprintMode.Cutout)
                        makePrism.PerformThruAll();
                    else
                        makePrism.Perform(Depth*sign);

                    UpdateModifiedSubshapes(targetShape, makePrism);
                    UpdateModifiedSubshapes(singleBaseFace, makePrism);
                    targetShape = makePrism.Shape();
                }
                BRep = targetShape;
            }
            else
            {
                // Generate direction
                var direction = _Mode == ImprintMode.Raise ? facePlane.Axis.Direction : facePlane.Axis.Direction.Reversed();

                // Make w/o draft
                var makePrism = new BRepFeat_MakePrism(targetShape, baseFacesShape, faceShape, direction, _Mode == ImprintMode.Raise ? 1 : 0, true);
                if (_Mode == ImprintMode.Cutout)
                    makePrism.PerformThruAll();
                else
                    makePrism.Perform(Depth);

                UpdateModifiedSubshapes(targetShape, makePrism);
                UpdateModifiedSubshapes(baseFacesShape, makePrism);
                BRep = makePrism.Shape();
            }

            return base.MakeInternal(flags);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

    }
}