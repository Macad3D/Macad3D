#include "ManagedPCH.h"

#pragma unmanaged

#include "AISX_OutlinePostProcess.h"

IMPLEMENT_STANDARD_RTTIEXT(AISX_OutlinePostProcess, AIS_InteractiveObject)

//--------------------------------------------------------------------------------------------------

AISX_OutlinePostProcess::AISX_OutlinePostProcess(const opencascade::handle<V3d_View>& theView)
{
    _View = theView;
    _InitDrawerAttributes(false);
}

//--------------------------------------------------------------------------------------------------

AISX_OutlinePostProcess::~AISX_OutlinePostProcess()
{
    Release();
    _ShaderProgram.Nullify();
    _View.Nullify();
}

//--------------------------------------------------------------------------------------------------

void AISX_OutlinePostProcess::Release()
{
    if (!_View.IsNull())
    {
        opencascade::handle<Graphic3d_CView> g3dView = _View->View();
        if (!g3dView.IsNull())
        {
            opencascade::handle<OpenGl_Window> glWindow = opencascade::handle<OpenGl_View>::DownCast(g3dView)->GlWindow();
            if (!glWindow.IsNull())
            {
                const opencascade::handle<OpenGl_Context>& aCtx = glWindow->GetGlContext();
                if (!aCtx.IsNull())
                {
                    _ReleaseFbo(aCtx);
                }
            }
        }
    }
}

//--------------------------------------------------------------------------------------------------

void AISX_OutlinePostProcess::Compute(const Handle(PrsMgr_PresentationManager)& thePrsMgr, 
    const Handle(Prs3d_Presentation)& thePrs, const Standard_Integer theMode)
{
    thePrs->SetInfiniteState(true);

    opencascade::handle<OpenGl_Group> GlGroup = opencascade::handle<OpenGl_Group>::DownCast(thePrs->NewGroup());
    RenderElement* anElem = new RenderElement(this);
    GlGroup->AddElement(anElem);
    GlGroup->SetGroupPrimitivesAspect(myDrawer->ShadingAspect()->Aspect());
}

//--------------------------------------------------------------------------------------------------

void AISX_OutlinePostProcess::ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode)
{
    // Left empty intentionally
}

//--------------------------------------------------------------------------------------------------

USE_EMBEDDED_BINARY(PostProcess_vert)
USE_EMBEDDED_BINARY(OutlinePostProcess_frag)
USE_EMBEDDED_BINARY(OutlinePostProcess_HLR_frag)

void AISX_OutlinePostProcess::_InitDrawerAttributes(bool hlrMode)
{
    TCollection_AsciiString sHeader("#version 330 core");

    _ShaderProgram = new Graphic3d_ShaderProgram();
    _ShaderProgram->SetHeader(sHeader);
    TCollection_AsciiString sVertexShader(reinterpret_cast<const char*>(PostProcess_vert), PostProcess_vert_size);
    _ShaderProgram->AttachShader(Graphic3d_ShaderObject::CreateFromSource(Graphic3d_TOS_VERTEX, sVertexShader));
    TCollection_AsciiString sFragmentShader = hlrMode ? TCollection_AsciiString(reinterpret_cast<const char*>(OutlinePostProcess_HLR_frag), OutlinePostProcess_HLR_frag_size)
                                                      : TCollection_AsciiString(reinterpret_cast<const char*>(OutlinePostProcess_frag), OutlinePostProcess_frag_size);
    _ShaderProgram->AttachShader(Graphic3d_ShaderObject::CreateFromSource(Graphic3d_TOS_FRAGMENT, sFragmentShader));

    Handle(Prs3d_ShadingAspect) shasp = new Prs3d_ShadingAspect();
    shasp->Aspect()->SetShaderProgram(_ShaderProgram);
    myDrawer->SetShadingAspect(shasp);
    
    _InHlrMode = hlrMode;
}

//--------------------------------------------------------------------------------------------------

