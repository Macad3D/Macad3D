using System.Diagnostics;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class BooleanFuse : BooleanBase
{
    [SerializeMember]
    public bool MergeFaces
    {
        get { return _MergeFaces; }
        set
        {
            if (_MergeFaces != value)
            {
                SaveUndo();
                _MergeFaces = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override bool SimplifyResult => _MergeFaces;

    //--------------------------------------------------------------------------------------------------

    bool _MergeFaces;

    //--------------------------------------------------------------------------------------------------

    public BooleanFuse()
    {
        Name = "Boolean Fuse";
    }

    //--------------------------------------------------------------------------------------------------

    protected override BRepAlgoAPI_BooleanOperation CreateAlgoApi()
    {
        return new BRepAlgoAPI_Fuse();
    }

    //--------------------------------------------------------------------------------------------------

    public static BooleanFuse Create(Body targetBody, IShapeOperand operand)
    {
        Debug.Assert(targetBody != null);

        var boolean = new BooleanFuse()
        {
            MergeFaces = true
        };

        targetBody.AddShape(boolean);
        boolean.AddOperand(operand);

        return boolean;
    }

    //--------------------------------------------------------------------------------------------------

    public static BooleanFuse Create(Body targetBody, IShapeOperand[] operands)
    {
        Debug.Assert(targetBody != null);

        var boolean = new BooleanFuse()
        {
            MergeFaces = true
        };

        targetBody.AddShape(boolean);
        foreach (var shapeOperand in operands)
        {
            boolean.AddOperand(shapeOperand);
        }

        return boolean;
    }

}