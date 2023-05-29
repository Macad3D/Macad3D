using Macad.Core.Shapes;
using Macad.Core.Topology;

namespace Macad.Core.Toolkits;

public class ConvertToSolid
{
    public static bool CollapseShapeStack(Body body, bool saveUndo = true)
    {
        Shape originalShape = body.Shape;
        if (originalShape is Solid)
            return true; // Nothing to do

        if (originalShape.ShapeType != ShapeType.Solid)
            return false;

        var brep = originalShape.GetBRep();
        if (brep == null)
            return false;

        Solid solid = Solid.Create(brep);
        body.CollapseShapeStack(solid, saveUndo);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

}