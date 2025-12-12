using Macad.Common;
using Macad.Core;
using Macad.Core.Converters;
using Macad.Presentation.TreeView;
using System.ComponentModel;
using System.Linq;
using System.Windows.Controls;
using System.Windows.Data;
using static System.ComponentModel.Design.ObjectSelectorEditor;

namespace Macad.Interaction.Panels;

public partial class ShapeInspectorPanel : UserControl
{
    public ShapeInspectorPanelModel Model => (ShapeInspectorPanelModel) DataContext;

    //--------------------------------------------------------------------------------------------------

    public ShapeInspectorPanel()
    {
        // Subscribe to parameter system’s global change event
        CoreContext.Current.Parameters.ParameterChanged += _ApplicationSettingChanged;

        DataContext = new ShapeInspectorPanelModel();
        InitializeComponent();

        var view = CollectionViewSource.GetDefaultView(PropertyView.ItemsSource);
        var groupDescription = new PropertyGroupDescription("Category");
        view?.GroupDescriptions?.Add(groupDescription);
    }

    //--------------------------------------------------------------------------------------------------

    void _ApplicationSettingChanged(ParameterSet set, string key)
    {
        if (set is ApplicationParameterSet && key == nameof(ApplicationParameterSet.ApplicationUnits))
        {
            var units = ((ApplicationParameterSet)set).ApplicationUnits;
            var vm = DataContext as ShapeInspectorPanelModel;

            if (vm?.SelectedNode == null)
            {
                foreach (var prop in vm.SelectedNode.Properties.OfType<ShapeProperty>())
                {
                    prop.Refresh(units);
                }
            }
        }
    }

    public class ShapeProperty : INotifyPropertyChanged
    {
        public string Name { get; }
        public string Category { get; }

        // Raw numeric value in millimeters (optional)
        public double? MmValue { get; }

        // Backing field for formatted string
        private string _value;
        public string Value
        {
            get => _value;
            private set
            {
                if (_value != value)
                {
                    _value = value;
                    RaisePropertyChanged(nameof(Value));
                }
            }
        }

        public ShapeProperty(string name, string category, double? mmValue = null, string initialValue = null)
        {
            Name = name;
            Category = category;
            MmValue = mmValue;
            _value = initialValue ?? mmValue?.ToString("F3") ?? "";
        }

        // Call this whenever units change
        public void Refresh(ApplicationUnits units)
        {
            if (MmValue.HasValue)
            {
                Value = ImperialLengthFormatter.FormatLength(MmValue.Value, units);
            }
            // If it’s not a length (e.g. Segments), leave Value as-is
        }

        public event PropertyChangedEventHandler PropertyChanged;
        protected void RaisePropertyChanged(string propertyName)
            => PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
    }

    //--------------------------------------------------------------------------------------------------

    void TreeViewEx_OnOnSelecting(object sender, SelectionChangedCancelEventArgs e)
    {
        if(Model != null)
            Model.SelectedNode = e.ItemsToSelect.FirstOrDefault() as BRepTopologyTreeNode;
    }

    public class ShapePropertyWrapper : INotifyPropertyChanged
    {
        private readonly BRepTopologyTreeProperty _inner;

        public string Name => _inner.Name;
        public string Category => _inner.Category;

        // Raw mm value if applicable
        public double? MmValue { get; }

        private string _value;
        public string Value
        {
            get => _value;
            private set
            {
                if (_value != value)
                {
                    _value = value;
                    PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(Value)));
                }
            }
        }

        public ShapePropertyWrapper(BRepTopologyTreeProperty inner, double? mmValue = null)
        {
            _inner = inner;
            MmValue = mmValue;
            _value = inner.Value; // start with whatever the core gave you
        }

        public void Refresh(ApplicationUnits units)
        {
            if (MmValue.HasValue)
                Value = ImperialLengthFormatter.FormatLength(MmValue.Value, units);
            else
                Value = _inner.Value; // non‑numeric properties stay as-is
        }

        public event PropertyChangedEventHandler PropertyChanged;
    }
}