using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Macad.Common;

namespace Macad.Core.Drawing;

public class DrawingMeasurementSettingsProvider: UnitsService.IMeasurementSettingsProvider
{
    readonly DrawingParameterSet _settings;

    //--------------------------------------------------------------------------------------------------

    public DrawingMeasurementSettingsProvider(DrawingParameterSet settings)
    {
        _settings = settings;
    }

    //--------------------------------------------------------------------------------------------------

    public MeasurementDescriptor GetDescriptor(PhysicalQuantities quantity)
    {
        switch (quantity)
        {
            case PhysicalQuantities.Dimensionless:
                return new MeasurementDescriptor(
                    quantity,
                    _settings.DimensionlessUnits,
                    _settings.DimensionlessPrecision);

            case PhysicalQuantities.Length:
                if (_settings.LengthUnits is LengthUnits.Millimeters
                    or LengthUnits.Centimeters
                    or LengthUnits.Meters)
                {
                    return new MeasurementDescriptor(
                        quantity,
                        _settings.LengthUnits,
                        _settings.MetricLengthPrecision);
                }

                if (_settings.LengthUnits is LengthUnits.Inches
                    or LengthUnits.Architectural)
                {
                    return new MeasurementDescriptor(
                        quantity,
                        _settings.LengthUnits,
                        _settings.ImperialLengthPrecision);
                }

                return null;

            case PhysicalQuantities.Angle:
                return new MeasurementDescriptor(
                    quantity,
                    _settings.AngleUnits,
                    _settings.AnglePrecision);

            case PhysicalQuantities.Time:
                return new MeasurementDescriptor(
                    quantity,
                    _settings.TimeUnits,
                    _settings.TimePrecision);

            default:
                return null;
        }
    }

    //--------------------------------------------------------------------------------------------------
}
