using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media.Imaging;
using System.Windows.Media;


namespace Macad.Presentation;

/// <summary>
/// Class used to have an image that is able to be gray when the control is not enabled.
/// Based on the version by Thomas LEBRUN (http://blogs.developpeur.org/tom)
/// </summary>
public class AutoGreyableImage : Image
{
    /// <summary>
    /// Initializes a new instance of the <see cref="AutoGreyableImage"/> class.
    /// </summary>
    static AutoGreyableImage()
    {
        // Override the metadata of the IsEnabled and Source property.
        IsEnabledProperty.OverrideMetadata(typeof(AutoGreyableImage), new FrameworkPropertyMetadata(true, new PropertyChangedCallback(OnAutoGreyScaleImageIsEnabledPropertyChanged)));
        SourceProperty.OverrideMetadata(typeof(AutoGreyableImage), new FrameworkPropertyMetadata(null, new PropertyChangedCallback(OnAutoGreyScaleImageSourcePropertyChanged)));
    }

    protected static AutoGreyableImage GetImageWithSource(DependencyObject source)
    {
        var image = source as AutoGreyableImage;
        if (image == null)
            return null;

        if (image.Source == null)
            return null;

        return image;
    }

    /// <summary>
    /// Called when [auto grey scale image source property changed].
    /// </summary>
    /// <param name="source">The source.</param>
    /// <param name="args">The <see cref="System.Windows.DependencyPropertyChangedEventArgs"/> instance containing the event data.</param>
    protected static void OnAutoGreyScaleImageSourcePropertyChanged(DependencyObject source, DependencyPropertyChangedEventArgs args)
    {
        AutoGreyableImage image = GetImageWithSource(source);
        if (image != null)
            ApplyGreyScaleImage(image, image.IsEnabled);
    }

    /// <summary>
    /// Called when [auto grey scale image is enabled property changed].
    /// </summary>
    /// <param name="source">The source.</param>
    /// <param name="args">The <see cref="System.Windows.DependencyPropertyChangedEventArgs"/> instance containing the event data.</param>
    protected static void OnAutoGreyScaleImageIsEnabledPropertyChanged(DependencyObject source, DependencyPropertyChangedEventArgs args)
    {
        AutoGreyableImage image = GetImageWithSource(source);
        if (image != null)
        {
            var isEnabled = Convert.ToBoolean(args.NewValue);
            ApplyGreyScaleImage(image, isEnabled);
        }
    }

    protected static void ApplyGreyScaleImage(AutoGreyableImage autoGreyScaleImg, Boolean isEnabled)
    {
        try
        {
            if (!isEnabled)
            {
                BitmapSource bitmapImage = null;

                if (autoGreyScaleImg.Source is FormatConvertedBitmap)
                {
                    // Already grey !
                    return;
                }
                
                if(autoGreyScaleImg.Source is DrawingImage drawingImage)
                {
                    RenderTargetBitmap renderTarget = new ((int)autoGreyScaleImg.Width, (int)autoGreyScaleImg.Height, 96, 96, PixelFormats.Pbgra32);
                    DrawingVisual drawingVisual = new ();
                    using (var context = drawingVisual.RenderOpen())
                    {
                        context.DrawImage(drawingImage, new Rect(new Size((int)autoGreyScaleImg.Width, (int)autoGreyScaleImg.Height)));
                    }

                    renderTarget.Render(drawingVisual);
                    bitmapImage = renderTarget;
                }
                else if (autoGreyScaleImg.Source is BitmapSource bitmapSource)
                {
                    bitmapImage = bitmapSource;
                }
                else // trying string 
                {
                    bitmapImage = new BitmapImage(new Uri(autoGreyScaleImg.Source.ToString()));
                }
                FormatConvertedBitmap conv = new (bitmapImage, PixelFormats.Gray32Float, null, 0);
                autoGreyScaleImg.Source = conv;

                // Create Opacity Mask for greyscale image as FormatConvertedBitmap does not keep transparency info
                autoGreyScaleImg.OpacityMask = new ImageBrush(((FormatConvertedBitmap) autoGreyScaleImg.Source).Source); //equivalent to new ImageBrush(bitmapImage)
            }
            else
            {
                if (autoGreyScaleImg.Source is FormatConvertedBitmap convertedBitmap)
                {
                    autoGreyScaleImg.Source = convertedBitmap.Source;
                }
                else if (autoGreyScaleImg.Source is BitmapSource)
                {
                    // Should be full color already.
                    return;
                }

                // Reset the Opcity Mask
                autoGreyScaleImg.OpacityMask = null;
            }
        }
        catch (Exception)
        {
            // nothin'
        }

    }
}