void AISX_OutlinePostProcess::_Render(const opencascade::handle<OpenGl_Workspace>& theWorkspace)
{
    _HasError = false;
    if (_HighlightFramebuffer.IsNull())
    {
        return;
    }
    const Handle(OpenGl_Context)& aCtx = theWorkspace->GetGlContext();
    if (aCtx.IsNull())
    {
        return;
    }

    // Setup shader variables
    _ShaderProgram->ClearVariables();
    _ShaderProgram->PushVariableInt("hilightColorTexture", 0);
    _ShaderProgram->PushVariableInt("hilightDepthTexture", 1);
    _ShaderProgram->PushVariableVec2("canvasSize", Graphic3d_Vec2(static_cast<float>(_HighlightFramebufferWidth), static_cast<float>(_HighlightFramebufferHeight)));
    _ShaderProgram->PushVariableFloat("outlineSize", myOwnWidth);
    _ShaderProgram->PushVariableVec4("outlineColor", aCtx->Vec4FromQuantityColor(Quantity_ColorRGBA(myDrawer->Color(), 1.0)));

    // Estimate mip level to perform the early rough check on
    int intWidth = static_cast<int>(myOwnWidth);
    int roughCheckLevel = 1; 
    while (intWidth >> roughCheckLevel > 0 )
    {
        roughCheckLevel++;
    }
    _ShaderProgram->PushVariableVec3i("roughCheckParams", Graphic3d_Vec3i(_HighlightFramebufferWidth >> roughCheckLevel, _HighlightFramebufferHeight >> roughCheckLevel, roughCheckLevel));

    // Create and bind shader program
    opencascade::handle<OpenGl_ShaderProgram> aProg;
    TCollection_AsciiString anUnused;
    if (!aCtx->ShaderManager()->Create(_ShaderProgram, anUnused, aProg))
    {
        _HasError = true;
        return;
    }
    opencascade::handle<OpenGl_ShaderProgram> aPrevProgram = aCtx->ActiveProgram();
    if (!aCtx->BindProgram(aProg))
    {
        _HasError = true;
        return;
    }

    aProg->ApplyVariables(aCtx);

    // Vertices are generated in the vertex shader, no need to setup any VAOs
    GLuint emptyVAO;
    aCtx->core33->glGenVertexArrays(1, &emptyVAO);
    aCtx->core33->glBindVertexArray(emptyVAO);

    // Bind textures from highlighting FBO
    aCtx->core33->glActiveTexture(GL_TEXTURE0);
    aCtx->core33->glBindTexture(GL_TEXTURE_2D, _HighlightColorTexture);
    aCtx->core33->glGenerateMipmap(GL_TEXTURE_2D);
    aCtx->core33->glActiveTexture(GL_TEXTURE1);
    aCtx->core33->glBindTexture(GL_TEXTURE_2D, _HighlightDepthTexture);

    // Setup/preserve OpenGL state
    GLboolean prevDepthTest = aCtx->core33->glIsEnabled(GL_DEPTH_TEST);
    aCtx->core33->glEnable(GL_DEPTH_TEST);
    GLboolean prevDepthMask;
    aCtx->core33->glGetBooleanv(GL_DEPTH_WRITEMASK, &prevDepthMask);
    aCtx->core33->glDepthMask(GL_FALSE);
    GLint prevDepthFunc;
    aCtx->core33->glGetIntegerv(GL_DEPTH_FUNC, &prevDepthFunc);
    aCtx->core33->glDepthFunc(GL_LEQUAL);
    GLboolean prevBlend = aCtx->core33->glIsEnabled(GL_BLEND);
    aCtx->core33->glEnable(GL_BLEND);
    GLint prevBlendFuncSrc;
    GLint prevBlendFuncDst;
    aCtx->core33->glGetIntegerv(GL_BLEND_SRC_RGB, &prevBlendFuncSrc);
    aCtx->core33->glGetIntegerv(GL_BLEND_DST_RGB, &prevBlendFuncDst);
    aCtx->core33->glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Render one full-screen triangle
    aCtx->core33->glDrawArrays(GL_TRIANGLES, 0, 3);
    
    // Reset state
    if (!prevDepthTest)
    {
        aCtx->core33->glDisable(GL_DEPTH_TEST);
    }
    if (prevDepthMask)
    {
        aCtx->core33->glDepthMask(GL_TRUE);
    }
    aCtx->core33->glDepthFunc(prevDepthFunc);
    if (!prevBlend)
    {
        aCtx->core33->glDisable(GL_BLEND);
    }
    aCtx->core33->glBlendFunc(prevBlendFuncSrc, prevBlendFuncDst);
    aCtx->core33->glBindTexture(GL_TEXTURE_2D, 0);
    aCtx->BindProgram(aPrevProgram);
}

//--------------------------------------------------------------------------------------------------

void AISX_OutlinePostProcess::_ReleaseFbo(const opencascade::handle<OpenGl_Context>& theCtx)
{
    if (_HighlightFbo != 0)
    {
        theCtx->core33->glDeleteFramebuffers(1, &_HighlightFbo);
        _HighlightFbo = 0;
    }
    if (_HighlightColorTexture != 0)
    {
        theCtx->core33->glDeleteTextures(1, &_HighlightColorTexture);
        _HighlightColorTexture = 0;
    }
    if (_HighlightDepthTexture != 0)
    {
        theCtx->core33->glDeleteTextures(1, &_HighlightDepthTexture);
        _HighlightDepthTexture = 0;
    }
    _HighlightFramebuffer.Nullify();
}

//--------------------------------------------------------------------------------------------------

