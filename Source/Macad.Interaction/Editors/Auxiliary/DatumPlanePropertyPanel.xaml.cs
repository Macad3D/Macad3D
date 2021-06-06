using System.Diagnostics;
using System.Windows;
using Macad.Common;
using Macad.Core.Auxiliary;
using Macad.Interaction.Panels;
using Macad.Interaction.Visual;
using Macad.Presentation;
using Microsoft.Win32;

namespace Macad.Interaction.Editors.Auxiliary
{
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

            var oldAspect = plane.SizeX / plane.SizeY;
            var imageAspect = (double) pixmap.Width() / (double) pixmap.Height();

            if (!oldAspect.IsEqual(imageAspect, 0.0001)
                && Dialogs.Dialogs.UseAspectRatioFromImageFile())
            {
                var saveKeepAspectRatio = plane.KeepAspectRatio;
                plane.KeepAspectRatio = false;
                plane.SizeY = plane.SizeX / imageAspect;
                plane.KeepAspectRatio = saveKeepAspectRatio;
            }
        });

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}
