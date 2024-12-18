using System;
using System.Collections.ObjectModel;
using System.Linq;
using System.Windows.Data;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Shapes;

public partial class BoxJointPropertyPanel : PropertyPanel
{
    public class CustomRatioItem
    {
        public int Index { get; set; }
        public double Value { get; set; }
        public bool ReadOnly { get; set; }
    }

    //--------------------------------------------------------------------------------------------------

    public BoxJoint BoxJoint { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public ObservableCollection<CustomRatioItem> CustomRatioItems { get; } = new ObservableCollection<CustomRatioItem>();

    //--------------------------------------------------------------------------------------------------
        
    public ICommand ToggleRemoveExcessCommand { get; private set; }

    void ExecuteToggleRemoveExcess()
    {
        BoxJoint.RemoveExcess = !BoxJoint.RemoveExcess;
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------
                
    public ICommand ToggleOrderCommand { get; private set; }

    void ExecuteToggleOrder()
    {
        BoxJoint.ReverseOrder = !BoxJoint.ReverseOrder;
        CommitChange();
    }
        
    //--------------------------------------------------------------------------------------------------
                
    public ICommand SetSizeModeCommand { get; private set; }

    void ExecuteSetSizeMode(string mode)
    {
        switch (mode)
        {
            case "Auto":
                if (BoxJoint.CustomBoxRatios != null)
                {
                    BoxJoint.CustomBoxRatios = null;
                }
                break;

            case "Custom":
                if (BoxJoint.CustomBoxRatios == null)
                {
                    if (CustomRatioItems.Count == 0)
                    {
                        BoxJoint.CustomBoxRatios = new double[BoxJoint.BoxCount];
                        BoxJoint.CustomBoxRatios.Populate( 1.0 / BoxJoint.BoxCount );
                        _InitializeCustomRatioItems();
                    }
                    _BuildCustomRatios();
                }
                break;
        }
        CommitChange();
    }

    //--------------------------------------------------------------------------------------------------

    void _BuildCustomRatios()
    {
        bool changesFound = false;

        if (BoxJoint.CustomBoxRatios == null
            || BoxJoint.CustomBoxRatios.Length != CustomRatioItems.Count)
        {
            changesFound = true;
        }
        else
        {
            for (int i = 0; i < BoxJoint.CustomBoxRatios.Length; i++)
            {
                if (BoxJoint.CustomBoxRatios[i] != CustomRatioItems[i].Value)
                {
                    changesFound = true;
                    break;
                }
            }
        }

        if(!changesFound)
            return; // No changes found

        BoxJoint.CustomBoxRatios = CustomRatioItems.Select(item => item.Value).ToArray();
    }

    //--------------------------------------------------------------------------------------------------

    void _InitializeCustomRatioItems()
    {
        if (BoxJoint.CustomBoxRatios == null)
            return;

        if (BoxJoint.BoxCount != CustomRatioItems.Count)
        {
            CustomRatioItems.Clear();
        }

        // Update
        for (int i = 0; i < BoxJoint.CustomBoxRatios.Length; i++)
        {
            var item = new CustomRatioItem()
            {
                Index = i,
                Value = BoxJoint.CustomBoxRatios[i],
                ReadOnly = i == BoxJoint.CustomBoxRatios.Length - 1
            };
            if (CustomRatioItems.Count > i)
            {
                CustomRatioItems[i] = item;
            }
            else
            {
                CustomRatioItems.Add(item);
            }
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    bool _ClampLastItem()
    {
        var lastItem = CustomRatioItems[CustomRatioItems.Count - 1];
        var sum = CustomRatioItems.Sum(item => item.Value);
            
        // Clamp to 100% by adjusting the last value
        if (sum.IsEqual(1.0, 0.001))
            return false; // No adjustment needed

        CustomRatioItems[CustomRatioItems.Count - 1] = new CustomRatioItem()
        {
            Index = lastItem.Index,
            ReadOnly = true,
            Value = Math.Max(0.0, 1.0 - (sum - lastItem.Value))
        };

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public override void Initialize(BaseObject instance)
    {
        BoxJoint = instance as BoxJoint;
        BoxJoint.PropertyChanged += _BoxJoint_PropertyChanged;

        ToggleRemoveExcessCommand = new RelayCommand(ExecuteToggleRemoveExcess);
        ToggleOrderCommand = new RelayCommand(ExecuteToggleOrder);
        SetSizeModeCommand = new RelayCommand<string>(ExecuteSetSizeMode);
            
        _InitializeCustomRatioItems();

        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

    void _BoxJoint_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
    {
        if (e.PropertyName == nameof(BoxJoint.BoxCount))
        {
            if (BoxJoint.CustomBoxRatios == null)
                return;

            if (BoxJoint.BoxCount <= 1)
                return;

            int countDiff = BoxJoint.BoxCount - CustomRatioItems.Count;
            if (countDiff == 0)
                return;

            if (countDiff > 0)
            {
                // New Items
                double newRatio = CustomRatioItems.Last().Value / (countDiff + 1);
                for (int i = CustomRatioItems.Count-1; i < BoxJoint.BoxCount; i++)
                {
                    var item = new CustomRatioItem()
                    {
                        Index = i,
                        Value = newRatio,
                        ReadOnly = i == CustomRatioItems.Count
                    };
                    if (i >= CustomRatioItems.Count)
                    {
                        CustomRatioItems.Add(item);
                    }
                    else
                    {
                        CustomRatioItems[i] = item;
                    }
                }
            }
            else
            {
                // Lost Items
                while (CustomRatioItems.Count > BoxJoint.BoxCount)
                {
                    CustomRatioItems.RemoveAt(CustomRatioItems.Count - 1);
                }

                _ClampLastItem();
            }

            _BuildCustomRatios();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Cleanup()
    {
        if (BoxJoint != null)
        {
            BoxJoint.PropertyChanged -= _BoxJoint_PropertyChanged;
        }

        CustomRatioItems.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    void _CustomRatios_OnSourceUpdated(object sender, DataTransferEventArgs e)
    {
        var changedItem = (e.OriginalSource as ValueEditBox)?.Tag as CustomRatioItem;
        if (changedItem == null || changedItem.Index >= CustomRatioItems.Count)
            return;

        // Clamp to 100%
        var sumOfOthers = CustomRatioItems.Sum(item => item.Value) - changedItem.Value - CustomRatioItems[CustomRatioItems.Count - 1].Value;
        if (sumOfOthers + changedItem.Value > 1.0)
        {
            // Clamp to 100% by reducing this value
            CustomRatioItems[changedItem.Index] = new CustomRatioItem()
            {
                Index = changedItem.Index,
                ReadOnly = false,
                Value = Math.Max( 0.0, 1.0 - sumOfOthers )
            };
        }

        _ClampLastItem();
        _BuildCustomRatios();
    }

    //--------------------------------------------------------------------------------------------------

}