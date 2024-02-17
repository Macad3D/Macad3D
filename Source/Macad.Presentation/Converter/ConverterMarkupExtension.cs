using System;
using System.Globalization;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Presentation;

// See: http://drwpf.com/blog/2009/03/17/tips-and-tricks-making-value-converters-more-accessible-in-markup/
// Base class
public abstract class ConverterMarkupExtension<T> : MarkupExtension, IValueConverter where T : class, new()
{
    static T _Instance = null;

    //--------------------------------------------------------------------------------------------------

    public static T Instance
    {
        get
        {
            if (_Instance == null)
            {
                _Instance = new T();
            }
            return _Instance;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override object ProvideValue(IServiceProvider serviceProvider)
    {
        return Instance;
    }

    //--------------------------------------------------------------------------------------------------

    #region IValueConverter Members

    public virtual object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public virtual object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
    {
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}