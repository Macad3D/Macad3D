using Macad.Core;
using Macad.Interaction.Visual;
using Macad.Occt;
using Macad.Occt.Extensions;
using System;
using System.Collections.Generic;
using System.Linq;
using Macad.Common;

namespace Macad.Interaction;

/// <summary>
/// Manages visual highlighting for the workspace. Provides both classic and modern
/// (outline) highlighting styles and coordinates creation, update
/// and disposal of the drawers required to render highlights.
/// </summary>
public sealed class Highlighter : IDisposable
{
    /// <summary>
    /// Gets the Z-layer id used for highlight rendering. The layer id depends
    /// on the selected highlight style and can change on runtime.
    /// </summary>
    public int HighlightLayerId
    {
        get { return _HLLayerId > 0 ? _HLLayerId : _ClassicDynamicHighlightDrawer.ZLayer(); }
    }

    /// <summary>
    /// Returns true when modern highlighting (outline) is active.
    /// </summary>
    public bool IsModernHighlighting
    {
        get { return _AisxOutlinePPs.Count > 0; }
    }

    /// <summary>
    /// Gets the drawer used for subshape highlighting (local dynamic highlighting).
    /// This drawer is currently the same for all highlighting styles.
    /// </summary>
    public Prs3d_Drawer SubshapeHighlightDrawer
    {
        get { return _LocalDynamicHighlightDrawer; }
    }

    //--------------------------------------------------------------------------------------------------

    readonly Dictionary<ViewportController, AISX_OutlinePostProcess> _AisxOutlinePPs = new();
    readonly WorkspaceController _WorkspaceController;
    int _PPLayerId;
    int _HLLayerId;
    Prs3d_Drawer _ClassicDynamicHighlightDrawer; 
    Prs3d_Drawer _LocalDynamicHighlightDrawer;
    bool _FallbackToClassic;

    //--------------------------------------------------------------------------------------------------

