using System.Diagnostics;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class LoftPropertyPanel : PropertyPanel
{
    public Loft Loft { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public bool IsToolActive
    {
        get { return _IsToolActive; }
        private set
        {
            _IsToolActive = value;
            RaisePropertyChanged();
        }
    }
        
    bool _IsToolActive;

    //--------------------------------------------------------------------------------------------------

    public bool IsWallEnabled
    {
        get { return Loft.StartCapping == Loft.CappingMode.None || Loft.EndCapping == Loft.CappingMode.None; }
    }

    //--------------------------------------------------------------------------------------------------
        
    public ICommand SwitchStartCappingCommand { get; private set; }

    void ExecuteSwitchStartCapping(Loft.CappingMode mode)
    {
        if (Loft.StartCapping != mode)
        {
            Loft.StartCapping = mode;
            CommitChange();
            RaisePropertyChanged(nameof(IsWallEnabled));
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public ICommand SwitchEndCappingCommand { get; private set; }

    void ExecuteSwitchEndCapping(Loft.CappingMode mode)
    {
        if (Loft.EndCapping != mode)
        {
            Loft.EndCapping = mode;
            CommitChange();
            RaisePropertyChanged(nameof(IsWallEnabled));
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public ICommand SwitchThickenDirectionCommand { get; private set; }

    void ExecuteSwitchThickenDirection(Loft.Direction direction)
    {
        if (Loft.ThickenDirection != direction)
        {
            Loft.ThickenDirection = direction;
            CommitChange();
        }
    }
        
    //--------------------------------------------------------------------------------------------------
        
    public ICommand SwitchThickenCornerTypeCommand { get; private set; }

    void ExecuteSwitchThickenCornerType(Loft.CornerType cornerType)
    {
        if (Loft.ThickenCornerType != cornerType)
        {
            Loft.ThickenCornerType = cornerType;
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public ICommand AddSectionCommand { get; private set; }

    void ExecuteAddSection()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as CreateLoftTool)?.Stop();
        }
        else
        {
            if (WorkspaceController.StartTool(new CreateLoftTool()))
                IsToolActive = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        Loft = instance as Loft;
        Debug.Assert(Loft != null);

        SwitchStartCappingCommand = new RelayCommand<Loft.CappingMode>(ExecuteSwitchStartCapping);
        SwitchEndCappingCommand = new RelayCommand<Loft.CappingMode>(ExecuteSwitchEndCapping);
        SwitchThickenDirectionCommand = new RelayCommand<Loft.Direction>(ExecuteSwitchThickenDirection);
        SwitchThickenCornerTypeCommand = new RelayCommand<Loft.CornerType>(ExecuteSwitchThickenCornerType);
        AddSectionCommand = new RelayCommand(ExecuteAddSection);

        WorkspaceController.PropertyChanged += workspaceController_PropertyChanged;

        InitializeComponent();
    }
        
    //--------------------------------------------------------------------------------------------------

    void workspaceController_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == "CurrentTool")
        {
            if (!(WorkspaceController.CurrentTool is CreateLoftTool))
                IsToolActive = false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (IsToolActive)
        {
            (WorkspaceController.CurrentTool as CreateLoftTool)?.Stop();
        }
        WorkspaceController.PropertyChanged -= workspaceController_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

}