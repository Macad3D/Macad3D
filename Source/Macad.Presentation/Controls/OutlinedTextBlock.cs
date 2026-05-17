// Source - https://stackoverflow.com/a/49636033
// Posted by codeDom, modified by community. See post 'Timeline' for change history
// Retrieved 2026-05-17, License - CC BY-SA 4.0

using System;
using System.ComponentModel;
using System.Globalization;
using System.Windows;
using System.Windows.Documents;
using System.Windows.Markup;
using System.Windows.Media;

namespace Macad.Presentation;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

[ContentProperty("Text")]
public class OutlinedTextBlock : FrameworkElement
{
    public enum OutlineStrokePosition
    {
        Center,
        Outside,
        Inside
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty StrokePositionProperty =
        DependencyProperty.Register(nameof(StrokePosition),
            typeof(OutlineStrokePosition),
            typeof(OutlinedTextBlock),
            new FrameworkPropertyMetadata(OutlineStrokePosition.Outside, FrameworkPropertyMetadataOptions.AffectsRender));

    public static readonly DependencyProperty FillProperty = DependencyProperty.Register(
        nameof(Fill),
        typeof(Brush),
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(Brushes.Black, FrameworkPropertyMetadataOptions.AffectsRender));

    public static readonly DependencyProperty StrokeProperty = DependencyProperty.Register(
        nameof(Stroke),
        typeof(Brush),
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(Brushes.Black, FrameworkPropertyMetadataOptions.AffectsRender));

    public static readonly DependencyProperty StrokeThicknessProperty = DependencyProperty.Register(
        nameof(StrokeThickness),
        typeof(double),
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(1d, FrameworkPropertyMetadataOptions.AffectsRender));

    public static readonly DependencyProperty FontFamilyProperty = TextElement.FontFamilyProperty.AddOwner(
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(OnFormattedTextUpdated));

    public static readonly DependencyProperty FontSizeProperty = TextElement.FontSizeProperty.AddOwner(
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(OnFormattedTextUpdated));

    public static readonly DependencyProperty FontStretchProperty = TextElement.FontStretchProperty.AddOwner(
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(OnFormattedTextUpdated));

    public static readonly DependencyProperty FontStyleProperty = TextElement.FontStyleProperty.AddOwner(
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(OnFormattedTextUpdated));

    public static readonly DependencyProperty FontWeightProperty = TextElement.FontWeightProperty.AddOwner(
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(OnFormattedTextUpdated));

    public static readonly DependencyProperty TextProperty = DependencyProperty.Register(
        nameof(Text),
        typeof(string),
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(OnFormattedTextInvalidated));

    public static readonly DependencyProperty TextAlignmentProperty = DependencyProperty.Register(
        nameof(TextAlignment),
        typeof(TextAlignment),
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(OnFormattedTextUpdated));

    public static readonly DependencyProperty TextDecorationsProperty = DependencyProperty.Register(
        nameof(TextDecorations),
        typeof(TextDecorationCollection),
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(OnFormattedTextUpdated));

    public static readonly DependencyProperty TextTrimmingProperty = DependencyProperty.Register(
        nameof(TextTrimming),
        typeof(TextTrimming),
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(OnFormattedTextUpdated));

    public static readonly DependencyProperty TextWrappingProperty = DependencyProperty.Register(
        nameof(TextWrapping),
        typeof(TextWrapping),
        typeof(OutlinedTextBlock),
        new FrameworkPropertyMetadata(TextWrapping.NoWrap, OnFormattedTextUpdated));

    //--------------------------------------------------------------------------------------------------

