using System;
using System.Windows;
using System.Windows.Controls;

namespace Macad.Presentation.TreeView;

#region

using System.Windows.Input;

#endregion

/// <summary>
/// Text box which focuses itself on load and selects all text in it.
/// </summary>
public class EditTextBox : TextBox
{
    #region Constants and Fields

    private string startText;

    #endregion

    #region Constructors and Destructors

    static EditTextBox()
    {
        DefaultStyleKeyProperty.OverrideMetadata(typeof(EditTextBox), new FrameworkPropertyMetadata(typeof(EditTextBox)));
    }

    public EditTextBox()
    {
        Loaded += OnTreeViewExEditTextBoxLoaded;
    }

    #endregion

    #region Methods

    protected override void OnGotKeyboardFocus(KeyboardFocusChangedEventArgs e)
    {
        base.OnGotKeyboardFocus(e);
        startText = Text;
        SelectAll();
    }

    protected override void OnKeyDown(KeyEventArgs e)
    {
        base.OnKeyDown(e);
        if (!e.Handled)
        {
            Key key = e.Key;
            switch (key)
            {
                case Key.Escape:
                    Text = startText;
                    break;
            }
        }
    }

    protected override void OnLostKeyboardFocus(KeyboardFocusChangedEventArgs e)
    {
        if (Text != startText)
        {
            GetBindingExpression(TextProperty)?.UpdateSource();
            FinishEditing?.Invoke(this, Text);
        }
    }

    private void OnTreeViewExEditTextBoxLoaded(object sender, RoutedEventArgs e)
    {
        GetBindingExpression(TextProperty)?.UpdateTarget();
        PresentationHelper.ForceFocus(this);
    }

    #endregion

    #region Events

    public event EventHandler<string> FinishEditing;

    #endregion
}