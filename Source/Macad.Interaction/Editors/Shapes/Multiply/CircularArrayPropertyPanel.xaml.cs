using System.Diagnostics;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class CircularArrayPropertyPanel : PropertyPanel
{
    public CircularArray Shape { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Shape = instance as CircularArray;
        Debug.Assert(Shape != null);

        SwitchPlaneTypeCommand = new RelayCommand<CircularArray.PlaneType>(ExecuteSwitchPlaneType);
        SwitchAlignmentCommand = new RelayCommand<CircularArray.AlignmentMode>(ExecuteSwitchAlignment);

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand SwitchPlaneTypeCommand { get; private set; }

    void ExecuteSwitchPlaneType(CircularArray.PlaneType plane)
    {
        if (Shape.Plane != plane)
        {
            Shape.Plane = plane;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public ICommand SwitchAlignmentCommand { get; private set; }

    void ExecuteSwitchAlignment(CircularArray.AlignmentMode alignmentMode)
    {
        if (Shape.Alignment != alignmentMode)
        {
            Shape.Alignment = alignmentMode;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------

}