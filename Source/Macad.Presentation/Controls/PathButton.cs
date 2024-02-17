using System;
using System.Windows;
using System.Windows.Media;

namespace Macad.Presentation;

public class PathButton : System.Windows.Controls.Primitives.ButtonBase
{
    #region Dependency Properties

    public static readonly DependencyProperty PathDataProperty = DependencyProperty.Register("PathData", typeof(Geometry), typeof(PathButton), new PropertyMetadata(default(Geometry)));

    public Geometry PathData
    {
        get { return (Geometry)GetValue(PathDataProperty); }
        set { SetValue(PathDataProperty, value); }
    }

    #endregion


    static PathButton()
    {
        Type type = typeof(PathButton);
        DefaultStyleKeyProperty.OverrideMetadata(type, new FrameworkPropertyMetadata(typeof(PathButton)));
    }

}