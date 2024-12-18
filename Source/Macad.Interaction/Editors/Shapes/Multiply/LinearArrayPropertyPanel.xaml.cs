using System.Diagnostics;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

/// <summary>
/// Interaction logic for MultiplyMirrorPropertyPanel.xaml
/// </summary>
public partial class LinearArrayPropertyPanel : PropertyPanel
{
    public LinearArray Shape { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Shape = instance as LinearArray;
        Debug.Assert(Shape != null);

        SwitchPlaneTypeCommand = new RelayCommand<LinearArray.PlaneType>(ExecuteSwitchPlaneType);
        SwitchAlignment1Command = new RelayCommand<LinearArray.AlignmentMode>(ExecuteSwitchAlignment1);
        SwitchAlignment2Command = new RelayCommand<LinearArray.AlignmentMode>(ExecuteSwitchAlignment2);
        SwitchDistanceMode1Command = new RelayCommand<LinearArray.DistanceMode>(ExecuteSwitchDistanceMode1);
        SwitchDistanceMode2Command = new RelayCommand<LinearArray.DistanceMode>(ExecuteSwitchDistanceMode2);

        InitializeComponent();
    }
        
    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
    }
        
    //--------------------------------------------------------------------------------------------------
        
    public ICommand SwitchPlaneTypeCommand { get; private set; }

    void ExecuteSwitchPlaneType(LinearArray.PlaneType planeType)
    {
        if (Shape.Plane != planeType)
        {
            Shape.Plane = planeType;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public ICommand SwitchAlignment1Command { get; private set; }

    void ExecuteSwitchAlignment1(LinearArray.AlignmentMode mode)
    {
        if (Shape.Alignment1 != mode)
        {
            Shape.Alignment1 = mode;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------
                    
    public ICommand SwitchAlignment2Command { get; private set; }

    void ExecuteSwitchAlignment2(LinearArray.AlignmentMode mode)
    {
        if (Shape.Alignment2 != mode)
        {
            Shape.Alignment2 = mode;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------
                
    public ICommand SwitchDistanceMode1Command { get; private set; }

    void ExecuteSwitchDistanceMode1(LinearArray.DistanceMode mode)
    {
        if (Shape.DistanceMode1 != mode)
        {
            Shape.DistanceMode1 = mode;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------
    
    public ICommand SwitchDistanceMode2Command { get; private set; }

    void ExecuteSwitchDistanceMode2(LinearArray.DistanceMode mode)
    {
        if (Shape.DistanceMode2 != mode)
        {
            Shape.DistanceMode2 = mode;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------

}