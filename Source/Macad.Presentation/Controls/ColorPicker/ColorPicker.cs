// --------------------------------------------------------------------------------------------------------------------
// <copyright file="ColorPicker.cs" company="PropertyTools">
//   Copyright (c) 2014 PropertyTools contributors
// </copyright>
// <summary>
//   Represents a control that lets the user pick a color.
// </summary>
// --------------------------------------------------------------------------------------------------------------------
using System;
using System.Collections.Generic;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using Color = System.Windows.Media.Color;

namespace Macad.Presentation;

[TemplatePart(Name = _PartColorPickerGrid, Type = typeof(Grid))]
public class ColorPicker : ComboBox
{
    public static readonly DependencyProperty SelectedColorProperty = 
        DependencyProperty.Register( "SelectedColor", typeof(Color), typeof(ColorPicker), 
                                     new FrameworkPropertyMetadata( Color.FromArgb(0, 0, 0, 0), FrameworkPropertyMetadataOptions.BindsTwoWayByDefault));

    public Color SelectedColor
    {
        get
        {
            return (Color)GetValue(SelectedColorProperty);
        }

        set
        {
            SetValue(SelectedColorProperty, value);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty RecentUsedColorsProperty = DependencyProperty.Register(
        "RecentUsedColors", typeof(IList<Common.Color>), typeof(ColorPicker), new PropertyMetadata(default(IList<Common.Color>)));

    public IList<Common.Color> RecentUsedColors
    {
        get { return (IList<Common.Color>) GetValue(RecentUsedColorsProperty); }
        set { SetValue(RecentUsedColorsProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    const string _PartColorPickerGrid = "PART_ColorPickerGrid";
    Grid _ColorPickerGrid;

    static ColorPicker()
    {
        DefaultStyleKeyProperty.OverrideMetadata(
            typeof(ColorPicker), new FrameworkPropertyMetadata(typeof(ColorPicker)));
    }

    public override void OnApplyTemplate()
    {
        base.OnApplyTemplate();
        _ColorPickerGrid = GetTemplateChild(_PartColorPickerGrid) as Grid;
    }

    protected override void OnDropDownOpened(EventArgs e)
    {
        var panel = new ColorPickerPanel
        {
            RecentColors = ColorHelper.CreateHexagonColorItems(RecentUsedColors, 11)
        };

        var binding = new Binding("SelectedColor")
        {
            Source = this
        };
        BindingOperations.SetBinding(panel, ColorPickerPanel.SelectedColorProperty, binding);

        _ColorPickerGrid.Children.Add(panel);

        base.OnDropDownOpened(e);

        panel.Focus();
    }

    protected override void OnDropDownClosed(EventArgs e)
    {
        base.OnDropDownClosed(e);
        _ColorPickerGrid.Children.RemoveAt(0);

        // Save recent color
        var color = SelectedColor.ToMmColor();
        var list = RecentUsedColors;

        list.Remove(color);
        list.Insert(0, color);
        while(list.Count > 33)
            list.RemoveAt(list.Count-1);
    }

}