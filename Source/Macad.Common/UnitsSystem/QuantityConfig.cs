using Macad.Common;
using System;
using System.Collections.Generic;

public class QuantityConfig : BaseObject
{
    public PhysicalQuantities Quantity { get; }

    //--------------------------------------------------------------------------------------------------

    Enum _unitSystem;
    public Enum UnitSystem
    {
        get => _unitSystem;
        set
        {
            if (_unitSystem != value)
            {
                _unitSystem = value;
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(AvailablePrecisions));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    Enum _precision;
    public Enum Precision
    {
        get => _precision;
        set
        {
            if (_precision != value)
            {
                _precision = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public IEnumerable<Enum> AvailableUnitSystems { get; }
    public IEnumerable<Enum> AvailablePrecisions
        => PrecisionProvider.GetPrecisions(Quantity, UnitSystem);

    //--------------------------------------------------------------------------------------------------

    public QuantityConfig(PhysicalQuantities quantity, IEnumerable<Enum> unitSystems, Enum defaultUnit, Enum defaultPrecision)
    {
        Quantity = quantity;
        AvailableUnitSystems = unitSystems;
        UnitSystem = defaultUnit;
        Precision = defaultPrecision;
    }
}
