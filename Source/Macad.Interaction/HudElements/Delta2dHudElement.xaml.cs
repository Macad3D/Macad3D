using Macad.Common;
using Macad.Core;

namespace Macad.Interaction;

public partial class Delta2DHudElement : HudElement
{
    public double DeltaX
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

    public double DeltaY
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
    public string DeltaXformatted
    {
        get => UnitsService.Format(DeltaX, Units);
    }

    public string DeltaYformatted
    {
        get => UnitsService.Format(DeltaY, Units);
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
                RaisePropertyChanged(nameof(DeltaXformatted));
                RaisePropertyChanged(nameof(DeltaYformatted));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    double _DeltaX;
    double _DeltaY;
    ValueUnits _Units;

    //--------------------------------------------------------------------------------------------------

    public Delta2DHudElement()
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
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void SetValues(double deltaX, double deltaY)
    {
        DeltaX = deltaX;
        DeltaY = deltaY;
    }
}