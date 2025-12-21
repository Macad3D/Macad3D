using Macad.Common;
using Macad.Core;
using Macad.Presentation;

namespace Macad.Interaction;

public partial class Coord2DHudElement : HudElement
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
            }
        }
    }

    double _CoordinateX;
    double _CoordinateY;
    ValueUnits _Units = ValueUnits.Length;

    public string CoordinateXformatted
        => UnitsService.Format(CoordinateX, Units);

    public string CoordinateYformatted
        => UnitsService.Format(CoordinateY, Units);

    public Coord2DHudElement()
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
        }
    }

    public void SetValues(double coordX, double coordY)
    {
        CoordinateX = coordX;
        CoordinateY = coordY;
    }
}
