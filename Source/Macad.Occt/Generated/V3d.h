// Generated wrapper code for package V3d

#pragma once

#include "Graphic3d.h"
#include "Standard.h"
#include "Aspect.h"
#include "V3d.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  V3d_TypeOfOrientation
//---------------------------------------------------------------------
public enum class V3d_TypeOfOrientation
{
	V3d_Xpos = 0,
	V3d_Ypos = 1,
	V3d_Zpos = 2,
	V3d_Xneg = 3,
	V3d_Yneg = 4,
	V3d_Zneg = 5,
	V3d_XposYpos = 6,
	V3d_XposZpos = 7,
	V3d_YposZpos = 8,
	V3d_XnegYneg = 9,
	V3d_XnegYpos = 10,
	V3d_XnegZneg = 11,
	V3d_XnegZpos = 12,
	V3d_YnegZneg = 13,
	V3d_YnegZpos = 14,
	V3d_XposYneg = 15,
	V3d_XposZneg = 16,
	V3d_YposZneg = 17,
	V3d_XposYposZpos = 18,
	V3d_XposYnegZpos = 19,
	V3d_XposYposZneg = 20,
	V3d_XnegYposZpos = 21,
	V3d_XposYnegZneg = 22,
	V3d_XnegYposZneg = 23,
	V3d_XnegYnegZpos = 24,
	V3d_XnegYnegZneg = 25,
	V3d_TypeOfOrientation_Zup_AxoLeft = 24,
	V3d_TypeOfOrientation_Zup_AxoRight = 19,
	V3d_TypeOfOrientation_Zup_Front = 4,
	V3d_TypeOfOrientation_Zup_Back = 1,
	V3d_TypeOfOrientation_Zup_Top = 2,
	V3d_TypeOfOrientation_Zup_Bottom = 5,
	V3d_TypeOfOrientation_Zup_Left = 3,
	V3d_TypeOfOrientation_Zup_Right = 0,
	V3d_TypeOfOrientation_Yup_AxoLeft = 21,
	V3d_TypeOfOrientation_Yup_AxoRight = 18,
	V3d_TypeOfOrientation_Yup_Front = 2,
	V3d_TypeOfOrientation_Yup_Back = 5,
	V3d_TypeOfOrientation_Yup_Top = 1,
	V3d_TypeOfOrientation_Yup_Bottom = 4,
	V3d_TypeOfOrientation_Yup_Left = 0,
	V3d_TypeOfOrientation_Yup_Right = 3
}; // enum  class V3d_TypeOfOrientation

//---------------------------------------------------------------------
//  Enum  V3d_TypeOfPickLight
//---------------------------------------------------------------------
public enum class V3d_TypeOfPickLight
{
	V3d_POSITIONLIGHT = 0,
	V3d_SPACELIGHT = 1,
	V3d_RADIUSTEXTLIGHT = 2,
	V3d_ExtRADIUSLIGHT = 3,
	V3d_IntRADIUSLIGHT = 4,
	V3d_NOTHING = 5
}; // enum  class V3d_TypeOfPickLight

//---------------------------------------------------------------------
//  Enum  V3d_TypeOfRepresentation
//---------------------------------------------------------------------
public enum class V3d_TypeOfRepresentation
{
	V3d_SIMPLE = 0,
	V3d_COMPLETE = 1,
	V3d_PARTIAL = 2,
	V3d_SAMELAST = 3
}; // enum  class V3d_TypeOfRepresentation

//---------------------------------------------------------------------
//  Enum  V3d_StereoDumpOptions
//---------------------------------------------------------------------
public enum class V3d_StereoDumpOptions
{
	V3d_SDO_MONO = 0,
	V3d_SDO_LEFT_EYE = 1,
	V3d_SDO_RIGHT_EYE = 2,
	V3d_SDO_BLENDED = 3
}; // enum  class V3d_StereoDumpOptions

//---------------------------------------------------------------------
//  Enum  V3d_TypeOfAxe
//---------------------------------------------------------------------
public enum class V3d_TypeOfAxe
{
	V3d_X = 0,
	V3d_Y = 1,
	V3d_Z = 2
}; // enum  class V3d_TypeOfAxe

//---------------------------------------------------------------------
//  Enum  V3d_TypeOfBackfacingModel
//---------------------------------------------------------------------
public enum class V3d_TypeOfBackfacingModel
{
	V3d_TOBM_AUTOMATIC = 0,
	V3d_TOBM_ALWAYS_DISPLAYED = 1,
	V3d_TOBM_NEVER_DISPLAYED = 2
}; // enum  class V3d_TypeOfBackfacingModel

//---------------------------------------------------------------------
//  Enum  V3d_TypeOfView
//---------------------------------------------------------------------
public enum class V3d_TypeOfView
{
	V3d_ORTHOGRAPHIC = 0,
	V3d_PERSPECTIVE = 1
}; // enum  class V3d_TypeOfView

//---------------------------------------------------------------------
//  Enum  V3d_TypeOfVisualization
//---------------------------------------------------------------------
public enum class V3d_TypeOfVisualization
{
	V3d_WIREFRAME = 0,
	V3d_ZBUFFER = 1
}; // enum  class V3d_TypeOfVisualization

//---------------------------------------------------------------------
//  Enum  V3d_TypeOfPickCamera
//---------------------------------------------------------------------
public enum class V3d_TypeOfPickCamera
{
	V3d_POSITIONCAMERA = 0,
	V3d_SPACECAMERA = 1,
	V3d_RADIUSTEXTCAMERA = 2,
	V3d_ExtRADIUSCAMERA = 3,
	V3d_IntRADIUSCAMERA = 4,
	V3d_NOTHINGCAMERA = 5
}; // enum  class V3d_TypeOfPickCamera

