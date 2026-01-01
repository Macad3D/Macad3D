#pragma once

class AISX_OutlinePostProcess : public AIS_InteractiveObject
{
public:
    AISX_OutlinePostProcess(const opencascade::handle<V3d_View>& theView);
    ~AISX_OutlinePostProcess() override;

    //--------------------------------------------------------------------------------------------------

    void Compute(const Handle(PrsMgr_PresentationManager)& thePrsMgr, const Handle(Prs3d_Presentation)& thePrs, const Standard_Integer theMode) override;
    void ComputeSelection(const Handle(SelectMgr_Selection)& theSelection, const Standard_Integer theMode) override;

    //--------------------------------------------------------------------------------------------------

    bool UpdateHighlights(int theLayer);
    void Release();
    bool HasError() const { return _HasError; }

    //--------------------------------------------------------------------------------------------------

    DEFINE_STANDARD_RTTIEXT(AISX_OutlinePostProcess, AIS_InteractiveObject)

    //--------------------------------------------------------------------------------------------------

private:

    void _InitDrawerAttributes(bool hlrMode);
    void _Render(const opencascade::handle<OpenGl_Workspace>& theWorkspace);
    void _ReleaseFbo(const opencascade::handle<OpenGl_Context>& theCtx);
    bool _EnsureFbo(const opencascade::handle<OpenGl_Context>& theCtx, int width, int height);

    //--------------------------------------------------------------------------------------------------

    opencascade::handle<V3d_View> _View;
    opencascade::handle<Graphic3d_ShaderProgram> _ShaderProgram;
    opencascade::handle<OpenGl_FrameBuffer> _HighlightFramebuffer;
    GLuint _HighlightFbo = 0;
    GLuint _HighlightColorTexture = 0;
    GLuint _HighlightDepthTexture = 0;
    int _HighlightFramebufferWidth = 0;
    int _HighlightFramebufferHeight = 0;
    bool _HasError = false;
    bool _InHlrMode = false;

    //--------------------------------------------------------------------------------------------------

    class RenderElement : public OpenGl_Element
    {
    public:
        RenderElement(const Handle(AISX_OutlinePostProcess)& thePostProcess)
        : _PostProcess(thePostProcess)
        {}

        void Render(const opencascade::handle<OpenGl_Workspace>& theWorkspace) const override
        {
            if (!_PostProcess.IsNull())
            {
                _PostProcess->_Render(theWorkspace);
            }
        }

        void Release(OpenGl_Context* theContext) override {}

    private:
        Handle(AISX_OutlinePostProcess) _PostProcess;
    };

    //--------------------------------------------------------------------------------------------------


};

