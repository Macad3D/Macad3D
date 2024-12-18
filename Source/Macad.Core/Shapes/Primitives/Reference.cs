using System.Collections.Generic;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes
{
    public class Reference : ModifierBase
    {
        #region Properties

        public override ShapeType ShapeType
        {
            get { return GetOperand(1)?.GetShapeType() ?? ShapeType.Unknown; }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Create

        public static Body Create(Body linkedBody, Shape linkedShape = null)
        {
            var shape = new Reference();
            shape.AddOperand(new BodyShapeOperand(linkedBody, linkedShape));

            var body = Topology.Body.Create(shape);
            body.Position = linkedBody.Position;
            body.Rotation = linkedBody.Rotation;
            return body;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Make

        protected override bool MakeInternal(MakeFlags flags)
        {
            if (Operands.Count < 2)
            {
                Messages.Error("Linked body is lost.");
                return false;

            }

            switch (Operands[1])
            {
                case BodyShapeOperand bodyOp:
                    BRep = bodyOp?.Shape?.GetBRep();
                    if (BRep == null)
                    {
                        Messages.Error("Linked body is invalid.");
                        return false;
                    }
                    break;

                case Shape shape:
                    BRep = shape.GetBRep();
                    if (BRep == null)
                    {
                        Messages.Error("Linked Shape has no valid geometry.");
                        return false;
                    }
                    break;

                default:
                    Messages.Error("Referenced type not supported.");
                    break;
            }

            return base.MakeInternal(flags);
        }
        
        //--------------------------------------------------------------------------------------------------

        public override bool ReplaceOperand(int operandIndex, IShapeOperand operandShape)
        {
            if (operandIndex != 1 
                || Operands.Count < 1 
                || !(Operands[1] is BodyShapeOperand) 
                || !(operandShape is Shape))
            {
                return base.ReplaceOperand(operandIndex, operandShape);
            }

            var solidShape = operandShape as Solid;
            if (solidShape == null)
                return false;

            // Transform operandShape
            var trsf = new Trsf(GetCoordinateSystem(), (Operands[1] as BodyShapeOperand).Body.GetCoordinateSystem());
            var bRep = solidShape.GetBRep()?.Moved(new TopLoc_Location(trsf));
            if (bRep == null)
                return false;

            solidShape.UpdateShape(bRep);

            // RemoveShape will replace the shape with the predecessor
            Predecessor = operandShape;
            Body.RemoveShape(this);

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Subshapes

        public override SubshapeReference GetSubshapeReference(SubshapeType type, int index)
        {
            if (Operands.Count > 1 && Operands[1] is BodyShapeOperand)
            {
                return (Operands[1] as BodyShapeOperand)?.Shape?.GetSubshapeReference(type, index);
            }

            return base.GetSubshapeReference(type, index);
        }

        //--------------------------------------------------------------------------------------------------

        public override SubshapeReference GetSubshapeReference(TopoDS_Shape ocSubshape)
        {
            if (Operands.Count > 1 && Operands[1] is BodyShapeOperand)
            {
                return (Operands[1] as BodyShapeOperand)?.Shape?.GetSubshapeReference(ocSubshape);
            }

            return base.GetSubshapeReference(ocSubshape);
        }

        //--------------------------------------------------------------------------------------------------

        public override List<TopoDS_Shape> FindSubshape(SubshapeReference reference, Ax3? targetFrame)
        {
            if (Operands.Count > 1 && Operands[1] is BodyShapeOperand)
            {
                return (Operands[1] as BodyShapeOperand)?.Shape?.FindSubshape(reference, null);
            }

            return base.FindSubshape(reference, null);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Overrides

        public override void GetLinkedBodies(List<Body> bodyList)
        {
            // Left empty to ignore referenced bodies in transformation
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}