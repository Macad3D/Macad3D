using System.Globalization;
using System;
using System.Windows.Data;
using System.Windows.Markup;

namespace Macad.Presentation;

/// <summary>
/// The BooleanConditionalMultiConverter class is a multi-value converter that selects one of two values based on a boolean condition.
/// It requires three values: the first value must be a boolean, and the second and third values are the options to be selected based on the boolean value.
/// The converter parameter can be set to "UpdateFirst", "UpdateSecond", or "UpdateBoth" to specify which of the two source values should be updated when the target value changes.
/// </summary>
/// <example>
///     <TextBlock>
///       <TextBlock.Text>
///         <MultiBinding Converter="{mmp:BooleanConditionalMultiConverter}" ConverterParameter="UpdateFirst" >
///           <Binding Path="Condition"/>
///           <Binding Path="TrueValue" />
///           <Binding Path="FalseValue" />
///         </MultiBinding>
///       </TextBlock.Text>
///     </TextBlock>
/// </example>
[ContentProperty("MultiConverter")]
public class BooleanConditionalMultiConverter : MultiConverterMarkupExtension<BooleanConditionalMultiConverter>
{
    [Flags]
    enum UpdateSources
    {
        None = 0,
        First = 1,
        Second = 2,
        Both = First | Second
    }

    //--------------------------------------------------------------------------------------------------

    public override object Convert(object[] values, Type targetType, object parameter, CultureInfo culture)
    {
        if(values.Length != 3)
        {
            throw new ArgumentException("BooleanConditionalMultiConverter requires three values.");
        }

        if(values[0] is not bool b)
        {
            throw new ArgumentException("BooleanConditionalMultiConverter requires a boolean as the first value.");
        }

        return b ? values[1] : values[2];
    }

    //--------------------------------------------------------------------------------------------------

    public override object[] ConvertBack(object value, Type[] targetTypes, object parameter, CultureInfo culture)
    {
        if (targetTypes.Length == 3)
        {
            UpdateSources update = UpdateSources.None;
            switch (parameter as string)
            {
                case "UpdateFirst":
                    update = UpdateSources.First;
                    break;
                case "UpdateSecond":
                    update = UpdateSources.Second;
                    break;
                case "UpdateBoth":
                    update = UpdateSources.Both;
                    break;
            }

            return
            [
                Binding.DoNothing,
                update.HasFlag(UpdateSources.First) ? value : Binding.DoNothing,
                update.HasFlag(UpdateSources.Second) ? value : Binding.DoNothing
            ];
        }
        return [Binding.DoNothing, Binding.DoNothing, Binding.DoNothing];
    }

    //--------------------------------------------------------------------------------------------------

}