#pragma once

#pragma managed( push, off )

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Standard_CString.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Transient.hxx>

#include <TColgp_Array1OfPnt.hxx>
#include <TColgp_HArray1OfPnt.hxx>
#include <TCollection_AsciiString.hxx>

#include <UnitsAPI.hxx>
#include <Precision.hxx>

#include <Message_Printer.hxx>
#include <Message_Messenger.hxx>

#include <gp_Pnt.hxx>
#include <gp_Dir.hxx>
#include <gp_Ax1.hxx>
#include <gp_Ax2.hxx>
#include <gp_Pln.hxx>
#include <gp_Vec.hxx>

#include <Geom_Axis1Placement.hxx>
#include <Geom_Line.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Transformation.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom_Circle.hxx>

#include <GeomAdaptor_Curve.hxx>
#include <GeomAdaptor_Surface.hxx>

#include <ElSLib.hxx>
#include <ElCLib.hxx>

#include <Prs3d_Arrow.hxx>
#include <Prs3d_BndBox.hxx>
#include <Prs3d_ToolSector.hxx>
#include <Prs3d_ToolDisk.hxx>
#include <Prs3d_ToolCylinder.hxx>

#include <Quantity_Color.hxx>
#include <Quantity_NameOfColor.hxx>

#include <StdPrs_Curve.hxx>
#include <StdPrs_Plane.hxx>
#include <StdPrs_ShadedSurface.hxx>
#include <StdPrs_ShadedShape.hxx>
#include <StdPrs_DeflectionCurve.hxx>
#include <StdPrs_Point.hxx>

#include <TopoDS.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_Builder.hxx>

#include <TopExp_Explorer.hxx>

#include <BRep_Builder.hxx>

#include <BRepTools.hxx>

#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_MakeShapeOnMesh.hxx>

#include <BRepMesh_ShapeTool.hxx>
#include <BRepMesh_IncrementalMesh.hxx>

#include <Poly.hxx>
#include <Poly_Triangulation.hxx>

#include <Image_PixMap.hxx>
#include <Image_AlienPixMap.hxx>

#include <Aspect_DisplayConnection.hxx>
#include <Aspect_TypeOfLine.hxx>
#include <Aspect_RectangularGrid.hxx>

#include <PrsMgr_PresentationManager.hxx>

#include <Prs3d_Presentation.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_Drawer.hxx>
#include <Prs3d_DatumAspect.hxx>
#include <Prs3d_ShadingAspect.hxx>
#include <Prs3d_PlaneAspect.hxx>
#include <Prs3d_ArrowAspect.hxx>

#include <DsgPrs_DatumPrs.hxx>
#include <DsgPrs_XYZAxisPresentation.hxx>
#include <DsgPrs_XYZPlanePresentation.hxx>
#include <DsgPrs_ShadedPlanePresentation.hxx>

#include <Graphic3d_CView.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_AspectLine3d.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfPoints.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_MaterialAspect.hxx>
#include <Graphic3d_AspectFillArea3d.hxx>
#include <Graphic3d_ArrayOfQuadrangles.hxx>
#include <Graphic3d_Group.hxx>
#include <Graphic3d_TextureParams.hxx>
#include <Graphic3d_Texture2Dmanual.hxx>

#include <V3d.hxx>
#pragma warning( suppress: 4996 ) // Deprecation warning for Handle_Graphic3d_CLight
#include <V3d_View.hxx>

#include <SelectMgr_Selection.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_Selection.hxx>
#include <SelectMgr_SelectableObject.hxx>
#include <SelectMgr_SequenceOfOwner.hxx>

#include <SelectBasics_EntityOwner.hxx>

#include <StdSelect_Shape.hxx>
#include <StdSelect_BRepOwner.hxx>

#include <Select3D_SensitiveSegment.hxx>
#include <Select3D_SensitivePoint.hxx>
#include <Select3D_SensitiveFace.hxx>
#include <Select3D_SensitiveTriangulation.hxx>
#include <Select3D_SensitiveCircle.hxx>
#include <Select3D_SensitiveCylinder.hxx>
#include <Select3D_SensitivePoly.hxx>

#include <AIS_KindOfInteractive.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_Point.hxx>
#include <AIS_Axis.hxx>
#include <AIS_Line.hxx>
#include <AIS_Plane.hxx>
#include <AIS_Circle.hxx>
#include <AIS_InteractiveContext.hxx>
#include <AIS_GraphicTool.hxx>
#include <AIS_RubberBand.hxx>
#include <AIS_ViewCube.hxx>

#include <OpenGl_ArbFBO.hxx>
#include <OpenGl_GlCore20.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include "OpenGl_Workspace.hxx"
#include "OpenGl_Element.hxx"
#include "OpenGl_Group.hxx"

#include <WNT_Window.hxx>

#pragma managed( pop )
