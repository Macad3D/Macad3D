using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Windows;
using System.Windows.Controls.Primitives;
using ControlzEx;

namespace Macad.Presentation;

[TemplatePart(Name = PartCloseButton, Type = typeof(ButtonBase))]
public class Dialog : WindowChromeWindow, INotifyPropertyChanged
{
    const string PartCloseButton = "PART_CloseButton";

    ButtonBase _CloseButton;

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty FooterProperty = DependencyProperty.Register(nameof(Footer), typeof(object), typeof(Dialog), 
                                                                                           new FrameworkPropertyMetadata(null, FrameworkPropertyMetadataOptions.AffectsRender | FrameworkPropertyMetadataOptions.AffectsParentMeasure));
    public object Footer
    {
        get { return (object)GetValue(FooterProperty); }
        set { SetValue(FooterProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty HeaderProperty = DependencyProperty.Register(nameof(Header), typeof(object), typeof(Dialog),
                                                                                           new FrameworkPropertyMetadata(null, FrameworkPropertyMetadataOptions.AffectsRender | FrameworkPropertyMetadataOptions.AffectsParentMeasure));
    public object Header
    {
        get { return (object)GetValue(HeaderProperty); }
        set { SetValue(HeaderProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty ShowCloseButtonProperty = DependencyProperty.Register(nameof(ShowCloseButton), typeof(bool), typeof(Dialog),
                                                                                                    new FrameworkPropertyMetadata(false));
    public bool ShowCloseButton
    {
        get { return (bool)GetValue(ShowCloseButtonProperty); }
        set { SetValue(ShowCloseButtonProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public event PropertyChangedEventHandler PropertyChanged;

    protected virtual void RaisePropertyChanged([CallerMemberName] string propertyName = "")
    {
        PropertyChanged?.Invoke(this, new(propertyName));
    }

    //--------------------------------------------------------------------------------------------------

    public Dialog(Window ownerWindow=null)
    {
        this.WindowStartupLocation = WindowStartupLocation.CenterOwner;

        // set the default owner to the app main window (if possible)
        var mainwin = ownerWindow ?? Application.Current?.MainWindow;
        if (mainwin != null && mainwin != this && mainwin.IsVisible)
        {
            this.Owner = mainwin;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public new bool ShowDialog()
    {
        var result = (this as Window).ShowDialog();
        return result.HasValue && result.Value;
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnApplyTemplate()
    {
        if (_CloseButton != null)
        {
            _CloseButton.Click -= _CloseButton_Click;
        }

        base.OnApplyTemplate();

        _CloseButton = GetTemplateChild(PartCloseButton) as ButtonBase;
        if (_CloseButton != null)
        {
            _CloseButton.Click += _CloseButton_Click;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _CloseButton_Click(object sender, RoutedEventArgs e)
    {
        Close();
    }

    //--------------------------------------------------------------------------------------------------

}