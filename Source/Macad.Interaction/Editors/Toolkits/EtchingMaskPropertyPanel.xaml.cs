using System;
using System.Windows;
using Macad.Interaction.Dialogs;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Toolkits;

public partial class EtchingMaskPropertyPanel : PropertyPanel
{
    #region Properties

    public EtchingMaskEditTool Tool
    {
        get { return _Tool; }
        set
        {
            if (_Tool != value)
            {
                _Tool = value;
                RaisePropertyChanged();
            }
        }
    }

    EtchingMaskEditTool _Tool;

    //--------------------------------------------------------------------------------------------------

    public Guid ReferencedShapeId
    {
        get
        {
            return _Tool.Component.ShapeGuid;
        }
        set
        {
            _Tool.Component.ShapeGuid = value;
            RaisePropertyChanged();
            CommitChange();
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Commands

    public RelayCommand ExportCommand { get; private set; }

    void ExecuteExport()
    {
        {
            if (!ExportDialog.Execute<IDrawingExporter>(out string fileName, out var exporter))
                return;

            if (!_Tool.Component.Export(fileName, exporter))
            {
                ErrorDialogs.CannotExport(fileName);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public RelayCommand SelectFaceCommand { get; private set; }
        
    void ExecuteSelectFace()
    {
        Tool.ToggleFaceSelection();
    }

    //--------------------------------------------------------------------------------------------------

    public RelayCommand DeleteCommand { get; private set; }

    void ExecuteDeleteCommand()
    {
        _Tool.Component.Remove();
        CommitChange();
        WorkspaceController.CancelTool(_Tool, true);
    }

    //--------------------------------------------------------------------------------------------------
            
    public void _CreateCommands()
    {
        ExportCommand = new RelayCommand(ExecuteExport);
        SelectFaceCommand = new RelayCommand(ExecuteSelectFace);
        DeleteCommand = new RelayCommand(ExecuteDeleteCommand);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Functions

    public override void Initialize(BaseObject instance)
    {
        _CreateCommands();

        _Tool = instance as EtchingMaskEditTool;

        if(Application.Current != null)
            InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}