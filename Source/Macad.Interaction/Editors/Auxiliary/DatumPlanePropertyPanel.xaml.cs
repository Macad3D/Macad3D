using System;
using System.Diagnostics;
using System.IO;
using System.Windows;
using System.Windows.Media.Imaging;
using Macad.Common;
using Macad.Core.Auxiliary;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
using Macad.Presentation;
using Microsoft.Win32;

namespace Macad.Interaction.Editors.Auxiliary;

/// <summary>
/// Interaction logic for DatumPlanePropertyPanel.xaml
/// </summary>
public partial class DatumPlanePropertyPanel : PropertyPanel
{
    public DatumPlane DatumPlane
    {
        get { return _DatumPlane; }
        set
        {
            if (_DatumPlane != value)
            {
                _DatumPlane = value;
                RaisePropertyChanged();
            }
        }
    }

    DatumPlane _DatumPlane;
       
    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        DatumPlane = instance as DatumPlane;
        Debug.Assert(DatumPlane != null);

        if(Application.Current != null)
            InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        DatumPlane = null;
    }

    //--------------------------------------------------------------------------------------------------
        
    #region Logic

    public static RelayCommand<DatumPlane> LoadImageFileCommand { get; } = new ((plane) =>
    {
        // Execute Dialog
        var dlg = new OpenFileDialog()
        {
            CheckPathExists = true,
            Filter = ImageCache.FileDialogFilter,
            FilterIndex = 1
        };
        var result = dlg.ShowDialog(Application.Current.MainWindow) ?? false;
        if (!result)
            return;

        var pixmap = ImageCache.LoadCachedImage(dlg.FileName, true);
        if (pixmap == null)
        {
            Dialogs.ErrorDialogs.CannotLoadImage(dlg.FileName);
            return;
        }

        if (plane.ImageFilePath == dlg.FileName)
        {
            plane.ImageFilePath = null; // this is needed to trigger visual update even if the filename is the same
        }

        plane.ImageFilePath = dlg.FileName;

        bool applySizeChanges = false;
        double imageSizeX;
        double imageSizeY;
        if (_TryGetDimensionsFromImage(plane.ImageFilePath, out imageSizeX, out imageSizeY))
        {
            applySizeChanges = !(plane.SizeX.IsEqual(imageSizeX, 0.0001) && plane.SizeY.IsEqual(imageSizeY, 0.0001))
                               && Dialogs.Dialogs.AskUseDimensionsFromImageFile(imageSizeX, imageSizeY);
        }
        else
        {
            // Reading metadata failed, use pixel aspect instead
            var imageAspect = (double)pixmap.Width() / (double)pixmap.Height();
            imageSizeX = plane.SizeX;
            imageSizeY = plane.SizeX / imageAspect;

            applySizeChanges = !plane.SizeY.IsEqual(imageSizeY, 0.0001)
                               && Dialogs.Dialogs.AskUseAspectRatioFromImageFile();
            {

            }
        }

        if (applySizeChanges)
        {
            var saveKeepAspectRatio = plane.KeepAspectRatio;
            plane.KeepAspectRatio = false;
            plane.SizeX = imageSizeX;
            plane.SizeY = imageSizeY;
            plane.KeepAspectRatio = saveKeepAspectRatio;
        }
    });

    //--------------------------------------------------------------------------------------------------

    static bool _TryGetDimensionsFromImage(string filePath, out double sizeX, out double sizeY)
    {
        sizeX = 0;
        sizeY = 0;

        try
        {
            // This way, the metadata are gathered without reading the entire file
            using var stream = new FileStream(filePath, FileMode.Open, FileAccess.Read, FileShare.Read);
            var bitmapFrame = BitmapFrame.Create(stream, BitmapCreateOptions.DelayCreation, BitmapCacheOption.None);
            if (bitmapFrame.DpiX != 0 || bitmapFrame.DpiY != 0)
            {
                // Get size in mm
                sizeX = bitmapFrame.PixelWidth / bitmapFrame.DpiX * 25.4;
                sizeY = bitmapFrame.PixelHeight / bitmapFrame.DpiY * 25.4;
                return true;
            }
        }
        catch (Exception)
        {
            // ignored
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}