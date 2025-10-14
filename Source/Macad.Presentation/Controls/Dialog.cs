using System;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Windows;

namespace Macad.Presentation;

public class Dialog : Window, INotifyPropertyChanged
{
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

}