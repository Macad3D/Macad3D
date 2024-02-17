using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;

namespace Macad.Presentation;

/// <summary>
/// Interaction logic for ColorPickerPanel.xaml
/// </summary>
public partial class ColorPickerPanel : UserControl
{
    public static readonly DependencyProperty SelectedColorProperty =
        DependencyProperty.Register("SelectedColor", typeof(Color), typeof(ColorPickerPanel), 
                                    new FrameworkPropertyMetadata(default(Color), FrameworkPropertyMetadataOptions.BindsTwoWayByDefault));

    public Color SelectedColor
    {
        get { return (Color) GetValue(SelectedColorProperty); }
        set { SetValue(SelectedColorProperty, value); }
    }

    public static readonly DependencyProperty RecentColorsProperty =
        DependencyProperty.Register("RecentColors", typeof(ColorHelper.HexagonColor[]), typeof(ColorPickerPanel));

    public ColorHelper.HexagonColor[] RecentColors
    {
        get { return (ColorHelper.HexagonColor[])GetValue(RecentColorsProperty); }
        set { SetValue(RecentColorsProperty, value); }
    }

    public ColorPickerPanel()
    {
        InitializeComponent();
    }
}