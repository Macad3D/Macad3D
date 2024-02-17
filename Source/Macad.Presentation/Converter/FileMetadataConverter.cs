using System;
using System.Globalization;
using System.IO;
using System.IO.Compression;
using System.Windows.Data;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Imaging;

namespace Macad.Presentation;

[ContentProperty("Converter")]
[ValueConversion(typeof(string), typeof(ImageSource))]
public class ExtractFileThumbnailConverter : ConverterMarkupExtension<ExtractFileThumbnailConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        var fileName = value as string;
        if (fileName == null
            || PresentationHelper.IsInDesignMode
            || !File.Exists(fileName))
        {
            return null;
        }

        try
        {
            var archive = ZipFile.OpenRead(fileName);
            var entry = archive.GetEntry("thumbnail.png");
            if (entry == null)
                return null;

            using var stream = entry.Open();
            var decoder = new PngBitmapDecoder(stream, BitmapCreateOptions.DelayCreation, BitmapCacheOption.Default);
            var bitmap = decoder.Frames[0];
            return bitmap;
        }
        catch (Exception)
        {
            return null;
        }
    }
}