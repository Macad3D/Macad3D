#include "OcctPCH.h"


#pragma comment(lib, "TKernel.lib")
#pragma comment(lib, "TKMath.lib")

#pragma comment(lib, "TKG3d.lib")
#pragma comment(lib, "TKGeomBase.lib")
#pragma comment(lib, "TKG2d.lib")
#pragma comment(lib, "TKBRep.lib")

#pragma comment(lib, "TKPrim.lib")
#pragma comment(lib, "TKOffset.lib")
#pragma comment(lib, "TKFillet.lib")
#pragma comment(lib, "TKBool.lib")
#pragma comment(lib, "TKFeat.lib")
#pragma comment(lib, "TKBO.lib")
#pragma comment(lib, "TKTopAlgo.lib")
#pragma comment(lib, "TKGeomAlgo.lib")
#pragma comment(lib, "TKShHealing")
#pragma comment(lib, "TKHLR")

#pragma comment(lib, "TKService.lib")
#pragma comment(lib, "TKV3d.lib")
#pragma comment(lib, "TKOpenGl.lib")


using namespace System::Diagnostics;

[assembly:DebuggerDisplay("{ShapeType()} {GetHashCode().ToString(\"X\")}", Target = Macad::Occt::TopoDS_Shape::typeid)];
[assembly:DebuggerDisplay("{ShapeType()} {GetHashCode().ToString(\"X\")}", Target = Macad::Occt::TopoDS_Vertex::typeid)];
[assembly:DebuggerDisplay("{ShapeType()} {GetHashCode().ToString(\"X\")}", Target = Macad::Occt::TopoDS_Edge::typeid)];
[assembly:DebuggerDisplay("{ShapeType()} {GetHashCode().ToString(\"X\")}", Target = Macad::Occt::TopoDS_Face::typeid)];
[assembly:DebuggerDisplay("{ShapeType()} {GetHashCode().ToString(\"X\")}", Target = Macad::Occt::TopoDS_Wire::typeid)];
[assembly:DebuggerDisplay("{ShapeType()} {GetHashCode().ToString(\"X\")}", Target = Macad::Occt::TopoDS_Shell::typeid)];
[assembly:DebuggerDisplay("{ShapeType()} {GetHashCode().ToString(\"X\")}", Target = Macad::Occt::TopoDS_Solid::typeid)];
[assembly:DebuggerDisplay("{ShapeType()} {GetHashCode().ToString(\"X\")}", Target = Macad::Occt::TopoDS_CompSolid::typeid)];
[assembly:DebuggerDisplay("{ShapeType()} {GetHashCode().ToString(\"X\")}", Target = Macad::Occt::TopoDS_Compound::typeid)];

[assembly:DebuggerDisplay("{CornerMin()} {CornerMax()}", Target = Macad::Occt::Bnd_Box::typeid)] ;
[assembly:DebuggerDisplay("{CornerMin()} {CornerMax()}", Target = Macad::Occt::Bnd_Box2d::typeid)] ;
