using System;
using System.Globalization;
using System.Windows.Data;
using System.Windows.Markup;
using System.Windows.Media;

namespace Macad.Presentation;

[ContentProperty("Converter")]
[ValueConversion(typeof(string), typeof(ImageSource))]
public class ExtractFileThumbnailConverter : ConverterMarkupExtension<ExtractFileThumbnailConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        var fileName = value as string;
        if (PresentationHelper.IsInDesignMode)
        {
            return null;
        }

        // Shown with max. 128 DIP, decode with higher resolution for HiDPI screens
        return DocumentThumbnail.Load(fileName, 256);
    }
}