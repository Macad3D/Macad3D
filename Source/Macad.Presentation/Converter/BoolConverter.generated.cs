
// This file contains the implementation of the Bool
// converter classes and was generated from a T4 template.
// Generated: 15.11.2019 12:16:54

using System;
using System.Globalization;
using System.Windows;
using System.Windows.Markup;
using System.Windows.Data;

namespace Macad.Presentation
{
    [ContentProperty("Converter")]
	[ValueConversion(typeof(bool), typeof(bool))]
    public sealed class BoolToBoolConverter : ConverterMarkupExtension<BoolToBoolConverter>
    {
        public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (PresentationHelper.IsInDesignMode)
            {
                return true;
            }

						bool b = false;
			if(value != null)
			{
				b = (bool)value;
			};

            return b;
        }
						
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			if((value == null)||(!(value is bool)))
				return false;

			bool b = (bool)value;
			return b;
		}
    }
	    

	[ContentProperty("Converter")]
	[ValueConversion(typeof(bool), typeof(bool))]
    public sealed class BoolToNotBoolConverter : ConverterMarkupExtension<BoolToNotBoolConverter>
    {
        public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (PresentationHelper.IsInDesignMode)
            {
                return true;
            }

						bool b = false;
			if(value != null)
			{
				b = (bool)value;
			};

            return !b;
        }
				
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			if((value == null)||(!(value is bool)))
				return false;

			bool b = !(bool)value;
			return b;
		}
    }


	[ContentProperty("Converter")]
	[ValueConversion(typeof(bool), typeof(Visibility))]
    public sealed class BoolToVisibleHiddenConverter : ConverterMarkupExtension<BoolToVisibleHiddenConverter>
    {
        public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (PresentationHelper.IsInDesignMode)
            {
                return Visibility.Visible;
            }

			bool b = false;
			if(value != null)
			{
				b = (bool)value;
			};

            if (b == true)
            {
                return Visibility.Visible;
            }
            else
            {
                return Visibility.Hidden;
            }
        }

		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			if((value == null)||(!(value is Visibility)))
				return false;

			bool b = (Visibility)value == Visibility.Visible;
			return b;
		}
    }


	[ContentProperty("Converter")]
	[ValueConversion(typeof(bool), typeof(Visibility))]
    public sealed class BoolToVisibleCollapsedConverter : ConverterMarkupExtension<BoolToVisibleCollapsedConverter>
    {
        public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (PresentationHelper.IsInDesignMode)
            {
                return Visibility.Visible;
            }

			bool b = false;
			if(value != null)
			{
				b = (bool)value;
			};

            if (b == true)
            {
                return Visibility.Visible;
            }
            else
            {
                return Visibility.Collapsed;
            }
        }
		
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			if((value == null)||(!(value is Visibility)))
				return false;

			bool b = (Visibility)value == Visibility.Visible;
			return b;
		}
    }
	

	[ContentProperty("Converter")]
	[ValueConversion(typeof(bool), typeof(Visibility))]
    public sealed class BoolToInvisibleHiddenConverter : ConverterMarkupExtension<BoolToInvisibleHiddenConverter>
    {
        public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (PresentationHelper.IsInDesignMode)
            {
                return Visibility.Visible;
            }

						bool b = false;
			if(value != null)
			{
				b = (bool)value;
			};

            if (b == false)
            {
                return Visibility.Visible;
            }
            else
            {
                return Visibility.Hidden;
            }
        }
				
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			if((value == null)||(!(value is Visibility)))
				return false;

			bool b = (Visibility)value == Visibility.Hidden;
			return b;
		}
    }


	[ContentProperty("Converter")]
	[ValueConversion(typeof(bool), typeof(Visibility))]
    public sealed class BoolToInvisibleCollapsedConverter : ConverterMarkupExtension<BoolToInvisibleCollapsedConverter>
    {
        public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (PresentationHelper.IsInDesignMode)
            {
                return Visibility.Visible;
            }

						bool b = false;
			if(value != null)
			{
				b = (bool)value;
			};

            if (b == false)
            {
                return Visibility.Visible;
            }
            else
            {
                return Visibility.Collapsed;
            }
        }
						
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			if((value == null)||(!(value is Visibility)))
				return false;

			bool b = (Visibility)value == Visibility.Collapsed;
			return b;
		}
    }
	

	[ContentProperty("Converter")]
    public sealed class BoolToParameterConverter : ConverterMarkupExtension<BoolToParameterConverter>
    {
        public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (PresentationHelper.IsInDesignMode)
            {
                return true;
            }

						bool b = false;
			if(value != null)
			{
				b = (bool)value;
			};

            if (b == true)
            {
                return parameter;
            }
            else
            {
                return "";
            }
        }
    }
		

	[ContentProperty("Converter")]
    public sealed class BoolNotToParameterConverter : ConverterMarkupExtension<BoolNotToParameterConverter>
    {
        public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (PresentationHelper.IsInDesignMode)
            {
                return true;
            }

						bool b = false;
			if(value != null)
			{
				b = (bool)value;
			};

            if (b == false)
            {
                return parameter;
            }
            else
            {
                return "";
            }
        }
    }
}
		

