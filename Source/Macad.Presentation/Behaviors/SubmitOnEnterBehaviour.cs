using System.Windows.Controls;
using System.Windows.Input;

namespace Macad.Presentation;

public class SubmitOnEnterBehaviour : Behavior<TextBox>
{
    TextBox _TextBox;

    //--------------------------------------------------------------------------------------------------

    public override void OnAttached(TextBox target)
    {
        _TextBox = target;
        target.KeyDown += Target_KeyDown;
    }

    //--------------------------------------------------------------------------------------------------

    public override void OnDetached(TextBox target)
    {
        target.KeyDown -= Target_KeyDown;
        _TextBox = null;
    }

    //--------------------------------------------------------------------------------------------------

    void Target_KeyDown(object sender, KeyEventArgs e)
    {
        if(e.Key == Key.Enter)
        {
            _TextBox?.GetBindingExpression(TextBox.TextProperty)?.UpdateSource();
        }
    }

    //--------------------------------------------------------------------------------------------------

}