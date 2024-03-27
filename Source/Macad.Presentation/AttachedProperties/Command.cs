using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using Macad.Common;

namespace Macad.Presentation;

public class Command : DependencyObject
{
    public static readonly DependencyProperty ActionProperty = DependencyProperty.RegisterAttached(
        "Action", typeof(IActionCommand), typeof(Command), new PropertyMetadata(default(IActionCommand), CommandChangedCallback));

    public static IActionCommand GetAction(DependencyObject d)
    {
        return (IActionCommand)d.GetValue(ActionProperty);
    }

    public static void SetAction(DependencyObject d, IActionCommand value)
    {
        d.SetValue(ActionProperty, value);
    }

    //--------------------------------------------------------------------------------------------------

    static void CommandChangedCallback(DependencyObject d, DependencyPropertyChangedEventArgs e)
    {
        BindingBase binding;

        var cmd = e.NewValue as IActionCommand;
        if (d == null || cmd == null)
            return;

        object param = (d as ICommandSource)?.CommandParameter ?? null;

        (object Object, string Path) contentBinding = cmd.GetBindingSource(param);
        BindingBase isCheckedBinding = cmd.GetIsCheckedBinding(param);

        switch (d)
        {
            /*
             * Fluent.SplitButton
             */
            case Fluent.SplitButton fluentSplitButton:
                fluentSplitButton.Command = cmd;
                fluentSplitButton.Header = cmd.GetHeader(param) ?? cmd.GetTitle(param);

                if (contentBinding.Object != null)
                {
                    binding = BindingHelper.Create(contentBinding.Object, contentBinding.Path, BindingMode.OneWay, CommandToIconConverter.Instance, fluentSplitButton);
                    BindingOperations.SetBinding(fluentSplitButton, Fluent.DropDownButton.LargeIconProperty, binding);
                    BindingOperations.SetBinding(fluentSplitButton, Fluent.DropDownButton.IconProperty, binding);
                }
                else
                {
                    fluentSplitButton.LargeIcon = CreateImageSourceForIcon(cmd.GetIcon(param), 32);
                    fluentSplitButton.Icon = CreateImageSourceForIcon(cmd.GetIcon(param), 16);
                }

                if (isCheckedBinding != null)
                {
                    fluentSplitButton.IsCheckable = true;
                    BindingOperations.SetBinding(fluentSplitButton, Fluent.SplitButton.IsCheckedProperty, isCheckedBinding);
                }

                if (!cmd.GetDescription(param).IsNullOrEmpty())
                    fluentSplitButton.ToolTip = _CreateScreenTip(cmd, param);
                break;

            /*
             * Fluent.ToggleButton
             */
            case Fluent.ToggleButton fluentToggleButton:
                fluentToggleButton.Command = cmd;
                fluentToggleButton.Header = cmd.GetHeader(param) ?? cmd.GetTitle(param);
                if (contentBinding.Object != null)
                {
                    binding = BindingHelper.Create(contentBinding.Object, contentBinding.Path, BindingMode.OneWay, CommandToIconConverter.Instance, fluentToggleButton);
                    BindingOperations.SetBinding(fluentToggleButton, Fluent.ToggleButton.LargeIconProperty, binding);
                    BindingOperations.SetBinding(fluentToggleButton, Fluent.ToggleButton.IconProperty, binding);
                }
                else
                {
                    fluentToggleButton.LargeIcon = CreateImageSourceForIcon(cmd.GetIcon(param), 32);
                    fluentToggleButton.Icon = CreateImageSourceForIcon(cmd.GetIcon(param), 16);
                }

                if (isCheckedBinding != null)
                {
                    BindingOperations.SetBinding(fluentToggleButton, System.Windows.Controls.Primitives.ToggleButton.IsCheckedProperty, isCheckedBinding);
                }

                if (!cmd.GetDescription(param).IsNullOrEmpty())
                {
                    fluentToggleButton.ToolTip = _CreateScreenTip(cmd, param);
                }

                break;
                    
            /*
             * Fluent.DropDownButton
             */
            case Fluent.DropDownButton fluentDropDownButton:
                // No command here, it just opens the menu
                fluentDropDownButton.ToolTip = cmd.GetDescription(param);
                fluentDropDownButton.Header = cmd.GetHeader(param) ?? cmd.GetTitle(param);
                if (contentBinding.Object != null)
                {
                    binding = BindingHelper.Create(contentBinding.Object, contentBinding.Path, BindingMode.OneWay, CommandToIconConverter.Instance, fluentDropDownButton);
                    BindingOperations.SetBinding(fluentDropDownButton, Fluent.DropDownButton.LargeIconProperty, binding);
                    BindingOperations.SetBinding(fluentDropDownButton, Fluent.DropDownButton.IconProperty, binding);
                }
                else
                {
                    fluentDropDownButton.LargeIcon = CreateImageSourceForIcon(cmd.GetIcon(param), 32);
                    fluentDropDownButton.Icon = CreateImageSourceForIcon(cmd.GetIcon(param), 16);
                }

                if (!cmd.GetDescription(param).IsNullOrEmpty())
                {
                    fluentDropDownButton.ToolTip = _CreateScreenTip(cmd, param);
                }

                break;

            /*
             * Fluent.Button
             */
            case Fluent.Button fluentButton:
                fluentButton.Command = cmd;
                fluentButton.ToolTip = cmd.GetDescription(param);
                fluentButton.Header = cmd.GetHeader(param) ?? cmd.GetTitle(param);
                fluentButton.LargeIcon = CreateImageSourceForIcon(cmd.GetIcon(param), 32);
                fluentButton.Icon = CreateImageSourceForIcon(cmd.GetIcon(param), 16);

                if (!cmd.GetDescription(param).IsNullOrEmpty())
                {
                    fluentButton.ToolTip = _CreateScreenTip(cmd, param);
                }
                break;

            /*
             * ButtonBase
             */
            case ButtonBase button:
                button.Command = cmd;
                button.ToolTip = cmd.GetDescription(param);
                if (contentBinding.Object != null)
                {
                    binding = BindingHelper.Create(contentBinding.Object, contentBinding.Path, BindingMode.OneWay, CommandToIconConverter.Instance, button);
                    var image = new Image();
                    BindingOperations.SetBinding(image, Image.SourceProperty, binding);
                    button.Content = image;
                }
                else
                {
                    if (cmd.GetIcon(param) != null)
                        button.Content = new Image() {Source = CreateImageSourceForIcon(cmd.GetIcon(param), 16)};
                    else
                        button.Content = new TextBlock() {Text = cmd.GetHeader(param) ?? cmd.GetTitle(param)};
                }
                if (button is System.Windows.Controls.Primitives.ToggleButton && isCheckedBinding != null)
                {
                    BindingOperations.SetBinding(button, System.Windows.Controls.Primitives.ToggleButton.IsCheckedProperty, isCheckedBinding);
                }
                break;

            /*
             * MenuItem
             */
            case MenuItem menuItem:
                menuItem.Command = cmd;
                menuItem.Header = cmd.GetTitle(param) ?? cmd.GetHeader(param);
                menuItem.Icon = CreateImageSourceForIcon(cmd.GetIcon(param), 16);
                if (menuItem is Fluent.MenuItem fluentMenuItem
                    && fluentMenuItem.Parent is Fluent.MenuItem)
                {
                    fluentMenuItem.Description = cmd.GetDescription(param);
                }
                else
                {
                    menuItem.ToolTip = cmd.GetDescription(param);
                }

                if (isCheckedBinding != null)
                {
                    BindingOperations.SetBinding(menuItem, MenuItem.IsCheckedProperty, isCheckedBinding);
                }

                menuItem.InputGestureText = cmd.GetShortcut(param);
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static ImageSource CreateImageSourceForIcon(string iconPath, int size=32)
    {
        try
        {
            if (iconPath.IsNullOrEmpty())
                return null;

            if (Path.HasExtension(iconPath))
            {
                // Treat as image file
                var newPath = iconPath.Replace("#", size.ToString());
                return new BitmapImage(new Uri("pack://application:,,,/Macad.Resources;Component/Icons/" + newPath));
            }

            // Treat as XAML resource
            var drawing = Application.Current.FindResource("Icon_" + iconPath) as Drawing;
            if (drawing == null)
                return null;

            var drawingImage = new DrawingImage(drawing);
            drawingImage.Freeze();
            return drawingImage;
        }
        catch(Exception e)
        {
            Debug.WriteLine(iconPath + ": " + e.Message);
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    static ToolTip _CreateScreenTip(IActionCommand cmd, object param)
    {
        var screenTip = new ScreenTip()
        {
            Command = cmd,
            CommandParameter = param
        };

        return screenTip;
    }

}