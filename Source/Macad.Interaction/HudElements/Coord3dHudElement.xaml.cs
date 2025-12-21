using Macad.Common;
using Macad.Core;
using Macad.Presentation;

namespace Macad.Interaction;

public partial class Coord3DHudElement : HudElement
{
    public double CoordinateX
    {
        get => _CoordinateX;
        set
        {
            if (_CoordinateX != value)
            {
                _CoordinateX = value;
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(CoordinateXformatted));
            }
        }
    }

    public double CoordinateY
    {
        get => _CoordinateY;
        set
        {
            if (_CoordinateY != value)
            {
                _CoordinateY = value;
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(CoordinateYformatted));
            }
        }
    }

    public double CoordinateZ
    {
        get => _CoordinateZ;
        set
        {
            if (_CoordinateZ != value)
            {
                _CoordinateZ = value;
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(CoordinateZformatted));
            }
        }
    }

    public ValueUnits Units
    {
        get => _Units;
        set
        {
            if (_Units != value)
            {
                _Units = value;
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(CoordinateXformatted));
                RaisePropertyChanged(nameof(CoordinateYformatted));
                RaisePropertyChanged(nameof(CoordinateZformatted));
            }
        }
    }

    double _CoordinateX;
    double _CoordinateY;
    double _CoordinateZ;
    ValueUnits _Units = ValueUnits.Length;

    public string CoordinateXformatted
        => UnitsService.Format(CoordinateX, Units);

    public string CoordinateYformatted
        => UnitsService.Format(CoordinateY, Units);

    public string CoordinateZformatted
        => UnitsService.Format(CoordinateZ, Units);

    public Coord3DHudElement()
    {
        InitializeComponent();
        CoreContext.Current.Parameters.ParameterChanged += _OnParameterChanged;
    }

    void _OnParameterChanged(ParameterSet set, string key)
    {
        if (set is ApplicationParameterSet &&
            key == nameof(ApplicationParameterSet.ApplicationUnits))
        {
            RaisePropertyChanged(nameof(CoordinateXformatted));
            RaisePropertyChanged(nameof(CoordinateYformatted));
            RaisePropertyChanged(nameof(CoordinateZformatted));
        }
    }

    public void SetValues(double coordX, double coordY, double coordZ)
    {
        CoordinateX = coordX;
        CoordinateY = coordY;
        CoordinateZ = coordZ;
    }
}
