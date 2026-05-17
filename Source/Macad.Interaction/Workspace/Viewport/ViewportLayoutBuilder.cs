using System;
using Macad.Core;
using System.Linq;
using Macad.Common;
using Macad.Occt;

namespace Macad.Interaction;

/// <summary>
/// Provides factory methods for creating predefined viewport frame layouts
/// and configuring the required viewports within a workspace.
/// </summary>
public static class ViewportLayoutBuilder
{
    /// <summary>
    /// Defines the available viewport layout configurations.
    /// </summary>
    public enum Layout
    {
        Single,
        DualVertical,
        DualHorizontal,
        TripleRight,
        TripleLeft,
        TripleTop,
        TripleBottom,
        Quad,
        QuadRight,
        QuadLeft,
        QuadTop,
        QuadBottom
    }

    //--------------------------------------------------------------------------------------------------

    enum ViewportTemplates
    {
        Main,
        Front,
        Top,
        Left
    }

    //--------------------------------------------------------------------------------------------------

    enum ViewportId
    {
        Main,
        Secondary,
        Aux1,
        Aux2,
        Aux3
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Builds a viewport frame hierarchy for the specified layout
    /// and ensures that all required viewports exist in the workspace.
    /// </summary>
    /// <param name="layout">
    /// The layout configuration to create.
    /// </param>
    /// <param name="workspace">
    /// The workspace containing the viewports used by the layout.
    /// </param>
    /// <returns>
    /// An <see cref="IViewportFrame"/> representing the requested layout.
    /// </returns>
    public static IViewportFrame Build(Layout layout, Workspace workspace)
    {
        switch (layout)
        {
            case Layout.Single:
                return _Single(workspace);

            case Layout.DualVertical:
            case Layout.DualHorizontal:
                return _Dual(layout, workspace);

            case Layout.TripleRight:
            case Layout.TripleLeft:
            case Layout.TripleTop:
            case Layout.TripleBottom:
                return _Triple(layout, workspace);

            case Layout.Quad:
            case Layout.QuadRight:
            case Layout.QuadLeft:
            case Layout.QuadTop:
            case Layout.QuadBottom:
                return _Quad(layout, workspace);

            default:
                Messages.Error($"Layout {layout} is not implemented.");
                return _Single(workspace);
        }
    }

    //--------------------------------------------------------------------------------------------------

    static IViewportFrame _Single(Workspace workspace)
    {
        var index = _GetOrCreateViewport(workspace, ViewportId.Main, ViewportTemplates.Main);
        var frame = new ViewportContentFrame { ViewportIndex = index };
        return frame;
    }

    //--------------------------------------------------------------------------------------------------

    static IViewportFrame _Dual(Layout layout, Workspace workspace)
    {
        var indexMain = _GetOrCreateViewport(workspace, ViewportId.Main, ViewportTemplates.Main);
        var indexSecond = _GetOrCreateViewport(workspace, ViewportId.Secondary, ViewportTemplates.Main);

        return layout switch
        {
            Layout.DualVertical => new ViewportVerticalSplitFrame
            {
                LeftFrame = new ViewportContentFrame { ViewportIndex = indexSecond }, 
                RightFrame = new ViewportContentFrame { ViewportIndex = indexMain }
            },

            Layout.DualHorizontal => new ViewportHorizontalSplitFrame
            {
                TopFrame = new ViewportContentFrame { ViewportIndex = indexSecond }, 
                BottomFrame = new ViewportContentFrame { ViewportIndex = indexMain }
            },

            _ => throw new ArgumentOutOfRangeException(nameof(layout), layout, null)
        };
    }

    //--------------------------------------------------------------------------------------------------