    public OutlineStrokePosition StrokePosition
    {
        get { return (OutlineStrokePosition)GetValue(StrokePositionProperty); }
        set { SetValue(StrokePositionProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public Brush Fill
    {
        get { return (Brush)GetValue(FillProperty); }
        set { SetValue(FillProperty, value); }
    }

    public FontFamily FontFamily
    {
        get { return (FontFamily)GetValue(FontFamilyProperty); }
        set { SetValue(FontFamilyProperty, value); }
    }

    [TypeConverter(typeof(FontSizeConverter))]
    public double FontSize
    {
        get { return (double)GetValue(FontSizeProperty); }
        set { SetValue(FontSizeProperty, value); }
    }

    public FontStretch FontStretch
    {
        get { return (FontStretch)GetValue(FontStretchProperty); }
        set { SetValue(FontStretchProperty, value); }
    }

    public FontStyle FontStyle
    {
        get { return (FontStyle)GetValue(FontStyleProperty); }
        set { SetValue(FontStyleProperty, value); }
    }

    public FontWeight FontWeight
    {
        get { return (FontWeight)GetValue(FontWeightProperty); }
        set { SetValue(FontWeightProperty, value); }
    }

    public Brush Stroke
    {
        get { return (Brush)GetValue(StrokeProperty); }
        set { SetValue(StrokeProperty, value); }
    }

    public double StrokeThickness
    {
        get { return (double)GetValue(StrokeThicknessProperty); }
        set { SetValue(StrokeThicknessProperty, value); }
    }

    public string Text
    {
        get { return (string)GetValue(TextProperty); }
        set { SetValue(TextProperty, value); }
    }

    public TextAlignment TextAlignment
    {
        get { return (TextAlignment)GetValue(TextAlignmentProperty); }
        set { SetValue(TextAlignmentProperty, value); }
    }

    public TextDecorationCollection TextDecorations
    {
        get { return (TextDecorationCollection)GetValue(TextDecorationsProperty); }
        set { SetValue(TextDecorationsProperty, value); }
    }

    public TextTrimming TextTrimming
    {
        get { return (TextTrimming)GetValue(TextTrimmingProperty); }
        set { SetValue(TextTrimmingProperty, value); }
    }

    public TextWrapping TextWrapping
    {
        get { return (TextWrapping)GetValue(TextWrappingProperty); }
        set { SetValue(TextWrappingProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    FormattedText _FormattedText;
    Geometry _TextGeometry;
    Pen _Pen;
    PathGeometry _ClipGeometry;

    //--------------------------------------------------------------------------------------------------

    public OutlinedTextBlock()
    {
        UpdatePen();
        TextDecorations = new TextDecorationCollection();
    }

    //--------------------------------------------------------------------------------------------------

    void UpdatePen()
    {
        _Pen = new Pen(Stroke, StrokeThickness)
        {
            DashCap = PenLineCap.Round,
            EndLineCap = PenLineCap.Round,
            LineJoin = PenLineJoin.Round,
            StartLineCap = PenLineCap.Round
        };

        if (StrokePosition == OutlineStrokePosition.Outside || StrokePosition == OutlineStrokePosition.Inside)
        {
            _Pen.Thickness = StrokeThickness * 2;
        }

        InvalidateVisual();
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnRender(DrawingContext drawingContext)
    {
        EnsureGeometry();

        drawingContext.DrawGeometry(Fill, null, _TextGeometry);

        if (StrokePosition == OutlineStrokePosition.Outside)
        {
            drawingContext.PushClip(_ClipGeometry);
        }
        else if (StrokePosition == OutlineStrokePosition.Inside)
        {
            drawingContext.PushClip(_TextGeometry);
        }

        drawingContext.DrawGeometry(null, _Pen, _TextGeometry);

        if (StrokePosition == OutlineStrokePosition.Outside || StrokePosition == OutlineStrokePosition.Inside)
        {
            drawingContext.Pop();
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected override Size MeasureOverride(Size availableSize)
    {
        EnsureFormattedText();

        // constrain the formatted text according to the available size

        double w = availableSize.Width;
        double h = availableSize.Height;

        // the Math.Min call is important - without this constraint (which seems arbitrary, but is the maximum allowable text width), things blow up when availableSize is infinite in both directions
        // the Math.Max call is to ensure we don't hit zero, which will cause MaxTextHeight to throw
        _FormattedText.MaxTextWidth = Math.Min(3579139, w);
        _FormattedText.MaxTextHeight = Math.Max(0.0001d, h);

        // return the desired size
        return new Size(Math.Ceiling(_FormattedText.Width), Math.Ceiling(_FormattedText.Height));
    }

    //--------------------------------------------------------------------------------------------------

    protected override Size ArrangeOverride(Size finalSize)
    {
        EnsureFormattedText();

        // update the formatted text with the final size
        _FormattedText.MaxTextWidth = finalSize.Width;
        _FormattedText.MaxTextHeight = Math.Max(0.0001d, finalSize.Height);

        // need to re-generate the geometry now that the dimensions have changed
        _TextGeometry = null;
        UpdatePen();

        return finalSize;
    }

    //--------------------------------------------------------------------------------------------------

    static void OnFormattedTextInvalidated(DependencyObject dependencyObject, DependencyPropertyChangedEventArgs e)
    {
        var outlinedTextBlock = (OutlinedTextBlock)dependencyObject;
        outlinedTextBlock._FormattedText = null;
        outlinedTextBlock._TextGeometry = null;

        outlinedTextBlock.InvalidateMeasure();
        outlinedTextBlock.InvalidateVisual();
    }

    //--------------------------------------------------------------------------------------------------

    static void OnFormattedTextUpdated(DependencyObject dependencyObject, DependencyPropertyChangedEventArgs e)
    {
        var outlinedTextBlock = (OutlinedTextBlock)dependencyObject;
        outlinedTextBlock.UpdateFormattedText();
        outlinedTextBlock._TextGeometry = null;

        outlinedTextBlock.InvalidateMeasure();
        outlinedTextBlock.InvalidateVisual();
    }

    //--------------------------------------------------------------------------------------------------

    void EnsureFormattedText()
    {
        if (_FormattedText != null)
        {
            return;
        }

        _FormattedText = new FormattedText(
            Text ?? "",
            CultureInfo.CurrentUICulture,
            FlowDirection,
            new Typeface(FontFamily, FontStyle, FontWeight, FontStretch),
            FontSize,
            Brushes.Black,
            VisualTreeHelper.GetDpi(this).PixelsPerDip);

        UpdateFormattedText();
    }

    //--------------------------------------------------------------------------------------------------

    void UpdateFormattedText()
    {
        if (_FormattedText == null)
        {
            return;
        }

        _FormattedText.MaxLineCount = TextWrapping == TextWrapping.NoWrap ? 1 : int.MaxValue;
        _FormattedText.TextAlignment = TextAlignment;
        _FormattedText.Trimming = TextTrimming;

        _FormattedText.SetFontSize(FontSize);
        _FormattedText.SetFontStyle(FontStyle);
        _FormattedText.SetFontWeight(FontWeight);
        _FormattedText.SetFontFamily(FontFamily);
        _FormattedText.SetFontStretch(FontStretch);
        _FormattedText.SetTextDecorations(TextDecorations);
    }

    //--------------------------------------------------------------------------------------------------

    void EnsureGeometry()
    {
        if (_TextGeometry != null)
        {
            return;
        }

        EnsureFormattedText();
        _TextGeometry = _FormattedText.BuildGeometry(new(0, 0));

        if (StrokePosition == OutlineStrokePosition.Outside)
        {
            var boundsGeo = new RectangleGeometry(new(-(2 * StrokeThickness), -(2 * StrokeThickness), ActualWidth + 4 * StrokeThickness, ActualHeight + 4 * StrokeThickness));
            _ClipGeometry = Geometry.Combine(boundsGeo, _TextGeometry, GeometryCombineMode.Exclude, null);
        }
    }

    //--------------------------------------------------------------------------------------------------

}