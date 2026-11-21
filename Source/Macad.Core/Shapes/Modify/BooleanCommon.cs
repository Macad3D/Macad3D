using System;
using System.Collections.Generic;
using System.Diagnostics;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class BooleanCommon : BooleanBase
{
    /// <summary>
    /// Version of the modifier. This is used to keep the modifier working with older files.
    /// This only makes a difference with more than two operands.
    /// 0 => The common is built between the first operand and the union of all other
    ///      operands: 0 ∩ (1 ∪ 2 ∪ ...).
    /// 1 => v4.5: The common is built between all operands: 0 ∩ 1 ∩ 2 ∩ ...
    /// </summary>
    [SerializeMember]
    public int Version
    {
        get;
        set
        {
            if (field != value)
            {
                SaveUndo();
                field = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    } = 1;

    //--------------------------------------------------------------------------------------------------

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

    protected override TopoDS_Shape MakeBoolean(List<TopoDS_Shape> shapes, out SubshapeReferenceUtils.ModificationInfo modification)
    {
        if (Version < 1 || shapes.Count < 3)
        {
            return base.MakeBoolean(shapes, out modification);
        }

        modification = null;

        // Split all operands into cells in one general fuse pass, then
        // take only the cells which are inside of every operand.
        var shapeList = new TopTools_ListOfShape();
        foreach (var shape in shapes)
        {
            shapeList.Append(shape);
        }

        var builder = new BOPAlgo_CellsBuilder();
        builder.SetArguments(shapeList);
        builder.Perform();
        if (builder.HasErrors())
        {
            Messages.Error("Boolean operation failed.");
            return null;
        }

        builder.AddToResult(shapeList, new TopTools_ListOfShape());
        if (builder.HasErrors())
        {
            Messages.Error("Boolean operation failed.");
            return null;
        }

        var resultShape = builder.Shape();
        if (resultShape == null)
        {
            return null;
        }

        History.Merge(shapes, builder.History());
        modification = new(1, History, builder);
        return resultShape;
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnDeserialized(SerializationContext context)
    {
        // Undo, duplicate and copy/paste have no file version, the serialized version is kept then.
        if (context.Version != null && context.Version < new Version(4, 5))
        {
            Version = 0;
        }

        base.OnDeserialized(context);
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