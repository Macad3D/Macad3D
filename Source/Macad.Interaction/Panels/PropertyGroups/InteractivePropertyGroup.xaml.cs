using System.Windows;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Interaction.Panels;

/// <summary>
/// Interaction logic for InteractivePropertyGroup.xaml
/// </summary>
public partial class InteractivePropertyGroup : PanelBase
{
    public static readonly DependencyProperty EntityProperty = DependencyProperty.Register(
        "Entity", typeof(InteractiveEntity), typeof(InteractivePropertyGroup), new PropertyMetadata(default(InteractiveEntity)));

    public InteractiveEntity Entity
    {
        get { return (InteractiveEntity) GetValue(EntityProperty); }
        set { SetValue(EntityProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static RelayCommand<InteractiveEntity> ToggleVisibilityCommand { get; } = new(
        (entity) =>
        {
            entity.IsVisible = !entity.IsVisible;
            InteractiveContext.Current?.UndoHandler?.Commit();
        }
    );

    //--------------------------------------------------------------------------------------------------

    public InteractivePropertyGroup()
    {
        InitializeComponent();
    }
}