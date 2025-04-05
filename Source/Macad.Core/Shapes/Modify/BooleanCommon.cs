using System.Diagnostics;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class BooleanCommon : BooleanBase
{
    public BooleanCommon()
    {
        Name = "Boolean Common";
    }

    //--------------------------------------------------------------------------------------------------

    protected override BRepAlgoAPI_BooleanOperation CreateAlgoApi()
    {
        return new BRepAlgoAPI_Common();
    }

    //--------------------------------------------------------------------------------------------------

    public static BooleanCommon Create(Body targetBody, params IShapeOperand[] operands)
    {
        Debug.Assert(targetBody != null);

        var boolean = new BooleanCommon();
        targetBody.AddShape(boolean);
        foreach (var shapeOperand in operands)
        {
            boolean.AddOperand(shapeOperand);
        }

        return boolean;
    }
}