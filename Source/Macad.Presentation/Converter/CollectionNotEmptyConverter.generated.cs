
// This file contains the implementation of the CollectionNotEmpty
// converter classes and was generated from a T4 template.
// Generated: 15.11.2019 12:16:55

using System;
using System.Globalization;
using System.Windows;
using System.Windows.Markup;
using System.Windows.Data;
using System.Collections;

namespace Macad.Presentation
{
    [ContentProperty("Converter")]
	[ValueConversion(typeof(ICollection), typeof(bool))]
    public sealed class CollectionNotEmptyToBoolConverter : ConverterMarkupExtension<CollectionNotEmptyToBoolConverter>
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
						b = ((ICollection)value).Count > 0;
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
	[ValueConversion(typeof(ICollection), typeof(bool))]
    public sealed class CollectionNotEmptyToNotBoolConverter : ConverterMarkupExtension<CollectionNotEmptyToNotBoolConverter>
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
						b = ((ICollection)value).Count > 0;
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
	[ValueConversion(typeof(ICollection), typeof(Visibility))]
    public sealed class CollectionNotEmptyToVisibleHiddenConverter : ConverterMarkupExtension<CollectionNotEmptyToVisibleHiddenConverter>
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
						b = ((ICollection)value).Count > 0;
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
	[ValueConversion(typeof(ICollection), typeof(Visibility))]
    public sealed class CollectionNotEmptyToVisibleCollapsedConverter : ConverterMarkupExtension<CollectionNotEmptyToVisibleCollapsedConverter>
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
						b = ((ICollection)value).Count > 0;
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
	[ValueConversion(typeof(ICollection), typeof(Visibility))]
    public sealed class CollectionNotEmptyToInvisibleHiddenConverter : ConverterMarkupExtension<CollectionNotEmptyToInvisibleHiddenConverter>
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
						b = ((ICollection)value).Count > 0;
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
	[ValueConversion(typeof(ICollection), typeof(Visibility))]
    public sealed class CollectionNotEmptyToInvisibleCollapsedConverter : ConverterMarkupExtension<CollectionNotEmptyToInvisibleCollapsedConverter>
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
						b = ((ICollection)value).Count > 0;
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
    public sealed class CollectionNotEmptyToParameterConverter : ConverterMarkupExtension<CollectionNotEmptyToParameterConverter>
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
						b = ((ICollection)value).Count > 0;
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
    public sealed class CollectionNotEmptyNotToParameterConverter : ConverterMarkupExtension<CollectionNotEmptyNotToParameterConverter>
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
						b = ((ICollection)value).Count > 0;
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
		