    static IViewportFrame _Triple(Layout layout, Workspace workspace)
    {
        var indexMain = _GetOrCreateViewport(workspace, ViewportId.Main, ViewportTemplates.Main);
        int index1;
        int index2;
        switch (layout)
        {
            case Layout.TripleRight:
            case Layout.TripleLeft:
                index1 = _GetOrCreateViewport(workspace, ViewportId.Aux1, ViewportTemplates.Front);
                index2 = _GetOrCreateViewport(workspace, ViewportId.Aux3, ViewportTemplates.Top);
                break;
            case Layout.TripleTop:
            case Layout.TripleBottom:
                index1 = _GetOrCreateViewport(workspace, ViewportId.Aux1, ViewportTemplates.Front);
                index2 = _GetOrCreateViewport(workspace, ViewportId.Aux2, ViewportTemplates.Left);
                break;
            default:
                throw new ArgumentOutOfRangeException(nameof(layout), layout, null);
        }

        return layout switch
        {
            Layout.TripleRight => new ViewportVerticalSplitFrame
            {
                LeftFrame = new ViewportContentFrame { ViewportIndex = indexMain },
                RightFrame = new ViewportHorizontalSplitFrame
                    {
                        TopFrame = new ViewportContentFrame { ViewportIndex = index1 },
                        BottomFrame = new ViewportContentFrame { ViewportIndex = index2 }
                    }
            },

            Layout.TripleLeft => new ViewportVerticalSplitFrame
            {
                RightFrame = new ViewportContentFrame { ViewportIndex = indexMain },
                LeftFrame = new ViewportHorizontalSplitFrame
                {
                    TopFrame = new ViewportContentFrame { ViewportIndex = index1 },
                    BottomFrame = new ViewportContentFrame { ViewportIndex = index2 }
                }
            },

            Layout.TripleTop => new ViewportHorizontalSplitFrame
            {
                BottomFrame = new ViewportContentFrame { ViewportIndex = indexMain },
                TopFrame = new ViewportVerticalSplitFrame
                {
                    LeftFrame = new ViewportContentFrame { ViewportIndex = index1 },
                    RightFrame = new ViewportContentFrame { ViewportIndex = index2 }
                }
            },

            Layout.TripleBottom => new ViewportHorizontalSplitFrame
            {
                TopFrame = new ViewportContentFrame { ViewportIndex = indexMain },
                BottomFrame = new ViewportVerticalSplitFrame
                {
                    LeftFrame = new ViewportContentFrame { ViewportIndex = index1 },
                    RightFrame = new ViewportContentFrame { ViewportIndex = index2 }
                }
            },

            _ => throw new ArgumentOutOfRangeException(nameof(layout), layout, null)
        };
    }

    //--------------------------------------------------------------------------------------------------

    static IViewportFrame _Quad(Layout layout, Workspace workspace)
    {
        var indexMain = _GetOrCreateViewport(workspace, ViewportId.Main, ViewportTemplates.Main);
        var indexFront = _GetOrCreateViewport(workspace, ViewportId.Aux1, ViewportTemplates.Front);
        var indexLeft = _GetOrCreateViewport(workspace, ViewportId.Aux2, ViewportTemplates.Left);
        var indexTop = _GetOrCreateViewport(workspace, ViewportId.Aux3,ViewportTemplates.Top);

        return layout switch
        {
            Layout.Quad => new ViewportQuadSplitFrame
            {
                RightBottomFrame = new ViewportContentFrame { ViewportIndex = indexMain },
                LeftBottomFrame = new ViewportContentFrame { ViewportIndex = indexTop },
                RightTopFrame = new ViewportContentFrame { ViewportIndex = indexLeft },
                LeftTopFrame = new ViewportContentFrame { ViewportIndex = indexFront },
            },

            Layout.QuadRight => new ViewportVerticalSplitFrame
            {
                SplitRatio = 0.66f,
                LeftFrame = new ViewportContentFrame { ViewportIndex = indexMain },
                RightFrame = new ViewportHorizontalTripleSplitFrame
                {
                    TopFrame = new ViewportContentFrame { ViewportIndex = indexLeft },
                    MiddleFrame = new ViewportContentFrame { ViewportIndex = indexFront },
                    BottomFrame = new ViewportContentFrame { ViewportIndex = indexTop }
                }
            },

            Layout.QuadLeft => new ViewportVerticalSplitFrame
            {
                SplitRatio = 0.33f,
                RightFrame = new ViewportContentFrame { ViewportIndex = indexMain },
                LeftFrame = new ViewportHorizontalTripleSplitFrame
                {
                    TopFrame = new ViewportContentFrame { ViewportIndex = indexLeft },
                    MiddleFrame = new ViewportContentFrame { ViewportIndex = indexFront },
                    BottomFrame = new ViewportContentFrame { ViewportIndex = indexTop }
                }
            },

            Layout.QuadBottom => new ViewportHorizontalSplitFrame
            {
                SplitRatio = 0.66f,
                TopFrame = new ViewportContentFrame { ViewportIndex = indexMain },
                BottomFrame = new ViewportVerticalTripleSplitFrame
                {
                    LeftFrame = new ViewportContentFrame { ViewportIndex = indexTop },
                    MiddleFrame = new ViewportContentFrame { ViewportIndex = indexFront },
                    RightFrame = new ViewportContentFrame { ViewportIndex = indexLeft }
                }
            },

            Layout.QuadTop => new ViewportHorizontalSplitFrame
            {
                SplitRatio = 0.33f,
                BottomFrame = new ViewportContentFrame { ViewportIndex = indexMain },
                TopFrame = new ViewportVerticalTripleSplitFrame
                {
                    LeftFrame = new ViewportContentFrame { ViewportIndex = indexTop },
                    MiddleFrame = new ViewportContentFrame { ViewportIndex = indexFront },
                    RightFrame = new ViewportContentFrame { ViewportIndex = indexLeft }
                }
            },

            _ => throw new ArgumentOutOfRangeException(nameof(layout), layout, null)
        };
    }

