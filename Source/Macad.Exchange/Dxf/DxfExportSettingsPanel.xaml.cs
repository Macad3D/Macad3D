using System.Collections.Generic;
using Macad.Presentation;

namespace Macad.Exchange.Dxf;

public sealed partial class DxfExportSettingsPanel : SettingsPanelBase
{
    public Dictionary<DxfVersion, string> VersionList { get; } = new Dictionary<DxfVersion, string>
    {
        { DxfVersion.Latest, "Latest" },
        { DxfVersion.AC1009, "AC1009 (AutoCAD R11/R12)" },
        { DxfVersion.AC1012, "AC1012 (AutoCAD R13)" },
        { DxfVersion.AC1015, "AC1015 (AutoCAD 2000)" },
    };

    //--------------------------------------------------------------------------------------------------

    public DxfVersion Version
    {
        get { return _DxfSettings.ExportVersion; }
        set
        {
            _DxfSettings.ExportVersion = value;
            RaisePropertyChanged();
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public bool Binary
    {
        get { return _DxfSettings.ExportBinary; }
        set
        {
            _DxfSettings.ExportBinary = value;
            RaisePropertyChanged();
        }
    }
                
    //--------------------------------------------------------------------------------------------------

    public bool SplineAsPolygon
    {
        get { return _DxfSettings.ExportSplineAsPolygon; }
        set
        {
            _DxfSettings.ExportSplineAsPolygon = value;
            RaisePropertyChanged();
        }
    }
                        
    //--------------------------------------------------------------------------------------------------

    public bool EllipseAsPolygon
    {
        get { return _DxfSettings.ExportEllipseAsPolygon; }
        set
        {
            _DxfSettings.ExportEllipseAsPolygon = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public double PolygonPrecision
    {
        get { return _DxfSettings.ExportPolygonPrecision; }
        set
        {
            _DxfSettings.ExportPolygonPrecision = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public RelayCommand<bool> SetBinaryFormatCommand { get; }
    public RelayCommand<bool> SetSplineAsPolygonCommand { get; }
    public RelayCommand<bool> SetEllipseAsPolygonCommand { get; }

    //--------------------------------------------------------------------------------------------------

    readonly DxfExchanger.DxfSettings _DxfSettings;

    //--------------------------------------------------------------------------------------------------

    public DxfExportSettingsPanel(DxfExchanger.DxfSettings dxfSettings)
    {
        _DxfSettings = dxfSettings;

        SetBinaryFormatCommand = new RelayCommand<bool>((b) => Binary = b);
        SetSplineAsPolygonCommand = new RelayCommand<bool>((b) => SplineAsPolygon = b);
        SetEllipseAsPolygonCommand = new RelayCommand<bool>((b) => EllipseAsPolygon = b);

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------
}