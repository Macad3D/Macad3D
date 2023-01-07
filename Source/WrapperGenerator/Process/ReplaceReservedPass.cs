namespace Macad.Occt.Generator;

public class ReplaceReservedPass : Pass
{
    protected override bool ProcessMethod(MethodDecl md)
    {
        if (md.Name == "GetType")
        {
            md.Name = md.Type.Name switch
            {
                "GeomAbs_CurveType" => "GetCurveType",
                "GeomAbs_SurfaceType" => "GetSurfaceType",
                _ => md.Name
            };
        }
        return true;
    }
}