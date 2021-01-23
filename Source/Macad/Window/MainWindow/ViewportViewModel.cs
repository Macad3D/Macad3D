using System.Diagnostics;
using Macad.Interaction;
using Macad.Interaction.Dialogs;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Window
{
    public class ViewportViewModel : PanelBase
    {
        #region Properties

        public string UpdateMessage
        {
            get { return _UpdateMessage; }
            private set
            {
                if (_UpdateMessage != value)
                {
                    _UpdateMessage = value;
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Members and n'tor

        string _UpdateMessage;
        VersionCheckInfo _UpdateInfo;

        //--------------------------------------------------------------------------------------------------

        internal ViewportViewModel()
        {
            UpdateCommand = new RelayCommand(_UpdateExecute);
            DismissUpdateCommand = new RelayCommand(_DismissUpdateExecute);

            VersionCheck.UpdateAvailable += _VersionCheck_UpdateAvailable;
        }

        //--------------------------------------------------------------------------------------------------

        ~ViewportViewModel()
        {
            VersionCheck.UpdateAvailable -= _VersionCheck_UpdateAvailable;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Update Info

        void _VersionCheck_UpdateAvailable(object sender, VersionCheckInfo info)
        {
            _UpdateInfo = info;
            UpdateMessage = "A new version of Macad|3D is available for download.";
            RaisePropertyChanged(nameof(UpdateMessage));
        }

        //--------------------------------------------------------------------------------------------------

        public RelayCommand UpdateCommand { get; }
        public RelayCommand DismissUpdateCommand { get; }

        //--------------------------------------------------------------------------------------------------

        void _UpdateExecute()
        {
            _DismissUpdateExecute();

            if (_UpdateInfo != null && _UpdateInfo.UpdateAvailable)
            {
                bool disableCheck = false;
                if (Dialogs.InformUpdateAvailable(_UpdateInfo.UpdateVersion, _UpdateInfo.UpdateUrl, ref disableCheck))
                {
                    Process.Start(_UpdateInfo.UpdateUrl);
                }
                VersionCheck.IsAutoCheckEnabled = !disableCheck;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _DismissUpdateExecute()
        {
            UpdateMessage = "";
            VersionCheck.ResetAvailability();
        }

        //--------------------------------------------------------------------------------------------------
        
        #endregion

    }
}