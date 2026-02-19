using System;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core;

public enum PresentationMode
{
    Wireframe,
    Solid,
    SolidWithBoundary
}

//--------------------------------------------------------------------------------------------------

public enum LineStyle
{
    Solid,
    Dash,
    ShortDash,
    Dot,
    DotDash
}

//--------------------------------------------------------------------------------------------------

public enum FillMode
{
    None,
    Solid
}

//--------------------------------------------------------------------------------------------------

public enum LineThickness
{
    Thin,
    Normal,
    Thick,
}

//--------------------------------------------------------------------------------------------------
    
public static class Colors
{
    public static readonly Color Default = new("#c0c0c0");
    public static readonly Color Selection = new(0.98f, 0.922f, 0.843f);
    public static readonly Color Highlight = new(0.933f, 0.706f, 0.133f);
    public static readonly Color FilteredSubshapes = new(0.0f, 0.698f, 0.933f);
    public static readonly Color FilteredSubshapesHot = new(1.0f, 0.0f, 0.0f);
    public static readonly Color Ghost = new(0.827f, 0.827f, 0.827f);
    public static readonly Color Auxillary = new(0.251f, 0.251f, 0.251f);
    public static readonly Color Marker = new(1.0f, 1.0f, 0.0f);
    public static readonly Color AttributeMarkerBackground = new(0.2f, 0.3f, 0.6f);
    public static readonly Color AttributeMarkerSelection = new(0.7f, 0.3f, 0.3f);
    public static readonly Color SketchEditorSegments = Color.White;
    public static readonly Color SketchEditorHighlight = new(0.933f, 0.706f, 0.133f);
    public static readonly Color SketchEditorSelection = new(1.0f, 0.0f, 0.0f);
    public static readonly Color SketchEditorCreating = new(0.933f, 0.706f, 0.133f);
    public static readonly Color SketchEditorAuxillary = new(0.0f, 0.604f, 0.804f);
    public static readonly Color ActionBlue = new(0.2f, 0.2f, 0.8f);
    public static readonly Color ActionRed = new(0.8f, 0.2f, 0.2f);
    public static readonly Color ActionGreen = new(0.2f, 0.8f, 0.2f);
    public static readonly Color ActionWhite = new(0.8f, 0.8f, 0.8f);
}

//--------------------------------------------------------------------------------------------------

public static class StyleHelper
{
    #region Collections

    public struct LineStyleDescription
    {
        public LineStyle Style { get; }
        public string Name { get; }
        public double[] Pattern { get; }

        public LineStyleDescription(LineStyle style, string name, double[] pattern)
        {
            Style = style;
            Name = name;
            Pattern = pattern;
        }
    }

    public static readonly LineStyleDescription[] LineStyleDescriptions =
    {
        new (LineStyle.Solid, "Solid", new []{10.0, 0.0}),
        new (LineStyle.Dash, "Dash", new []{4.0, 2.0}),
        new (LineStyle.ShortDash, "Short Dash", new []{2.0, 2.0}),
        new (LineStyle.Dot, "Dot", new []{1.0, 1.0}),
        new (LineStyle.DotDash, "Dot-Dash", new []{5.0, 2.0, 1.0, 2.0}),
    };

    //--------------------------------------------------------------------------------------------------

    public struct LineThicknessDescription
    {
        public LineThickness Thickness { get; }
        public string Name { get; }
        public double Width { get; }

        public LineThicknessDescription(LineThickness thickness, string name, double width)
        {
            Thickness = thickness;
            Name = name;
            Width = width;
        }
    }

    public static readonly LineThicknessDescription[] LineThicknessDescriptions =
    {
        new (LineThickness.Thin, "Thin", 1.0),
        new (LineThickness.Normal, "Normal", 2.0),
        new (LineThickness.Thick, "Thick", 3.0),
    };

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Extensions
        
    //--------------------------------------------------------------------------------------------------

    public static double[] Pattern(this LineStyle lineStyle)
    {
        return LineStyleDescriptions[(int) lineStyle].Pattern;
    }

    //--------------------------------------------------------------------------------------------------

    public static Aspect_TypeOfLine TypeOfLine(this LineStyle lineStyle)
    {
        return lineStyle switch
        {
            LineStyle.Solid => Aspect_TypeOfLine.SOLID,
            LineStyle.Dash => Aspect_TypeOfLine.DASH,
            LineStyle.ShortDash => Aspect_TypeOfLine.USERDEFINED,
            LineStyle.Dot => Aspect_TypeOfLine.DOT,
            LineStyle.DotDash => Aspect_TypeOfLine.DOTDASH,
            _ => Aspect_TypeOfLine.SOLID
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static void ApplyToAspect(this LineStyle lineStyle, Prs3d_LineAspect aspect)
    {
        var tol = lineStyle switch
        {
            LineStyle.Solid => Aspect_TypeOfLine.SOLID,
            LineStyle.Dash => Aspect_TypeOfLine.DASH,
            LineStyle.ShortDash => Aspect_TypeOfLine.USERDEFINED,
            LineStyle.Dot => Aspect_TypeOfLine.DOT,
            LineStyle.DotDash => Aspect_TypeOfLine.DOTDASH,
            _ => Aspect_TypeOfLine.SOLID
        };
            
        aspect.SetTypeOfLine(tol);

        if (tol == Aspect_TypeOfLine.USERDEFINED)
        {
            UInt16 pattern = lineStyle switch
            {
                LineStyle.ShortDash => 0xf8f8,
                _ => 0xffff
            };
            aspect.Aspect().SetLinePattern(pattern);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static double LineWidth(this LineThickness thickness)
    {
        return LineThicknessDescriptions[(int) thickness].Width;
    }

    #endregion
}

//--------------------------------------------------------------------------------------------------