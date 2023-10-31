using System;
using System.Windows;
using Macad.Interaction.Dialogs;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Presentation;
using System.Windows.Input;
using System.Collections.ObjectModel;
using Macad.Core.Toolkits;
using System.Windows.Data;

namespace Macad.Interaction.Editors.Toolkits
{
    public partial class SliceContourPropertyPanel : PropertyPanel
    {
        #region Inner Classes

        public class CustomLayerIntervalItem
        {
            public int Index { get; init; }
            public double Value { get; set; }
            public double Offset { get; set; }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Properties

        public SliceContourEditTool Tool
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

        SliceContourEditTool _Tool;

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

        public ObservableCollection<CustomLayerIntervalItem> CustomLayerIntervalItems { get; } = new();

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
                
        public ICommand SetLayerIntervalModeCommand { get; private set; }

        void ExecuteSetSizeMode(string mode)
        {
            switch (mode)
            {
                case "Auto":
                    if (Tool.Component.CustomLayerInterval != null)
                    {
                        Tool.Component.CustomLayerInterval = null;
                    }
                    break;

                case "Custom":
                    if (Tool.Component.CustomLayerInterval == null)
                    {
                        if (CustomLayerIntervalItems.Count == 0)
                        {
                            var newInterval = new double[Tool.Component.LayerCount];
                            newInterval.Fill( 1.0 );

                            var layers = Tool.Component.Layers;
                            if (layers != null)
                            {
                                for (int i = 0; i < Math.Min(layers.Length, Tool.Component.LayerCount); i++)
                                {
                                    newInterval[i] = layers[i].Interval;
                                }
                            }

                            Tool.Component.CustomLayerInterval = newInterval;
                        }
                    }
                    break;
            }
            CommmitChange();
        }

        //--------------------------------------------------------------------------------------------------

        public void _CreateCommands()
        {
            ExportCommand = new RelayCommand(ExecuteExport);
            SelectFaceCommand = new RelayCommand(ExecuteSelectFace);
            ShapeSelectTopCommand = new RelayCommand(ExecuteShapeSelectTop, CanExecuteShapeSelectTop);
            ShapeSelectCurrentCommand = new RelayCommand(ExecuteShapeSelectCurrent, CanExecuteShapeSelectCurrent);
            ShapeSetCurrentCommand = new RelayCommand(ExecuteShapeSetCurrent, CanExecuteShapeSetCurrent);
            SetLayerIntervalModeCommand = new RelayCommand<string>(ExecuteSetSizeMode);
            DeleteCommand = new RelayCommand(ExecuteDeleteCommand);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Custom Layer Interval

        void _InitializeCustomRatioItems()
        {
            if (Tool.Component.CustomLayerInterval == null)
            {
                CustomLayerIntervalItems.Clear();
                return;
            }

            if (Tool.Component.LayerCount != CustomLayerIntervalItems.Count)
            {
                CustomLayerIntervalItems.Clear();
            }

            // Update
            double offset = 0;
            for (int i = 0; i < Tool.Component.CustomLayerInterval.Length; i++)
            {
                offset += Tool.Component.CustomLayerInterval[i];
                var item = new CustomLayerIntervalItem()
                {
                    Index = i,
                    Value = Tool.Component.CustomLayerInterval[i],
                    Offset = offset
                };
                if (CustomLayerIntervalItems.Count > i)
                {
                    CustomLayerIntervalItems[i] = item;
                }
                else
                {
                    CustomLayerIntervalItems.Add(item);
                }
            }
        }
        
        //--------------------------------------------------------------------------------------------------
        
        void _CustomInterval_OnSourceUpdated(object sender, DataTransferEventArgs e)
        {
            var source = e.OriginalSource as ValueEditBox;
            var changedItem = (source)?.Tag as CustomLayerIntervalItem;
            if (changedItem == null || changedItem.Index >= CustomLayerIntervalItems.Count)
                return;

            var newInterval = new double[Tool.Component.CustomLayerInterval.Length];
            Tool.Component.CustomLayerInterval.CopyTo(newInterval, 0);
            if (source.Name == "CustomValueBox")
            {
                newInterval[changedItem.Index] = changedItem.Value;
            }
            else if (source.Name == "CustomOffsetBox")
            {
                double offsetSoFar = 0;
                for (int i = 0; i < changedItem.Index; i++)
                {
                    offsetSoFar += CustomLayerIntervalItems[i].Value;
                }
                newInterval[changedItem.Index] = Math.Max(0.0, changedItem.Offset - offsetSoFar);
            }
            Tool.Component.CustomLayerInterval = newInterval;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Functions

        public override void Initialize(BaseObject instance)
        {
            _CreateCommands();

            _Tool = instance as SliceContourEditTool;
            if (_Tool != null)
            {
                if(_Tool.Component != null)
                    _Tool.Component.PropertyChanged += _Component_PropertyChanged;
                if (_Tool.Body != null)
                    _Tool.Body.PropertyChanged += Body_PropertyChanged;
            }

            _InitializeCustomRatioItems();

            if(Application.Current != null)
                InitializeComponent();
        }

        //--------------------------------------------------------------------------------------------------

        public override void Cleanup()
        {
            if (_Tool != null)
            {
                if(_Tool.Component != null)
                    _Tool.Component.PropertyChanged -= _Component_PropertyChanged;
                if (_Tool.Body != null)
                    _Tool.Body.PropertyChanged -= Body_PropertyChanged;
            }        }
        
        //--------------------------------------------------------------------------------------------------

        void Body_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(Body.Shape))
            {
                RaisePropertyChanged(nameof(ShapeDescription));
            }
        }

        //--------------------------------------------------------------------------------------------------
        
        void _Component_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (e.PropertyName == nameof(SliceContourComponent.LayerCount))
            {
                var oldInterval = _Tool.Component.CustomLayerInterval;
                if(oldInterval == null || oldInterval.Length == _Tool.Component.LayerCount)
                    return;

                var newInterval = new double[_Tool.Component.LayerCount];
                newInterval.Fill(1.0);
                for (int i = 0; i < Math.Min(oldInterval.Length, Tool.Component.LayerCount); i++)
                {
                    newInterval[i] = oldInterval[i];
                }

                _Tool.Component.CustomLayerInterval = newInterval;
            }
            else if (e.PropertyName == nameof(SliceContourComponent.CustomLayerInterval))
            {
                _InitializeCustomRatioItems();
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

    }
}
