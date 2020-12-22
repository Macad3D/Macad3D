
#include "ManagedPCH.h"

#include "AIS_TranslationGizmo_Managed.h"



//---------------------------------------------------------------------
//  Class  AIS_TranslationGizmo
//---------------------------------------------------------------------

Macad::Occt::Ext::AIS_TranslationGizmo::AIS_TranslationGizmo(Ax3 aCoordinateSystem)
	: Macad::Occt::AIS_InteractiveObject(InitMode::Uninitialized)
{
	STRUCT_PIN(aCoordinateSystem, Ax3, gp_Ax3);
	NativeInstance = new ::AIS_TranslationGizmo(*aCoordinateSystem_ptr);
}

Macad::Occt::Ax3 Macad::Occt::Ext::AIS_TranslationGizmo::Component()
{
	return Ax3((::gp_Ax3)NativeInstance->Component());
}

void Macad::Occt::Ext::AIS_TranslationGizmo::SetComponent(Ax3 aCoordinateSystem)
{
	STRUCT_PIN(aCoordinateSystem, Ax3, gp_Ax3);
	NativeInstance->SetComponent(*aCoordinateSystem_ptr);
}

void Macad::Occt::Ext::AIS_TranslationGizmo::SetLength(double theLength)
{
	NativeInstance->SetLength(theLength);
}

double Macad::Occt::Ext::AIS_TranslationGizmo::GetLength()
{
	return NativeInstance->GetLength();
}

bool Macad::Occt::Ext::AIS_TranslationGizmo::AcceptDisplayMode(int aMode)
{
	return NativeInstance->AcceptDisplayMode(aMode) ? true : false;
}

int Macad::Occt::Ext::AIS_TranslationGizmo::Signature()
{
	return NativeInstance->Signature();
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::Ext::AIS_TranslationGizmo::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)NativeInstance->Type();
}
