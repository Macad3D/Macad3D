using System;
using System.Windows;
using Macad.Interaction.Dialogs;
using Macad.Common;
using Macad.Core.Exchange;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Toolkits
{
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

        public string ShapeDescription
        {
            get
            {
                var shapeId = _Tool.Component.ShapeGuid;
                if (shapeId == Guid.Empty)
                {
                    return "Always Top Shape";
                }

                var shape = _Tool.Body?.Model?.FindInstance(shapeId) as Shape;
                if(shape == null)
                    return "Always Top Shape";
                
                if(shape == _Tool.Body.Shape)
                {
                    return "Current Shape";
                }

                return $"Shape: {shape.Name}";
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Commands

        public RelayCommand ExportCommand { get; private set; }

        void ExecuteExport()
        {
            {
                if (!ExportDialog.Execute<IVectorExporter>(out string fileName, out var exporter))
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

        public RelayCommand ShapeSelectTopCommand { get; private set; }

        void ExecuteShapeSelectTop()
        {
            _Tool.Component.ShapeGuid = Guid.Empty;
            RaisePropertyChanged(nameof(ShapeDescription));
            CommmitChange();
        }
        
        bool CanExecuteShapeSelectTop()
        {
            return _Tool.Component.ShapeGuid != Guid.Empty;
        }

        //--------------------------------------------------------------------------------------------------

        public RelayCommand ShapeSelectCurrentCommand { get; private set; }

        void ExecuteShapeSelectCurrent()
        {
            var currentShape = _Tool.Body?.Shape;
            if (currentShape == null)
                return;

            _Tool.Component.ShapeGuid = currentShape.Guid;
            RaisePropertyChanged(nameof(ShapeDescription));
            CommmitChange();
        }
                
        bool CanExecuteShapeSelectCurrent()
        {
            var currentShape = _Tool.Body?.Shape;
            if (currentShape == null)
                return false;
            if (currentShape.Guid.Equals(_Tool.Component.ShapeGuid))
                return false;
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        public RelayCommand ShapeSetCurrentCommand { get; private set; }

        void ExecuteShapeSetCurrent()
        {
            var body = _Tool.Body;
            if (body == null)
                return;

            if (_Tool.Component.ShapeGuid == Guid.Empty)
            {
                body.Shape = body.RootShape;
            }
            else
            {
                var shape = body.Model?.FindInstance(_Tool.Component.ShapeGuid) as Shape;
                if (shape == null)
                    return;
                body.Shape = shape;
            }
            RaisePropertyChanged(nameof(ShapeDescription));
            CommmitChange();
        }

        bool CanExecuteShapeSetCurrent()
        {
            if (_Tool.Component.ShapeGuid == Guid.Empty)
            {
                return true;
            }

            var shape = _Tool.Body?.Model?.FindInstance(_Tool.Component.ShapeGuid) as Shape;
            if (shape == null)
                return false;
            if(shape == _Tool.Body.Shape)
                return false;
            return true;
        }
        
        //--------------------------------------------------------------------------------------------------

        public RelayCommand DeleteCommand { get; private set; }

        void ExecuteDeleteCommand()
        {
            _Tool.Component.Remove();
            CommmitChange();
            WorkspaceController.CancelTool(_Tool, true);
        }

        //--------------------------------------------------------------------------------------------------
            
        public void _CreateCommands()
        {
            ExportCommand = new RelayCommand(ExecuteExport);
            SelectFaceCommand = new RelayCommand(ExecuteSelectFace);
            ShapeSelectTopCommand = new RelayCommand(ExecuteShapeSelectTop, CanExecuteShapeSelectTop);
            ShapeSelectCurrentCommand = new RelayCommand(ExecuteShapeSelectCurrent, CanExecuteShapeSelectCurrent);
            ShapeSetCurrentCommand = new RelayCommand(ExecuteShapeSetCurrent, CanExecuteShapeSetCurrent);
            DeleteCommand = new RelayCommand(ExecuteDeleteCommand);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Functions

        public override void Initialize(BaseObject instance)
        {
            _CreateCommands();

            _Tool = instance as EtchingMaskEditTool;
            if (_Tool.Body != null)
                _Tool.Body.PropertyChanged += Body_PropertyChanged;

            if(Application.Current != null)
                InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Cleanup()
        {
            if (_Tool.Body != null)
                _Tool.Body.PropertyChanged -= Body_PropertyChanged;
        }
        
        //--------------------------------------------------------------------------------------------------

        void Body_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(Body.Shape))
            {
                RaisePropertyChanged(nameof(ShapeDescription));
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

    }
}