//---------------------------------------------------------------------
//  Class  V3d_ListOfLight
//---------------------------------------------------------------------
public ref class V3d_ListOfLight sealed : public BaseClass<::V3d_ListOfLight>
{

#ifdef Include_V3d_ListOfLight_h
public:
	Include_V3d_ListOfLight_h
#endif

public:
	V3d_ListOfLight(::V3d_ListOfLight* nativeInstance)
		: BaseClass<::V3d_ListOfLight>( nativeInstance, true )
	{}

	V3d_ListOfLight(::V3d_ListOfLight& nativeInstance)
		: BaseClass<::V3d_ListOfLight>( &nativeInstance, false )
	{}

	property ::V3d_ListOfLight* NativeInstance
	{
		::V3d_ListOfLight* get()
		{
			return static_cast<::V3d_ListOfLight*>(_NativeInstance);
		}
	}

public:
	V3d_ListOfLight();
	V3d_ListOfLight(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	V3d_ListOfLight(Macad::Occt::V3d_ListOfLight^ theOther);
	int Size();
	Macad::Occt::V3d_ListOfLight^ Assign(Macad::Occt::V3d_ListOfLight^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::Graphic3d_CLight^ First();
	Macad::Occt::Graphic3d_CLight^ Last();
	Macad::Occt::Graphic3d_CLight^ Append(Macad::Occt::Graphic3d_CLight^ theItem);
	/* Method skipped due to unknown mapping: void Append(Graphic3d_CLight theItem, Iterator theIter, ) */
	void Append(Macad::Occt::V3d_ListOfLight^ theOther);
	Macad::Occt::Graphic3d_CLight^ Prepend(Macad::Occt::Graphic3d_CLight^ theItem);
	void Prepend(Macad::Occt::V3d_ListOfLight^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Graphic3d_CLight InsertBefore(Graphic3d_CLight theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(V3d_ListOfLight theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: Graphic3d_CLight InsertAfter(Graphic3d_CLight theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(V3d_ListOfLight theOther, Iterator theIter, ) */
	void Reverse();
}; // class V3d_ListOfLight

//---------------------------------------------------------------------
//  Class  V3d_ListOfView
//---------------------------------------------------------------------
public ref class V3d_ListOfView sealed : public BaseClass<::V3d_ListOfView>
{

#ifdef Include_V3d_ListOfView_h
public:
	Include_V3d_ListOfView_h
#endif

public:
	V3d_ListOfView(::V3d_ListOfView* nativeInstance)
		: BaseClass<::V3d_ListOfView>( nativeInstance, true )
	{}

	V3d_ListOfView(::V3d_ListOfView& nativeInstance)
		: BaseClass<::V3d_ListOfView>( &nativeInstance, false )
	{}

	property ::V3d_ListOfView* NativeInstance
	{
		::V3d_ListOfView* get()
		{
			return static_cast<::V3d_ListOfView*>(_NativeInstance);
		}
	}

public:
	V3d_ListOfView();
	V3d_ListOfView(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	V3d_ListOfView(Macad::Occt::V3d_ListOfView^ theOther);
	int Size();
	Macad::Occt::V3d_ListOfView^ Assign(Macad::Occt::V3d_ListOfView^ theOther);
	void Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator);
	void Clear();
	Macad::Occt::V3d_View^ First();
	Macad::Occt::V3d_View^ Last();
	Macad::Occt::V3d_View^ Append(Macad::Occt::V3d_View^ theItem);
	/* Method skipped due to unknown mapping: void Append(V3d_View theItem, Iterator theIter, ) */
	void Append(Macad::Occt::V3d_ListOfView^ theOther);
	Macad::Occt::V3d_View^ Prepend(Macad::Occt::V3d_View^ theItem);
	void Prepend(Macad::Occt::V3d_ListOfView^ theOther);
	void RemoveFirst();
	/* Method skipped due to unknown mapping: void Remove(Iterator theIter, ) */
	/* Method skipped due to unknown mapping: V3d_View InsertBefore(V3d_View theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertBefore(V3d_ListOfView theOther, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: V3d_View InsertAfter(V3d_View theItem, Iterator theIter, ) */
	/* Method skipped due to unknown mapping: void InsertAfter(V3d_ListOfView theOther, Iterator theIter, ) */
	void Reverse();
}; // class V3d_ListOfView

//---------------------------------------------------------------------
//  Class  V3d_ImageDumpOptions
//---------------------------------------------------------------------
public ref class V3d_ImageDumpOptions sealed : public BaseClass<::V3d_ImageDumpOptions>
{

#ifdef Include_V3d_ImageDumpOptions_h
public:
	Include_V3d_ImageDumpOptions_h
#endif

public:
	V3d_ImageDumpOptions(::V3d_ImageDumpOptions* nativeInstance)
		: BaseClass<::V3d_ImageDumpOptions>( nativeInstance, true )
	{}

	V3d_ImageDumpOptions(::V3d_ImageDumpOptions& nativeInstance)
		: BaseClass<::V3d_ImageDumpOptions>( &nativeInstance, false )
	{}

	property ::V3d_ImageDumpOptions* NativeInstance
	{
		::V3d_ImageDumpOptions* get()
		{
			return static_cast<::V3d_ImageDumpOptions*>(_NativeInstance);
		}
	}

public:
	V3d_ImageDumpOptions();
	V3d_ImageDumpOptions(Macad::Occt::V3d_ImageDumpOptions^ parameter1);
}; // class V3d_ImageDumpOptions

//---------------------------------------------------------------------
//  Class  V3d_View
//---------------------------------------------------------------------
public ref class V3d_View sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_V3d_View_h
public:
	Include_V3d_View_h
#endif

public:
	V3d_View(::V3d_View* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	V3d_View(::V3d_View& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::V3d_View* NativeInstance
	{
		::V3d_View* get()
		{
			return static_cast<::V3d_View*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_View^ CreateDowncasted(::V3d_View* instance);

public:
	V3d_View(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::V3d_TypeOfView theType);
	V3d_View(Macad::Occt::V3d_Viewer^ theViewer);
	V3d_View(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::V3d_View^ theView);
	V3d_View(Macad::Occt::V3d_View^ parameter1);
	void SetWindow(Macad::Occt::Aspect_Window^ theWindow, System::IntPtr theContext);
	void SetWindow(Macad::Occt::Aspect_Window^ theWindow);
	void SetMagnify(Macad::Occt::Aspect_Window^ theWindow, Macad::Occt::V3d_View^ thePreviousView, int theX1, int theY1, int theX2, int theY2);
	void Remove();
	void Update();
	void Redraw();
	void RedrawImmediate();
	void Invalidate();
	bool IsInvalidated();
	bool IsInvalidatedImmediate();
	void InvalidateImmediate();
	void MustBeResized();
	void DoMapping();
	bool IsEmpty();
	void UpdateLights();
	void SetAutoZFitMode(bool theIsOn, double theScaleFactor);
	void SetAutoZFitMode(bool theIsOn);
	bool AutoZFitMode();
	double AutoZFitScaleFactor();
	void AutoZFit();
	void ZFitAll(double theScaleFactor);
	void ZFitAll();
	void SetBackgroundColor(Macad::Occt::Quantity_TypeOfColor theType, double theV1, double theV2, double theV3);
	void SetBackgroundColor(Macad::Occt::Quantity_Color^ theColor);
	void SetBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theFillStyle, bool theToUpdate);
	void SetBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theFillStyle);
	void SetBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2);
	void SetBgGradientStyle(Macad::Occt::Aspect_GradientFillMethod theMethod, bool theToUpdate);
	void SetBgGradientStyle(Macad::Occt::Aspect_GradientFillMethod theMethod);
	void SetBgGradientStyle();
	void SetBackgroundImage(System::String^ theFileName, Macad::Occt::Aspect_FillMethod theFillStyle, bool theToUpdate);
	void SetBackgroundImage(System::String^ theFileName, Macad::Occt::Aspect_FillMethod theFillStyle);
	void SetBackgroundImage(System::String^ theFileName);
	void SetBgImageStyle(Macad::Occt::Aspect_FillMethod theFillStyle, bool theToUpdate);
	void SetBgImageStyle(Macad::Occt::Aspect_FillMethod theFillStyle);
	void SetBackgroundCubeMap(Macad::Occt::Graphic3d_CubeMap^ theCubeMap, bool theToUpdate);
	void SetBackgroundCubeMap(Macad::Occt::Graphic3d_CubeMap^ theCubeMap);
	void SetAxis(double X, double Y, double Z, double Vx, double Vy, double Vz);
	void SetShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theShadingModel);
	void SetTextureEnv(Macad::Occt::Graphic3d_TextureEnv^ theTexture);
	void SetVisualization(Macad::Occt::V3d_TypeOfVisualization theType);
	void SetLightOn(Macad::Occt::Graphic3d_CLight^ theLight);
	void SetLightOn();
	void SetLightOff(Macad::Occt::Graphic3d_CLight^ theLight);
	void SetLightOff();
	bool IsActiveLight(Macad::Occt::Graphic3d_CLight^ theLight);
	bool SetImmediateUpdate(bool theImmediateUpdate);
	void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor, Macad::Occt::Quantity_Color^ theZColor, double theSizeRatio, double theAxisDiametr, int theNbFacettes);
	void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor, Macad::Occt::Quantity_Color^ theZColor, double theSizeRatio, double theAxisDiametr);
	void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor, Macad::Occt::Quantity_Color^ theZColor, double theSizeRatio);
	void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor, Macad::Occt::Quantity_Color^ theZColor);
	void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor);
	void ZBufferTriedronSetup(Macad::Occt::Quantity_Color^ theXColor);
	void ZBufferTriedronSetup();
	void TriedronDisplay(Macad::Occt::Aspect_TypeOfTriedronPosition thePosition, Macad::Occt::Quantity_Color^ theColor, double theScale, Macad::Occt::V3d_TypeOfVisualization theMode);
	void TriedronDisplay(Macad::Occt::Aspect_TypeOfTriedronPosition thePosition, Macad::Occt::Quantity_Color^ theColor, double theScale);
	void TriedronDisplay(Macad::Occt::Aspect_TypeOfTriedronPosition thePosition, Macad::Occt::Quantity_Color^ theColor);
	void TriedronDisplay(Macad::Occt::Aspect_TypeOfTriedronPosition thePosition);
	void TriedronDisplay();
	void TriedronErase();
	Macad::Occt::Graphic3d_GraduatedTrihedron^ GetGraduatedTrihedron();
	void GraduatedTrihedronDisplay(Macad::Occt::Graphic3d_GraduatedTrihedron^ theTrihedronData);
	void GraduatedTrihedronErase();
	void SetFront();
	void Rotate(double Ax, double Ay, double Az, bool Start);
	void Rotate(double Ax, double Ay, double Az);
	void Rotate(double Ax, double Ay, double Az, double X, double Y, double Z, bool Start);
	void Rotate(double Ax, double Ay, double Az, double X, double Y, double Z);
	void Rotate(Macad::Occt::V3d_TypeOfAxe Axe, double Angle, double X, double Y, double Z, bool Start);
	void Rotate(Macad::Occt::V3d_TypeOfAxe Axe, double Angle, double X, double Y, double Z);
	void Rotate(Macad::Occt::V3d_TypeOfAxe Axe, double Angle, bool Start);
	void Rotate(Macad::Occt::V3d_TypeOfAxe Axe, double Angle);
	void Rotate(double Angle, bool Start);
	void Rotate(double Angle);
	void Move(double Dx, double Dy, double Dz, bool Start);
	void Move(double Dx, double Dy, double Dz);
	void Move(Macad::Occt::V3d_TypeOfAxe Axe, double Length, bool Start);
	void Move(Macad::Occt::V3d_TypeOfAxe Axe, double Length);
	void Move(double Length, bool Start);
	void Move(double Length);
	void Translate(double Dx, double Dy, double Dz, bool Start);
	void Translate(double Dx, double Dy, double Dz);
	void Translate(Macad::Occt::V3d_TypeOfAxe Axe, double Length, bool Start);
	void Translate(Macad::Occt::V3d_TypeOfAxe Axe, double Length);
	void Translate(double Length, bool Start);
	void Translate(double Length);
	void Place(int theXp, int theYp, double theZoomFactor);
	void Place(int theXp, int theYp);
	void Turn(double Ax, double Ay, double Az, bool Start);
	void Turn(double Ax, double Ay, double Az);
	void Turn(Macad::Occt::V3d_TypeOfAxe Axe, double Angle, bool Start);
	void Turn(Macad::Occt::V3d_TypeOfAxe Axe, double Angle);
	void Turn(double Angle, bool Start);
	void Turn(double Angle);
	void SetTwist(double Angle);
	void SetEye(double X, double Y, double Z);
	void SetDepth(double Depth);
	void SetProj(double Vx, double Vy, double Vz);
	void SetProj(Macad::Occt::V3d_TypeOfOrientation theOrientation, bool theIsYup);
	void SetProj(Macad::Occt::V3d_TypeOfOrientation theOrientation);
	void SetAt(double X, double Y, double Z);
	void SetUp(double Vx, double Vy, double Vz);
	void SetUp(Macad::Occt::V3d_TypeOfOrientation Orientation);
	void SetViewOrientationDefault();
	void ResetViewOrientation();
	void Panning(double theDXv, double theDYv, double theZoomFactor, bool theToStart);
	void Panning(double theDXv, double theDYv, double theZoomFactor);
	void Panning(double theDXv, double theDYv);
	void SetCenter(int theXp, int theYp);
	void SetSize(double theSize);
	void SetZSize(double SetZSize);
	void SetZoom(double Coef, bool Start);
	void SetZoom(double Coef);
	void SetScale(double Coef);
	void SetAxialScale(double Sx, double Sy, double Sz);
	void FitAll(double theMargin, bool theToUpdate);
	void FitAll(double theMargin);
	void FitAll();
	void FitAll(Macad::Occt::Bnd_Box^ theBox, double theMargin, bool theToUpdate);
	void FitAll(Macad::Occt::Bnd_Box^ theBox, double theMargin);
	void FitAll(Macad::Occt::Bnd_Box^ theBox);
	void DepthFitAll(double Aspect, double Margin);
	void DepthFitAll(double Aspect);
	void DepthFitAll();
	void FitAll(double theMinXv, double theMinYv, double theMaxXv, double theMaxYv);
	void WindowFit(int theMinXp, int theMinYp, int theMaxXp, int theMaxYp);
	void SetViewMappingDefault();
	void ResetViewMapping();
	void Reset(bool theToUpdate);
	void Reset();
	double Convert(int Vp);
	void Convert(int Xp, int Yp, double% Xv, double% Yv);
	int Convert(double Vv);
	void Convert(double Xv, double Yv, int% Xp, int% Yp);
	void Convert(int Xp, int Yp, double% X, double% Y, double% Z);
	void ConvertWithProj(int Xp, int Yp, double% X, double% Y, double% Z, double% Vx, double% Vy, double% Vz);
	void ConvertToGrid(int Xp, int Yp, double% Xg, double% Yg, double% Zg);
	void ConvertToGrid(double X, double Y, double Z, double% Xg, double% Yg, double% Zg);
	void Convert(double X, double Y, double Z, int% Xp, int% Yp);
	void Project(double theX, double theY, double theZ, double% theXp, double% theYp);
	void Project(double theX, double theY, double theZ, double% theXp, double% theYp, double% theZp);
	void BackgroundColor(Macad::Occt::Quantity_TypeOfColor Type, double% V1, double% V2, double% V3);
	Macad::Occt::Quantity_Color^ BackgroundColor();
	void GradientBackgroundColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2);
	Macad::Occt::Aspect_GradientBackground^ GradientBackground();
	double Scale();
	void AxialScale(double% Sx, double% Sy, double% Sz);
	void Size(double% Width, double% Height);
	double ZSize();
	void Eye(double% X, double% Y, double% Z);
	void FocalReferencePoint(double% X, double% Y, double% Z);
	void ProjReferenceAxe(int Xpix, int Ypix, double% XP, double% YP, double% ZP, double% VX, double% VY, double% VZ);
	double Depth();
	void Proj(double% Vx, double% Vy, double% Vz);
	void At(double% X, double% Y, double% Z);
	void Up(double% Vx, double% Vy, double% Vz);
	double Twist();
	Macad::Occt::Graphic3d_TypeOfShadingModel ShadingModel();
	Macad::Occt::Graphic3d_TextureEnv^ TextureEnv();
	Macad::Occt::V3d_TypeOfVisualization Visualization();
	bool IfMoreLights();
	/* Method skipped due to unknown mapping: Iterator ActiveLightIterator() */
	void InitActiveLights();
	bool MoreActiveLights();
	void NextActiveLights();
	Macad::Occt::Graphic3d_CLight^ ActiveLight();
	int LightLimit();
	Macad::Occt::V3d_Viewer^ Viewer();
	bool IfWindow();
	Macad::Occt::Aspect_Window^ Window();
	Macad::Occt::V3d_TypeOfView Type();
	void Pan(int theDXp, int theDYp, double theZoomFactor, bool theToStart);
	void Pan(int theDXp, int theDYp, double theZoomFactor);
	void Pan(int theDXp, int theDYp);
	void Zoom(int theXp1, int theYp1, int theXp2, int theYp2);
	void StartZoomAtPoint(int theXp, int theYp);
	void ZoomAtPoint(int theMouseStartX, int theMouseStartY, int theMouseEndX, int theMouseEndY);
	void AxialScale(int Dx, int Dy, Macad::Occt::V3d_TypeOfAxe Axis);
	void StartRotation(int X, int Y, double zRotationThreshold);
	void StartRotation(int X, int Y);
	void Rotation(int X, int Y);
	void SetFocale(double Focale);
	double Focale();
	Macad::Occt::Graphic3d_CView^ View();
	void SetComputedMode(bool theMode);
	bool ComputedMode();
	void WindowFitAll(int Xmin, int Ymin, int Xmax, int Ymax);
	bool FitMinMax(Macad::Occt::Graphic3d_Camera^ theCamera, Macad::Occt::Bnd_Box^ theBox, double theMargin, double theResolution, bool theToEnlargeIfLine);
	bool FitMinMax(Macad::Occt::Graphic3d_Camera^ theCamera, Macad::Occt::Bnd_Box^ theBox, double theMargin, double theResolution);
	bool FitMinMax(Macad::Occt::Graphic3d_Camera^ theCamera, Macad::Occt::Bnd_Box^ theBox, double theMargin);
	void SetGrid(Macad::Occt::Ax3 aPlane, Macad::Occt::Aspect_Grid^ aGrid);
	void SetGridActivity(bool aFlag);
	bool Dump(System::String^ theFile, Macad::Occt::Graphic3d_BufferType% theBufferType);
	bool Dump(System::String^ theFile);
	bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_ImageDumpOptions^ theParams);
	bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, int theWidth, int theHeight, Macad::Occt::Graphic3d_BufferType% theBufferType, bool theToAdjustAspect, Macad::Occt::V3d_StereoDumpOptions theStereoOptions);
	bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, int theWidth, int theHeight, Macad::Occt::Graphic3d_BufferType% theBufferType, bool theToAdjustAspect);
	bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, int theWidth, int theHeight, Macad::Occt::Graphic3d_BufferType% theBufferType);
	bool ToPixMap(Macad::Occt::Image_PixMap^ theImage, int theWidth, int theHeight);
	void SetBackFacingModel(Macad::Occt::V3d_TypeOfBackfacingModel theModel);
	void SetBackFacingModel();
	Macad::Occt::V3d_TypeOfBackfacingModel BackFacingModel();
	void AddClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane);
	void RemoveClipPlane(Macad::Occt::Graphic3d_ClipPlane^ thePlane);
	void SetClipPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes);
	Macad::Occt::Graphic3d_SequenceOfHClipPlane^ ClipPlanes();
	int PlaneLimit();
	void SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera);
	Macad::Occt::Graphic3d_Camera^ Camera();
	Macad::Occt::Graphic3d_Camera^ DefaultCamera();
	Macad::Occt::Graphic3d_RenderingParams^ RenderingParams();
	bool IsCullingEnabled();
	void SetFrustumCulling(bool theMode);
	void DiagnosticInformation(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theDict, Macad::Occt::Graphic3d_DiagnosticInfo theFlags);
	Macad::Occt::TCollection_AsciiString^ StatisticInformation();
	void StatisticInformation(Macad::Occt::TColStd_IndexedDataMapOfStringString^ theDict);
	Macad::Occt::Pnt GravityPoint();
}; // class V3d_View

