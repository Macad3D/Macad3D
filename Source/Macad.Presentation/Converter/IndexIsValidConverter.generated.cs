
// This file contains the implementation of the IndexIsValid
// converter classes and was generated from a T4 template.
// Generated: 15.11.2019 12:16:57

using System;
using System.Globalization;
using System.Windows;
using System.Windows.Markup;
using System.Windows.Data;

namespace Macad.Presentation
{
    [ContentProperty("Converter")]
	[ValueConversion(typeof(int), typeof(bool))]
    public sealed class IndexIsValidToBoolConverter : ConverterMarkupExtension<IndexIsValidToBoolConverter>
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
				b = (((int)value) >= 0);
			};

            return b;
        }
						
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			throw new NotSupportedException();
		}
    }
	    

	[ContentProperty("Converter")]
	[ValueConversion(typeof(int), typeof(bool))]
    public sealed class IndexIsValidToNotBoolConverter : ConverterMarkupExtension<IndexIsValidToNotBoolConverter>
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
				b = (((int)value) >= 0);
			};

            return !b;
        }
				
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			throw new NotSupportedException();
		}
    }


	[ContentProperty("Converter")]
	[ValueConversion(typeof(int), typeof(Visibility))]
    public sealed class IndexIsValidToVisibleHiddenConverter : ConverterMarkupExtension<IndexIsValidToVisibleHiddenConverter>
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
				b = (((int)value) >= 0);
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
			throw new NotSupportedException();
		}
    }


	[ContentProperty("Converter")]
	[ValueConversion(typeof(int), typeof(Visibility))]
    public sealed class IndexIsValidToVisibleCollapsedConverter : ConverterMarkupExtension<IndexIsValidToVisibleCollapsedConverter>
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
				b = (((int)value) >= 0);
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
			throw new NotSupportedException();
		}
    }
	

	[ContentProperty("Converter")]
	[ValueConversion(typeof(int), typeof(Visibility))]
    public sealed class IndexIsValidToInvisibleHiddenConverter : ConverterMarkupExtension<IndexIsValidToInvisibleHiddenConverter>
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
				b = (((int)value) >= 0);
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
			throw new NotSupportedException();
		}
    }


	[ContentProperty("Converter")]
	[ValueConversion(typeof(int), typeof(Visibility))]
    public sealed class IndexIsValidToInvisibleCollapsedConverter : ConverterMarkupExtension<IndexIsValidToInvisibleCollapsedConverter>
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
				b = (((int)value) >= 0);
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
			throw new NotSupportedException();
		}
    }
	

	[ContentProperty("Converter")]
    public sealed class IndexIsValidToParameterConverter : ConverterMarkupExtension<IndexIsValidToParameterConverter>
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
				b = (((int)value) >= 0);
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
    public sealed class IndexIsValidNotToParameterConverter : ConverterMarkupExtension<IndexIsValidNotToParameterConverter>
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
				b = (((int)value) >= 0);
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
		
