using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;
using Macad.Common;

namespace Macad.Presentation;

public class PathEllipsisTextBehaviour : Behavior<TextBlock>
{
    public static readonly DependencyProperty OriginalPathProperty = DependencyProperty.Register(
        "OriginalPath", typeof(string), typeof(PathEllipsisTextBehaviour), new PropertyMetadata(default(string), _PropertyChangedCallback));

    public string OriginalPath
    {
        get { return (string)GetValue(OriginalPathProperty); }
        set { SetValue(OriginalPathProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    TextBlock _Target;

    //--------------------------------------------------------------------------------------------------

    public override void OnAttached(TextBlock target)
    {
        target.SizeChanged += _Target_SizeChanged;
        _Target = target;
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnDetached(TextBlock target)
    {
        target.SizeChanged -= _Target_SizeChanged;
    }

    //--------------------------------------------------------------------------------------------------
        
    void _Target_SizeChanged(object sender, SizeChangedEventArgs e)
    {
        _Update();
    }

    //--------------------------------------------------------------------------------------------------

    static void _PropertyChangedCallback(DependencyObject d, DependencyPropertyChangedEventArgs e)
    {
        if (e.Property == OriginalPathProperty)
        {
            (d as PathEllipsisTextBehaviour)?._Update();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Update()
    {
        var maxWidth = _Target.ActualWidth;
        if (maxWidth == 0 || maxWidth > _Target.MaxWidth)
        {
            maxWidth = _Target.MaxWidth;
        }
        _Target.Text = _TrimPath((string) GetValue(OriginalPathProperty), maxWidth);
    }

    //--------------------------------------------------------------------------------------------------

    double _Measure(string text)
    {
        var typeface = new Typeface(_Target.FontFamily, _Target.FontStyle, _Target.FontWeight, _Target.FontStretch);
        var formattedText = new FormattedText(text, CultureInfo.CurrentCulture, _Target.FlowDirection, typeface, _Target.FontSize, _Target.Foreground, VisualTreeHelper.GetDpi(_Target).PixelsPerDip);
        return formattedText.Width;
    }

    //--------------------------------------------------------------------------------------------------

    string _TrimPath(string originalPath, double maxWidth)
    {
        if (originalPath.IsNullOrEmpty() || maxWidth==0 || _Measure(originalPath)<=maxWidth)
            return originalPath;

        var path = originalPath;
        if (path[path.Length - 1] == Path.DirectorySeparatorChar || path[path.Length - 1] == Path.AltDirectorySeparatorChar)
        {
            path = path.Substring(0, path.Length - 1);
        }

        // The last part should be visible
        var lastPart = Path.GetFileName(path);
        path = Path.GetDirectoryName(path);

        // Enumerate all parts
        Stack<string> parts = new Stack<string>();
        while (!path.IsNullOrEmpty())
        {
            var part = Path.GetFileName(path);
            if (part.IsEmpty())
                part = path; // take the rest
            parts.Push(part);
            path = Path.GetDirectoryName(path);
        }
        if (parts.Count <= 1)
        {
            return originalPath;
        }

        // Calc minimum widths
        // This is the last part, the ellipsis and the sepchar before and after the ellipsis
        var fixedWidth = _Measure(@"\...\" + lastPart); 
        var sepWidth = _Measure(@"\"); 
        var currentPath = parts.Pop();
        var currentWidth = _Measure(currentPath);

        // Add and measure
        while (parts.Count > 0)
        {
            var part = parts.Pop();
            var partWidth = _Measure(part) + sepWidth;
            if (fixedWidth + currentWidth + partWidth > maxWidth)
            {
                return Path.Combine(currentPath, "...", lastPart);
            }

            currentPath = Path.Combine(currentPath, part);
            currentWidth += partWidth;
        }

        return originalPath;
    }
}