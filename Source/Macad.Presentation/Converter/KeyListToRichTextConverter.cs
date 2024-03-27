using System.Collections.Generic;
using System.Linq;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Presentation;

[ContentProperty("Converter")]
[ValueConversion(typeof(string[]), typeof(string))]
public class KeyListToRichTextConverter : ConverterMarkupExtension<KeyListToRichTextConverter>
{
    public override object Convert(object value, System.Type targetType, object parameter, System.Globalization.CultureInfo culture)
    {
        string __Aggregate(IEnumerable<string> stringArray)
        {
            return stringArray.Aggregate("", (current, item) => current + "`k:" + item + "`");
        }

        //--------------------------------------------------------------------------------------------------

        string s = "";

        switch (value)
        {
            case IEnumerable<string>strArray:
                s = __Aggregate(strArray);
                break;

            case string str:
                s = __Aggregate(str.Split(' '));
                break;
        }
        return s;
    }
}