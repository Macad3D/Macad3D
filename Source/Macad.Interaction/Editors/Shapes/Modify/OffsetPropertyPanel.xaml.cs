using System.Diagnostics;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class OffsetPropertyPanel : PropertyPanel
{
    public Offset Offset { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public bool IsKeepOriginalAvailable
    {
        get
        {
            return Offset.ShapeType == ShapeType.Sketch;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public ICommand ToggleKeepOriginalCommand { get; private set; }

    void ExecuteToggleKeepOriginalCommand()
    {
        Offset.KeepOriginal = !Offset.KeepOriginal;
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand SwitchCornerCommand { get; private set; }

    void ExecuteSwitchCornerCommand(Offset.CornerType cornerType)
    {
        if (Offset.Corner != cornerType)
        {
            Offset.Corner = cornerType;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Offset = instance as Offset;
        Debug.Assert(Offset != null);

        SwitchCornerCommand = new RelayCommand<Offset.CornerType>(ExecuteSwitchCornerCommand);
        ToggleKeepOriginalCommand = new RelayCommand(ExecuteToggleKeepOriginalCommand);

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {

    }

    //--------------------------------------------------------------------------------------------------

}