using System.Text;
using System.Text.RegularExpressions;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Markup;
using Macad.Common;

namespace Macad.Presentation;

[ContentProperty("RichText")]
public class RichTextBlock : TextBlock
{
    public static readonly DependencyProperty RichTextProperty = DependencyProperty.Register(
        nameof(RichText), typeof(string), typeof(RichTextBlock), new PropertyMetadata(default(string), RichTextChangedCallback));

    public string RichText
    {
        get { return (string)GetValue(RichTextProperty); }
        set { SetValue(RichTextProperty, value); }
    }

    static void RichTextChangedCallback(DependencyObject d, DependencyPropertyChangedEventArgs e)
    {
        (d as RichTextBlock)?._CreateInlines(e.NewValue as string);
    }

    //--------------------------------------------------------------------------------------------------

    public RichTextBlock()
    {
        AddHandler(FrameworkContentElement.LoadedEvent, new RoutedEventHandler(_OnLoaded));
    }

    //--------------------------------------------------------------------------------------------------

    void _OnLoaded(object sender, RoutedEventArgs e)
    {
        _CreateInlines(RichText);
    }

    //--------------------------------------------------------------------------------------------------

    const string _RegexString = @"(\b__|\b_|`(.?):)(.*?)(__\b|_\b|`)";
    static readonly Regex _Regex = new (_RegexString, RegexOptions.Compiled);

    void _CreateInlines(string newRichText)
    {
        Inlines.Clear();

        if (newRichText.IsNullOrEmpty())
            return;

        var matches = _Regex.Matches(newRichText);
        int textPos = 0;
        foreach (Match match in matches)
        {
            if (match.Index > textPos)
            {
                Inlines.Add(new Run(newRichText.Substring(textPos, match.Index-textPos)));
            }

            string text = match.Groups[3].Value;
            textPos = match.Index + match.Length;

            switch (match.Groups[1].Value)
            {
                case "_":
                    Inlines.Add(new Run(text)
                    {
                        FontStyle = FontStyles.Italic
                    });
                    break;

                case "__":
                    Inlines.Add(new Run(text)
                    {
                        FontWeight = FontWeights.Bold
                    });
                    break;
                    
                case "`k:":
                    Inlines.Add(new InlineUIContainer(
                                    new Label
                                    {
                                        Style = FindResource("Macad.Styles.Label.Keyboard") as Style, 
                                        Content = text,
                                        VerticalAlignment = VerticalAlignment.Center
                                    })
                                {
                                    BaselineAlignment = BaselineAlignment.Center

                                });
                    break;

                default:
                    Inlines.Add(new Run(text));
                    break;
            }
        }

        if (textPos < newRichText.Length)
        {
            Inlines.Add(new Run(newRichText.Substring(textPos,  newRichText.Length-textPos)));
        }
    }

    //--------------------------------------------------------------------------------------------------


}