//---------------------------------------------------------------------
//  Class  V3d
//---------------------------------------------------------------------
public ref class V3d sealed : public BaseClass<::V3d>
{

#ifdef Include_V3d_h
public:
	Include_V3d_h
#endif

public:
	V3d(::V3d* nativeInstance)
		: BaseClass<::V3d>( nativeInstance, true )
	{}

	V3d(::V3d& nativeInstance)
		: BaseClass<::V3d>( &nativeInstance, false )
	{}

	property ::V3d* NativeInstance
	{
		::V3d* get()
		{
			return static_cast<::V3d*>(_NativeInstance);
		}
	}

public:
	V3d();
	V3d(Macad::Occt::V3d^ parameter1);
	static Macad::Occt::Dir GetProjAxis(Macad::Occt::V3d_TypeOfOrientation theOrientation);
	static void ArrowOfRadius(Macad::Occt::Graphic3d_Group^ garrow, double X0, double Y0, double Z0, double DX, double DY, double DZ, double Alpha, double Lng);
	static void CircleInPlane(Macad::Occt::Graphic3d_Group^ gcircle, double X0, double Y0, double Z0, double VX, double VY, double VZ, double Radius);
	static void SwitchViewsinWindow(Macad::Occt::V3d_View^ aPreviousView, Macad::Occt::V3d_View^ aNextView);
	static System::String^ TypeOfOrientationToString(Macad::Occt::V3d_TypeOfOrientation theType);
	static Macad::Occt::V3d_TypeOfOrientation TypeOfOrientationFromString(System::String^ theTypeString);
	static bool TypeOfOrientationFromString(System::String^ theTypeString, Macad::Occt::V3d_TypeOfOrientation% theType);
}; // class V3d

