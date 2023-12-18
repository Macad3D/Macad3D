#include "OcctPCH.h"
#include "..\Generated\Geom2dAPI.h"

System::Tuple<double,double>^ Macad::Occt::Geom2dAPI_InterCurveCurve::Params(const int Index)
{
    if(Index < 1 || Index > NativeInstance->NbPoints())
        throw gcnew System::ArgumentOutOfRangeException("Index must by between 1 and NbPoints.");

    ::IntRes2d_IntersectionPoint interPnt = NativeInstance->Intersector().Point(Index);
    return gcnew System::Tuple<double,double>(interPnt.ParamOnFirst(), interPnt.ParamOnSecond());
}

