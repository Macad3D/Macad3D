using Macad.Common;
using Macad.Core;
using System;
using System.Configuration;
using System.Diagnostics;
using System.Globalization;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Presentation;

public sealed class GridStepDisplayConverter : IMultiValueConverter
    {
        public static readonly GridStepDisplayConverter Instance = new();

        public GridStepDisplayConverter() { }

        public object Convert(object[] values, Type targetType, object parameter, CultureInfo culture)
        {
            if (values.Length != 2 || values[0] is not double gridStepMm || values[1] is not ApplicationUnits units)
                return "?.??";

            return ImperialLengthFormatter.FormatLength(gridStepMm, units);
        }

        public object[] ConvertBack(object value, Type[] targetTypes, object parameter, CultureInfo culture)
            => throw new NotSupportedException();
    }

public sealed class GridStepCheckedConverter : IValueConverter
    {
        public static readonly GridStepCheckedConverter Instance = new();

        private GridStepCheckedConverter() { }

        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (value is not double currentGridStepMm || parameter is not double targetDisplayValue)
                return false;

            var appParams = CoreContext.Current.Parameters.Get<ApplicationParameterSet>();
            var units = appParams.ApplicationUnits;

            double currentInDisplay = units == ApplicationUnits.Millimeters
                ? currentGridStepMm
                : currentGridStepMm / 25.4;

            return Math.Abs(currentInDisplay - targetDisplayValue) < 1e-6;
        }

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
            => throw new NotSupportedException();
    }