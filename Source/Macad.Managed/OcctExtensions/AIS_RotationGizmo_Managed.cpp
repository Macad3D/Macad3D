
#include "ManagedPCH.h"

#include "AIS_RotationGizmo_Managed.h"



//---------------------------------------------------------------------
//  Class  AIS_RotationGizmo
//---------------------------------------------------------------------

Macad::Occt::Ext::AIS_RotationGizmo::AIS_RotationGizmo(Ax3 aCoordinateSystem)
	: Macad::Occt::AIS_InteractiveObject(InitMode::Uninitialized)
{
	STRUCT_PIN(aCoordinateSystem, Ax3, gp_Ax3);
	NativeInstance = new ::AIS_RotationGizmo(*aCoordinateSystem_ptr);
}

Macad::Occt::Ax3 Macad::Occt::Ext::AIS_RotationGizmo::Component()
{
	return Ax3((::gp_Ax3)NativeInstance->Component());
}

void Macad::Occt::Ext::AIS_RotationGizmo::SetComponent(Ax3 aCoordinateSystem)
{
	STRUCT_PIN(aCoordinateSystem, Ax3, gp_Ax3);
	NativeInstance->SetComponent(*aCoordinateSystem_ptr);
}

void Macad::Occt::Ext::AIS_RotationGizmo::SetLength(double theLength)
{
	NativeInstance->SetLength(theLength);
}

double Macad::Occt::Ext::AIS_RotationGizmo::GetLength()
{
	return NativeInstance->GetLength();
}

bool Macad::Occt::Ext::AIS_RotationGizmo::AcceptDisplayMode(int aMode)
{
	return NativeInstance->AcceptDisplayMode(aMode) ? true : false;
}

int Macad::Occt::Ext::AIS_RotationGizmo::Signature()
{
	return NativeInstance->Signature();
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::Ext::AIS_RotationGizmo::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)NativeInstance->Type();
}
