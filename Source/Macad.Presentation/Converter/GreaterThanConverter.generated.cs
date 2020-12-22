

// This file contains the implementation of the GreaterThan
// converter classes and was generated from a T4 template.
// Generated: 15.11.2019 12:16:56

using System;
using System.Globalization;
using System.Windows;
using System.Windows.Markup;
using System.Windows.Data;

namespace Macad.Presentation
{
    [ContentProperty("Converter")]
	
    public sealed class GreaterThanToBoolConverter : ConverterMarkupExtension<GreaterThanToBoolConverter>
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
				 if (value is String)
					{
						return value.ToString().CompareTo(parameter as String) > 0;
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value > Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value > (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value > Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value > (Int64)parameter;
						}
					}
					else
					{
						b = (value is IComparable).CompareTo((parameter is IComparable)) > 0;
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
	
    public sealed class GreaterThanToNotBoolConverter : ConverterMarkupExtension<GreaterThanToNotBoolConverter>
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
				 if (value is String)
					{
						return value.ToString().CompareTo(parameter as String) > 0;
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value > Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value > (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value > Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value > (Int64)parameter;
						}
					}
					else
					{
						b = (value is IComparable).CompareTo((parameter is IComparable)) > 0;
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
	
    public sealed class GreaterThanToVisibleHiddenConverter : ConverterMarkupExtension<GreaterThanToVisibleHiddenConverter>
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
				 if (value is String)
					{
						return value.ToString().CompareTo(parameter as String) > 0;
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value > Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value > (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value > Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value > (Int64)parameter;
						}
					}
					else
					{
						b = (value is IComparable).CompareTo((parameter is IComparable)) > 0;
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
	
    public sealed class GreaterThanToVisibleCollapsedConverter : ConverterMarkupExtension<GreaterThanToVisibleCollapsedConverter>
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
				 if (value is String)
					{
						return value.ToString().CompareTo(parameter as String) > 0;
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value > Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value > (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value > Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value > (Int64)parameter;
						}
					}
					else
					{
						b = (value is IComparable).CompareTo((parameter is IComparable)) > 0;
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
	
    public sealed class GreaterThanToInvisibleHiddenConverter : ConverterMarkupExtension<GreaterThanToInvisibleHiddenConverter>
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
				 if (value is String)
					{
						return value.ToString().CompareTo(parameter as String) > 0;
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value > Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value > (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value > Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value > (Int64)parameter;
						}
					}
					else
					{
						b = (value is IComparable).CompareTo((parameter is IComparable)) > 0;
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
	
    public sealed class GreaterThanToInvisibleCollapsedConverter : ConverterMarkupExtension<GreaterThanToInvisibleCollapsedConverter>
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
				 if (value is String)
					{
						return value.ToString().CompareTo(parameter as String) > 0;
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value > Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value > (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value > Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value > (Int64)parameter;
						}
					}
					else
					{
						b = (value is IComparable).CompareTo((parameter is IComparable)) > 0;
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
    public sealed class GreaterThanToParameterConverter : ConverterMarkupExtension<GreaterThanToParameterConverter>
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
				 if (value is String)
					{
						return value.ToString().CompareTo(parameter as String) > 0;
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value > Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value > (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value > Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value > (Int64)parameter;
						}
					}
					else
					{
						b = (value is IComparable).CompareTo((parameter is IComparable)) > 0;
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
    public sealed class GreaterThanNotToParameterConverter : ConverterMarkupExtension<GreaterThanNotToParameterConverter>
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
				 if (value is String)
					{
						return value.ToString().CompareTo(parameter as String) > 0;
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value > Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value > (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value > Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value > (Int64)parameter;
						}
					}
					else
					{
						b = (value is IComparable).CompareTo((parameter is IComparable)) > 0;
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
		
