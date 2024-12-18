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

namespace Macad.Interaction.Editors.Toolkits;

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

    public ObservableCollection<CustomLayerIntervalItem> CustomLayerIntervalItems { get; } = new();

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
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    public void _CreateCommands()
    {
        ExportCommand = new RelayCommand(ExecuteExport);
        SelectFaceCommand = new RelayCommand(ExecuteSelectFace);
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
        }        }

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