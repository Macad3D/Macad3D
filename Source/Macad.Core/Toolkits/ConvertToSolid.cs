using System.Linq;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Core.Toolkits;

public static class ConvertToSolid
{
    public static bool CollapseShapeStack(Body[] bodies, bool saveUndo = true)
    {
        var result = true;

        Shape[] originalShapes = bodies.Select(body => body.Shape)
                                       .Where(shape => shape.ShapeType == ShapeType.Solid)
                                       .ToArray();
        if (originalShapes.Length == 0)
            return false; // Nothing to do

        TopoDS_Shape[] originalBreps = originalShapes.Select(shape => shape.GetBRep())
                                                     .ToArray();

        for (var i = 0; i < bodies.Length; i++)
        {
            var originalShape = originalShapes[i];
            if (originalShape is Solid)
            {
                continue;
            }

            if (originalBreps[i] == null)
            {
                result = false;
                continue;
            }

            Solid solid = Solid.Create(originalBreps[i]);
            bodies[i].CollapseShapeStack(solid, saveUndo);
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

}