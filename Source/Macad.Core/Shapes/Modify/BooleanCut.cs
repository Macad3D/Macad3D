using System.Diagnostics;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class BooleanCut : BooleanBase
{
    public BooleanCut()
    {
        Name = "Boolean Cut";
    }

    //--------------------------------------------------------------------------------------------------

    protected override BRepAlgoAPI_BooleanOperation CreateAlgoApi()
    {
        return new BRepAlgoAPI_Cut();
    }

    //--------------------------------------------------------------------------------------------------

    public static BooleanCut Create(Body targetBody, IShapeOperand operand)
    {
        Debug.Assert(targetBody != null);

        var boolean = new BooleanCut();
        targetBody.AddShape(boolean);
        boolean.AddOperand(operand);

        return boolean;
    }

    //--------------------------------------------------------------------------------------------------

    public static BooleanCut Create(Body targetBody, IShapeOperand[] operands)
    {
        Debug.Assert(targetBody != null);

        var boolean = new BooleanCut();
        targetBody.AddShape(boolean);
        foreach (var shapeOperand in operands)
        {
            boolean.AddOperand(shapeOperand);
        }

        return boolean;
    }
}