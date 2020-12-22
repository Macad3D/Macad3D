
// This file contains the implementation of the Equality
// converter classes and was generated from a T4 template.
// Generated: 15.11.2019 12:16:55

using System;
using System.Globalization;
using System.Windows;
using System.Windows.Markup;
using System.Windows.Data;

namespace Macad.Presentation
{
    [ContentProperty("Converter")]
	
    public sealed class EqualityToBoolConverter : ConverterMarkupExtension<EqualityToBoolConverter>
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
						b = value.ToString() == (parameter as String);
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value == Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value == (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value == Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value == (Int64)parameter;
						}
					}
					else if (value is Double)
					{
						if (parameter is String)
						{
							b = (Double)value == Double.Parse(parameter as String, CultureInfo.InvariantCulture);
						}
						else
						{
							b = (Double)value == (Double)parameter;
						}
					}
					else if (value is Enum)
					{
						if(parameter is String s)
						{
							if(int.TryParse(s, out int i))
							{
								b = ((int)value) == i;
							} else {
								b = Enum.GetName(value.GetType(), value) == s;
							}
						}
					}
					else
					{
						b = value == parameter;
					};
			};

            return b;
        }
						
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			if((value == null)||(!(value is bool)))
				return false;

			bool b = (bool)value;
			return b ? parameter : default;
		}
    }
	    

	[ContentProperty("Converter")]
	
    public sealed class EqualityToNotBoolConverter : ConverterMarkupExtension<EqualityToNotBoolConverter>
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
						b = value.ToString() == (parameter as String);
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value == Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value == (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value == Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value == (Int64)parameter;
						}
					}
					else if (value is Double)
					{
						if (parameter is String)
						{
							b = (Double)value == Double.Parse(parameter as String, CultureInfo.InvariantCulture);
						}
						else
						{
							b = (Double)value == (Double)parameter;
						}
					}
					else if (value is Enum)
					{
						if(parameter is String s)
						{
							if(int.TryParse(s, out int i))
							{
								b = ((int)value) == i;
							} else {
								b = Enum.GetName(value.GetType(), value) == s;
							}
						}
					}
					else
					{
						b = value == parameter;
					};
			};

            return !b;
        }
				
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			if((value == null)||(!(value is bool)))
				return false;

			bool b = !(bool)value;
			return b ? parameter : default;
		}
    }


	[ContentProperty("Converter")]
	
    public sealed class EqualityToVisibleHiddenConverter : ConverterMarkupExtension<EqualityToVisibleHiddenConverter>
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
						b = value.ToString() == (parameter as String);
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value == Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value == (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value == Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value == (Int64)parameter;
						}
					}
					else if (value is Double)
					{
						if (parameter is String)
						{
							b = (Double)value == Double.Parse(parameter as String, CultureInfo.InvariantCulture);
						}
						else
						{
							b = (Double)value == (Double)parameter;
						}
					}
					else if (value is Enum)
					{
						if(parameter is String s)
						{
							if(int.TryParse(s, out int i))
							{
								b = ((int)value) == i;
							} else {
								b = Enum.GetName(value.GetType(), value) == s;
							}
						}
					}
					else
					{
						b = value == parameter;
					};
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
			return b ? parameter : default;
		}
    }


	[ContentProperty("Converter")]
	
    public sealed class EqualityToVisibleCollapsedConverter : ConverterMarkupExtension<EqualityToVisibleCollapsedConverter>
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
						b = value.ToString() == (parameter as String);
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value == Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value == (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value == Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value == (Int64)parameter;
						}
					}
					else if (value is Double)
					{
						if (parameter is String)
						{
							b = (Double)value == Double.Parse(parameter as String, CultureInfo.InvariantCulture);
						}
						else
						{
							b = (Double)value == (Double)parameter;
						}
					}
					else if (value is Enum)
					{
						if(parameter is String s)
						{
							if(int.TryParse(s, out int i))
							{
								b = ((int)value) == i;
							} else {
								b = Enum.GetName(value.GetType(), value) == s;
							}
						}
					}
					else
					{
						b = value == parameter;
					};
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
			return b ? parameter : default;
		}
    }
	

	[ContentProperty("Converter")]
	
    public sealed class EqualityToInvisibleHiddenConverter : ConverterMarkupExtension<EqualityToInvisibleHiddenConverter>
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
						b = value.ToString() == (parameter as String);
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value == Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value == (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value == Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value == (Int64)parameter;
						}
					}
					else if (value is Double)
					{
						if (parameter is String)
						{
							b = (Double)value == Double.Parse(parameter as String, CultureInfo.InvariantCulture);
						}
						else
						{
							b = (Double)value == (Double)parameter;
						}
					}
					else if (value is Enum)
					{
						if(parameter is String s)
						{
							if(int.TryParse(s, out int i))
							{
								b = ((int)value) == i;
							} else {
								b = Enum.GetName(value.GetType(), value) == s;
							}
						}
					}
					else
					{
						b = value == parameter;
					};
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
			return b ? parameter : default;
		}
    }


	[ContentProperty("Converter")]
	
    public sealed class EqualityToInvisibleCollapsedConverter : ConverterMarkupExtension<EqualityToInvisibleCollapsedConverter>
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
						b = value.ToString() == (parameter as String);
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value == Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value == (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value == Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value == (Int64)parameter;
						}
					}
					else if (value is Double)
					{
						if (parameter is String)
						{
							b = (Double)value == Double.Parse(parameter as String, CultureInfo.InvariantCulture);
						}
						else
						{
							b = (Double)value == (Double)parameter;
						}
					}
					else if (value is Enum)
					{
						if(parameter is String s)
						{
							if(int.TryParse(s, out int i))
							{
								b = ((int)value) == i;
							} else {
								b = Enum.GetName(value.GetType(), value) == s;
							}
						}
					}
					else
					{
						b = value == parameter;
					};
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
			return b ? parameter : default;
		}
    }
	

	[ContentProperty("Converter")]
    public sealed class EqualityToParameterConverter : ConverterMarkupExtension<EqualityToParameterConverter>
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
						b = value.ToString() == (parameter as String);
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value == Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value == (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value == Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value == (Int64)parameter;
						}
					}
					else if (value is Double)
					{
						if (parameter is String)
						{
							b = (Double)value == Double.Parse(parameter as String, CultureInfo.InvariantCulture);
						}
						else
						{
							b = (Double)value == (Double)parameter;
						}
					}
					else if (value is Enum)
					{
						if(parameter is String s)
						{
							if(int.TryParse(s, out int i))
							{
								b = ((int)value) == i;
							} else {
								b = Enum.GetName(value.GetType(), value) == s;
							}
						}
					}
					else
					{
						b = value == parameter;
					};
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
    public sealed class EqualityNotToParameterConverter : ConverterMarkupExtension<EqualityNotToParameterConverter>
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
						b = value.ToString() == (parameter as String);
					}
					else if (value is Int32)
					{
						if (parameter is String)
						{
							b = (Int32)value == Int32.Parse(parameter as String);
						}
						else
						{
							b = (Int32)value == (Int32)parameter;
						}
					}
					else if (value is Int64)
					{
						if (parameter is String)
						{
							b = (Int64)value == Int64.Parse(parameter as String);
						}
						else
						{
							b = (Int64)value == (Int64)parameter;
						}
					}
					else if (value is Double)
					{
						if (parameter is String)
						{
							b = (Double)value == Double.Parse(parameter as String, CultureInfo.InvariantCulture);
						}
						else
						{
							b = (Double)value == (Double)parameter;
						}
					}
					else if (value is Enum)
					{
						if(parameter is String s)
						{
							if(int.TryParse(s, out int i))
							{
								b = ((int)value) == i;
							} else {
								b = Enum.GetName(value.GetType(), value) == s;
							}
						}
					}
					else
					{
						b = value == parameter;
					};
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
		

