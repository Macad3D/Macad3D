using Macad.Common;
using Macad.Occt;

namespace Macad.Core
{
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

    public enum LineThickness
    {
        Thin,
        Normal,
        Thick,
    }

    //--------------------------------------------------------------------------------------------------
    
    public static class Colors
    {
        public static readonly Quantity_Color Selection = Quantity_NameOfColor.Quantity_NOC_ANTIQUEWHITE.ToColor();
        public static readonly Quantity_Color Highlight = Quantity_NameOfColor.Quantity_NOC_GOLDENROD2.ToColor();
        public static readonly Quantity_Color FilteredSubshapes = Quantity_NameOfColor.Quantity_NOC_DEEPSKYBLUE2.ToColor();
        public static readonly Quantity_Color FilteredSubshapesHot = Quantity_NameOfColor.Quantity_NOC_RED.ToColor();
        public static readonly Quantity_Color Ghost = Quantity_NameOfColor.Quantity_NOC_LIGHTGRAY.ToColor();
        public static readonly Quantity_Color Auxillary = Quantity_NameOfColor.Quantity_NOC_GRAY25.ToColor();
        public static readonly Quantity_Color BallMarker = Quantity_NameOfColor.Quantity_NOC_YELLOW.ToColor();
        public static readonly Quantity_Color AttributeMarkerBackground = new Color(0.2f, 0.3f, 0.6f).ToQuantityColor();
        public static readonly Quantity_Color AttributeMarkerSelection = new Color(0.7f, 0.3f, 0.3f).ToQuantityColor();
        public static readonly Quantity_Color SketchEditorSegments = Quantity_NameOfColor.Quantity_NOC_WHITE.ToColor();
        public static readonly Quantity_Color SketchEditorHighlight = Quantity_NameOfColor.Quantity_NOC_GOLDENROD2.ToColor();
        public static readonly Quantity_Color SketchEditorSelection = Quantity_NameOfColor.Quantity_NOC_RED.ToColor();
        public static readonly Quantity_Color SketchEditorCreating = Quantity_NameOfColor.Quantity_NOC_GOLDENROD2.ToColor();
        public static readonly Quantity_Color SketchEditorAuxillary = Quantity_NameOfColor.Quantity_NOC_DEEPSKYBLUE3.ToColor();
    }

    //--------------------------------------------------------------------------------------------------

    public static class StyleHelper
    {
        #region Collections

        public struct LineStyleDescription
        {
            public LineStyle Style { get; }
            public string Name { get; }
            public double[] StrokeDashArray { get; }

            public LineStyleDescription(LineStyle style, string name, double[] strokeDashArray)
            {
                Style = style;
                Name = name;
                StrokeDashArray = strokeDashArray;
            }
        }

        public static LineStyleDescription[] LineStyleDescriptions =
        {
            new LineStyleDescription(LineStyle.Solid, "Solid", new []{10.0, 0.0}),
            new LineStyleDescription(LineStyle.Dash, "Dash", new []{4.0, 2.0}),
            new LineStyleDescription(LineStyle.ShortDash, "Short Dash", new []{2.0, 2.0}),
            new LineStyleDescription(LineStyle.Dot, "Dot", new []{1.0, 1.0}),
            new LineStyleDescription(LineStyle.DotDash, "Dot-Dash", new []{5.0, 2.0, 1.0, 2.0}),
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

        public static LineThicknessDescription[] LineThicknessDescriptions =
        {
            new LineThicknessDescription(LineThickness.Thin, "Thin", 1.0),
            new LineThicknessDescription(LineThickness.Normal, "Normal", 2.0),
            new LineThicknessDescription(LineThickness.Thick, "Thick", 3.0),
        };

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Extensions

        public static Aspect_TypeOfLine TypeOfLine(this LineStyle lineStyle)
        {
            return (Aspect_TypeOfLine) lineStyle;
        }

        //--------------------------------------------------------------------------------------------------

        public static double LineWidth(this LineThickness thickness)
        {
            return LineThicknessDescriptions[(int) thickness].Width;
        }

        #endregion
    }

    //--------------------------------------------------------------------------------------------------

}