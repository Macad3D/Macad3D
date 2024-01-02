using System.Linq;
using Macad.Core.Geom;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Core.Toolkits;

public static class ConvertToSolid
{
    public static bool CollapseShapeStack(Body[] bodies, bool saveUndo = true)
    {
        var result = true;

        Shape[] originalShapes = bodies.Select(body => body.Shape)
                                       .Where(shape => shape.ShapeType is ShapeType.Solid or ShapeType.Mesh)
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

            var brep = originalBreps[i];
            if (brep == null)
            {
                result = false;
                continue;
            }

            if (originalShape.ShapeType == ShapeType.Mesh)
            {
                brep = _ConvertMeshToShape(originalBreps[i]);
                if (brep == null)
                {
                    Messages.Error("Converting mesh to brep failed.");
                    continue;
                }
            }

            Solid solid = Solid.Create(brep);
            bodies[i].CollapseShapeStack(solid, saveUndo);
        }

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    static TopoDS_Shape _ConvertMeshToShape(TopoDS_Shape originalBrep)
    {
        var brep = TriangulationHelper.MakeShapeOnTriangulation(originalBrep);
        if (brep == null)
            return null;

        // Sew
        BRepBuilderAPI_Sewing sewer = new();
        sewer.Add(brep);
        sewer.Perform();
        var sewedShells = sewer.SewedShape();
        if (sewedShells == null)
            return brep;

        // Shell -> Solid
        TopoDS_Compound sewedSolids = new TopoDS_Compound();
        var builder = new TopoDS_Builder();
        builder.MakeCompound(sewedSolids);
        foreach (var shell in sewedShells.Shells())
        {
            var solid = TopoUtils.MakeSolid(shell, true);
            if(solid == null)
                continue;
            builder.Add(sewedSolids, solid);
        }

        // Unify
        ShapeUpgrade_UnifySameDomain unify = new(sewedSolids, true, true, true);
        unify.Build();
        var unifiedBrep = unify.Shape();
        if (unifiedBrep == null)
            return sewedSolids;

        return unifiedBrep;
    }

    //--------------------------------------------------------------------------------------------------

}