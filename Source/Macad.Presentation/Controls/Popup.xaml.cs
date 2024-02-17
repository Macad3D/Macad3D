using System.Windows;
using System.Windows.Controls;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("Body")]
public partial class Popup : UserControl
{
    public static readonly DependencyProperty HeaderProperty = DependencyProperty.Register(
        "Header", typeof(string), typeof(Popup),
        new FrameworkPropertyMetadata(null, FrameworkPropertyMetadataOptions.AffectsRender | FrameworkPropertyMetadataOptions.AffectsParentMeasure));

    public string Header
    {
        get { return (string)GetValue(HeaderProperty); }
        set { SetValue(HeaderProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty BodyProperty = DependencyProperty.Register(
        "Body", typeof(object), typeof(Popup), new PropertyMetadata(default(object)));

    public object Body
    {
        get { return (object)GetValue(BodyProperty); }
        set { SetValue(BodyProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty IsOpenProperty = DependencyProperty.Register(
        "IsOpen", typeof(bool), typeof(Popup), new PropertyMetadata(default(bool)));

    public bool IsOpen
    {
        get { return (bool) GetValue(IsOpenProperty); }
        set { SetValue(IsOpenProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty PlacementTargetProperty = DependencyProperty.Register(
        "PlacementTarget", typeof(UIElement), typeof(Popup), new PropertyMetadata(default(UIElement)));

    public UIElement PlacementTarget
    {
        get { return (UIElement) GetValue(PlacementTargetProperty); }
        set { SetValue(PlacementTargetProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public Popup()
    {
        InitializeComponent();
    }
}