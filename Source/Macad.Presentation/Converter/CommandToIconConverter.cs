using System;
using System.Globalization;
using System.Windows.Data;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;

namespace Macad.Presentation;

[ContentProperty("Converter")]
[ValueConversion(typeof(IActionCommand), typeof(ImageSource))]
public sealed class CommandToIconConverter : ConverterMarkupExtension<CommandToIconConverter>
{
    public override object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {
        switch (parameter)
        {
            case IActionCommand command:
                return Command.CreateImageSourceForIcon(command.GetIcon(value));

            case ICommandSource commandSource:
                var icon = (commandSource.Command as IActionCommand)?.GetIcon(commandSource.CommandParameter);
                return Command.CreateImageSourceForIcon(icon);

            default:
                return null;
        }
    }
}