    //--------------------------------------------------------------------------------------------------

    static int _GetOrCreateViewport(Workspace workspace, ViewportId id, ViewportTemplates template)
    {
        string viewportName = id.ToString();
        int index = workspace.Viewports.FindIndex(vp => vp.Name == viewportName);
        if (index > -1)
        {
            return index;
        }

        // Find unnamed viewport, which is the case for the default viewport created prior v5.
        if (id == ViewportId.Main && workspace.Viewports.Count > 0)
        {
            workspace.Viewports[0].Name = viewportName;
            return 0;
        }

        // Create a new viewport.
        Viewport viewport = workspace.CreateViewport();
        index = workspace.Viewports.IndexOf(viewport);
        viewport.Name = viewportName;
        if (id != ViewportId.Main)
        {
            _SetupViewport(viewport, template);
        }

        return index;
    }

    //--------------------------------------------------------------------------------------------------

    static void _SetupViewport(Viewport viewport, ViewportTemplates template)
    {
        Viewport mainViewport = viewport.Workspace.Viewports.FirstOrDefault(vp => vp.Name == nameof(ViewportTemplates.Main)) 
                                ?? viewport.Workspace.Viewports[0];

        viewport.EyePoint = mainViewport.EyePoint;
        viewport.TargetPoint = mainViewport.TargetPoint;
        viewport.Scale = mainViewport.Scale;

        switch (template)
        {
            case ViewportTemplates.Main:
                viewport.RenderMode = mainViewport.RenderMode;
                viewport.Twist = mainViewport.Twist;
                break;
            case ViewportTemplates.Front:
                viewport.RenderMode = Viewport.RenderModes.HLR;
                _SetupViewportPredefinedView(viewport, ViewUtils.PredefinedView.Front);
                break;
            case ViewportTemplates.Top:
                viewport.RenderMode = Viewport.RenderModes.HLR;
                _SetupViewportPredefinedView(viewport, ViewUtils.PredefinedView.Top);
                break;
            case ViewportTemplates.Left:
                viewport.RenderMode = Viewport.RenderModes.HLR;
                _SetupViewportPredefinedView(viewport, ViewUtils.PredefinedView.Left);
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    static void _SetupViewportPredefinedView(Viewport viewport, ViewUtils.PredefinedView predefinedView)
    {
        var parameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
        var distance = viewport.TargetPoint.Distance(viewport.EyePoint);
        var axes = ViewUtils.GetProjAxis(predefinedView, parameterSet.ForwardDirection);
        if (axes.HasValue)
        {
            viewport.EyePoint = viewport.TargetPoint.Translated(axes.Value.Proj.ToVec(distance));
            if (axes.Value.Up.Z == 0)
            {
                double angle = axes.Value.Up.AngleWithRef(Dir.DY, -Dir.DZ);
                viewport.Twist = angle.ToDeg();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
}