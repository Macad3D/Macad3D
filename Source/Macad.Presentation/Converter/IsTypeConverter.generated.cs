
// This file contains the implementation of the IsType
// converter classes and was generated from a T4 template.
// Generated: 18.11.2019 10:55:59

using System;
using System.Globalization;
using System.Windows;
using System.Windows.Markup;
using System.Windows.Data;
using System.Linq;

namespace Macad.Presentation
{
    [ContentProperty("Converter")]
	[ValueConversion(typeof(object), typeof(bool))]
    public sealed class IsTypeToBoolConverter : ConverterMarkupExtension<IsTypeToBoolConverter>
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
					if(parameter is string typestr1)
					{
						var typestr2 = value.GetType().ToString();
						b = (parameter as string).Split(';').Any(p => p.Equals(typestr2));
					} 
					else if(parameter is Type type)
					{
						b = value.GetType().IsAssignableFrom(type);
					}
					else b = false;
					
			};

            return b;
        }
						
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			throw new NotSupportedException();
		}
    }
	    

	[ContentProperty("Converter")]
	[ValueConversion(typeof(object), typeof(bool))]
    public sealed class IsTypeToNotBoolConverter : ConverterMarkupExtension<IsTypeToNotBoolConverter>
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
					if(parameter is string typestr1)
					{
						var typestr2 = value.GetType().ToString();
						b = (parameter as string).Split(';').Any(p => p.Equals(typestr2));
					} 
					else if(parameter is Type type)
					{
						b = value.GetType().IsAssignableFrom(type);
					}
					else b = false;
					
			};

            return !b;
        }
				
		public override object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
		{
			throw new NotSupportedException();
		}
    }


	[ContentProperty("Converter")]
	[ValueConversion(typeof(object), typeof(Visibility))]
    public sealed class IsTypeToVisibleHiddenConverter : ConverterMarkupExtension<IsTypeToVisibleHiddenConverter>
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
					if(parameter is string typestr1)
					{
						var typestr2 = value.GetType().ToString();
						b = (parameter as string).Split(';').Any(p => p.Equals(typestr2));
					} 
					else if(parameter is Type type)
					{
						b = value.GetType().IsAssignableFrom(type);
					}
					else b = false;
					
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
	[ValueConversion(typeof(object), typeof(Visibility))]
    public sealed class IsTypeToVisibleCollapsedConverter : ConverterMarkupExtension<IsTypeToVisibleCollapsedConverter>
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
					if(parameter is string typestr1)
					{
						var typestr2 = value.GetType().ToString();
						b = (parameter as string).Split(';').Any(p => p.Equals(typestr2));
					} 
					else if(parameter is Type type)
					{
						b = value.GetType().IsAssignableFrom(type);
					}
					else b = false;
					
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
	[ValueConversion(typeof(object), typeof(Visibility))]
    public sealed class IsTypeToInvisibleHiddenConverter : ConverterMarkupExtension<IsTypeToInvisibleHiddenConverter>
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
					if(parameter is string typestr1)
					{
						var typestr2 = value.GetType().ToString();
						b = (parameter as string).Split(';').Any(p => p.Equals(typestr2));
					} 
					else if(parameter is Type type)
					{
						b = value.GetType().IsAssignableFrom(type);
					}
					else b = false;
					
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
	[ValueConversion(typeof(object), typeof(Visibility))]
    public sealed class IsTypeToInvisibleCollapsedConverter : ConverterMarkupExtension<IsTypeToInvisibleCollapsedConverter>
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
					if(parameter is string typestr1)
					{
						var typestr2 = value.GetType().ToString();
						b = (parameter as string).Split(';').Any(p => p.Equals(typestr2));
					} 
					else if(parameter is Type type)
					{
						b = value.GetType().IsAssignableFrom(type);
					}
					else b = false;
					
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
    public sealed class IsTypeToParameterConverter : ConverterMarkupExtension<IsTypeToParameterConverter>
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
					if(parameter is string typestr1)
					{
						var typestr2 = value.GetType().ToString();
						b = (parameter as string).Split(';').Any(p => p.Equals(typestr2));
					} 
					else if(parameter is Type type)
					{
						b = value.GetType().IsAssignableFrom(type);
					}
					else b = false;
					
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
    public sealed class IsTypeNotToParameterConverter : ConverterMarkupExtension<IsTypeNotToParameterConverter>
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
					if(parameter is string typestr1)
					{
						var typestr2 = value.GetType().ToString();
						b = (parameter as string).Split(';').Any(p => p.Equals(typestr2));
					} 
					else if(parameter is Type type)
					{
						b = value.GetType().IsAssignableFrom(type);
					}
					else b = false;
					
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
		