    internal Highlighter(WorkspaceController workspaceController)
    {
        _WorkspaceController = workspaceController;
        InteractiveContext.Current.Parameters.Get<VisualParameterSet>().ParameterChanged += _ParameterSet_ParameterChanged;
    }

    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
        InteractiveContext.Current.Parameters.Get<VisualParameterSet>().ParameterChanged -= _ParameterSet_ParameterChanged;
        _RemovePostProcessors();
    }

    //--------------------------------------------------------------------------------------------------

    public void Initialize()
    {
        _InitDefaults();
    }

    //--------------------------------------------------------------------------------------------------

    void _ParameterSet_ParameterChanged(ParameterSet parameterSet, string parameterKey)
    {
        if(parameterSet is not VisualParameterSet visualParameters)
            return;

        if (parameterKey == nameof(VisualParameterSet.OutlineWidth))
        {
            _AisxOutlinePPs.Values.ForEach(pp => pp.SetWidth(visualParameters.OutlineWidth));
            _WorkspaceController.Invalidate();
        }

        if (parameterKey == nameof(VisualParameterSet.HighlightStyle))
        {
            if (visualParameters.HighlightStyle == VisualParameterSet.HighlightStyles.Classic && IsModernHighlighting)
            {
                _WorkspaceController.AisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Dynamic, _ClassicDynamicHighlightDrawer);
                _RemovePostProcessors();
                _WorkspaceController.Invalidate();
            }
            else if (visualParameters.HighlightStyle == VisualParameterSet.HighlightStyles.Modern && !IsModernHighlighting)
            {
                var outlineDrawer = _CreateDrawerForOutline();
                _WorkspaceController.AisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Dynamic, outlineDrawer ?? _ClassicDynamicHighlightDrawer);
                if (outlineDrawer != null)
                {
                    _UpdatePostProcessors();
                }
                _WorkspaceController.Invalidate();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _InitDefaults()
    {
        VisualParameterSet visualParameters = InteractiveContext.Current.Parameters.Get<VisualParameterSet>();
        var aisContext = _WorkspaceController.AisContext;

        // Highlight Selected
        Prs3d_Drawer selectionDrawer = new Prs3d_Drawer();
        selectionDrawer.SetupOwnDefaults();
        selectionDrawer.SetColor(Colors.Selection.ToQuantityColor());
        selectionDrawer.SetDisplayMode(0);
        selectionDrawer.SetZLayer(0); // Graphic3d_ZLayerId_Default
        selectionDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.RELATIVE);
        selectionDrawer.SetDeviationAngle(aisContext.DeviationAngle());
        selectionDrawer.SetDeviationCoefficient(aisContext.DeviationCoefficient());
        aisContext.SetSelectionStyle(selectionDrawer);
        aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Selected, selectionDrawer);
        aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.LocalSelected, selectionDrawer);
        aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.SubIntensity, selectionDrawer);

        // Highlight Dynamic
        Prs3d_Drawer dynamicHighlightDrawer = new();
        dynamicHighlightDrawer.SetupOwnDefaults();
        dynamicHighlightDrawer.SetColor(Colors.Highlight.ToQuantityColor());
        dynamicHighlightDrawer.SetDisplayMode(0);
        dynamicHighlightDrawer.SetZLayer(-2); // Graphic3d_ZLayerId_Top
        dynamicHighlightDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.RELATIVE);
        dynamicHighlightDrawer.SetDeviationAngle(aisContext.DeviationAngle());
        dynamicHighlightDrawer.SetDeviationCoefficient(aisContext.DeviationCoefficient());
        _ClassicDynamicHighlightDrawer = dynamicHighlightDrawer;
        if (visualParameters.HighlightStyle == VisualParameterSet.HighlightStyles.Modern)
        {
            dynamicHighlightDrawer = _CreateDrawerForOutline() ?? dynamicHighlightDrawer;
        }
        aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Dynamic, dynamicHighlightDrawer);

        // Highlight Local
        Prs3d_Drawer hilightLocalDrawer = new();
        hilightLocalDrawer.SetupOwnDefaults();
        hilightLocalDrawer.SetColor(Colors.Highlight.ToQuantityColor());
        hilightLocalDrawer.SetDisplayMode(1);
        hilightLocalDrawer.SetZLayer(-2); // Graphic3d_ZLayerId_Top
        hilightLocalDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.RELATIVE);
        hilightLocalDrawer.SetDeviationAngle(aisContext.DeviationAngle());
        hilightLocalDrawer.SetDeviationCoefficient(aisContext.DeviationCoefficient());

        Prs3d_ShadingAspect shadingAspect = new();
        shadingAspect.SetColor(Colors.Highlight.ToQuantityColor());
        shadingAspect.SetTransparency(0);
        shadingAspect.Aspect().SetPolygonOffsets((int)Aspect_PolygonOffsetMode.Fill, 0.99f, 0.0f);
        hilightLocalDrawer.SetShadingAspect(shadingAspect);

        Prs3d_LineAspect lineAspect = new(Colors.Highlight.ToQuantityColor(), Aspect_TypeOfLine.SOLID, 3.0);
        hilightLocalDrawer.SetLineAspect(lineAspect);
        hilightLocalDrawer.SetSeenLineAspect(lineAspect);
        hilightLocalDrawer.SetWireAspect(lineAspect);
        hilightLocalDrawer.SetFaceBoundaryAspect(lineAspect);
        hilightLocalDrawer.SetFreeBoundaryAspect(lineAspect);
        hilightLocalDrawer.SetUnFreeBoundaryAspect(lineAspect);
        hilightLocalDrawer.SetPointAspect(Marker.CreateBitmapPointAspect(Marker.BallImage, Colors.Highlight));

        aisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.LocalDynamic, hilightLocalDrawer);
        _LocalDynamicHighlightDrawer = hilightLocalDrawer;

        if (visualParameters.HighlightStyle == VisualParameterSet.HighlightStyles.Modern)
        {
            _UpdatePostProcessors();
        }
    }

    //--------------------------------------------------------------------------------------------------

    Prs3d_Drawer _CreateDrawerForOutline()
    {
        if (_PPLayerId == 0)
        {
            // Create custom layer for out post processor to be on top
            Graphic3d_ZLayerSettings ppLayerSettings = new();
            ppLayerSettings.SetImmediate(true);
            ppLayerSettings.SetClearDepth(false);
            ppLayerSettings.SetEnableDepthWrite(false);
            _WorkspaceController.V3dViewer.InsertLayerAfter(ref _PPLayerId, ppLayerSettings, -2 /* Graphic3d_ZLayerId_Top */);
        }

        if (_HLLayerId == 0)
        {
            // Create custom layer for highlighted shapes and the outline overlay
            // This will never be drawn on normal redraw, but only on explicit trigger by the post processor
            Graphic3d_ZLayerSettings hlLayerSettings = new();
            hlLayerSettings.SetImmediate(true);
            hlLayerSettings.SetClearDepth(true);
            hlLayerSettings.SetVisible(false);
            hlLayerSettings.SetEnableDepthTest(false);
            hlLayerSettings.SetRaytracable(false);
            _WorkspaceController.V3dViewer.InsertLayerAfter(ref _HLLayerId, hlLayerSettings, -4 /* Graphic3d_ZLayerId_TopOSD */);
        }

        // Create drawer for the highlights
        Prs3d_Drawer hilightDrawer = new();
        hilightDrawer.SetupOwnDefaults();
        hilightDrawer.SetColor(Colors.Highlight.ToQuantityColor());
        hilightDrawer.SetDisplayMode(1);
        hilightDrawer.SetBasicFillAreaAspect(new()); // To ensure no transparency is rendered
        hilightDrawer.SetZLayer(_HLLayerId);
        hilightDrawer.SetTypeOfDeflection(Aspect_TypeOfDeflection.RELATIVE);
        hilightDrawer.SetDeviationAngle(_WorkspaceController.AisContext.DeviationAngle());
        hilightDrawer.SetDeviationCoefficient(_WorkspaceController.AisContext.DeviationCoefficient());
        return hilightDrawer;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdatePostProcessors()
    {
        VisualParameterSet visualParameters = InteractiveContext.Current.Parameters.Get<VisualParameterSet>();
        if (visualParameters.HighlightStyle != VisualParameterSet.HighlightStyles.Modern || _FallbackToClassic)
        {
            _RemovePostProcessors();
            return;
        }

        // Remove inactive viewports
        foreach (var viewportController in _AisxOutlinePPs.Keys.Where(vp => !vp.IsVisible).ToArray())
        {
            _RemovePostProcessor(viewportController);
        }

        // Create/update post process for each active viewport
        foreach (var viewportController in _WorkspaceController.ViewportControllers.Where(vp => vp.IsVisible))
        {
            if (!_AisxOutlinePPs.TryGetValue(viewportController, out AISX_OutlinePostProcess pp))
            {
                pp = new(viewportController.V3dView);
                _AisxOutlinePPs[viewportController] = pp;
            }

            pp.SetZLayer(_PPLayerId);
            pp.SetColor(Colors.Highlight.ToQuantityColor());
            pp.SetWidth(visualParameters.OutlineWidth);
            if (!_WorkspaceController.AisContext.IsDisplayed(pp))
            {
                _WorkspaceController.AisContext.Display(pp, false);
            }

            pp.ViewAffinity().SetVisible(false);
            _WorkspaceController.AisContext.SetViewAffinity(pp, viewportController.V3dView, true);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RemovePostProcessor(ViewportController viewportController)
    {
        if (_AisxOutlinePPs.Remove(viewportController, out var postProcess))
        {
            _WorkspaceController.AisContext.Erase(postProcess, false);
            postProcess.Dispose();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _RemovePostProcessors()
    {
        foreach (var pp in _AisxOutlinePPs.Values)
        {
            _WorkspaceController.AisContext.Erase(pp, false);
            pp.Dispose();
        }
        _AisxOutlinePPs.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Called by the workspace controller directly before drawing. This updates the highlighting
    /// input for the post processors.
    /// </summary>
    internal void PrepareDraw()
    {
        // Check if we need to update
        foreach (var viewportController in _WorkspaceController.ViewportControllers)
        {
            bool hasPP = _AisxOutlinePPs.ContainsKey(viewportController);
            if (viewportController.IsVisible != hasPP)
            {
                _UpdatePostProcessors();
                break;
            }
        }

        if (_AisxOutlinePPs.Count == 0)
            return;

        var layerSettings = _WorkspaceController.V3dViewer.ZLayerSettings(_HLLayerId);
        layerSettings.SetVisible(true);
        _WorkspaceController.V3dViewer.SetZLayerSettings(_HLLayerId, layerSettings);

        foreach (var kvp in _AisxOutlinePPs)
        {
            if(!kvp.Key.IsVisible)
                continue;

            kvp.Value.UpdateHighlights(_HLLayerId);
            if (kvp.Value.HasError())
            {
                _FallbackToClassic = true;
                break;
            }
        }

        layerSettings.SetVisible(false);
        _WorkspaceController.V3dViewer.SetZLayerSettings(_HLLayerId, layerSettings);

        if (_FallbackToClassic)
        {
            // Switch to fallback of classic highlighting, as outline rendering failed
            _WorkspaceController.AisContext.SetHighlightStyle(Prs3d_TypeOfHighlight.Dynamic, _ClassicDynamicHighlightDrawer);
            _RemovePostProcessors();
            Messages.Info("An error occured when trying to render modern highlighting. Switched back to classic highlighting.");
        }
    }

    //--------------------------------------------------------------------------------------------------


}