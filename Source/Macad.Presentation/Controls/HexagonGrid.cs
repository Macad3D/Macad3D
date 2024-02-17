using System.Windows;
using System.Windows.Controls;

namespace Macad.Presentation;

public class HexagonGrid : Grid
{
    /*
     * If the length of 1 side of the hexagon = S, then:
     * Width = S x SQRT(3)
     * Height = S x 2
     * Column C starts at C x Width
     * Row R starts at R x (0.75 x Height)
     * A columns's uneven row have an horizontal offset of 0.5 x Width
     */
         
    #region HexagonSideLength

    /// <summary>
    /// HexagonSideLength Dependency Property
    /// </summary>
    public static readonly DependencyProperty HexagonSideLengthProperty =
        DependencyProperty.Register("HexagonSideLength", typeof(double), typeof(HexagonGrid),
                                    new FrameworkPropertyMetadata((double)0,
                                                                  FrameworkPropertyMetadataOptions.AffectsMeasure));

    /// <summary>
    /// Gets or sets the HexagonSideLength property. This dependency property 
    /// represents the length of 1 side of the hexagon.
    /// </summary>
    public double HexagonSideLength
    {
        get { return (double)GetValue(HexagonSideLengthProperty); }
        set { SetValue(HexagonSideLengthProperty, value); }
    }

    #endregion

    #region Rows

    /// <summary>
    /// Rows Dependency Property
    /// </summary>
    public static readonly DependencyProperty RowsProperty =
        DependencyProperty.Register("Rows", typeof(int), typeof(HexagonGrid),
                                    new FrameworkPropertyMetadata((int)1,
                                                                  FrameworkPropertyMetadataOptions.AffectsMeasure));

    /// <summary>
    /// Gets or sets the Rows property.
    /// </summary>
    public int Rows
    {
        get { return (int)GetValue(RowsProperty); }
        set { SetValue(RowsProperty, value); }
    }

    #endregion

    #region Columns

    /// <summary>
    /// Columns Dependency Property
    /// </summary>
    public static readonly DependencyProperty ColumnsProperty =
        DependencyProperty.Register("Columns", typeof(int), typeof(HexagonGrid),
                                    new FrameworkPropertyMetadata((int)1,
                                                                  FrameworkPropertyMetadataOptions.AffectsMeasure));

    /// <summary>
    /// Gets or sets the Columns property.
    /// </summary>
    public int Columns
    {
        get { return (int)GetValue(ColumnsProperty); }
        set { SetValue(ColumnsProperty, value); }
    }

    #endregion

    protected override Size MeasureOverride(Size constraint)
    {
        double side = HexagonSideLength;
        double width = 2 * side;
        double height = 2 * side;// side * Math.Sqrt(3.0);
        double colWidth = width; // 0.75 * width;
        double rowHeight = 0.75 * height; // height;

        Size availableChildSize = new Size(width, height);

        foreach (FrameworkElement child in this.InternalChildren)
        {
            child.Measure(availableChildSize);
        }

        double totalHeight = Rows * rowHeight + 0.5 * side;
        double totalWidth = Columns * colWidth;
        if (Rows % 2 != 0)
            totalWidth += (0.5 * colWidth);

        Size totalSize = new Size(totalWidth, totalHeight);

        return totalSize;
    }

    protected override Size ArrangeOverride(Size arrangeSize)
    {
        double side = HexagonSideLength;
        double width = 2 * side;
        double height = 2 * side; //side * Math.Sqrt(3.0);
        double colWidth = width; // 0.75 * width;
        double rowHeight = 0.75 * height; // height;

        Size childSize = new Size(width, height);

        foreach (FrameworkElement child in this.InternalChildren)
        {
            int row = GetRow(child);
            int col = GetColumn(child);

            double left = col * colWidth;
            double top = row * rowHeight;
            bool isUnevenRow = (row % 2 != 0);
            if (isUnevenRow)
                left += (0.5 * colWidth);

            child.Arrange(new Rect(new Point(left, top), childSize));
        }

        return arrangeSize;
    }
}