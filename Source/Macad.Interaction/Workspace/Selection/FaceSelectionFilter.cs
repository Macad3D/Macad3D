using System;
using Macad.Occt;

namespace Macad.Interaction;

public sealed class FaceSelectionFilter : ISelectionFilter
{
    public enum FaceType
    {
        Any,
        Plane,
        Cylinder,
        Sphere,
        Torus,
        Revolution,
        Cone
    }

    //--------------------------------------------------------------------------------------------------

    readonly FaceType _FaceType = FaceType.Any;

    //--------------------------------------------------------------------------------------------------

    public FaceSelectionFilter(FaceType faceType)
    {
        _FaceType = faceType;
    }

    //--------------------------------------------------------------------------------------------------

    SelectMgr_Filter ISelectionFilter.GetNativeFilter()
    {
        return new StdSelect_FaceFilter(_GetNativeTypeOfFace(_FaceType));
    }
        
    //--------------------------------------------------------------------------------------------------

    StdSelect_TypeOfFace _GetNativeTypeOfFace(FaceType type)
    {
        switch (type)
        {
            case FaceType.Any:
                return StdSelect_TypeOfFace.AnyFace;
            case FaceType.Plane:
                return StdSelect_TypeOfFace.Plane;
            case FaceType.Cylinder:
                return StdSelect_TypeOfFace.Cylinder;
            case FaceType.Sphere:
                return StdSelect_TypeOfFace.Sphere;
            case FaceType.Torus:
                return StdSelect_TypeOfFace.Torus;
            case FaceType.Revolution:
                return StdSelect_TypeOfFace.Revol;
            case FaceType.Cone:
                return StdSelect_TypeOfFace.Cone;
            default:
                throw new ArgumentOutOfRangeException(nameof(type), type, null);
        }
    }
}