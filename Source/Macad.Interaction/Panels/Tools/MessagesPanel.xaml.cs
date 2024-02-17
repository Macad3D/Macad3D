using System;
using System.Globalization;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Media;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Interaction.Panels;

public partial class MessagesPanel : UserControl
{
    public MessagesPanel()
    {
        InitializeComponent();

        CoreContext.Current.MessageHandler.MessageItems.CollectionChanged += MessageItems_CollectionChanged;
    }

    //--------------------------------------------------------------------------------------------------

    void MessageItems_CollectionChanged(object sender, System.Collections.Specialized.NotifyCollectionChangedEventArgs e)
    {
        if (VisualTreeHelper.GetChildrenCount(listView) > 0)
        {
            Border border = VisualTreeHelper.GetChild(listView, 0) as Border;
            if (border == null)
                return;

            ScrollViewer scrollViewer = (ScrollViewer)VisualTreeHelper.GetChild(border, 0);
            scrollViewer.ScrollToBottom();
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    #region Converter

    public class EntityToNameConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, CultureInfo culture)
        {
            if (value is WeakReference<Entity> weakReference && weakReference.TryGetTarget(out Entity entity))
            {
                switch (entity)
                {
                    case Shape shape:
                        if (shape.Body != null)
                        {
                            return $"[{shape.Body.Name}::{(shape.Name.IsNullOrEmpty() ? shape.TypeName : shape.Name)}]  ";
                        }
                        break;
                }
            }

            return "";
        }

        public object ConvertBack(object value, Type targetType, object parameter, CultureInfo culture)
        {
            throw new NotImplementedException();
        }
    }

    public static EntityToNameConverter EntityToName = new EntityToNameConverter();

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Commands

    public static RelayCommand<WeakReference<Entity>> SelectEntityCommand { get; } = new RelayCommand<WeakReference<Entity>>(
        (weakReference) =>
        {
            if (weakReference.TryGetTarget(out Entity entity))
            {
                switch (entity)
                {
                    case Shape shape:
                        if (shape.Body != null)
                        {
                            InteractiveContext.Current.WorkspaceController.Selection.SelectEntity(shape.Body);
                        }
                        break;
                }
            }
        },
        (weakReference) => weakReference != null && weakReference.TryGetTarget(out Entity entity) && entity is Shape
    );

    //--------------------------------------------------------------------------------------------------

    #endregion
}