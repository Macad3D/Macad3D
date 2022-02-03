using System.Linq;
using System.Windows.Data;
using Macad.Interaction.Editors.Shapes;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Interaction
{
    public static class ModelCommands
    {
        #region Helper

        static WorkspaceController _WorkspaceController
        {
            get { return InteractiveContext.Current?.WorkspaceController; }
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CanStartTool()
        {
            return (_WorkspaceController != null);
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CanExecuteSketchModifier()
        {
            return _WorkspaceController?.Selection != null
                   && _WorkspaceController.Selection.SelectedEntities.Count == 1
                   && (_WorkspaceController.Selection.SelectedEntities.First() as Body)?.Shape?.ShapeType == ShapeType.Sketch;
        }

        //--------------------------------------------------------------------------------------------------
        
        static bool _CanExecuteSketchModifierMany()
        {
            return _WorkspaceController?.Selection != null
                   && _WorkspaceController.Selection.SelectedEntities.Count > 0
                   && _WorkspaceController.Selection.SelectedEntities.All(e => (e as Body)?.Shape?.ShapeType == ShapeType.Sketch);
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CanExecuteSolidModifier()
        {
            return _WorkspaceController?.Selection != null
                   && _WorkspaceController.Selection.SelectedEntities.Count == 1
                   && (_WorkspaceController.Selection.SelectedEntities.First() as Body)?.Shape?.ShapeType == ShapeType.Solid;
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CanExecuteSolidModifierMany()
        {
            return _WorkspaceController?.Selection != null
                && _WorkspaceController.Selection.SelectedEntities.Count > 0
                && _WorkspaceController.Selection.SelectedEntities.All(e => (e as Body)?.Shape?.ShapeType == ShapeType.Solid);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Primitives

        public static ActionCommand CreateBox { get; } = new(
            () =>
            {
                _WorkspaceController?.StartTool(new CreateBoxTool());
            },
            _CanStartTool)
        {
            Header = () => "Box",
            Title = () => "Create Box",
            Icon = () => "Prim-Box",
            Description = () => "Creates a new body with a box shape.",
            HelpTopic = "5da4906e-c86b-4f91-8b30-f5163e152d0e",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.OneWay,
                                                    EqualityToBoolConverter.Instance, nameof(CreateBoxTool))
        };
        
        //--------------------------------------------------------------------------------------------------

        public static ActionCommand CreateSphere { get; } = new(
            () =>
            {
                _WorkspaceController?.StartTool(new CreateSphereTool());
            },
            _CanStartTool)
        {
            Header = () => "Sphere",
            Title = () => "Create Sphere",
            Icon = () => "Prim-Sphere",
            Description = () => "Creates a new body with a spherical shape.",
            HelpTopic = "eecb316b-a4da-441b-b9a6-3fadf9275889",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.OneWay,
                                                    EqualityToBoolConverter.Instance, nameof(CreateSphereTool))
        };

        //--------------------------------------------------------------------------------------------------


        public static ActionCommand CreateCylinder { get; } = new(
            () =>
            {
                _WorkspaceController?.StartTool(new CreateCylinderTool());
            },
            _CanStartTool)        
        {
            Header = () => "Cylinder",
            Title = () => "Create Cylinder",
            Icon = () => "Prim-Cylinder",
            Description = () => "Creates a new body with a cylindrical shape.",
            HelpTopic = "5da4906e-c86b-4f91-8b30-f5163e152d1e",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.OneWay,
                                                    EqualityToBoolConverter.Instance, nameof(CreateCylinderTool))
        };
        
        //--------------------------------------------------------------------------------------------------


        public static ActionCommand CreateSketch { get; } = new(
            () =>
            {
                _WorkspaceController?.StartTool(new CreateSketchTool(CreateSketchTool.CreateMode.WorkplaneXY));
            },
            _CanStartTool)
        {
            Header = () => "Sketch",
            Title = () => "Create Sketch",
            Icon = () => "Prim-Sketch",
            Description = () => "Creates a new body with a sketch shape.",
            HelpTopic = "0dc12d15-5450-460c-909b-f25ed1cf4b7e",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.TwoWay,
                                                    EqualityToBoolConverter.Instance, nameof(CreateSketchTool))
        };

        //--------------------------------------------------------------------------------------------------
        
        public static ActionCommand<CreateSketchTool.CreateMode> CreateSketchAligned { get; } = new(
            (mode) =>
            {
                _WorkspaceController?.StartTool(new CreateSketchTool(mode));
            },
            _CanStartTool)
        {
            Header = (mode) =>
            {
                switch (mode)
                {
                    case CreateSketchTool.CreateMode.Interactive: return "Select Plane or Face";
                    case CreateSketchTool.CreateMode.WorkplaneXY: return "Working Plane XY";
                    case CreateSketchTool.CreateMode.WorkplaneXZ: return "Working Plane XZ";
                    case CreateSketchTool.CreateMode.WorkplaneYZ: return "Working Plane YZ";
                    default: return "Sketch";
                }
            },
            Icon = (mode) => "Prim-Sketch",
            Description = (mode) => "Creates a new body with a sketch shape.",
            HelpTopic = (mode) => "0dc12d15-5450-460c-909b-f25ed1cf4b7e"
        };

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Modifier

        public static ActionCommand<BooleanOperationTool.Operations> CreateBoolean { get; } = new(
            (op) =>
            {
                InteractiveContext.Current.WorkspaceController.StartTool(new BooleanOperationTool(op));
            },
            _CanExecuteSolidModifierMany)
        {
            Header = (op) => op.ToString(),
            Icon = (op) => $"Boolean-{op.ToString()}",
            Description = (op) =>
            {
                switch (op)
                {
                    case BooleanOperationTool.Operations.Cut:
                        return "Cuts the solid shape of one ore more bodies from the shape of another body.";
                    case BooleanOperationTool.Operations.Fuse:
                        return "Fuses the solid shapes of one ore more bodies.";
                    case BooleanOperationTool.Operations.Common:
                        return "Combines the solid shape of two or more bodies by calculating the common part of all shapes.";
                    default:
                        return "Boolean operation of two or more bodies.";
                }
            },
            HelpTopic = (op) =>
            {
                switch (op)
                {
                    case BooleanOperationTool.Operations.Cut:
                        return "d678cf8c-0e7f-46cd-8bbc-de964ddfecc6";
                    case BooleanOperationTool.Operations.Fuse:
                        return "dff138bf-06a6-485c-a94d-890ef71a1372";
                    case BooleanOperationTool.Operations.Common:
                        return "79be5f3d-4bf0-4c76-9bc6-50428e6ed621";
                    default:
                        return "";
                }
            },
            IsCheckedBinding = (op) => BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.OneWay,
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
                    _WorkspaceController.StartTool( new EdgeModifierTool(modifierShape));
                }
                _WorkspaceController.Invalidate();
            },
            _CanExecuteSolidModifier)        
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
                    _WorkspaceController.StartTool(new EdgeModifierTool(modifierShape));
                }
                _WorkspaceController.Invalidate();
            },
            _CanExecuteSolidModifier)
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
                _WorkspaceController.StartTool(new CreateExtrudeTool(_WorkspaceController.Selection.SelectedEntities.First() as Body));
            },
            () => _CanExecuteSketchModifier() || _CanExecuteSolidModifier())
        {
            Header = () => "Extrude",
            Description = () => "Extrudes a shape or a single face of a solid.",
            Icon = () => "Form-Extrude",
            HelpTopic = "240A3C08-F9A0-4E31-88E0-7B034C1D9F9D",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.OneWay,
                                                    EqualityToBoolConverter.Instance, nameof(CreateExtrudeTool))
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand CreateRevolve { get; } = new(
            () =>
            {
                var modifierShape = Revolve.Create(InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities.First() as Body);
                if (modifierShape != null)
                {
                    InteractiveContext.Current?.UndoHandler.Commit();
                }
                _WorkspaceController.Invalidate();
            },
            _CanExecuteSketchModifier)        
        {
            Header = () => "Revolve",
            Description = () => "Creates a solid by revolving a sketch contour.",
            Icon = () => "Form-Revolve",
            HelpTopic = "74C0AAB4-7847-4DCB-83E9-6ED639F4591C"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<Imprint.ImprintMode> CreateImprint { get; } = new(
            (mode) =>
            {
                _WorkspaceController.StartTool(new CreateImprintTool(_WorkspaceController.Selection.SelectedEntities.First() as Body, mode));
            },
            _CanExecuteSolidModifier)
        {
            Header = (mode) =>
            {
                switch (mode)
                {
                    case Imprint.ImprintMode.Raise:  return "Raise";
                    case Imprint.ImprintMode.Lower:  return "Lower";
                    case Imprint.ImprintMode.Cutout: return "Cut-Out";
                    default: return "Imprint";
                }
            },
            Icon = (mode) =>
            {
                switch (mode)
                {
                    case Imprint.ImprintMode.Raise: return "Form-ImprintRaise";
                    case Imprint.ImprintMode.Lower: return "Form-ImprintLower";
                    case Imprint.ImprintMode.Cutout: return "Form-ImprintCutout";
                    default: return "Form-ImprintLower";
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
            HelpTopic = (mode) => "D3FAF9BF-849F-4612-B689-BD5F699E850D",
            IsCheckedBinding = (mode) => mode != Imprint.ImprintMode.Default ? null
                                                                             : BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.TwoWay, 
                                                                                                    EqualityToBoolConverter.Instance, nameof(CreateImprintTool))
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand CreateFlangeSheet { get; } = new(
            () =>
            {
                InteractiveContext.Current.WorkspaceController.StartTool(new CreateFlangeSheetTool(_WorkspaceController.Selection.SelectedEntities.First() as Body));
            },
            _CanExecuteSolidModifier)
        {
            Header = () => "Flange Sheet",
            Title = () => "Create Flange on Sheet",
            Description = () => "Extends a solid shape by adding a folded flange.",
            Icon = () => "Mod-FlangeSheet",
            HelpTopic = "5F9B1A87-60F9-448A-860A-567EB18473C8",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.OneWay,
                                                    EqualityToBoolConverter.Instance, nameof(CreateFlangeSheetTool))
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand CreateUnfoldSheet { get; } = new(
            () =>
            {
                InteractiveContext.Current.WorkspaceController.StartTool(new CreateUnfoldSheetTool(_WorkspaceController.Selection.SelectedEntities.First() as Body));
            },
            _CanExecuteSolidModifier)
        {
            Header = () => "Unfold Sheet",
            Title = () => "Unfold a folded Sheet",
            Description = () => "Unfolds a sheet with bend flanges with respect to the material compression.",
            Icon = () => "Mod-UnfoldSheet",
            HelpTopic = "87D3ECCA-434C-474D-BEFD-47F1BB83370E",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.OneWay,
                                                    EqualityToBoolConverter.Instance, nameof(CreateUnfoldSheetTool))
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand CreateMirror { get; } = new(
            () =>
            {
                var tool = new CreateMirrorTool(_WorkspaceController.Selection.SelectedEntities.First() as Body);
                InteractiveContext.Current.WorkspaceController.StartTool(tool);
            },
            () => _CanExecuteSolidModifier() || _CanExecuteSketchModifier())
        {
            Header = () => "Mirror",
            Description = () => "Adds a mirrored copy of a sketch or a solid to the shape.",
            Icon = () => "Multiply-Mirror",
            HelpTopic = "6578fa5e-7536-4df2-96fc-18a31a4cee9c",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.OneWay,
                                                    EqualityToBoolConverter.Instance, nameof(CreateMirrorTool))
        };

        //--------------------------------------------------------------------------------------------------
        
        public static ActionCommand CreateLinearArray { get; } = new(
            () =>
            {
                var modifierShape = LinearArray.Create(InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities.First() as Body);
                if (modifierShape != null)
                {
                    InteractiveContext.Current?.UndoHandler.Commit();
                }
                _WorkspaceController.Invalidate();
            },
            () => _CanExecuteSolidModifier() || _CanExecuteSketchModifier())
        {
            Header = () => "Linear Array",
            Description = () => "Adds a number of copies of a sketch or solid, which are arranged in a linear pattern, to the shape.",
            Icon = () => "Multiply-LinearArray",
            HelpTopic = "c867c6ad-f4ce-432b-a097-99596e31fea1"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand CreateCircularArray { get; } = new(
            () =>
            {
                var modifierShape = CircularArray.Create(InteractiveContext.Current.WorkspaceController.Selection.SelectedEntities.First() as Body);
                if (modifierShape != null)
                {
                    InteractiveContext.Current?.UndoHandler.Commit();
                }
                _WorkspaceController.Invalidate();
            },
            () => _CanExecuteSolidModifier() || _CanExecuteSketchModifier())
        {
            Header = () => "Circular Array",
            Description = () => "Adds a number of copies of a sketch or a solid, which are arranged on a circle, to the shape.",
            Icon = () => "Multiply-CircularArray",
            HelpTopic = "07407809-3236-4469-ad99-526aab13b6e7"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand CreateBoxJoint { get; } = new(
            () =>
            {
                var body1 = _WorkspaceController.Selection.SelectedEntities[0] as Body;
                var body2 = _WorkspaceController.Selection.SelectedEntities.Count > 1 ? _WorkspaceController.Selection.SelectedEntities[1] as Body : null;
                var tool = new CreateBoxJointTool(body1, body2);
                InteractiveContext.Current.WorkspaceController.StartTool(tool); 
            },
            () => _CanExecuteSolidModifierMany() && _WorkspaceController.Selection.SelectedEntities.Count <= 2)
        {
            Header = () => "Box Joint",
            Description = () => "Build a junction of two solids by using interlocking profiles.",
            Icon = () => "Feature-BoxJoint",
            HelpTopic = "c0d4325e-1684-4449-b71d-5fa1c875dd5c",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.OneWay,
                                                    EqualityToBoolConverter.Instance, nameof(CreateBoxJointTool))
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand CreateLoft { get; } = new(
            () =>
            {
                var tool = new CreateLoftTool();
                InteractiveContext.Current.WorkspaceController.StartTool(tool);
            },
            () => _CanExecuteSketchModifierMany()
                  || (_WorkspaceController?.Selection?.SelectedEntities?.FirstOrDefault() as Body)?.Shape is Loft)
        {
            Header = () => "Loft",
            Description = () => "Creates a solid or hollowed shape from a number of section sketches.",
            Icon = () => "Form-Loft",
            HelpTopic = "0e316c19-1062-42bb-82c1-22b91d9cca7e",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.OneWay,
                                                    EqualityToBoolConverter.Instance, nameof(CreateLoftTool))
        };

        //--------------------------------------------------------------------------------------------------
        
        public static ActionCommand CreateReference { get; } = new(
            () =>
            {
                var body = Reference.Create(_WorkspaceController.Selection.SelectedEntities.First() as Body);
                if (body != null)
                {
                    InteractiveContext.Current.Document.Add(body);
                    InteractiveContext.Current?.UndoHandler.Commit();
                    _WorkspaceController.Selection.SelectEntity(body);
                }
                _WorkspaceController.Invalidate();
            },
            () => _CanExecuteSolidModifier() || _CanExecuteSketchModifier())
            {
                Header = () => "Create Reference",
                Title = () => "Create a Reference",
                Description = () => "Creates a new body, which references the selected body and will update each time the original is being modified.",
                Icon = () => "Create-Reference"
            };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand CreateTaper { get; } = new(
            () =>
            {
                var body1 = _WorkspaceController.Selection.SelectedEntities[0] as Body;
                var tool = new CreateTaperTool(body1);
                InteractiveContext.Current.WorkspaceController.StartTool(tool); 
            },
            _CanExecuteSolidModifier)
        {
            Header = () => "Taper",
            Description = () => "Tapers a face of a solid guided by a base edge or vertex.",
            Icon = () => "Form-Taper",
            HelpTopic = "ef7f7484-88f2-45d7-8062-771c8c0ad04e",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.OneWay,
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
                _WorkspaceController.Invalidate();
            },
            _CanExecuteSketchModifier)
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
                _WorkspaceController.Invalidate();
            },
            () => _CanExecuteSketchModifier() || _CanExecuteSolidModifier())
        {
            Header = () => "Offset",
            Description = () => "Offsets a sketch or solid.",
            Icon = () => "Mod-Offset",
            HelpTopic = "AF5F6317-5201-4C55-B56D-DA368F359324"
        };

        //--------------------------------------------------------------------------------------------------

        #endregion

    }
}