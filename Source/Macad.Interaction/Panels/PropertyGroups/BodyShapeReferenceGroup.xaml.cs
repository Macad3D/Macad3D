using System;
using System.Windows;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Presentation;

namespace Macad.Interaction.Panels;

/// <summary>
/// Interaction logic for BodyShapeReferenceGroup.xaml
/// </summary>
public partial class BodyShapeReferenceGroup : PanelBase
{
    #region Properties

    public static readonly DependencyProperty BodyProperty = DependencyProperty.Register(
        nameof(Body), typeof(Body), typeof(BodyShapeReferenceGroup), new PropertyMetadata(default(Body)));

    public Body Body
    {
        get { return (Body)GetValue(BodyProperty); }
        set { SetValue(BodyProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public static readonly DependencyProperty ShapeGuidProperty = DependencyProperty.Register(
        nameof(ShapeGuid), typeof(Guid), typeof(BodyShapeReferenceGroup), new PropertyMetadata(default(Guid)));

    public Guid ShapeGuid
    {
        get { return (Guid)GetValue(ShapeGuidProperty); }
        set { SetValue(ShapeGuidProperty, value); }
    }

    //--------------------------------------------------------------------------------------------------

    public string ShapeDescription
    {
        get
        {
            var shapeId = ShapeGuid;
            if (shapeId == Guid.Empty)
            {
                return "Always Top Shape";
            }

            var shape = Body?.Model?.FindInstance(shapeId) as Shape;
            if (shape == null)
                return "Always Top Shape";

            if (shape == Body.Shape)
            {
                return "Current Shape";
            }

            return $"Shape: {shape.Name}";
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Commands


    public RelayCommand ShapeSelectTopCommand { get; private set; }

    void ExecuteShapeSelectTop()
    {
        ShapeGuid = Guid.Empty;
        RaisePropertyChanged(nameof(ShapeDescription));
    }

    bool CanExecuteShapeSelectTop()
    {
        return ShapeGuid != Guid.Empty;
    }

    //--------------------------------------------------------------------------------------------------

    public RelayCommand ShapeSelectCurrentCommand { get; private set; }

    void ExecuteShapeSelectCurrent()
    {
        var currentShape = Body?.Shape;
        if (currentShape == null)
            return;

        ShapeGuid = currentShape.Guid;
        RaisePropertyChanged(nameof(ShapeDescription));
    }

    bool CanExecuteShapeSelectCurrent()
    {
        var currentShape = Body?.Shape;
        if (currentShape == null)  
            return false;
        if (currentShape.Guid.Equals(ShapeGuid))
            return false;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public RelayCommand ShapeSetCurrentCommand { get; private set; }

    void ExecuteShapeSetCurrent()
    {
        var body = Body;
        if (body == null)
            return;

        if (ShapeGuid == Guid.Empty)
        {
            body.Shape = body.RootShape;
        }
        else
        {
            var shape = body.Model?.FindInstance(ShapeGuid) as Shape;
            if (shape == null)
                return;
            body.Shape = shape;
        }
        RaisePropertyChanged(nameof(ShapeDescription));
    }

    bool CanExecuteShapeSetCurrent()
    {
        if (ShapeGuid == Guid.Empty)
        {
            return true;
        }

        var shape = Body?.Model?.FindInstance(ShapeGuid) as Shape;
        if (shape == null)
            return false;
        if (shape == Body.Shape)
            return false;
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public void _CreateCommands()
    {
        ShapeSelectTopCommand = new RelayCommand(ExecuteShapeSelectTop, CanExecuteShapeSelectTop);
        ShapeSelectCurrentCommand = new RelayCommand(ExecuteShapeSelectCurrent, CanExecuteShapeSelectCurrent);
        ShapeSetCurrentCommand = new RelayCommand(ExecuteShapeSetCurrent, CanExecuteShapeSetCurrent);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    public BodyShapeReferenceGroup()
    {
        _CreateCommands();
        InitializeComponent();
    }

    //--------------------------------------------------------------------------------------------------

}