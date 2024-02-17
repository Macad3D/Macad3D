using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Controls;
using System.Windows;

namespace Macad.Presentation;
/*
 * http://www.codeproject.com/KB/WPF/TwoColumnGrid/TwoColumnGridSample.zip
 */

/// <summary>
/// Defines a table that has two columns with any number of rows. 
/// </summary>
/// <remarks>
/// This panel is designed for use in configuration/settings windows where you typically
/// have a pairs of "Label: SomeControl" organized in rows.
/// 
/// The width of the first column is determined by the widest item that column and the width of the 
/// second column is expanded to occupy all remaining space.
/// 
/// Written by: Isak Savo, isak.savo@gmail.com
/// Licensed under the Code Project Open License http://www.codeproject.com/info/cpol10.aspx
/// </remarks>
public class TwoColumnGrid : Panel
{
    private double Column1Width;
    private List<Double> RowHeights = new List<double>();

    /// <summary>
    /// Gets or sets the amount of spacing (in device independent pixels) between the rows.
    /// </summary>
    public double RowSpacing
    {
        get { return (double)GetValue(RowSpacingProperty); }
        set { SetValue(RowSpacingProperty, value); }
    }

    /// <summary>
    /// Identifies the ColumnSpacing dependency property
    /// </summary>
    public static readonly DependencyProperty RowSpacingProperty =
        DependencyProperty.Register("RowSpacing", typeof(double), typeof(TwoColumnGrid), 
                                    new FrameworkPropertyMetadata(0.0d, FrameworkPropertyMetadataOptions.AffectsArrange | FrameworkPropertyMetadataOptions.AffectsMeasure));

    /// <summary>
    /// Gets or sets the amount of spacing (in device independent pixels) between the columns.
    /// </summary>
    public double ColumnSpacing
    {
        get { return (double)GetValue(ColumnSpacingProperty); }
        set { SetValue(ColumnSpacingProperty, value); }
    }

    /// <summary>
    /// Identifies the ColumnSpacing dependency property
    /// </summary>
    public static readonly DependencyProperty ColumnSpacingProperty =
        DependencyProperty.Register("ColumnSpacing", typeof(double), typeof(TwoColumnGrid), 
                                    new FrameworkPropertyMetadata(0.0d, FrameworkPropertyMetadataOptions.AffectsArrange | FrameworkPropertyMetadataOptions.AffectsMeasure));


    /// <summary>
    /// Measures the size required for all the child elements in this panel.
    /// </summary>
    /// <param name="constraint">The size constraint given by our parent.</param>
    /// <returns>The requested size for this panel including all children</returns>
    protected override Size MeasureOverride(Size constraint)
    {            
        double col1Width = 0;
        double col2Width = 0;
        RowHeights.Clear();
        // First, measure all the left column children
        for (int i = 0; i < VisualChildrenCount; i += 2)
        {
            var child = Children[i];
            child.Measure(constraint);
            col1Width = Math.Max(child.DesiredSize.Width, col1Width);
            RowHeights.Add(child.DesiredSize.Height);
        }
        // Then, measure all the right column children, they get whatever remains in width
        var newWidth = Math.Max(0, constraint.Width - col1Width - ColumnSpacing);
        Size newConstraint = new Size(newWidth, constraint.Height);
        for (int i = 1; i < VisualChildrenCount; i += 2)
        {
            var child = Children[i];
            child.Measure(newConstraint);
            col2Width = Math.Max(child.DesiredSize.Width, col2Width);
            RowHeights[i/2] = Math.Max(RowHeights[i/2], child.DesiredSize.Height);
        }
            
        Column1Width = col1Width;
        return new Size(
            col1Width + ColumnSpacing + col2Width, 
            RowHeights.Sum() + ((RowHeights.Count - 1) * RowSpacing));
    }

    /// <summary>
    /// Position elements and determine the final size for this panel.
    /// </summary>
    /// <param name="arrangeSize">The final area where child elements should be positioned.</param>
    /// <returns>The final size required by this panel</returns>
    protected override Size ArrangeOverride(Size arrangeSize)
    {
        double y = 0;
        for (int i = 0; i < VisualChildrenCount; i++)
        {
            var child = Children[i];
            double height = RowHeights[i/2];
            if (i % 2 == 0)
            {
                // Left child
                var r = new Rect(0, y, Column1Width, height);
                child.Arrange(r);
            }
            else
            {
                // Right child
                var r = new Rect(Column1Width + ColumnSpacing, y, arrangeSize.Width - Column1Width - ColumnSpacing, height);
                child.Arrange(r);
                y += height;
                y += RowSpacing;
            }
        }
        return base.ArrangeOverride(arrangeSize);
    }
        
}