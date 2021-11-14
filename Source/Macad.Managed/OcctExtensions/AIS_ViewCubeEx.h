#pragma once

#include <AIS_ViewCube.hxx>

DEFINE_STANDARD_HANDLE(AIS_ViewCubeEx, AIS_ViewCube)


public class AIS_ViewCubeEx : public ::AIS_ViewCube
{
	DEFINE_STANDARD_RTTIEXT(AIS_ViewCubeEx, AIS_ViewCube)

public:
	void Compute(const opencascade::handle<PrsMgr_PresentationManager>& thePrsMgr,
	             const opencascade::handle<Prs3d_Presentation>& thePrs,
	             const Standard_Integer theMode) override;

	void HilightOwnerWithColor(const Handle(PrsMgr_PresentationManager)& thePrsMgr,
	                           const Handle(Prs3d_Drawer)& theStyle,
	                           const Handle(SelectMgr_EntityOwner)& theOwner) override;
	
	void SetTexture(const opencascade::handle<Image_PixMap>& thePixMap);
	
protected:
	void createBoxSideTriangles(const Handle(Graphic3d_ArrayOfTriangles)& theTris,
	                            Standard_Integer& theNbNodes, Standard_Integer& theNbTris,
	                            V3d_TypeOfOrientation theDirection) const override;
};
