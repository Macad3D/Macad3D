using System;
using Macad.Occt;

namespace Macad.Core;

public static class ConstructionMessages
{
    public static string Explain(BRepOffset_Error errorCode)
    {
        switch (errorCode)
        {
            case BRepOffset_Error.BadNormalsOnGeometry:
                break;
            case BRepOffset_Error.C0Geometry:
                break;
            case BRepOffset_Error.NullOffset:
                return "The offset or thickening operation failed because the offset value is 0.";
            case BRepOffset_Error.NotConnectedShell:
                break;
            case BRepOffset_Error.CannotTrimEdges:
                return "The offset or thickening operation failed trimming edges.";
            case BRepOffset_Error.CannotFuseVertices:
                return "The offset or thickening operation failed fusing edges.";
            case BRepOffset_Error.CannotExtentEdge:
                return "The offset or thickening operation failed extending edges.";
            case BRepOffset_Error.MixedConnectivity:
                return "The offset or thickening operation failed because the input shape contains adjacent faces that do not maintain consistent geometric continuity along every point of their shared edge.";
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

}