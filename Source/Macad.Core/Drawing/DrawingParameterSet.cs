using Macad.Common;

namespace Macad.Core.Drawing;

[ParameterSet]
public sealed partial class DrawingParameterSet
{
    readonly Parameter<double> _DimensionArrowLength = new () {
        Name = "DimensionArrowLength",
        DefaultValue = 3.0,
        Description = "Length of the dimension arrow in mm.",
        EditorHints = new() { { "MinValue", 0.01 }, { "MaxValue", 10000 } },
        PhysicalQuantity = PhysicalQuantities.Length
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<double> _DimensionArrowWidth = new()
    {
        Name = "DimensionArrowWidth",
        DefaultValue = 1.0,
        Description = "Width of the dimension arrow in mm.",
        EditorHints = new() { { "MinValue", 0.01 }, { "MaxValue", 10000 } },
        PhysicalQuantity = PhysicalQuantities.Length
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<string> _DefaultFontFamily = new()
    {
        Name = "DefaultFontFamily",
        DefaultValue = "Arial",
        Description = "Font family used for dimensions and text annotations.",
        EditorHints = new() { { "Selector", "FontFamily" } }
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<float> _DefaultFontSize = new()
    {
        Name = "DefaultFontSize",
        DefaultValue = 3.0f,
        Description = "Default font size.",
        EditorHints = new() { { "MinValue", 0.01 }, { "MaxValue", 10000 } },
        PhysicalQuantity = PhysicalQuantities.Length
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<PhysicalQuantities> _PhysicalQuantity = new()
    {
        Name = "PhysicalQuantity",
        DefaultValue = PhysicalQuantities.Length,
        Description = "Physical quantity for measurements."
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<DimensionlessUnits> _DimensionlessUnits = new()
    {
        Name = "DimensionlessUnits",
        DefaultValue = DimensionlessUnits.None,
        Description = "Chosen dimensionless unit system.",
        IsVisible = false
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<LengthUnits> _LengthUnits = new()
    {
        Name = "LengthUnits",
        DefaultValue = LengthUnits.Millimeters,
        Description = "Chosen length unit system."
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<AngleUnits> _AngleUnits = new()
    {
        Name = "AngleUnits",
        DefaultValue = AngleUnits.Degrees,
        Description = "Chosen angle unit system.",
        IsVisible = false
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<TimeUnits> _TimeUnits = new()
    {
        Name = "TimeUnits",
        DefaultValue = TimeUnits.Seconds,
        Description = "Chosen time unit system.",
        IsVisible = false
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<DimensionlessPrecision> _DimensionlessPrecision = new()
    {
        Name = "DimensionlessPrecision",
        DefaultValue = DimensionlessPrecision.Decimal_2,
        Description = "Level of precision for dimensionless units.",
        IsVisible = false
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<MetricLengthPrecision> _MetricLengthPrecision = new()
    {
        Name = "MetricLengthPrecision",
        DefaultValue = MetricLengthPrecision.Decimal_2,
        Description = "Level of precision for metric lengths.",
        IsVisible = true
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<ImperialLengthPrecision> _ImperialLengthPrecision = new()
    {
        Name = "ImperialLengthPrecision",
        DefaultValue = ImperialLengthPrecision.InchFraction_1_32,
        Description = "Level of precision for imperial lengths.",
        IsVisible = false
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<AnglePrecision> _AnglePrecision = new()
    {
        Name = "AnglePrecision",
        DefaultValue = AnglePrecision.Decimal_0,
        Description = "Level of precision for angles.",
        IsVisible = false
    };

    //--------------------------------------------------------------------------------------------------

    readonly Parameter<TimePrecision> _TimePrecision = new()
    {
        Name = "TimePrecision",
        DefaultValue = TimePrecision.Decimal_0,
        Description = "Level of precision for time.",
        IsVisible = false
    };

    //--------------------------------------------------------------------------------------------------

    protected override void OnParameterValueChanged(string key)
    {
        if (key == "PhysicalQuantity")
        {
            HideAllDropdowns();

            switch (_PhysicalQuantity.Value)
            {
                case PhysicalQuantities.Dimensionless:
                    _DimensionlessUnits.IsVisible = true;
                    _DimensionlessPrecision.IsVisible = true;
                    break;

                case PhysicalQuantities.Length:
                    _LengthUnits.IsVisible = true;
                    if (_LengthUnits.Value == LengthUnits.Inches || _LengthUnits.Value == LengthUnits.Architectural)
                    {
                        _ImperialLengthPrecision.IsVisible = true;
                    }
                    else
                    {
                        _MetricLengthPrecision.IsVisible = true;
                    }
                    break;

                case PhysicalQuantities.Angle:
                    _AngleUnits.IsVisible = true;
                    _AnglePrecision.IsVisible = true;
                    break;

                case PhysicalQuantities.Time:
                    _TimeUnits.IsVisible = true;
                    _TimePrecision.IsVisible = true;
                    break;
            }
        }

        if (key == "DimensionlessUnits")
        {
            HideJustPrecisionDropdowns();
            _DimensionlessPrecision.IsVisible = true;
        }

        if (key == "LengthUnits")
        {
            HideJustPrecisionDropdowns();

            switch (_LengthUnits.Value)
            {
                case LengthUnits.Millimeters:
                case LengthUnits.Centimeters:
                case LengthUnits.Meters:
                    _MetricLengthPrecision.IsVisible = true;
                    break;

                case LengthUnits.Inches:
                case LengthUnits.Architectural:
                    _ImperialLengthPrecision.IsVisible = true;
                    break;
            }
        }

        if (key == "AngleUnits")
        {
            HideJustPrecisionDropdowns();
            _AnglePrecision.IsVisible = true;
        }

        if (key == "TimeUnits")
        {
            HideJustPrecisionDropdowns();
            _TimePrecision.IsVisible = true;
        }

        // Tell the dialog to update
        base.OnParameterValueChanged(key);
    }

    //--------------------------------------------------------------------------------------------------

    void HideAllDropdowns()
    {
        _DimensionlessUnits.IsVisible = false;
        _LengthUnits.IsVisible = false;
        _AngleUnits.IsVisible = false;
        _TimeUnits.IsVisible = false;

        HideJustPrecisionDropdowns();
    }

    //--------------------------------------------------------------------------------------------------

    void HideJustPrecisionDropdowns()
    {
        _DimensionlessPrecision.IsVisible = false;
        _MetricLengthPrecision.IsVisible = false;
        _ImperialLengthPrecision.IsVisible = false;
        _AnglePrecision.IsVisible = false;
        _TimePrecision.IsVisible = false;
    }

    //--------------------------------------------------------------------------------------------------
}