using System;
using System.Globalization;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Presentation;

// See: http://drwpf.com/blog/2009/03/17/tips-and-tricks-making-value-converters-more-accessible-in-markup/
// Base class
public abstract class MultiConverterMarkupExtension<T> : MarkupExtension, IMultiValueConverter where T : class, new()
{
    protected static T _Instance = null;

    public override object ProvideValue(IServiceProvider serviceProvider)
    {
        if (_Instance == null)
        {
            _Instance = new T();
        }
        return _Instance;
    }

    #region IMultiValueConverter Members

    public virtual object Convert(object[] values, Type targetType, object parameter, CultureInfo culture)
    {
        throw new NotSupportedException();
    }

    public virtual object[] ConvertBack(object value, Type[] targetTypes, object parameter, CultureInfo culture)
    {
        throw new NotSupportedException();
    }

    #endregion
}