using System;
using System.Collections.ObjectModel;
using System.Diagnostics.Contracts;
using System.Globalization;
using System.Linq;
using System.Windows;
using System.Windows.Data;
using System.Windows.Markup;

// http://josheinstein.com/blog/index.php/2010/06/switchconverter-a-switch-statement-for-xaml/

// Usage:
//<Grid>
//    <Grid.Resources>
//        <p:SwitchConverter x:Key="WeatherIcons">
//            <p:SwitchCase When="Sunny" Then="Sunny.png" />
//            <p:SwitchCase When="Cloudy" Then="Cloudy.png" />
//            <p:SwitchCase When="Rain" Then="Rain.png" />
//            <p:SwitchCase When="Snow" Then="Snow.png" />
//        </p:SwitchConverter>
//    </Grid.Resources>
//    <Image Operand="{Binding Condition, Converter={StaticResource WeatherIcons}}" />
//</Grid>

namespace Macad.Presentation;

/// <summary>
/// An individual case in the switch statement.
/// </summary>
[ContentProperty("Then")]
public sealed class SwitchCase : DependencyObject
{

    #region Constructors

    /// <summary>
    /// Initializes a new instance of the <see cref="T:SwitchCase"/> class.
    /// </summary>
    public SwitchCase()
    {

    }

    #endregion

    #region Properties

    /// <summary>
    /// Dependency property for the <see cref="P:When"/> property.
    /// </summary>
    public static readonly DependencyProperty WhenProperty = DependencyProperty.Register("When", typeof(object), typeof(SwitchCase), new PropertyMetadata(default(object)));

    /// <summary>
    /// The value to match against the input value.
    /// </summary>
    public object When
    {
        get
        {
            return (object)GetValue(WhenProperty);
        }
        set
        {
            SetValue(WhenProperty, value);
        }
    }

    /// <summary>
    /// Dependency property for the <see cref="P:Then"/> property.
    /// </summary>
    public static readonly DependencyProperty ThenProperty = DependencyProperty.Register("Then", typeof(object), typeof(SwitchCase), new PropertyMetadata(default(object)));

    /// <summary>
    /// The output value to use if the current case matches.
    /// </summary>
    public object Then
    {
        get
        {
            return (object)GetValue(ThenProperty);
        }
        set
        {
            SetValue(ThenProperty, value);
        }
    }

    #endregion

}   // class

/// <summary>
/// A collection of switch cases.
/// </summary>
public sealed class SwitchCaseCollection : Collection<SwitchCase>
{

    #region Constructors

    /// <summary>
    /// Initializes a new instance of the <see cref="T:SwitchCaseCollection"/> class.
    /// </summary>
    internal SwitchCaseCollection()
    {

    }

    #endregion

    #region Methods

    /// <summary>
    /// Adds a new case to the collection.
    /// </summary>
    /// <param name="when">The value to compare against the input.</param>
    /// <param name="then">The output value to use if the case matches.</param>
    public void Add(object when, object then)
    {
        Add(
            new SwitchCase
            {
                When = when,
                Then = then
            }
        );
    }

    #endregion

}   // class


/// <summary>
/// Produces an output value based upon a collection of case statements.
/// </summary>
[ContentProperty( "Cases" )]
public class SwitchConverter : IValueConverter
{

    #region Constructors

    /// <summary>
    /// Initializes a new instance of the <see cref="T:SwitchConverter"/> class.
    /// </summary>
    public SwitchConverter( )
        : this( new SwitchCaseCollection( ) )
    {
    }

    /// <summary>
    /// Initializes a new instance of the <see cref="T:SwitchConverter"/> class.
    /// </summary>
    /// <param name="cases">The case collection.</param>
    internal SwitchConverter( SwitchCaseCollection cases )
    {

        Contract.Requires( cases != null );

        Cases = cases;
        StringComparison = StringComparison.OrdinalIgnoreCase;

    }

    #endregion

    #region Properties

    /// <summary>
    /// Holds a collection of switch cases that determine which output
    /// value will be produced for a given input value.
    /// </summary>
    public SwitchCaseCollection Cases
    {
        get;
        private set;
    }

    /// <summary>
    /// Specifies the type of comparison performed when comparing the input
    /// value against a case.
    /// </summary>
    public StringComparison StringComparison
    {
        get;
        set;
    }

    /// <summary>
    /// An optional value that will be output if none of the cases match.
    /// </summary>
    public object Else
    {
        get;
        set;
    }

    #endregion

    #region Methods

    /// <summary>
    /// Converts a value.
    /// </summary>
    /// <param name="value">The value produced by the binding source.</param>
    /// <param name="targetType">The type of the binding target property.</param>
    /// <param name="parameter">The converter parameter to use.</param>
    /// <param name="culture">The culture to use in the converter.</param>
    /// <returns>A converted value. If the method returns null, the valid null value is used.</returns>
    public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
    {

        if ( value == null ) {
                
            // Special case for null
            // Null input can only equal null, no convert necessary
                
            return Cases.FirstOrDefault( x => x.When == null ) ?? Else;

        }

        foreach ( var c in Cases.Where( x => x.When != null ) ) {

            // Special case for string to string comparison
            if ( value is string && c.When is string ) {
                if ( String.Equals( (string)value, (string)c.When, StringComparison ) ) {
                    return c.Then;
                }
            }

            object when = c.When;

            // Normalize the types using IConvertible if possible
            if ( TryConvert( culture, value, ref when ) ) {
                if ( value.Equals( when ) ) {
                    return c.Then;
                }
            }

        }

        return Else;

    }

    /// <summary>
    /// Converts a value.
    /// </summary>
    /// <param name="value">The value that is produced by the binding target.</param>
    /// <param name="targetType">The type to convert to.</param>
    /// <param name="parameter">The converter parameter to use.</param>
    /// <param name="culture">The culture to use in the converter.</param>
    /// <returns>A converted value. If the method returns null, the valid null value is used.</returns>
    public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
    {
        throw new NotSupportedException();
    }

    /// <summary>
    /// Attempts to use the IConvertible interface to convert <paramref name="value2"/> into a type
    /// compatible with <paramref name="value1"/>.
    /// </summary>
    /// <param name="culture">The culture.</param>
    /// <param name="value1">The input value.</param>
    /// <param name="value2">The case value.</param>
    /// <returns>True if conversion was performed, otherwise false.</returns>
    private static bool TryConvert( CultureInfo culture, object value1, ref object value2 )
    {

        Type type1 = value1.GetType( );
        Type type2 = value2.GetType( );

        if ( type1 == type2 ) {
            return true;
        }

        if ( type1.IsEnum ) {
            value2 = Enum.Parse( type1, value2.ToString( ), true );
            return true;
        }

        var convertible1 = value1 as IConvertible;
        var convertible2 = value2 as IConvertible;

        if ( convertible1 != null && convertible2 != null ) {
            value2 = System.Convert.ChangeType( value2, type1, culture );
            return true;
        }

        return false;

    }

    #endregion

}   // class

// namespace
