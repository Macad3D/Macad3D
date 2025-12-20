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
    ApplicationUnits _UnitsParameter;

    //--------------------------------------------------------------------------------------------------

    public ApplicationUnits UnitsParameter
    {
        get { return _UnitsParameter; }
        set
        {
            if (_UnitsParameter != value)
            {
                _UnitsParameter = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Delta3DHudElement()
    {
        // Get the length measurement units from the settings
        _UnitsParameter = CoreContext.Current.Parameters.Get<ApplicationParameterSet>().ApplicationUnits;

        // Subscribe to changes in measurement units - probably not likely in this particular context
        // but, hey...
        CoreContext.Current.Parameters.ParameterChanged += (set, key) =>
        {
            if (set is ApplicationParameterSet && key == nameof(ApplicationParameterSet.ApplicationUnits))
            {
                UnitsParameter = ((ApplicationParameterSet)set).ApplicationUnits;
            }
        };

        InitializeComponent();
    }
        
    //--------------------------------------------------------------------------------------------------

    public void SetValues(double deltaX, double deltaY, double deltaZ)
    {
        DeltaX = deltaX;
        DeltaY = deltaY;
        DeltaZ = deltaZ;
        RaisePropertyChanged(nameof(DeltaX));
        RaisePropertyChanged(nameof(DeltaY));
        RaisePropertyChanged(nameof(DeltaZ));
    }
}