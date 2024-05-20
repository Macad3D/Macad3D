using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Input;
using System.Windows.Media;

namespace Macad.Presentation;

public class ToolbarContextMenu : ContextMenu
{
    public static readonly DependencyProperty ToolbarContentProperty = DependencyProperty.Register(nameof(ToolbarContent), typeof(object), typeof(ToolbarContextMenu),
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
    }

    //--------------------------------------------------------------------------------------------------

    public ToolbarContextMenu()
    {
        CustomPopupPlacementCallback = _CustomPopupPlacementCallback;
        Placement = PlacementMode.Custom;
        PlacementTarget ??= Application.Current.MainWindow;
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

    CustomPopupPlacement[] _CustomPopupPlacementCallback(Size popupSize, Size targetSize, Point offset)
    {
        var targetElement = PlacementTarget ?? Application.Current.MainWindow;
        Point targetPos = Mouse.GetPosition(targetElement);
        var dpiScale = VisualTreeHelper.GetDpi(this);
        targetPos.X *= dpiScale.DpiScaleX;
        targetPos.Y *= dpiScale.DpiScaleY;
        Point screenExt = targetElement.PointFromScreen(SystemParameters.WorkArea.BottomRight);

        // Check if there is enough space below the mouse, else place it above
        if (targetPos.Y + popupSize.Height > Math.Min(screenExt.Y, targetSize.Height ))
        {
            VerticalAlignment = VerticalAlignment.Top;
            targetPos.Y += -popupSize.Height + _ToolbarBorder.ActualHeight * dpiScale.DpiScaleY;
        }
        else
        {
            VerticalAlignment = VerticalAlignment.Bottom;
            targetPos.Y += -_ToolbarBorder.ActualHeight * dpiScale.DpiScaleY;
        }

        // Check if there is enough space right of the mouse, else place it left
        if (targetPos.X + popupSize.Width > Math.Min(screenExt.X, targetSize.Width ))
        {
            HorizontalAlignment = HorizontalAlignment.Left;
            targetPos.X += - popupSize.Width;
        }
        else
        {
            HorizontalAlignment = HorizontalAlignment.Right;
        }

        return [new(targetPos, PopupPrimaryAxis.Vertical)];
    }

    //--------------------------------------------------------------------------------------------------

}