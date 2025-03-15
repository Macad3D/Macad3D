using System.Windows;
using System.Windows.Data;

namespace Macad.Presentation;

public static class BindingHelper
{
    public static Binding Create(object source, string path, BindingMode mode)
    {
        return new Binding()
        {
            Source = source,
            Path = new PropertyPath(path),
            Mode = mode
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static Binding Create(object source, string path, BindingMode mode, IValueConverter converter, object converterParameter=null)
    {
        return new Binding()
        {
            Source = source,
            Path = new PropertyPath(path),
            Mode = mode,
            Converter = converter,
            ConverterParameter = converterParameter
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static bool HasBinding(DependencyObject target, System.Windows.DependencyProperty dp)
    {
        return BindingOperations.GetBindingBase(target, dp) != null;
    }

    //--------------------------------------------------------------------------------------------------

}