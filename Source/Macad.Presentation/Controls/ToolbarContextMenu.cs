using System.Windows;
using System.Windows.Controls;

namespace Macad.Presentation;

public class ToolbarContextMenu : ContextMenu
{
    public static readonly DependencyProperty ToolbarContentProperty = DependencyProperty.Register("ToolbarContent", typeof(object), typeof(ToolbarContextMenu),
                                                                                                   new FrameworkPropertyMetadata(null, FrameworkPropertyMetadataOptions.AffectsRender | FrameworkPropertyMetadataOptions.AffectsParentMeasure));
    public object ToolbarContent
    {
        get { return (object)GetValue(ToolbarContentProperty); }
        set { SetValue(ToolbarContentProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    static ToolbarContextMenu()
    {
        DefaultStyleKeyProperty.OverrideMetadata(typeof(ToolbarContextMenu), 
                                                 new FrameworkPropertyMetadata(typeof(ToolbarContextMenu)));
        VerticalOffsetProperty.OverrideMetadata(typeof(ToolbarContextMenu), 
                                                new FrameworkPropertyMetadata(null, new CoerceValueCallback(CoerceVerticalOffset)));
    }

    //--------------------------------------------------------------------------------------------------

    static object CoerceVerticalOffset(DependencyObject d, object basevalue)
    {
        if (d is ToolbarContextMenu menu)
            return menu.CoerceVerticalOffset(basevalue);
        return basevalue;
    }

    //--------------------------------------------------------------------------------------------------

    const string _PartToolbarBorder = "PART_ToolbarBorder";
    FrameworkElement _ToolbarBorder;

    //--------------------------------------------------------------------------------------------------
        
    public override void OnApplyTemplate()
    {
        base.OnApplyTemplate();
        _ToolbarBorder = GetTemplateChild(_PartToolbarBorder) as FrameworkElement;
    }

    //--------------------------------------------------------------------------------------------------

    object CoerceVerticalOffset(object basevalue)
    {
        if (_ToolbarBorder != null && basevalue is double value)
        {
            return value - _ToolbarBorder.ActualHeight;
        }
        return basevalue;
    }

    //--------------------------------------------------------------------------------------------------

    protected override void OnRenderSizeChanged(SizeChangedInfo sizeInfo)
    {
        base.OnRenderSizeChanged(sizeInfo);
        CoerceValue(VerticalOffsetProperty);
    }

}