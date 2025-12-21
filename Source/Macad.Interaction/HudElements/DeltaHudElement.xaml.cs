using Macad.Common;
using Macad.Core;
using Macad.Presentation;

namespace Macad.Interaction;

public partial class DeltaHudElement : HudElement
{
    public double Delta
    {
        get { return _Delta; }
        set
        {
            if (_Delta != value)
            {
                _Delta = value;
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(DeltaFormatted));
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
                RaisePropertyChanged(nameof(DeltaFormatted));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    double _Delta;
    ValueUnits _Units;

    public string DeltaFormatted
    {
        get => UnitsService.Format(Delta, Units);
    }

    //--------------------------------------------------------------------------------------------------

    public DeltaHudElement()
    {
        InitializeComponent();
        Units = ValueUnits.Length;
        CoreContext.Current.Parameters.ParameterChanged += _OnParameterChanged;
    }
        
    void _OnParameterChanged(ParameterSet set, string key)
    {
        if (set is ApplicationParameterSet && key == nameof(ApplicationParameterSet.ApplicationUnits))
        {
            RaisePropertyChanged(nameof(DeltaFormatted));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void SetValue(double value)
    {
        Delta = value;
    }

    //--------------------------------------------------------------------------------------------------

    public void SetUnits(ValueUnits valueUnits)
    {
        Units = valueUnits;
    }
}