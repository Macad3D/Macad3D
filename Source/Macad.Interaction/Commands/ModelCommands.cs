using System.Linq;
using System.Windows.Data;
using Macad.Interaction.Editors.Shapes;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Presentation;

using static Macad.Interaction.CommandHelper;

namespace Macad.Interaction;

public static class ModelCommands
{
    #region Primitives

    public static ActionCommand CreateBox { get; } = new(
        () =>
        {
            StartTool(new CreateBoxTool());
        },
        CanStartTool)
    {
        Header = () => "Box",
        Title = () => "Create Box",
        Icon = () => "Prim-Box",
        Description = () => "Creates a new body with a box shape.",
        HelpTopic = "5da4906e-c86b-4f91-8b30-f5163e152d0e",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateBoxTool))
    };
        
    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateSphere { get; } = new(
        () =>
        {
            StartTool(new CreateSphereTool());
        },
        CanStartTool)
    {
        Header = () => "Sphere",
        Title = () => "Create Sphere",
        Icon = () => "Prim-Sphere",
        Description = () => "Creates a new body with a spherical shape.",
        HelpTopic = "eecb316b-a4da-441b-b9a6-3fadf9275889",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateSphereTool))
    };

    //--------------------------------------------------------------------------------------------------
        
    public static ActionCommand CreateCylinder { get; } = new(
        () =>
        {
            StartTool(new CreateCylinderTool());
        },
        CanStartTool)        
    {
        Header = () => "Cylinder",
        Title = () => "Create Cylinder",
        Icon = () => "Prim-Cylinder",
        Description = () => "Creates a new body with a cylindrical shape.",
        HelpTopic = "5da4906e-c86b-4f91-8b30-f5163e152d1e",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateCylinderTool))
    };
        
    //--------------------------------------------------------------------------------------------------
        
    public static ActionCommand CreateSketch { get; } = new(
        () =>
        {
            StartTool(new CreateSketchTool());
        },
        CanStartTool)
    {
        Header = () => "Sketch",
        Title = () => "Create Sketch",
        Icon = () => "Prim-Sketch",
        Description = () => "Creates a new body with a sketch shape.",
        HelpTopic = "0dc12d15-5450-460c-909b-f25ed1cf4b7e",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.TwoWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateSketchTool))
    };

    //--------------------------------------------------------------------------------------------------
        
    public static ActionCommand<CreateSketchTool.CreateMode> CreateSketchAligned { get; } = new(
        (mode) =>
        {
            StartTool(new CreateSketchTool(mode));
        },
        CanStartTool)
    {
        Header = (mode) =>
        {
            switch (mode)
            {
                case CreateSketchTool.CreateMode.Interactive: return "Select Plane or Face";
                case CreateSketchTool.CreateMode.WorkplaneXY: return "Working Plane XY";
                case CreateSketchTool.CreateMode.WorkplaneXZ: return "Working Plane XZ";
                case CreateSketchTool.CreateMode.WorkplaneYZ: return "Working Plane YZ";
                default:                                      return "Sketch";
            }
        },
        Icon = (mode) => "Prim-Sketch",
        Description = (mode) => "Creates a new body with a sketch shape.",
        HelpTopic = (mode) => "0dc12d15-5450-460c-909b-f25ed1cf4b7e"
    };

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Modifier

    public static ActionCommand<BooleanOperationTool.Operation> CreateBoolean { get; } = new(
        (op) =>
        {
            InteractiveContext.Current.WorkspaceController.StartTool(new BooleanOperationTool(op));
        },
        CanExecuteOnMultiSolid)
    {
        Header = (op) => op.ToString(),
        Icon = (op) => $"Boolean-{op.ToString()}",
        Description = (op) =>
        {
            switch (op)
            {
                case BooleanOperationTool.Operation.Cut:
                    return "Cuts the solid shape of one ore more bodies from the shape of another body.";
                case BooleanOperationTool.Operation.Fuse:
                    return "Fuses the solid shapes of one ore more bodies.";
                case BooleanOperationTool.Operation.Common:
                    return "Combines the solid shape of two or more bodies by calculating the common part of all shapes.";
                default:
                    return "Boolean operation of two or more bodies.";
            }
        },
        HelpTopic = (op) =>
        {
            switch (op)
            {
                case BooleanOperationTool.Operation.Cut:
                    return "d678cf8c-0e7f-46cd-8bbc-de964ddfecc6";
                case BooleanOperationTool.Operation.Fuse:
                    return "dff138bf-06a6-485c-a94d-890ef71a1372";
                case BooleanOperationTool.Operation.Common:
                    return "79be5f3d-4bf0-4c76-9bc6-50428e6ed621";
                default:
                    return "";
            }
        },
        IsCheckedBinding = (op) => BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                        EqualityToBoolConverter.Instance, $"Boolean{op.ToString()}Tool")
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateChamfer { get; } = new(
        () =>
        {
            var modifierShape = Chamfer.Create(InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities.First() as Body);
            if (modifierShape != null)
            {
                InteractiveContext.Current?.UndoHandler.Commit();
                StartTool( new ChamferEditorTool(modifierShape));
            }
            Invalidate();
        },
        CanExecuteOnSingleSolid)        
    {
        Header = () => "Chamfer",
        Description = () => "Chamfers edges of a solid.",
        Icon = () => "Mod-Chamfer",
        HelpTopic = "28fda54f-4380-45f4-b55e-23093b6dc6de",
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateFillet { get; } = new(
        () =>
        {
            var modifierShape = Fillet.Create(InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities.First() as Body);
            if (modifierShape != null)
            {
                InteractiveContext.Current?.UndoHandler.Commit();
                StartTool(new FilletEditorTool(modifierShape));
            }
            Invalidate();
        },
        CanExecuteOnSingleSolid)
    {
        Header = () => "Fillet",
        Description = () => "Fillets edges of a solid.",
        Icon = () => "Mod-Fillet",
        HelpTopic = "9b151212-b7f3-43ab-ad5a-bb03c8c8b083",
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateExtrude { get; } = new(
        () =>
        {
            StartTool(new CreateExtrudeTool(Selection.SelectedEntities.First() as Body));
        },
        () => CanExecuteOnSingleSketch() || CanExecuteOnSingleSolid())
    {
        Header = () => "Extrude",
        Description = () => "Extrudes a shape or a single face of a solid.",
        Icon = () => "Form-Extrude",
        HelpTopic = "240a3c08-f9a0-4e31-88e0-7b034c1d9f9d",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateExtrudeTool))
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateRevolve { get; } = new(
        () =>
        {
            StartTool(new CreateRevolveTool(Selection.SelectedEntities.First() as Body));
        },
        CanExecuteOnSingleSketch)        
    {
        Header = () => "Revolve",
        Description = () => "Creates a solid by revolving a sketch contour.",
        Icon = () => "Form-Revolve",
        HelpTopic = "74c0aab4-7847-4dcb-83e9-6ed639f4591c",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateRevolveTool))
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<Imprint.ImprintMode> CreateImprint { get; } = new(
        (mode) =>
        {
            StartTool(new CreateImprintTool(Selection.SelectedEntities.First() as Body, mode));
        },
        CanExecuteOnSingleSolid)
    {
        Header = (mode) =>
        {
            switch (mode)
            {
                case Imprint.ImprintMode.Raise:  return "Raise";
                case Imprint.ImprintMode.Lower:  return "Lower";
                case Imprint.ImprintMode.Cutout: return "Cut-Out";
                default:                         return "Imprint";
            }
        },
        Icon = (mode) =>
        {
            switch (mode)
            {
                case Imprint.ImprintMode.Raise:  return "Form-ImprintRaise";
                case Imprint.ImprintMode.Lower:  return "Form-ImprintLower";
                case Imprint.ImprintMode.Cutout: return "Form-ImprintCutout";
                default:                         return "Form-ImprintLower";
            }
                
        },
        Title = (mode) =>
        {
            switch (mode)
            {
                case Imprint.ImprintMode.Raise:  return "Raise a Face";
                case Imprint.ImprintMode.Lower:  return "Lower a Face";
                case Imprint.ImprintMode.Cutout: return "Cut-Out a Face";
                default:                         return "Imprint a Face";
            }
        },
        Description = (mode) => "Imprints a face based on a sketch to create a protrusion, depression or cutout." ,
        HelpTopic = (mode) => "D3faf9Bf-849f-4612-b689-bd5f699e850d",
        IsCheckedBinding = (mode) => mode != Imprint.ImprintMode.Default ? null
                                         : BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", 
                                                                BindingMode.TwoWay, EqualityToBoolConverter.Instance, nameof(CreateImprintTool))
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateFlangeSheet { get; } = new(
        () =>
        {
            InteractiveContext.Current.WorkspaceController.StartTool(new CreateFlangeSheetTool(Selection.SelectedEntities.First() as Body));
        },
        CanExecuteOnSingleSolid)
    {
        Header = () => "Flange Sheet",
        Title = () => "Create Flange on Sheet",
        Description = () => "Extends a solid shape by adding a folded flange.",
        Icon = () => "Mod-FlangeSheet",
        HelpTopic = "5f9b1a87-60f9-448a-860a-567eb18473c8",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateFlangeSheetTool))
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateUnfoldSheet { get; } = new(
        () =>
        {
            InteractiveContext.Current.WorkspaceController.StartTool(new CreateUnfoldSheetTool(Selection.SelectedEntities.First() as Body));
        },
        CanExecuteOnSingleSolid)
    {
        Header = () => "Unfold Sheet",
        Title = () => "Unfold a folded Sheet",
        Description = () => "Unfolds a sheet with bend flanges with respect to the material compression.",
        Icon = () => "Mod-UnfoldSheet",
        HelpTopic = "87d3ecca-434c-474d-befd-47f1bb83370e",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateUnfoldSheetTool))
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateMirror { get; } = new(
        () =>
        {
            var tool = new CreateMirrorTool(Selection.SelectedEntities.First() as Body);
            InteractiveContext.Current.WorkspaceController.StartTool(tool);
        },
        () => CanExecuteOnSingleSolid() || CanExecuteOnSingleSketch())
    {
        Header = () => "Mirror",
        Description = () => "Adds a mirrored copy of a sketch or a solid to the shape.",
        Icon = () => "Multiply-Mirror",
        HelpTopic = "6578fa5e-7536-4df2-96fc-18a31a4cee9c",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateMirrorTool))
    };

    //--------------------------------------------------------------------------------------------------
        
    public static ActionCommand CreateLinearArray { get; } = new(
        () =>
        {
            var tool = new CreateLinearArrayTool(Selection.SelectedEntities.First() as Body);
            InteractiveContext.Current.WorkspaceController.StartTool(tool);
        },
        () => CanExecuteOnSingleSolid() || CanExecuteOnSingleSketch())
    {
        Header = () => "Linear Array",
        Description = () => "Adds a number of copies of a sketch or solid, which are arranged in a linear pattern, to the shape.",
        Icon = () => "Multiply-LinearArray",
        HelpTopic = "c867c6ad-f4ce-432b-a097-99596e31fea1",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateLinearArrayTool))
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateCircularArray { get; } = new(
        () =>
        {
            var tool = new CreateCircularArrayTool(Selection.SelectedEntities.First() as Body);
            InteractiveContext.Current.WorkspaceController.StartTool(tool);
        },
        () => CanExecuteOnSingleSolid() || CanExecuteOnSingleSketch())
    {
        Header = () => "Circular Array",
        Description = () => "Adds a number of copies of a sketch or a solid, which are arranged on a circle, to the shape.",
        Icon = () => "Multiply-CircularArray",
        HelpTopic = "07407809-3236-4469-ad99-526aab13b6e7",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateCircularArrayTool))
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateBoxJoint { get; } = new(
        () =>
        {
            var body1 = Selection.SelectedEntities[0] as Body;
            var body2 = Selection.SelectedEntities.Count > 1 ? Selection.SelectedEntities[1] as Body : null;
            var tool = new CreateBoxJointTool(body1, body2);
            InteractiveContext.Current.WorkspaceController.StartTool(tool); 
        },
        () => CanExecuteOnMultiSolid() && Selection.SelectedEntities.Count <= 2)
    {
        Header = () => "Box Joint",
        Description = () => "Build a junction of two solids by using interlocking profiles.",
        Icon = () => "Feature-BoxJoint",
        HelpTopic = "c0d4325e-1684-4449-b71d-5fa1c875dd5c",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateBoxJointTool))
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateHalvedJoint { get; } = new(
        () =>
        {
            var body1 = Selection.SelectedEntities[0] as Body;
            var body2 = Selection.SelectedEntities.Count > 1 ? Selection.SelectedEntities[1] as Body : null;
            var tool = new CreateHalvedJointTool(body1, body2);
            InteractiveContext.Current.WorkspaceController.StartTool(tool); 
        },
        () => CanExecuteOnMultiSolid() && Selection.SelectedEntities.Count <= 2)
    {
        Header = () => "Halved Joint",
        Description = () => "Build a junction of two solids by using a halved lap joint.",
        Icon = () => "Feature-HalvedJoint",
        HelpTopic = "ee35e475-eb9c-4871-9da8-e04e53faef6a",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateHalvedJointTool))
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateLoft { get; } = new(
        () =>
        {
            var tool = new CreateLoftTool();
            InteractiveContext.Current.WorkspaceController.StartTool(tool);
        },
        () => CanExecuteOnMultiSketch()
              || (Selection?.SelectedEntities?.FirstOrDefault() as Body)?.Shape is Loft)
    {
        Header = () => "Loft",
        Description = () => "Creates a solid or hollowed shape from a number of section sketches.",
        Icon = () => "Form-Loft",
        HelpTopic = "0e316c19-1062-42bb-82c1-22b91d9cca7e",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateLoftTool))
    };

    //--------------------------------------------------------------------------------------------------
        
    public static ActionCommand CreateReference { get; } = new(
        () =>
        {
            var source = Selection.SelectedEntities.First() as Body;
            var body = Reference.Create(source, source.Shape != source.RootShape ? source.Shape : null);
            if (body != null)
            {
                InteractiveContext.Current.Document.Add(body);
                InteractiveContext.Current?.UndoHandler.Commit();
                Selection.SelectEntity(body);
            }
            Invalidate();
        },
        () => CanExecuteOnSingleSolid() || CanExecuteOnSingleSketch())
    {
        Header = () => "Create Reference",
        Title = () => "Create a Reference",
        Description = () => "Creates a new body, which references the selected body and will update each time the original is being modified.",
        Icon = () => "Create-Reference",
        HelpTopic = "55fc2982-4f52-4c9d-8e75-b1b100fd53b0"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreateTaper { get; } = new(
        () =>
        {
            var body1 = Selection.SelectedEntities[0] as Body;
            var tool = new CreateTaperTool(body1);
            InteractiveContext.Current.WorkspaceController.StartTool(tool); 
        },
        CanExecuteOnSingleSolid)
    {
        Header = () => "Taper",
        Description = () => "Tapers a face of a solid guided by a base edge or vertex.",
        Icon = () => "Form-Taper",
        HelpTopic = "ef7f7484-88f2-45d7-8062-771c8c0ad04e",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(CreateTaperTool))
    };
        
    //--------------------------------------------------------------------------------------------------

    public static ActionCommand CreatePipe { get; } = new(
        () =>
        {
            var body = InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities.First() as Body;
            if (body?.Shape?.ShapeType != ShapeType.Sketch)
                return;

            Pipe.Create(body);
            InteractiveContext.Current?.UndoHandler.Commit();
            Invalidate();
        },
        CanExecuteOnSingleSketch)
    {
        Header = () => "Pipe",
        Description = () => "Creates a pipe by sweeping a profile along a sketch based path.",
        Icon = () => "Form-Pipe",
        HelpTopic = "69425fd0-ff1a-4dc3-9014-12860684e057"
    };

    //--------------------------------------------------------------------------------------------------
        
    public static ActionCommand CreateOffset { get; } = new(
        () =>
        {
            var body = InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities.First() as Body;
            if (body?.Shape?.ShapeType != ShapeType.Sketch 
                && body?.Shape?.ShapeType != ShapeType.Solid)
                return;

            Offset.Create(body);
            InteractiveContext.Current?.UndoHandler.Commit();
            Invalidate();
        },
        () => CanExecuteOnSingleSketch() || CanExecuteOnSingleSolid())
    {
        Header = () => "Offset",
        Description = () => "Offsets a sketch or solid.",
        Icon = () => "Mod-Offset",
        HelpTopic = "af5f6317-5201-4c55-b56d-da368f359324"
    };

    //--------------------------------------------------------------------------------------------------
                
    public static ActionCommand CreateCrossSection { get; } = new(
        () =>
        {
            var body = InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities.First() as Body;
            if (body?.Shape?.ShapeType != ShapeType.Solid)
                return;

            CrossSection.Create(body, CrossSection.ProposePlane(body, InteractiveContext.Current.Workspace.WorkingPlane));
            InteractiveContext.Current?.UndoHandler.Commit();
            Invalidate();
        },
        () => CanExecuteOnSingleSolid())
    {
        Header = () => "Cross Section",
        Description = () => "Creates a cross section sketch by cutting the solid with a plane.",
        Icon = () => "Mod-CrossSection",
        HelpTopic = "86065e4d-c0fc-46e2-aae4-4b385fb47409"
    };

    //--------------------------------------------------------------------------------------------------
                        
    public static ActionCommand CreateScale { get; } = new(
        () =>
        {
            var body = InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities.First() as Body;
            if (body?.Shape?.ShapeType != ShapeType.Solid 
                && body?.Shape?.ShapeType != ShapeType.Mesh
                && body?.Shape?.ShapeType != ShapeType.Sketch)
                return;

            Scale.Create(body, 1.0);
            InteractiveContext.Current?.UndoHandler.Commit();
            Invalidate();
        },
        () => CanExecuteOnMulti(entity => (entity as Body)?.Shape?.ShapeType is ShapeType.Sketch or ShapeType.Solid or ShapeType.Mesh))
    {
        Header = () => "Scale",
        Description = () => "Scales a sketch or a solid.",
        Icon = () => "Mod-Scale",
        HelpTopic = "5974b87b-8ce2-4454-b400-377b936650bb"
    };

    //--------------------------------------------------------------------------------------------------

    #endregion

}