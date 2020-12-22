using System;
using System.Windows.Controls;
using Macad.Core.Exchange;
using Macad.Core.Exchange.Dxf;
using Macad.Presentation;

namespace Macad.Interaction.Panels
{
    public partial class DxfImportSettingsPanel : PanelBase
    {
        public Array ScalingList { get; } = Enum.GetValues(typeof(DxfScaling));

        //--------------------------------------------------------------------------------------------------

        public DxfScaling Scaling
        {
            get { return _DxfSettings.ImportScaling; }
            set
            {
                _DxfSettings.ImportScaling = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public bool MergePoints
        {
            get { return _DxfSettings.ImportMergePoints; }
            set
            {
                _DxfSettings.ImportMergePoints = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public double MergePointPrecision
        {
            get { return _DxfSettings.ImportMergePointPrecision; }
            set
            {
                _DxfSettings.ImportMergePointPrecision = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        readonly DxfExchanger.DxfSettings _DxfSettings;
        public RelayCommand<bool> SetMergePointsCommand { get; }

        //--------------------------------------------------------------------------------------------------

        public DxfImportSettingsPanel(DxfExchanger.DxfSettings dxfSettings)
        {
            _DxfSettings = dxfSettings;

            SetMergePointsCommand = new RelayCommand<bool>((b) => MergePoints = b);

            InitializeComponent();
        }
    }

    //--------------------------------------------------------------------------------------------------

}
