using System;
using System.Collections.Generic;
using System.IO;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Interaction.Visual;

public static class ImageCache
{
    #region File formats

    public static readonly string FileDialogFilter =
        "All image files (*.*)|*.*|" +
        "Windows Bitmap Format (*.bmp)|*.bmp|" +
        "Graphics Interchange Format (*.gif)|*.gif|" +
        "JPEG/JFIF Photo Format (*.jpg)|*.jpg|" +
        "Portable Network Graphics (*.png)|*.png|" +
        "Tagged Image File Format (*.tiff)|*.tiff|" +
        "DirectDraw Surface (*.dds)|*.dds";

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Image Cache

    static readonly Dictionary<string, WeakReference<Image_PixMap>> _PixMaps = new();

    //--------------------------------------------------------------------------------------------------

    public static Image_PixMap LoadCachedImage(string path, bool reloadIfExist)
    {
        var lowerPath = path.ToLower();
        if (_PixMaps.TryGetValue(lowerPath, out var cachedReference))
        {
            if (cachedReference.TryGetTarget(out var cachedPixMap))
            {
                if (reloadIfExist && cachedPixMap is Image_AlienPixMap alienPixMap)
                {
                    Reload(alienPixMap, path);
                }
                return cachedPixMap;
            }
        }

        if (string.IsNullOrEmpty(path) || !File.Exists(path))
        {
            return null;
        }

        Image_AlienPixMap pixMap = new();
        if(!Reload(pixMap, path))
        {
            return null;
        }
        _PixMaps[lowerPath] = new WeakReference<Image_PixMap>(pixMap);

        return pixMap;
    }

    //--------------------------------------------------------------------------------------------------

    static bool Reload(Image_AlienPixMap pixmap, string path)
    {
        try
        {
            if (!File.Exists(path))
                return false;

            var bytes = File.ReadAllBytes(path);
            if (bytes.Length == 0)
                return false;

            return PixMapHelper.LoadFromMemory(pixmap, bytes, path);
        }
        catch (Exception)
        {
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}

//--------------------------------------------------------------------------------------------------