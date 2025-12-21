using Macad.Common;
using Macad.Core;
using Macad.Presentation;

namespace Macad.Interaction;

public partial class Delta3DHudElement : HudElement
{
    public double? DeltaX
    {
        get { return _DeltaX; }
        set
        {
            if (_DeltaX != value)
            {
                _DeltaX = value;
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(DeltaXformatted));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double? DeltaY
    {
        get { return _DeltaY; }
        set
        {
            if (_DeltaY != value)
            {
                _DeltaY = value;
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(DeltaYformatted));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public double? DeltaZ
    {
        get { return _DeltaZ; }
        set
        {
            if (_DeltaZ != value)
            {
                _DeltaZ = value;
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(DeltaZformatted));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public ValueUnits Units
    {
        get { return _Units; }
        set
        {
            if (_Units != value)
            {
                _Units = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    double? _DeltaX;
    double? _DeltaY;
    double? _DeltaZ;
    ValueUnits _Units;
    
    public string DeltaXformatted
    {
        get => UnitsService.Format(DeltaX ?? 0.0, Units);
    }

    public string DeltaYformatted
    {
        get => UnitsService.Format(DeltaY ?? 0.0, Units);
    }

    public string DeltaZformatted
    {
        get => UnitsService.Format(DeltaZ ?? 0.0, Units);
    }

    //--------------------------------------------------------------------------------------------------

    public Delta3DHudElement()
    {
        InitializeComponent();
        Units = ValueUnits.Length;
        CoreContext.Current.Parameters.ParameterChanged += _OnParameterChanged;
    }

    void _OnParameterChanged(ParameterSet set, string key)
    {
        if (set is ApplicationParameterSet && key == nameof(ApplicationParameterSet.ApplicationUnits))
        {
            RaisePropertyChanged(nameof(DeltaXformatted));
            RaisePropertyChanged(nameof(DeltaYformatted));
            RaisePropertyChanged(nameof(DeltaZformatted));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void SetValues(double deltaX, double deltaY, double deltaZ)
    {
        DeltaX = deltaX;
        DeltaY = deltaY;
        DeltaZ = deltaZ;
    }
}