#include "OcctPCH.h"
#include "..\Generated\Geom2dAPI.h"

System::Tuple<double,double>^ Macad::Occt::Geom2dAPI_InterCurveCurve::Params(const int Index)
{
    if(Index < 1 || Index > NativeInstance->NbPoints())
        throw ::Standard_OutOfRange("Geom2dAPI_InterCurveCurve::Param");

    ::IntRes2d_IntersectionPoint interPnt = NativeInstance->Intersector().Point(Index);
    return gcnew System::Tuple<double,double>(interPnt.ParamOnFirst(), interPnt.ParamOnSecond());
}