//---------------------------------------------------------------------
//  Class  V3d_Viewer
//---------------------------------------------------------------------
public ref class V3d_Viewer sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_V3d_Viewer_h
public:
	Include_V3d_Viewer_h
#endif

public:
	V3d_Viewer(::V3d_Viewer* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	V3d_Viewer(::V3d_Viewer& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::V3d_Viewer* NativeInstance
	{
		::V3d_Viewer* get()
		{
			return static_cast<::V3d_Viewer*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_Viewer^ CreateDowncasted(::V3d_Viewer* instance);

public:
	V3d_Viewer(Macad::Occt::Graphic3d_GraphicDriver^ theDriver);
	V3d_Viewer(Macad::Occt::Graphic3d_GraphicDriver^ theDriver, System::String^ theName, System::String^ theDomain, double theViewSize, Macad::Occt::V3d_TypeOfOrientation theViewProj, Macad::Occt::Quantity_Color^ theViewBackground, Macad::Occt::V3d_TypeOfVisualization theVisualization, Macad::Occt::Graphic3d_TypeOfShadingModel theShadingModel, bool theComputedMode, bool theDefaultComputedMode);
	V3d_Viewer(Macad::Occt::Graphic3d_GraphicDriver^ theDriver, System::String^ theName, System::String^ theDomain, double theViewSize, Macad::Occt::V3d_TypeOfOrientation theViewProj, Macad::Occt::Quantity_Color^ theViewBackground, Macad::Occt::V3d_TypeOfVisualization theVisualization, Macad::Occt::Graphic3d_TypeOfShadingModel theShadingModel, bool theComputedMode);
	V3d_Viewer(Macad::Occt::Graphic3d_GraphicDriver^ theDriver, System::String^ theName, System::String^ theDomain, double theViewSize, Macad::Occt::V3d_TypeOfOrientation theViewProj, Macad::Occt::Quantity_Color^ theViewBackground, Macad::Occt::V3d_TypeOfVisualization theVisualization, Macad::Occt::Graphic3d_TypeOfShadingModel theShadingModel);
	V3d_Viewer(Macad::Occt::Graphic3d_GraphicDriver^ theDriver, System::String^ theName, System::String^ theDomain, double theViewSize, Macad::Occt::V3d_TypeOfOrientation theViewProj, Macad::Occt::Quantity_Color^ theViewBackground, Macad::Occt::V3d_TypeOfVisualization theVisualization);
	V3d_Viewer(Macad::Occt::Graphic3d_GraphicDriver^ theDriver, System::String^ theName, System::String^ theDomain, double theViewSize, Macad::Occt::V3d_TypeOfOrientation theViewProj, Macad::Occt::Quantity_Color^ theViewBackground);
	V3d_Viewer(Macad::Occt::Graphic3d_GraphicDriver^ theDriver, System::String^ theName, System::String^ theDomain, double theViewSize, Macad::Occt::V3d_TypeOfOrientation theViewProj);
	V3d_Viewer(Macad::Occt::Graphic3d_GraphicDriver^ theDriver, System::String^ theName, System::String^ theDomain, double theViewSize);
	V3d_Viewer(Macad::Occt::Graphic3d_GraphicDriver^ theDriver, System::String^ theName, System::String^ theDomain);
	V3d_Viewer(Macad::Occt::Graphic3d_GraphicDriver^ theDriver, System::String^ theName);
	V3d_Viewer(Macad::Occt::V3d_Viewer^ parameter1);
	bool IfMoreViews();
	Macad::Occt::V3d_View^ CreateView();
	void SetViewOn();
	void SetViewOn(Macad::Occt::V3d_View^ theView);
	void SetViewOff();
	void SetViewOff(Macad::Occt::V3d_View^ theView);
	void Update();
	void Redraw();
	void RedrawImmediate();
	void Invalidate();
	void Remove();
	Macad::Occt::Graphic3d_GraphicDriver^ Driver();
	Macad::Occt::Graphic3d_StructureManager^ StructureManager();
	Macad::Occt::Graphic3d_RenderingParams^ DefaultRenderingParams();
	void SetDefaultRenderingParams(Macad::Occt::Graphic3d_RenderingParams^ theParams);
	void SetDefaultBackgroundColor(Macad::Occt::Quantity_Color^ theColor);
	Macad::Occt::Aspect_GradientBackground^ GetGradientBackground();
	void SetDefaultBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2, Macad::Occt::Aspect_GradientFillMethod theFillStyle);
	void SetDefaultBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2);
	double DefaultViewSize();
	void SetDefaultViewSize(double theSize);
	Macad::Occt::V3d_TypeOfOrientation DefaultViewProj();
	void SetDefaultViewProj(Macad::Occt::V3d_TypeOfOrientation theOrientation);
	Macad::Occt::V3d_TypeOfVisualization DefaultVisualization();
	void SetDefaultVisualization(Macad::Occt::V3d_TypeOfVisualization theType);
	Macad::Occt::Graphic3d_TypeOfShadingModel DefaultShadingModel();
	void SetDefaultShadingModel(Macad::Occt::Graphic3d_TypeOfShadingModel theType);
	Macad::Occt::V3d_TypeOfView DefaultTypeOfView();
	void SetDefaultTypeOfView(Macad::Occt::V3d_TypeOfView theType);
	Macad::Occt::Quantity_Color^ DefaultBackgroundColor();
	void DefaultBgGradientColors(Macad::Occt::Quantity_Color^ theColor1, Macad::Occt::Quantity_Color^ theColor2);
	void GetAllZLayers(Macad::Occt::TColStd_SequenceOfInteger^ theLayerSeq);
	bool AddZLayer(int% theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings);
	bool AddZLayer(int% theLayerId);
	bool InsertLayerBefore(int% theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerAfter);
	bool InsertLayerAfter(int% theNewLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings, int theLayerBefore);
	bool RemoveZLayer(int theLayerId);
	Macad::Occt::Graphic3d_ZLayerSettings^ ZLayerSettings(int theLayerId);
	void SetZLayerSettings(int theLayerId, Macad::Occt::Graphic3d_ZLayerSettings^ theSettings);
	/* Method skipped due to unknown mapping: Iterator ActiveViewIterator() */
	void InitActiveViews();
	bool MoreActiveViews();
	void NextActiveViews();
	Macad::Occt::V3d_View^ ActiveView();
	bool LastActiveView();
	/* Method skipped due to unknown mapping: Iterator DefinedViewIterator() */
	void InitDefinedViews();
	bool MoreDefinedViews();
	void NextDefinedViews();
	Macad::Occt::V3d_View^ DefinedView();
	void SetDefaultLights();
	void SetLightOn(Macad::Occt::Graphic3d_CLight^ theLight);
	void SetLightOn();
	void SetLightOff(Macad::Occt::Graphic3d_CLight^ theLight);
	void SetLightOff();
	void AddLight(Macad::Occt::Graphic3d_CLight^ theLight);
	void DelLight(Macad::Occt::Graphic3d_CLight^ theLight);
	void UpdateLights();
	bool IsGlobalLight(Macad::Occt::Graphic3d_CLight^ TheLight);
	/* Method skipped due to unknown mapping: Iterator ActiveLightIterator() */
	void InitActiveLights();
	bool MoreActiveLights();
	void NextActiveLights();
	Macad::Occt::Graphic3d_CLight^ ActiveLight();
	/* Method skipped due to unknown mapping: Iterator DefinedLightIterator() */
	void InitDefinedLights();
	bool MoreDefinedLights();
	void NextDefinedLights();
	Macad::Occt::Graphic3d_CLight^ DefinedLight();
	void Erase();
	void UnHighlight();
	bool ComputedMode();
	void SetComputedMode(bool theMode);
	bool DefaultComputedMode();
	void SetDefaultComputedMode(bool theMode);
	Macad::Occt::Ax3 PrivilegedPlane();
	void SetPrivilegedPlane(Macad::Occt::Ax3 thePlane);
	void DisplayPrivilegedPlane(bool theOnOff, double theSize);
	void DisplayPrivilegedPlane(bool theOnOff);
	void ActivateGrid(Macad::Occt::Aspect_GridType aGridType, Macad::Occt::Aspect_GridDrawMode aGridDrawMode);
	void DeactivateGrid();
	void SetGridEcho(bool showGrid);
	void SetGridEcho();
	void SetGridEcho(Macad::Occt::Graphic3d_AspectMarker3d^ aMarker);
	bool GridEcho();
	bool IsActive();
	Macad::Occt::Aspect_Grid^ Grid();
	Macad::Occt::Aspect_GridType GridType();
	Macad::Occt::Aspect_GridDrawMode GridDrawMode();
	void RectangularGridValues(double% XOrigin, double% YOrigin, double% XStep, double% YStep, double% RotationAngle);
	void SetRectangularGridValues(double XOrigin, double YOrigin, double XStep, double YStep, double RotationAngle);
	void CircularGridValues(double% XOrigin, double% YOrigin, double% RadiusStep, int% DivisionNumber, double% RotationAngle);
	void SetCircularGridValues(double XOrigin, double YOrigin, double RadiusStep, int DivisionNumber, double RotationAngle);
	void CircularGridGraphicValues(double% Radius, double% OffSet);
	void SetCircularGridGraphicValues(double Radius, double OffSet);
	void RectangularGridGraphicValues(double% XSize, double% YSize, double% OffSet);
	void SetRectangularGridGraphicValues(double XSize, double YSize, double OffSet);
	/* Method skipped due to unknown mapping: void ShowGridEcho(V3d_View theView, Graphic3d_Vertex thePoint, ) */
	void HideGridEcho(Macad::Occt::V3d_View^ theView);
	void SetDefaultBackgroundColor(Macad::Occt::Quantity_TypeOfColor theType, double theV1, double theV2, double theV3);
	void DefaultBackgroundColor(Macad::Occt::Quantity_TypeOfColor theType, double% theV1, double% theV2, double% theV3);
}; // class V3d_Viewer

//---------------------------------------------------------------------
//  Class  V3d_AmbientLight
//---------------------------------------------------------------------
public ref class V3d_AmbientLight sealed : public Macad::Occt::Graphic3d_CLight
{

#ifdef Include_V3d_AmbientLight_h
public:
	Include_V3d_AmbientLight_h
#endif

public:
	V3d_AmbientLight(::V3d_AmbientLight* nativeInstance)
		: Macad::Occt::Graphic3d_CLight( nativeInstance )
	{}

	V3d_AmbientLight(::V3d_AmbientLight& nativeInstance)
		: Macad::Occt::Graphic3d_CLight( nativeInstance )
	{}

	property ::V3d_AmbientLight* NativeInstance
	{
		::V3d_AmbientLight* get()
		{
			return static_cast<::V3d_AmbientLight*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_AmbientLight^ CreateDowncasted(::V3d_AmbientLight* instance);

public:
	V3d_AmbientLight(Macad::Occt::Quantity_Color^ theColor);
	V3d_AmbientLight(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::Quantity_Color^ theColor);
	V3d_AmbientLight(Macad::Occt::V3d_Viewer^ theViewer);
}; // class V3d_AmbientLight

//---------------------------------------------------------------------
//  Class  V3d_BadValue
//---------------------------------------------------------------------
public ref class V3d_BadValue sealed : public Macad::Occt::Standard_OutOfRange
{

#ifdef Include_V3d_BadValue_h
public:
	Include_V3d_BadValue_h
#endif

public:
	V3d_BadValue(::V3d_BadValue* nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	V3d_BadValue(::V3d_BadValue& nativeInstance)
		: Macad::Occt::Standard_OutOfRange( nativeInstance )
	{}

	property ::V3d_BadValue* NativeInstance
	{
		::V3d_BadValue* get()
		{
			return static_cast<::V3d_BadValue*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_BadValue^ CreateDowncasted(::V3d_BadValue* instance);

public:
	V3d_BadValue();
	V3d_BadValue(System::String^ theMessage);
	V3d_BadValue(Macad::Occt::V3d_BadValue^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::V3d_BadValue^ NewInstance(System::String^ theMessage);
	static Macad::Occt::V3d_BadValue^ NewInstance();
}; // class V3d_BadValue

//---------------------------------------------------------------------
//  Class  V3d_CircularGrid
//---------------------------------------------------------------------
public ref class V3d_CircularGrid sealed : public Macad::Occt::Aspect_CircularGrid
{

#ifdef Include_V3d_CircularGrid_h
public:
	Include_V3d_CircularGrid_h
#endif

public:
	V3d_CircularGrid(::V3d_CircularGrid* nativeInstance)
		: Macad::Occt::Aspect_CircularGrid( nativeInstance )
	{}

	V3d_CircularGrid(::V3d_CircularGrid& nativeInstance)
		: Macad::Occt::Aspect_CircularGrid( nativeInstance )
	{}

	property ::V3d_CircularGrid* NativeInstance
	{
		::V3d_CircularGrid* get()
		{
			return static_cast<::V3d_CircularGrid*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_CircularGrid^ CreateDowncasted(::V3d_CircularGrid* instance);

public:
	void SetColors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor);
	void Display();
	void Erase();
	bool IsDisplayed();
	void GraphicValues(double% Radius, double% OffSet);
	void SetGraphicValues(double Radius, double OffSet);
}; // class V3d_CircularGrid

//---------------------------------------------------------------------
//  Class  V3d_PositionLight
//---------------------------------------------------------------------
public ref class V3d_PositionLight : public Macad::Occt::Graphic3d_CLight
{

#ifdef Include_V3d_PositionLight_h
public:
	Include_V3d_PositionLight_h
#endif

protected:
	V3d_PositionLight(InitMode init)
		: Macad::Occt::Graphic3d_CLight( init )
	{}

public:
	V3d_PositionLight(::V3d_PositionLight* nativeInstance)
		: Macad::Occt::Graphic3d_CLight( nativeInstance )
	{}

	V3d_PositionLight(::V3d_PositionLight& nativeInstance)
		: Macad::Occt::Graphic3d_CLight( nativeInstance )
	{}

	property ::V3d_PositionLight* NativeInstance
	{
		::V3d_PositionLight* get()
		{
			return static_cast<::V3d_PositionLight*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_PositionLight^ CreateDowncasted(::V3d_PositionLight* instance);

public:
}; // class V3d_PositionLight

//---------------------------------------------------------------------
//  Class  V3d_DirectionalLight
//---------------------------------------------------------------------
public ref class V3d_DirectionalLight sealed : public Macad::Occt::V3d_PositionLight
{

#ifdef Include_V3d_DirectionalLight_h
public:
	Include_V3d_DirectionalLight_h
#endif

public:
	V3d_DirectionalLight(::V3d_DirectionalLight* nativeInstance)
		: Macad::Occt::V3d_PositionLight( nativeInstance )
	{}

	V3d_DirectionalLight(::V3d_DirectionalLight& nativeInstance)
		: Macad::Occt::V3d_PositionLight( nativeInstance )
	{}

	property ::V3d_DirectionalLight* NativeInstance
	{
		::V3d_DirectionalLight* get()
		{
			return static_cast<::V3d_DirectionalLight*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_DirectionalLight^ CreateDowncasted(::V3d_DirectionalLight* instance);

public:
	V3d_DirectionalLight(Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor, bool theIsHeadlight);
	V3d_DirectionalLight(Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor);
	V3d_DirectionalLight(Macad::Occt::V3d_TypeOfOrientation theDirection);
	V3d_DirectionalLight(Macad::Occt::Dir theDirection, Macad::Occt::Quantity_Color^ theColor, bool theIsHeadlight);
	V3d_DirectionalLight(Macad::Occt::Dir theDirection, Macad::Occt::Quantity_Color^ theColor);
	V3d_DirectionalLight(Macad::Occt::Dir theDirection);
	V3d_DirectionalLight(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor, bool theIsHeadlight);
	V3d_DirectionalLight(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor);
	V3d_DirectionalLight(Macad::Occt::V3d_Viewer^ theViewer, Macad::Occt::V3d_TypeOfOrientation theDirection);
	V3d_DirectionalLight(Macad::Occt::V3d_Viewer^ theViewer);
	V3d_DirectionalLight(Macad::Occt::V3d_Viewer^ theViewer, double theXt, double theYt, double theZt, double theXp, double theYp, double theZp, Macad::Occt::Quantity_Color^ theColor, bool theIsHeadlight);
	V3d_DirectionalLight(Macad::Occt::V3d_Viewer^ theViewer, double theXt, double theYt, double theZt, double theXp, double theYp, double theZp, Macad::Occt::Quantity_Color^ theColor);
	V3d_DirectionalLight(Macad::Occt::V3d_Viewer^ theViewer, double theXt, double theYt, double theZt, double theXp, double theYp, double theZp);
	void SetDirection(Macad::Occt::V3d_TypeOfOrientation theDirection);
}; // class V3d_DirectionalLight

//---------------------------------------------------------------------
//  Class  V3d_Trihedron
//---------------------------------------------------------------------
public ref class V3d_Trihedron sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_V3d_Trihedron_h
public:
	Include_V3d_Trihedron_h
#endif

public:
	V3d_Trihedron(::V3d_Trihedron* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	V3d_Trihedron(::V3d_Trihedron& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::V3d_Trihedron* NativeInstance
	{
		::V3d_Trihedron* get()
		{
			return static_cast<::V3d_Trihedron*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_Trihedron^ CreateDowncasted(::V3d_Trihedron* instance);

public:
	V3d_Trihedron();
	V3d_Trihedron(Macad::Occt::V3d_Trihedron^ parameter1);
	void SetWireframe(bool theAsWireframe);
	void SetPosition(Macad::Occt::Aspect_TypeOfTriedronPosition thePosition);
	void SetScale(double theScale);
	void SetSizeRatio(double theRatio);
	void SetArrowDiameter(double theDiam);
	void SetNbFacets(int theNbFacets);
	void SetLabelsColor(Macad::Occt::Quantity_Color^ theColor);
	void SetArrowsColor(Macad::Occt::Quantity_Color^ theXColor, Macad::Occt::Quantity_Color^ theYColor, Macad::Occt::Quantity_Color^ theZColor);
	void Display(Macad::Occt::V3d_View^ theView);
	void Erase();
}; // class V3d_Trihedron

//---------------------------------------------------------------------
//  Class  V3d_RectangularGrid
//---------------------------------------------------------------------
public ref class V3d_RectangularGrid sealed : public Macad::Occt::Aspect_RectangularGrid
{

#ifdef Include_V3d_RectangularGrid_h
public:
	Include_V3d_RectangularGrid_h
#endif

public:
	V3d_RectangularGrid(::V3d_RectangularGrid* nativeInstance)
		: Macad::Occt::Aspect_RectangularGrid( nativeInstance )
	{}

	V3d_RectangularGrid(::V3d_RectangularGrid& nativeInstance)
		: Macad::Occt::Aspect_RectangularGrid( nativeInstance )
	{}

	property ::V3d_RectangularGrid* NativeInstance
	{
		::V3d_RectangularGrid* get()
		{
			return static_cast<::V3d_RectangularGrid*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_RectangularGrid^ CreateDowncasted(::V3d_RectangularGrid* instance);

public:
	void SetColors(Macad::Occt::Quantity_Color^ aColor, Macad::Occt::Quantity_Color^ aTenthColor);
	void Display();
	void Erase();
	bool IsDisplayed();
	void GraphicValues(double% XSize, double% YSize, double% OffSet);
	void SetGraphicValues(double XSize, double YSize, double OffSet);
}; // class V3d_RectangularGrid

//---------------------------------------------------------------------
//  Class  V3d_UnMapped
//---------------------------------------------------------------------
public ref class V3d_UnMapped sealed : public Macad::Occt::Standard_DomainError
{

#ifdef Include_V3d_UnMapped_h
public:
	Include_V3d_UnMapped_h
#endif

public:
	V3d_UnMapped(::V3d_UnMapped* nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	V3d_UnMapped(::V3d_UnMapped& nativeInstance)
		: Macad::Occt::Standard_DomainError( nativeInstance )
	{}

	property ::V3d_UnMapped* NativeInstance
	{
		::V3d_UnMapped* get()
		{
			return static_cast<::V3d_UnMapped*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_UnMapped^ CreateDowncasted(::V3d_UnMapped* instance);

public:
	V3d_UnMapped();
	V3d_UnMapped(System::String^ theMessage);
	V3d_UnMapped(Macad::Occt::V3d_UnMapped^ parameter1);
	static void Raise(System::String^ theMessage);
	static void Raise();
	/* Method skipped due to unknown mapping: void Raise(stringstream theMessage, ) */
	static Macad::Occt::V3d_UnMapped^ NewInstance(System::String^ theMessage);
	static Macad::Occt::V3d_UnMapped^ NewInstance();
}; // class V3d_UnMapped

//---------------------------------------------------------------------
//  Class  V3d_Plane
//---------------------------------------------------------------------
public ref class V3d_Plane sealed : public Macad::Occt::Standard_Transient
{

#ifdef Include_V3d_Plane_h
public:
	Include_V3d_Plane_h
#endif

public:
	V3d_Plane(::V3d_Plane* nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	V3d_Plane(::V3d_Plane& nativeInstance)
		: Macad::Occt::Standard_Transient( nativeInstance )
	{}

	property ::V3d_Plane* NativeInstance
	{
		::V3d_Plane* get()
		{
			return static_cast<::V3d_Plane*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_Plane^ CreateDowncasted(::V3d_Plane* instance);

public:
	V3d_Plane(double theA, double theB, double theC, double theD);
	V3d_Plane(double theA, double theB, double theC);
	V3d_Plane(double theA, double theB);
	V3d_Plane(double theA);
	V3d_Plane(Macad::Occt::V3d_Plane^ parameter1);
	void SetPlane(double theA, double theB, double theC, double theD);
	void Display(Macad::Occt::V3d_View^ theView, Macad::Occt::Quantity_Color^ theColor);
	void Display(Macad::Occt::V3d_View^ theView);
	void Erase();
	void Plane(double% theA, double% theB, double% theC, double% theD);
	bool IsDisplayed();
	Macad::Occt::Graphic3d_ClipPlane^ ClipPlane();
}; // class V3d_Plane

//---------------------------------------------------------------------
//  Class  V3d_PositionalLight
//---------------------------------------------------------------------
public ref class V3d_PositionalLight sealed : public Macad::Occt::V3d_PositionLight
{

#ifdef Include_V3d_PositionalLight_h
public:
	Include_V3d_PositionalLight_h
#endif

public:
	V3d_PositionalLight(::V3d_PositionalLight* nativeInstance)
		: Macad::Occt::V3d_PositionLight( nativeInstance )
	{}

	V3d_PositionalLight(::V3d_PositionalLight& nativeInstance)
		: Macad::Occt::V3d_PositionLight( nativeInstance )
	{}

	property ::V3d_PositionalLight* NativeInstance
	{
		::V3d_PositionalLight* get()
		{
			return static_cast<::V3d_PositionalLight*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_PositionalLight^ CreateDowncasted(::V3d_PositionalLight* instance);

public:
	V3d_PositionalLight(Macad::Occt::Pnt thePos, Macad::Occt::Quantity_Color^ theColor);
	V3d_PositionalLight(Macad::Occt::Pnt thePos);
	V3d_PositionalLight(Macad::Occt::V3d_Viewer^ theViewer, double theX, double theY, double theZ, Macad::Occt::Quantity_Color^ theColor, double theConstAttenuation, double theLinearAttenuation);
	V3d_PositionalLight(Macad::Occt::V3d_Viewer^ theViewer, double theX, double theY, double theZ, Macad::Occt::Quantity_Color^ theColor, double theConstAttenuation);
	V3d_PositionalLight(Macad::Occt::V3d_Viewer^ theViewer, double theX, double theY, double theZ, Macad::Occt::Quantity_Color^ theColor);
	V3d_PositionalLight(Macad::Occt::V3d_Viewer^ theViewer, double theX, double theY, double theZ);
}; // class V3d_PositionalLight

//---------------------------------------------------------------------
//  Class  V3d_SpotLight
//---------------------------------------------------------------------
public ref class V3d_SpotLight sealed : public Macad::Occt::V3d_PositionLight
{

#ifdef Include_V3d_SpotLight_h
public:
	Include_V3d_SpotLight_h
#endif

public:
	V3d_SpotLight(::V3d_SpotLight* nativeInstance)
		: Macad::Occt::V3d_PositionLight( nativeInstance )
	{}

	V3d_SpotLight(::V3d_SpotLight& nativeInstance)
		: Macad::Occt::V3d_PositionLight( nativeInstance )
	{}

	property ::V3d_SpotLight* NativeInstance
	{
		::V3d_SpotLight* get()
		{
			return static_cast<::V3d_SpotLight*>(_NativeInstance);
		}
	}

	static Macad::Occt::V3d_SpotLight^ CreateDowncasted(::V3d_SpotLight* instance);

public:
	V3d_SpotLight(Macad::Occt::Pnt thePos, Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor);
	V3d_SpotLight(Macad::Occt::Pnt thePos, Macad::Occt::V3d_TypeOfOrientation theDirection);
	V3d_SpotLight(Macad::Occt::Pnt thePos);
	V3d_SpotLight(Macad::Occt::Pnt thePos, Macad::Occt::Dir theDirection, Macad::Occt::Quantity_Color^ theColor);
	V3d_SpotLight(Macad::Occt::Pnt thePos, Macad::Occt::Dir theDirection);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theX, double theY, double theZ, Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor, double theConstAttenuation, double theLinearAttenuation, double theConcentration, double theAngle);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theX, double theY, double theZ, Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor, double theConstAttenuation, double theLinearAttenuation, double theConcentration);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theX, double theY, double theZ, Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor, double theConstAttenuation, double theLinearAttenuation);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theX, double theY, double theZ, Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor, double theConstAttenuation);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theX, double theY, double theZ, Macad::Occt::V3d_TypeOfOrientation theDirection, Macad::Occt::Quantity_Color^ theColor);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theX, double theY, double theZ, Macad::Occt::V3d_TypeOfOrientation theDirection);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theX, double theY, double theZ);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theXt, double theYt, double theZt, double theXp, double theYp, double theZp, Macad::Occt::Quantity_Color^ theColor, double theConstAttenuation, double theLinearAttenuation, double theConcentration, double theAngle);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theXt, double theYt, double theZt, double theXp, double theYp, double theZp, Macad::Occt::Quantity_Color^ theColor, double theConstAttenuation, double theLinearAttenuation, double theConcentration);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theXt, double theYt, double theZt, double theXp, double theYp, double theZp, Macad::Occt::Quantity_Color^ theColor, double theConstAttenuation, double theLinearAttenuation);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theXt, double theYt, double theZt, double theXp, double theYp, double theZp, Macad::Occt::Quantity_Color^ theColor, double theConstAttenuation);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theXt, double theYt, double theZt, double theXp, double theYp, double theZp, Macad::Occt::Quantity_Color^ theColor);
	V3d_SpotLight(Macad::Occt::V3d_Viewer^ theViewer, double theXt, double theYt, double theZt, double theXp, double theYp, double theZp);
	void SetDirection(Macad::Occt::V3d_TypeOfOrientation theOrientation);
}; // class V3d_SpotLight

}; // namespace Occt
}; // namespace Macad
