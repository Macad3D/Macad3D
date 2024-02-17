using System;
using System.Windows;
using System.Windows.Controls;

namespace Macad.Presentation;

public class StretchPanel : Panel
{
    // Default public constructor 
    public StretchPanel()
        : base()
    {
    }

    // Override the default Measure method of Panel 
    protected override Size MeasureOverride(Size availableSize)
    {
        // Take the available space at minimum
        Size panelDesiredSize = new Size(
            Double.IsPositiveInfinity(availableSize.Width) ? 0 : availableSize.Width,
            Double.IsPositiveInfinity(availableSize.Height) ? 0 : availableSize.Height);

        foreach (UIElement child in InternalChildren)
        {
            child.Measure(availableSize);
            panelDesiredSize.Height = Math.Max(child.DesiredSize.Height, panelDesiredSize.Height);
            panelDesiredSize.Width = Math.Max(child.DesiredSize.Width, panelDesiredSize.Width);
        }

        return panelDesiredSize;
    }

    protected override Size ArrangeOverride(Size finalSize)
    {
        foreach (UIElement child in InternalChildren)
        {
            child.Arrange(new Rect(new Point(0, 0), finalSize));
        }
        return finalSize; // Returns the final Arranged size
    }
}