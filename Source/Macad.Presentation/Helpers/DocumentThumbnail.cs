using System;
using System.IO;
using System.IO.Compression;
using System.Windows.Media.Imaging;

namespace Macad.Presentation;

/// <summary>
/// Reads the thumbnail image which is embedded in a document file.
/// </summary>
public static class DocumentThumbnail
{
    const string _EntryName = "thumbnail.png";

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Loads the embedded thumbnail of a document file.
    /// </summary>
    /// <param name="fileName">Path to the document file.</param>
    /// <param name="decodePixelWidth">Width in pixels the image is decoded to, or 0 to keep the original size.</param>
    /// <returns>The frozen thumbnail, or null if the file does not exist, is not a document archive or does not contain a thumbnail.</returns>
    public static BitmapSource Load(string fileName, int decodePixelWidth = 0)
    {
        if (fileName == null || !File.Exists(fileName))
            return null;

        try
        {
            using var archive = ZipFile.OpenRead(fileName);
            var entry = archive.GetEntry(_EntryName);
            if (entry == null)
                return null;

            // BitmapImage needs a seekable stream, the zip entry stream is not
            using var memoryStream = new MemoryStream();
            using (var entryStream = entry.Open())
            {
                entryStream.CopyTo(memoryStream);
            }
            memoryStream.Position = 0;

            var bitmap = new BitmapImage();
            bitmap.BeginInit();
            bitmap.CacheOption = BitmapCacheOption.OnLoad;
            bitmap.CreateOptions = BitmapCreateOptions.IgnoreColorProfile;
            bitmap.DecodePixelWidth = Math.Max(0, decodePixelWidth);
            bitmap.StreamSource = memoryStream;
            bitmap.EndInit();
            bitmap.Freeze();
            return bitmap;
        }
        catch (Exception)
        {
            return null;
        }
    }
}
