namespace Macad.Interaction;

public partial class LabelHudElement : HudElement
{
    public string Text
    {
        get { return _Text; }
        set
        {
            if (_Text != value)
            {
                _Text = value;
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    string _Text;

    //--------------------------------------------------------------------------------------------------

    public LabelHudElement()
    {
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public void SetValue(string text)
    {
        Text = text;
    }
}