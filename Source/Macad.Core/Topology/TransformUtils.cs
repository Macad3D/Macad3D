using Macad.Occt;

namespace Macad.Core.Topology;

public static class TransformUtils
{
    public static void Translate(ITransformable entity, Vec vec)
    {
        entity.Position = entity.Position.Translated(vec);
    }

    //--------------------------------------------------------------------------------------------------

    public static void Rotate(ITransformable entity, Ax1 rotationAxis, double angle)
    {
        var rotTrsf = new Trsf(rotationAxis, angle);

        var trsf = rotTrsf.Multiplied(new Trsf(entity.Rotation, entity.Position.ToVec()));
        entity.Position = trsf.TranslationPart().ToPnt();
        entity.Rotation = trsf.GetRotation();
    }
}