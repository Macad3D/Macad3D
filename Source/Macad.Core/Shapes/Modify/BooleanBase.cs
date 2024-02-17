using Macad.Occt;

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

        var shapeListArgs = new TopTools_ListOfShape();
        shapeListArgs.Append(shapeA);

        var shapeListTools = new TopTools_ListOfShape();
        for (int operandIndex = 1; operandIndex < Operands.Count; operandIndex++)
        {
            var shapeB = GetOperandBRep(operandIndex);
            if (shapeB == null)
                return false;

            shapeListTools.Append(shapeB);
        }

        var algo = CreateAlgoApi();
        algo.SetArguments(shapeListArgs);
        algo.SetTools(shapeListTools);
        algo.Build();
        if (!algo.IsDone())
        {
            Messages.Error("Boolean operation failed.");
            return false;
        }

        if (SimplifyResult)
        {
            algo.SimplifyResult(true, true);
        }

        var resultShape = algo.Shape();
        if (resultShape == null)
        {
            return false;
        }

        UpdateModifiedSubshapes(shapeA, algo);
        foreach (var shapeB in shapeListTools.ToList())
            UpdateModifiedSubshapes(shapeB, algo);

        BRep = resultShape;

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    protected abstract BRepAlgoAPI_BooleanOperation CreateAlgoApi();

    //--------------------------------------------------------------------------------------------------

    #endregion

}