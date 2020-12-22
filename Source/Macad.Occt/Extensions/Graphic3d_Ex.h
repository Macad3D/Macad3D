#define Include_Graphic3d_ClipPlane_h \
    typedef NCollection_Vec4<Standard_Real> Equation;


#define Include_Graphic3d_RenderingParams_h \
	property Macad::Occt::Graphic3d_RenderingMode Method \
	{ \
		Macad::Occt::Graphic3d_RenderingMode get() { return (Macad::Occt::Graphic3d_RenderingMode)NativeInstance->Method; } \
		void set(Macad::Occt::Graphic3d_RenderingMode value) { NativeInstance->Method = (::Graphic3d_RenderingMode)value; } \
	} \
	property int NbMsaaSamples \
	{ \
		int get() { return NativeInstance->NbMsaaSamples; } \
		void set(int value) { NativeInstance->NbMsaaSamples = value; } \
	} \
	property bool IsGlobalIlluminationEnabled \
	{ \
		bool get() { return NativeInstance->IsGlobalIlluminationEnabled == Standard_True; } \
		void set(bool value) { NativeInstance->IsGlobalIlluminationEnabled = value ? Standard_True : Standard_False; } \
	} \
	property int SamplesPerPixel \
	{ \
		int get() { return NativeInstance->SamplesPerPixel; } \
		void set(int value) { NativeInstance->SamplesPerPixel = value; } \
	} \
	property int RaytracingDepth \
	{ \
		int get() { return NativeInstance->RaytracingDepth; } \
		void set(int value) { NativeInstance->RaytracingDepth = value; } \
	} \
	property bool IsShadowEnabled \
	{ \
		bool get() { return NativeInstance->IsShadowEnabled == Standard_True; } \
		void set(bool value) { NativeInstance->IsShadowEnabled = value ? Standard_True : Standard_False; } \
	} \
	property bool IsReflectionEnabled \
	{ \
		bool get() { return NativeInstance->IsReflectionEnabled == Standard_True; } \
		void set(bool value) { NativeInstance->IsReflectionEnabled = value ? Standard_True : Standard_False; } \
	} \
	property bool IsAntialiasingEnabled \
	{ \
		bool get() { return NativeInstance->IsAntialiasingEnabled == Standard_True; } \
		void set(bool value) { NativeInstance->IsAntialiasingEnabled = value ? Standard_True : Standard_False; } \
	} \
	property bool IsTransparentShadowEnabled \
	{ \
		bool get() { return NativeInstance->IsTransparentShadowEnabled == Standard_True; } \
		void set(bool value) { NativeInstance->IsTransparentShadowEnabled = value ? Standard_True : Standard_False; } \
	} \
	property bool UseEnvironmentMapBackground \
	{ \
		bool get() { return NativeInstance->UseEnvironmentMapBackground == Standard_True; } \
		void set(bool value) { NativeInstance->UseEnvironmentMapBackground = value ? Standard_True : Standard_False; } \
	} \
	property bool CoherentPathTracingMode \
	{ \
		bool get() { return NativeInstance->CoherentPathTracingMode == Standard_True; } \
		void set(bool value) { NativeInstance->CoherentPathTracingMode = value ? Standard_True : Standard_False; } \
	} \
	property Graphic3d_RenderTransparentMethod TransparencyMethod \
	{ \
		Graphic3d_RenderTransparentMethod get() { return (Graphic3d_RenderTransparentMethod)NativeInstance->TransparencyMethod; } \
		void set(Graphic3d_RenderTransparentMethod value) { NativeInstance->TransparencyMethod = (::Graphic3d_RenderTransparentMethod)value; } \
	} \

