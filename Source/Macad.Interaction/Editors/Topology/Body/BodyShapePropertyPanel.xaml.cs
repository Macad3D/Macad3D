﻿using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Diagnostics;
using System.Globalization;
using System.Linq;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Input;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction.Editors.Topology
{
    public partial class BodyShapePropertyPanel : PropertyPanel
    {
        public Body Body
        {
            get { return Instance as Body; }
            set
            {
                if (Instance != value)
                {
                    Instance = value;
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public ObservableCollection<BodyShapeTreeItem> Items
        {
            get { return _Items; }
            set
            {
                if (_Items != value)
                {
                    _Items = value;
                    RaisePropertyChanged();
                }
            }
        }

        ObservableCollection<BodyShapeTreeItem> _Items;

        //--------------------------------------------------------------------------------------------------

        public ObservableCollection<BodyShapeTreeItem> SelectedItems
        {
            get { return _SelectedItems; }
            set
            {
                if (_SelectedItems != value)
                {
                    _SelectedItems = value;
                    RaisePropertyChanged();
                }
            }
        }

        ObservableCollection<BodyShapeTreeItem> _SelectedItems;

        //--------------------------------------------------------------------------------------------------

        BodyShapeTreeItem _SelectedItem;
        Editor _SelectedEditor;

        //--------------------------------------------------------------------------------------------------

        void _SelectedItems_CollectionChanged(object sender, NotifyCollectionChangedEventArgs e)
        {
            if (SelectedItems.Count != 1)
            {
                _SelectedEditor?.Stop();
                _SelectedEditor = null;
                return;
            }
            if (_SelectedItem != SelectedItems[0])
            {
                _SelectedItem = SelectedItems[0];
                _SelectedEditor?.Stop();
                _SelectedEditor = _SelectedItem.CreateEditor();
                _SelectedEditor?.Start();
            }
        }

        //--------------------------------------------------------------------------------------------------

        void Body_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
            if (sender == Body)
            {
                if (e.PropertyName == "RootShape")
                {
                    _UpdateTree();
                }
                if (e.PropertyName == "Shape")
                {
                    SelectedItems.Clear();
                    _UpdateTree();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public BodyShapePropertyPanel()
        {
            Items = new ObservableCollection<BodyShapeTreeItem>();
            SelectedItems = new ObservableCollection<BodyShapeTreeItem>();
            SelectedItems.CollectionChanged += _SelectedItems_CollectionChanged;
        }

        //--------------------------------------------------------------------------------------------------

        public override void Initialize(BaseObject instance)
        {
            Body = instance as Body;
            Debug.Assert(Body != null);

            if(Application.Current != null)
                InitializeComponent();

            Body.PropertyChanged += Body_PropertyChanged;
        }

        //--------------------------------------------------------------------------------------------------

        public override void Cleanup()
        {
            _SelectedEditor?.Stop();
            _SelectedEditor = null;
           
            Body.PropertyChanged -= Body_PropertyChanged;
            Body = null;
            
            SelectedItems.Clear();
            SelectedItems.CollectionChanged -= _SelectedItems_CollectionChanged;
            _SelectedItem = null;
            Items.Clear();
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateTree()
        {
            var expandedObjects = new List<object>();
            foreach (var item in Items)
                item.UpdateExpandedState(expandedObjects, true);

            var oldSelectedItem = SelectedItems.FirstOrDefault();
            if (oldSelectedItem != null && Items.FirstOrDefault() == SelectedItems.FirstOrDefault())
                oldSelectedItem = null;

            var lastVerticalOffset = TreeView?.ScrollViewer?.VerticalOffset;

            Items.Clear();
            SelectedItems.Clear();

            BodyShapeTreeItem.CreateItem(Body.RootShape, null, Items);

            foreach (var item in Items)
                item.UpdateExpandedState(expandedObjects, false);

            if (oldSelectedItem != null)
            {
                foreach (var item in Items)
                {
                    var same = item.FindSame(oldSelectedItem);
                    if (same != null)
                    {
                        SelectedItems.Add(same);
                        break;
                    }
                }
            }
            else
            {
                var needle = Body.Shape;
                foreach (var item in Items)
                {
                    var same = item.FindSame(needle);
                    if (same != null)
                    {
                        SelectedItems.Add(same);
                        break;
                    }
                }
            }

            if(lastVerticalOffset.HasValue)
                TreeView.ScrollViewer.ScrollToVerticalOffset(lastVerticalOffset.Value);

            if (SelectedItems.Any())
            {
                var item = SelectedItems.First();
                while (item.ParentItem != null)
                {
                    item = item.ParentItem;
                    item.IsExpanded = true;
                }

                TreeView?.BringIntoView(item);
            }
        }

        //--------------------------------------------------------------------------------------------------
        
        void _TreeView_Loaded(object sender, RoutedEventArgs e)
        {
            _UpdateTree();
        }

        //--------------------------------------------------------------------------------------------------

        void _TreeView_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.Key == Key.Delete)
            {
                _DeleteSelected();
                e.Handled = true;
            }
        }

        //--------------------------------------------------------------------------------------------------

        void _Callback_ToolTipOpening(object sender, ToolTipEventArgs e)
        {
            var senderElement = e.OriginalSource as FrameworkElement;
            if (!(senderElement?.DataContext is BodyShapeTreeItem treeItem))
                return;

            var text = treeItem.GetTooltip();
            if (text.IsNullOrEmpty())
            {
                senderElement.ToolTip = "";
                e.Handled = true;
            }
            else
            {
                senderElement.ToolTip = text;
            }
        }
        
        //--------------------------------------------------------------------------------------------------

        void _Callback_ContextMenuOpening(object sender, ContextMenuEventArgs e)
        {
            var senderElement = sender as FrameworkElement;
            if (!(senderElement?.DataContext is BodyShapeTreeItem treeItem))
                return;

            if (SelectedItems.Count == 1 && SelectedItems[0] == treeItem)
                return;

            SelectedItems.Clear();
            var tvItem = TreeView.GetTreeViewItemFor(treeItem);
            tvItem.IsSelected = true;
        }

        //--------------------------------------------------------------------------------------------------

        #region Helper

        void _DeleteSelected()
        {
            bool anyDeleted = false;
            IShapeOperand nextSelected = null;
            var shapes = _SelectedItems.OfType<BodyShapeTreeShape>()
                                       .Select(treeItem => treeItem.Shape)
                                       .OfType<ModifierBase>()
                                       .ToList();
            foreach (var shape in shapes)
            {
                var predecessor = shape.Predecessor;
                var body = shape.Body;
                if (body.RemoveShape(shape))
                {
                    nextSelected = predecessor;
                    anyDeleted = true;
                }
            }

            if (!anyDeleted)
                return;

            InteractiveContext.Current.UndoHandler?.Commit();
            
            SelectedItems.Clear();
            if (nextSelected != null)
            {
                var nextSelectedTreeItem = _Items.FirstOrDefault(treeItem => treeItem.FindSame(nextSelected) != null);
                if (nextSelectedTreeItem != null)
                {
                    var tvItem = TreeView.GetTreeViewItemFor(nextSelectedTreeItem);
                    tvItem.IsSelected = true;
                    tvItem.Focus();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Commands

        //--------------------------------------------------------------------------------------------------

        public static RelayCommand<Body> JumpToBodyCommand { get; } = new RelayCommand<Body>(
            body =>
            {
                InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(body);
            },
            body => body != null
        );

        //--------------------------------------------------------------------------------------------------

        public static RelayCommand<Shape> ToggleSkippedCommand { get; } = new RelayCommand<Shape>(
            shape =>
            {
                shape.IsSkipped = !shape.IsSkipped;
                InteractiveContext.Current.UndoHandler?.Commit();
            },
            shape => shape is ModifierBase
        );

        //--------------------------------------------------------------------------------------------------

        public static RelayCommand<Shape> SetCurrentShapeCommand { get; } = new RelayCommand<Shape>(
            shape =>
            {
                if (shape.Body.Shape != shape)
                {
                    shape.Body.Shape = shape;
                    InteractiveContext.Current.UndoHandler?.Commit();
                }
            },
            shape => shape != null
        );

        //--------------------------------------------------------------------------------------------------

        public static RelayCommand<Shape> DeleteShapeCommand { get; } = new RelayCommand<Shape>(
            shape =>
            {
                var body = shape.Body;
                if (body.RemoveShape(shape))
                {
                    InteractiveContext.Current.UndoHandler?.Commit();
                }
            },
            shape => shape is ModifierBase
        );

        //--------------------------------------------------------------------------------------------------
              
        public static RelayCommand<BodyShapeTreeBody> BodySelectTopCommand { get; } = new RelayCommand<BodyShapeTreeBody>(
            item =>
            {
                var newOp = new BodyShapeOperand(item.BodyOperand.Body);
                item.ParentShape.ReplaceOperand(item.BodyOperand, newOp);
                item.ParentShape.Body.SaveTopologyUndo();
                InteractiveContext.Current.UndoHandler?.Commit();
                item.UpdateBodyOperand(newOp);
            },
            item => item?.ParentShape != null && item.ParentShape.CanReplaceOperand(item.BodyOperand) 
                                              && item.BodyOperand.ShapeId != Guid.Empty
        );
        
        //--------------------------------------------------------------------------------------------------
              
        public static RelayCommand<BodyShapeTreeBody> BodySelectCurrentCommand { get; } = new RelayCommand<BodyShapeTreeBody>(
            item =>
            {
                var newOp = new BodyShapeOperand(item.BodyOperand.Body, item.BodyOperand.Body.Shape);
                item.ParentShape.ReplaceOperand(item.BodyOperand, newOp);
                item.ParentShape.Body.SaveTopologyUndo();
                InteractiveContext.Current.UndoHandler?.Commit();
                item.UpdateBodyOperand(newOp);
            },
            item => item?.ParentShape != null && item.ParentShape.CanReplaceOperand(item.BodyOperand) 
        );
                
        //--------------------------------------------------------------------------------------------------
              
        public static RelayCommand<BodyShapeTreeBody> BodySetSelectedAsCurrentCommand { get; } = new RelayCommand<BodyShapeTreeBody>(
            item =>
            {
                var body = item.BodyOperand.Body;
                body.Shape = 
                    item.BodyOperand.ShapeId == Guid.Empty 
                        ? body.RootShape 
                        : item.BodyOperand.Shape;

                InteractiveContext.Current.UndoHandler?.Commit();
                item.UpdateBodyOperand(item.BodyOperand);
            },
            item => item?.ParentShape != null && (item.BodyOperand.ShapeId == Guid.Empty || item.BodyOperand.Shape != null)
        );
        
        //--------------------------------------------------------------------------------------------------

        public static RelayCommand<Shape> RemakeShapeCommand { get; } = new RelayCommand<Shape>(
            shape =>
            {
                shape.Invalidate();
            },
            shape => shape != null
        );

        //--------------------------------------------------------------------------------------------------
        
        public void EnrichMainContextMenu(ContextMenuItems itemList)
        {
            _SelectedEditor?.EnrichContextMenu(itemList);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Converter

        public class IsCurrentShape : IValueConverter
        {
            public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
            {
                if (!(value is Shape shape))
                    return false;

                if (shape == shape.Body.Shape)
                    return true;

                return false;
            }

            public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
            {
                throw new NotImplementedException();
            }
        }

        public static IsCurrentShape IsCurrentShapeConverter = new IsCurrentShape();

        //--------------------------------------------------------------------------------------------------

        public class IsItemSkippableToVisibility : IValueConverter
        {
            public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
            {
                if (!(value is BodyShapeTreeItem item))
                    return false;

                if (item.IsInactive || ((item as BodyShapeTreeShape)?.Shape as ModifierBase) == null)
                    return System.Windows.Visibility.Hidden;

                return System.Windows.Visibility.Visible;
            }

            public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
            {
                throw new NotImplementedException();
            }
        }

        public static IsItemSkippableToVisibility IsItemSkippableToVisibilityConverter = new IsItemSkippableToVisibility();

        //--------------------------------------------------------------------------------------------------

        #endregion

    }
}
