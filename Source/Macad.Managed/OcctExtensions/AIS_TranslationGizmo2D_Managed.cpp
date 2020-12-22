
#include "ManagedPCH.h"

#include "AIS_TranslationGizmo2D_Managed.h"



//---------------------------------------------------------------------
//  Class  AIS_PlaneTrihedron
//---------------------------------------------------------------------

Macad::Occt::Ext::AIS_TranslationGizmo2D::AIS_TranslationGizmo2D(Macad::Occt::Geom_Plane^ aPlane)
	: Macad::Occt::AIS_InteractiveObject(InitMode::Uninitialized)
{
	NativeInstance = new ::AIS_TranslationGizmo2D(aPlane->NativeInstance);
}

Macad::Occt::Geom_Plane^ Macad::Occt::Ext::AIS_TranslationGizmo2D::Component()
{
	return gcnew Macad::Occt::Geom_Plane(*NativeInstance->Component());
}

void Macad::Occt::Ext::AIS_TranslationGizmo2D::SetComponent(Macad::Occt::Geom_Plane^ aPlane)
{
	NativeInstance->SetComponent(aPlane->NativeInstance);
}


void Macad::Occt::Ext::AIS_TranslationGizmo2D::SetLength(double theLength)
{
	NativeInstance->SetLength(theLength);
}

double Macad::Occt::Ext::AIS_TranslationGizmo2D::GetLength()
{
	return NativeInstance->GetLength();
}

bool Macad::Occt::Ext::AIS_TranslationGizmo2D::AcceptDisplayMode(int aMode)
{
	return NativeInstance->AcceptDisplayMode(aMode) ? true : false;
}

int Macad::Occt::Ext::AIS_TranslationGizmo2D::Signature()
{
	return NativeInstance->Signature();
}

Macad::Occt::AIS_KindOfInteractive Macad::Occt::Ext::AIS_TranslationGizmo2D::Type()
{
	return (Macad::Occt::AIS_KindOfInteractive)NativeInstance->Type();
}