bool AISX_OutlinePostProcess::_EnsureFbo(const opencascade::handle<OpenGl_Context>& theCtx, int width, int height)
{
    if (!_HighlightFramebuffer.IsNull())
    {
        return true;
    }

    // Check for OpenGL 3.3
    if (theCtx->core33 == nullptr)
    {
        return false;
    }

    // Create FBO
    theCtx->core33->glGenFramebuffers(1, &_HighlightFbo);
    theCtx->core33->glBindFramebuffer(GL_FRAMEBUFFER, _HighlightFbo);

    // Create alpha target
    theCtx->core33->glGenTextures(1, &_HighlightColorTexture);
    theCtx->core33->glBindTexture(GL_TEXTURE_2D, _HighlightColorTexture);
    theCtx->core33->glTexImage2D(GL_TEXTURE_2D, 0, GL_ALPHA8, width, height, 0, GL_ALPHA, GL_UNSIGNED_BYTE, nullptr);
    theCtx->core33->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    theCtx->core33->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    theCtx->core33->glFramebufferTexture2D(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D, _HighlightColorTexture, 0);

    // Create depth target
    theCtx->core33->glGenTextures(1, &_HighlightDepthTexture);
    theCtx->core33->glBindTexture(GL_TEXTURE_2D, _HighlightDepthTexture);
    theCtx->core33->glTexImage2D(GL_TEXTURE_2D, 0, GL_DEPTH_COMPONENT24, width, height, 0, GL_DEPTH_COMPONENT, GL_UNSIGNED_INT, nullptr);
    theCtx->core33->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    theCtx->core33->glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    theCtx->core33->glFramebufferTexture2D(GL_FRAMEBUFFER, GL_DEPTH_ATTACHMENT, GL_TEXTURE_2D, _HighlightDepthTexture, 0);

    // Finalize FBO
    GLenum drawBuffers[] = { GL_COLOR_ATTACHMENT0 };
    theCtx->core33->glDrawBuffers(1, drawBuffers);
    GLenum status = theCtx->core33->glCheckFramebufferStatus(GL_FRAMEBUFFER);
    if (status != GL_FRAMEBUFFER_COMPLETE)
    {
        return false;
    }

    // Create wrapper framebuffer for setting into Graphic3d_CView
    _HighlightFramebuffer = new OpenGl_FrameBuffer();
    if (!_HighlightFramebuffer->InitWrapper(theCtx))
    {
        _HighlightFramebuffer->Release(theCtx.get());
        return false;
    }

    theCtx->core33->glBindFramebuffer(GL_FRAMEBUFFER, 0);
    _HighlightFramebufferWidth = width;
    _HighlightFramebufferHeight = height;

    return true;
}

//--------------------------------------------------------------------------------------------------

bool AISX_OutlinePostProcess::UpdateHighlights(int theLayer)
{
    // Validate view and context
    if (_View.IsNull())
    {
        return false;
    }
    opencascade::handle<Graphic3d_CView> g3dView = _View->View();
    if (g3dView.IsNull())
    {
        return false;
    }
    opencascade::handle<OpenGl_Window> glWindow = opencascade::handle<OpenGl_View>::DownCast(g3dView)->GlWindow();
    if (glWindow.IsNull())
    {
        return false;
    }
    const opencascade::handle<OpenGl_Context>& aCtx = glWindow->GetGlContext();
    if (aCtx.IsNull())
    {
        return false;
    }

    // Invalidate framebuffer if size has changed
    int width, height;
    _View->Window()->Size(width, height);
    if (!_HighlightFramebuffer.IsNull() && (_HighlightFramebufferWidth != width || _HighlightFramebufferHeight != height))
    {
        _ReleaseFbo(aCtx);
    }

    // Create Framebuffer
    if (!_EnsureFbo(aCtx, width, height))
    {
        _HasError = true;
        return false;
    }

    // Setup
    Handle(Standard_Transient) prevFboPtr = g3dView->FBO();
    g3dView->SetFBO(_HighlightFramebuffer);
    g3dView->SetImmediateModeDrawToFront(true);
    g3dView->SetZLayerTarget(theLayer);
    g3dView->SetZLayerRedrawMode(true);
    Graphic3d_RenderingMode prevRenderMethod = g3dView->ChangeRenderingParams().Method;
    g3dView->ChangeRenderingParams().Method = Graphic3d_RM_RASTERIZATION;
    Graphic3d_TypeOfBackground prevBgType = g3dView->BackgroundType();
    g3dView->SetBackgroundType(Graphic3d_TOB_NONE);
    Aspect_Background prevAspectBg = g3dView->Background();
    g3dView->SetBackground(Aspect_Background(Quantity_Color(0.0, 0.0, 0.0, Quantity_TOC_RGB)));
    bool prevBuffersOpaqueAlpha = aCtx->caps->buffersOpaqueAlpha;
    aCtx->caps->buffersOpaqueAlpha = false;

    // Draw
    g3dView->Redraw();

    // Cleanup
    aCtx->caps->buffersOpaqueAlpha = prevBuffersOpaqueAlpha;
    g3dView->SetBackgroundType(prevBgType);
    g3dView->SetBackground(prevAspectBg);
    g3dView->SetZLayerRedrawMode(false);
    g3dView->SetImmediateModeDrawToFront(false);
    g3dView->SetZLayerTarget(Graphic3d_ZLayerId_BotOSD);
    g3dView->SetFBO(prevFboPtr);
    g3dView->ChangeRenderingParams().Method = prevRenderMethod;

    // Check if we need to change shader
    if (g3dView->ComputedMode() != _InHlrMode)
    {
        _InitDrawerAttributes(!_InHlrMode);
    }
    return true;
}

//--------------------------------------------------------------------------------------------------
