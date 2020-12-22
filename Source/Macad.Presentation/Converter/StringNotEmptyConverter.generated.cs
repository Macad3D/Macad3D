
// This file contains the implementation of the StringNotEmpty
// converter classes and was generated from a T4 template.
// Generated: 15.11.2019 12:16:58

using System;
using System.Globalization;
using System.Windows;
using System.Windows.Markup;
using System.Windows.Data;

namespace Macad.Presentation
{
    [ContentProperty("Converter")]
	[ValueConversion(typeof(string), typeof(bool))]
    public sealed class StringNotEmptyToBoolConverter : ConverterMarkupExtension<StringNotEmptyToBoolConverter>
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
				 if (value != null)
					{
						if (value.ToString().Length > 0)
						{
							b = true;
						}
					}
			};

            return b;
        }
						
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			throw new NotSupportedException();
		}
    }
	    

	[ContentProperty("Converter")]
	[ValueConversion(typeof(string), typeof(bool))]
    public sealed class StringNotEmptyToNotBoolConverter : ConverterMarkupExtension<StringNotEmptyToNotBoolConverter>
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
				 if (value != null)
					{
						if (value.ToString().Length > 0)
						{
							b = true;
						}
					}
			};

            return !b;
        }
				
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			throw new NotSupportedException();
		}
    }


	[ContentProperty("Converter")]
	[ValueConversion(typeof(string), typeof(Visibility))]
    public sealed class StringNotEmptyToVisibleHiddenConverter : ConverterMarkupExtension<StringNotEmptyToVisibleHiddenConverter>
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
				 if (value != null)
					{
						if (value.ToString().Length > 0)
						{
							b = true;
						}
					}
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
	[ValueConversion(typeof(string), typeof(Visibility))]
    public sealed class StringNotEmptyToVisibleCollapsedConverter : ConverterMarkupExtension<StringNotEmptyToVisibleCollapsedConverter>
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
				 if (value != null)
					{
						if (value.ToString().Length > 0)
						{
							b = true;
						}
					}
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
	[ValueConversion(typeof(string), typeof(Visibility))]
    public sealed class StringNotEmptyToInvisibleHiddenConverter : ConverterMarkupExtension<StringNotEmptyToInvisibleHiddenConverter>
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
				 if (value != null)
					{
						if (value.ToString().Length > 0)
						{
							b = true;
						}
					}
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
	[ValueConversion(typeof(string), typeof(Visibility))]
    public sealed class StringNotEmptyToInvisibleCollapsedConverter : ConverterMarkupExtension<StringNotEmptyToInvisibleCollapsedConverter>
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
				 if (value != null)
					{
						if (value.ToString().Length > 0)
						{
							b = true;
						}
					}
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
    public sealed class StringNotEmptyToParameterConverter : ConverterMarkupExtension<StringNotEmptyToParameterConverter>
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
				 if (value != null)
					{
						if (value.ToString().Length > 0)
						{
							b = true;
						}
					}
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
    public sealed class StringNotEmptyNotToParameterConverter : ConverterMarkupExtension<StringNotEmptyNotToParameterConverter>
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
				 if (value != null)
					{
						if (value.ToString().Length > 0)
						{
							b = true;
						}
					}
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
		
