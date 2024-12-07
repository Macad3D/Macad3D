using System;
using Macad.Presentation;

namespace Macad.Exchange.Dxf;

public sealed partial class DxfImportSettingsPanel : SettingsPanelBase
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