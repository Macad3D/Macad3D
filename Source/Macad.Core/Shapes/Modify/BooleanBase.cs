using Macad.Occt;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Shapes;

namespace Macad.Core.Shapes;

public abstract class BooleanBase : ModifierBase
{
    public override ShapeType ShapeType
    {
        get { return ShapeType.Solid; }
    }

    //--------------------------------------------------------------------------------------------------

    protected virtual bool SimplifyResult => false;

    //--------------------------------------------------------------------------------------------------

    #region Make

    protected override bool MakeInternal(MakeFlags flags)
    {
        BRep = null;
        ClearSubshapeLists();

        if (Operands.Count < 2)
        {
            Messages.Error("Boolean operations need at least two operand shapes.");
            return false;
        }

        var shapeA = GetOperandBRep(0);
        if (shapeA == null)
            return false;

        List<TopoDS_Shape> shapeList = [shapeA];
        for (int operandIndex = 1; operandIndex < Operands.Count; operandIndex++)
        {
            var shapeB = GetOperandBRep(operandIndex);
            if (shapeB == null)
                return false;

            shapeList.Add(shapeB);
        }

        var resultShape = MakeBoolean(shapeList, out var modification);
        if (resultShape == null)
        {
            return false;
        }

        SubshapeReferenceUtils.CreateSubshapeNames("Boolean", shapeList, [modification], AddNamedSubshape);
        BRep = resultShape;

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Performs the boolean operation.
    /// The default implementation uses the algorithm created by <see cref="CreateAlgoApi"/>,
    /// which treats all tool shapes as one group.
    /// </summary>
    /// <param name="shapes">All input shapes, the arguments followed by the tools.</param>
    /// <param name="modification">Receives the modification info used to create the subshape names.</param>
    /// <returns>The result shape, or null if the operation failed.</returns>
    protected virtual TopoDS_Shape MakeBoolean(List<TopoDS_Shape> shapes, out SubshapeReferenceUtils.ModificationInfo modification)
    {
        modification = null;

        var shapeListArgs = new TopTools_ListOfShape();
        shapeListArgs.Append(shapes[0]);

        var shapeListTools = new TopTools_ListOfShape();
        for (int index = 1; index < shapes.Count; index++)
        {
            shapeListTools.Append(shapes[index]);
        }

        var algo = CreateAlgoApi();
        algo.SetArguments(shapeListArgs);
        algo.SetTools(shapeListTools);
        algo.Build();
        if (!algo.IsDone())
        {
            Messages.Error("Boolean operation failed.");
            return null;
        }

        if (SimplifyResult)
        {
            algo.SimplifyResult(true, true);
        }

        var resultShape = algo.Shape();
        if (resultShape == null)
        {
            return null;
        }

        History.Merge(shapes, algo.History());
        modification = new(1, History, algo);
        return resultShape;
    }

    //--------------------------------------------------------------------------------------------------

    protected abstract BRepAlgoAPI_BooleanOperation CreateAlgoApi();

    //--------------------------------------------------------------------------------------------------

    #endregion

}