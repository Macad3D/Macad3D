using Macad.Occt;

namespace Macad.Core;

public static class TopLocExtension
{
    public static Ax3 ToAx3(this TopLoc_Location rotation)
    {
        var trsf = rotation.Transformation();
        return trsf.GetRotation().ToAx3(trsf.TranslationPart().ToPnt());
    }

}