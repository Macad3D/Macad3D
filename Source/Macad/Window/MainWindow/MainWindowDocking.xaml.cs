using System;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using Macad.Common;
using Macad.Core;
using AvalonDock;
using AvalonDock.Layout;

namespace Macad.Window;

/// <summary>
/// Interaction logic for MainWindowDocking.xaml
/// </summary>
public partial class MainWindowDocking : UserControl
{
    public MainWindowDocking()
    {
        InitializeComponent();

        // Init docking
        DependencyPropertyDescriptor.FromProperty(DockingManager.AutoHideWindowProperty, typeof(DockingManager))
                                    .AddValueChanged(DockingManager, (obj, args) =>
                                    {
                                        DockingManager.AutoHideWindow.IsVisibleChanged += AutoHideWindow_IsVisibleChanged;
                                        DockingManager.AutoHideWindow.LayoutUpdated += AutoHideWindow_LayoutUpdated;
                                        DockingManager.AutoHideWindow.SizeChanged += AutoHideWindow_SizeChanged;
                                    });
    }

    //--------------------------------------------------------------------------------------------------

    bool _AutoHideWindowRequestsRedraw;

    void AutoHideWindow_LayoutUpdated(object sender, EventArgs e)
    {
        if (_AutoHideWindowRequestsRedraw)
        {
            AppContext.Current.WorkspaceController.Invalidate();
            _AutoHideWindowRequestsRedraw = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void AutoHideWindow_IsVisibleChanged(object sender, DependencyPropertyChangedEventArgs e)
    {
        if ((bool)e.NewValue == true)
        {
            SetAirspaceClipping();
        }
        else
        {
            _AutoHideWindowRequestsRedraw = true;
            Viewport.ClippingBorder = new Thickness(0, 0, 0, 0);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void AutoHideWindow_SizeChanged(object sender, SizeChangedEventArgs e)
    {
        if (DockingManager.AutoHideWindow.IsVisible)
        {
            SetAirspaceClipping();
        }
    }

    //--------------------------------------------------------------------------------------------------

    void SetAirspaceClipping()
    {
        var win = DockingManager.AutoHideWindow;
        var tpLeftTop = win.TranslatePoint(new Point(0, 0), Viewport);
        tpLeftTop.X = tpLeftTop.X.Clamp(0, Viewport.ActualWidth);
        tpLeftTop.Y = tpLeftTop.Y.Clamp(0, Viewport.ActualHeight);

        var tpRightBottom = win.TranslatePoint(new Point(DockingManager.AutoHideWindow.ActualWidth, DockingManager.AutoHideWindow.ActualHeight), Viewport);
        tpRightBottom.X = tpRightBottom.X.Clamp(0, Viewport.ActualWidth);
        tpRightBottom.Y = tpRightBottom.Y.Clamp(0, Viewport.ActualHeight);

        switch (win.HorizontalAlignment)
        {
            case HorizontalAlignment.Left:
                Viewport.ClippingBorder = new Thickness(tpRightBottom.X, 0, 0, 0);
                break;

            case HorizontalAlignment.Right:
                Viewport.ClippingBorder = new Thickness(0, 0, Viewport.ActualWidth - tpLeftTop.X, 0);
                break;

            case HorizontalAlignment.Stretch:
                if (win.VerticalAlignment == VerticalAlignment.Bottom)
                {
                    Viewport.ClippingBorder = new Thickness(0, 0, 0, Viewport.ActualHeight - tpLeftTop.Y);
                }
                else
                {
                    Viewport.ClippingBorder = new Thickness(0, tpRightBottom.Y, 0, 0);
                }
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _LoadWindowLayout(string name)
    {
        // Load window layout
        try
        {
            var serializer = new AvalonDock.Layout.Serialization.XmlLayoutSerializer(DockingManager);
            serializer.LayoutSerializationCallback += (s, args) =>
            {
                args.Content = args.Content;
            };

            var filename = Path.Combine(AppContext.Current.LocalAppDataDirectory, "WindowLayouts", $"{name}.xml");
            if (File.Exists(filename))
                serializer.Deserialize(filename);
        }
        catch (Exception exception)
        {
            Messages.Exception("Error loading window layout. The default layout was loaded instead.", exception);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _SaveWindowLayout(string name)
    {
        // Save window layout
        var directory = System.IO.Path.Combine(AppContext.Current.LocalAppDataDirectory, "WindowLayouts");
        Directory.CreateDirectory(directory);
        var serializer = new AvalonDock.Layout.Serialization.XmlLayoutSerializer(DockingManager);
        serializer.Serialize(System.IO.Path.Combine(directory, $"{name}.xml"));
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdateDefaultWindowLayout()
    {
        try
        {
            var directory = System.IO.Path.Combine(AppContext.Current.LocalAppDataDirectory, "WindowLayouts");
            Directory.CreateDirectory(directory);
            var filename = Path.Combine(directory, "Default.xml");

            if (File.Exists(filename))
            {
                if (File.GetLastWriteTimeUtc(filename) == File.GetLastWriteTimeUtc(System.Reflection.Assembly.GetExecutingAssembly().FullName))
                {
                    // Default layout is up to date
                    return;
                }
            }

            // Save default window layout
            _SaveWindowLayout("Default");
        }
        catch (Exception exception)
        {
            Messages.Exception("Error saving default window layout.", exception);
            throw;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void ActivateToolAnchorable(string layoutContentId)
    {
        var layoutModel = DockingManager.Layout.Descendents().OfType<LayoutAnchorable>().FirstOrDefault(anchorable => anchorable.ContentId == layoutContentId);
        var layoutItemModel = layoutModel?.Root?.Manager?.GetLayoutItemFromModel(layoutModel);
        if (layoutItemModel == null)
            return;

        if (layoutModel.IsHidden)
            layoutModel.Show();
        else if (layoutModel.IsVisible)
            layoutModel.IsActive = true;
        else
            layoutModel.AddToLayout(DockingManager, AnchorableShowStrategy.Right | AnchorableShowStrategy.Most);
    }

    //--------------------------------------------------------------------------------------------------

    public void LoadWindowLayout(string layoutFilename)
    {
        _LoadWindowLayout(layoutFilename);
    }

    //--------------------------------------------------------------------------------------------------

    void _OnLoaded(object sender, RoutedEventArgs e)
    {
        if (!AppContext.IsInSandbox)
        {
            _UpdateDefaultWindowLayout();
            _LoadWindowLayout("Current");

            System.Windows.Window.GetWindow(this).Closing += (o, args) => _SaveWindowLayout("Current");
        }
    }

    //--------------------------------------------------------------------------------------------------

}