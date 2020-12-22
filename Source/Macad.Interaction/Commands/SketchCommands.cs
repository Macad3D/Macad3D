using System.Windows.Data;
using Macad.Interaction.Dialogs;
using Macad.Interaction.Editors.Shapes;
using Macad.Core;
using Macad.Core.Exchange;
using Macad.Core.Shapes;
using Macad.Presentation;

namespace Macad.Interaction
{
    public static class SketchCommands
    {
        #region Helper
        #endregion

        #region Enumerations

        public enum SegmentCreator
        {
            None,
            Circle,
            Line,
            PolyLine,
            ArcCenter,
            ArcRim,
            EllipseCenter,
            EllipticalArcCenter,
            Rectangle,
            Bezier2,
            Bezier3
        }

        //--------------------------------------------------------------------------------------------------

        public enum Constraints
        {
            LineLength,
            CircleRadius,
            Perpendicular,
            Parallel,
            Horizontal,
            Vertical,
            Angle,
            Concentric,
            Equal,
            PointOnSegment,
            PointOnMidpoint,
            HorizontalDistance,
            VerticalDistance,
            Fixed,
            Tangent
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        public static ActionCommand CloseSketchEditor { get; } = new ActionCommand(
            () =>
            {
                var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                tool?.Stop();
            },
            () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool)
        {
            Title = () => "Close Sketch Editor",
            Header = () => "Close Editor",
            Icon = () => "Generic-CloseTool",
            Description = () => "Closes the editor and saves the current state."
        };

        //--------------------------------------------------------------------------------------------------
        
        public static ActionCommand<Sketch> StartSketchEditor { get; } = new ActionCommand<Sketch>(
            (sketch) =>
            {
                var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                if (tool == null)
                {
                    tool = new SketchEditorTool(sketch);
                    InteractiveContext.Current?.WorkspaceController?.StartTool(tool);
                }
            },
            (sketch) => sketch != null)
        {
            Title = sketch => "Edit Sketch",
            Description = sketch => "Opens the editor for the current sketch.",
            Icon = sketch => "Tool-SketchEditor"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ExportAllToFile { get; } = new ActionCommand(
            () =>
            {
                var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                if (tool == null)
                    return;

                if (ExportDialog.Execute<ISketchExporter>(out var filename, out var exporter))
                {
                    if (!ExchangerSettings.Execute<ISketchExporter>(exporter))
                        return;
                    if (!(exporter as ISketchExporter)?.DoExport(filename, tool.Sketch) ?? false)
                    {
                        ErrorDialogs.CannotExport(filename);
                    }
                }
            },
            () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool)
        {
            Header = () => "Export to File"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ExportAllToToSvgClipboard { get; } = new ActionCommand(
            () =>
            {
                var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                if (tool == null)
                    return;

                var exporter = new SvgExchanger() as ISketchExporter;
                if (!exporter.DoExport(Clipboard.Current, tool.Sketch))
                {
                    ErrorDialogs.CannotExportToClipboard();
                }
            },
            () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool)
        {
            Header = () => "Export as SVG to Clipboard"
        };


        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<bool> ImportFromFile { get; } = new ActionCommand<bool>(
            replace =>
            {
                var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                if (tool == null)
                    return;

                if (ImportDialog.Execute<ISketchImporter>(out var filename, out var importer))
                {
                    if (!ExchangerSettings.Execute<ISketchImporter>(importer))
                        return;

                    if (!importer.DoImport(filename, out var points, out var segments, out var constraints))
                    {
                        ErrorDialogs.CannotImportFromClipboard();
                        return;
                    }

                    if (replace && points?.Count > 0)
                    {
                        tool.Sketch.Clear();
                    }

                    tool.Sketch.AddElements(points, null, segments, constraints);
                    InteractiveContext.Current?.UndoHandler?.Commit();
                }
            },
            () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool)
        {
            Header = (b) => b ? "Replace from File" : "Add from File"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<bool> ImportFromClipboard { get; } = new ActionCommand<bool>(
            replace =>
            {
                var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                if (tool == null)
                    return;

                var importer = new SvgExchanger() as ISketchImporter;
                if (!importer.DoImport(Clipboard.Current, out var points, out var segments, out var constraints))
                {
                    ErrorDialogs.CannotImportFromClipboard();
                }

                if (replace && points?.Count > 0)
                {
                    tool.Sketch.Clear();
                }

                tool.Sketch.AddElements(points, null, segments, constraints);
                InteractiveContext.Current?.UndoHandler?.Commit();
            },
            () =>
            {
                if (!(InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool))
                    return false;
                return ExchangeRegistry.CanImportFromClipboard<ISketchImporter>(Clipboard.Current);
            })
        {
            Header = (b) => b ? "Replace from Clipboard" : "Add from Clipboard"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<Constraints> CreateConstraint { get; } = new ActionCommand<Constraints>(
            (constraintType) =>
            {
                var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                if (sketchEditTool == null)
                    return;

                bool swapOrientation = false;
                if(InteractiveContext.Current?.WorkspaceController?.LockWorkingPlane ?? false)
                {
                    swapOrientation = ((int) ((InteractiveContext.Current?.WorkspaceController?.ActiveViewport?.Twist ?? 0.0 + 45.0) / 90.0) & 0x01) == 1;
                }

                switch (constraintType)
                {
                    case Constraints.LineLength:
                        sketchEditTool.CreateConstraint<SketchConstraintLength>();
                        break;
                    case Constraints.CircleRadius:
                        sketchEditTool.CreateConstraint<SketchConstraintRadius>();
                        break;
                    case Constraints.Perpendicular:
                        sketchEditTool.CreateConstraint<SketchConstraintPerpendicular>();
                        break;
                    case Constraints.Parallel:
                        sketchEditTool.CreateConstraint<SketchConstraintParallel>();
                        break;
                    case Constraints.Horizontal:
                        if(swapOrientation)
                            sketchEditTool.CreateConstraint<SketchConstraintVertical>();
                        else
                            sketchEditTool.CreateConstraint<SketchConstraintHorizontal>();
                        break;
                    case Constraints.Vertical:
                        if(swapOrientation)
                            sketchEditTool.CreateConstraint<SketchConstraintHorizontal>();
                        else
                            sketchEditTool.CreateConstraint<SketchConstraintVertical>();
                        break;
                    case Constraints.Angle:
                        sketchEditTool.CreateConstraint<SketchConstraintAngle>();
                        break;
                    case Constraints.Concentric:
                        sketchEditTool.CreateConstraint<SketchConstraintConcentric>();
                        break;
                    case Constraints.Equal:
                        sketchEditTool.CreateConstraint<SketchConstraintEqual>();
                        break;
                    case Constraints.PointOnSegment:
                        sketchEditTool.CreateConstraint<SketchConstraintPointOnSegment>();
                        break;
                    case Constraints.PointOnMidpoint:
                        sketchEditTool.CreateConstraint<SketchConstraintPointOnMidpoint>();
                        break;
                    case Constraints.HorizontalDistance:
                        if(swapOrientation)
                            sketchEditTool.CreateConstraint<SketchConstraintVerticalDistance>();
                        else
                            sketchEditTool.CreateConstraint<SketchConstraintHorizontalDistance>();
                        break;
                    case Constraints.VerticalDistance:
                        if(swapOrientation)
                            sketchEditTool.CreateConstraint<SketchConstraintHorizontalDistance>();
                        else
                            sketchEditTool.CreateConstraint<SketchConstraintVerticalDistance>();
                        break;
                    case Constraints.Fixed:
                        sketchEditTool.CreateConstraint<SketchConstraintFixed>();
                        break;
                    case Constraints.Tangent:
                        sketchEditTool.CreateConstraint<SketchConstraintTangent>();
                        break;
                }
            },
            (constraintType) =>
            {
                var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                if (sketchEditTool == null)
                    return false;
                
                bool swapOrientation = false;
                if(InteractiveContext.Current?.WorkspaceController?.LockWorkingPlane ?? false)
                {
                    swapOrientation = ((int) ((InteractiveContext.Current?.WorkspaceController?.ActiveViewport?.Twist ?? 0.0 + 45.0) / 90.0) & 0x01) == 1;
                }

                switch (constraintType)
                {
                    case Constraints.LineLength:
                        return sketchEditTool.CanCreateConstraint<SketchConstraintLength>();
                    case Constraints.CircleRadius:
                        return sketchEditTool.CanCreateConstraint<SketchConstraintRadius>();
                    case Constraints.Perpendicular:
                        return sketchEditTool.CanCreateConstraint<SketchConstraintPerpendicular>();
                    case Constraints.Parallel:
                        return sketchEditTool.CanCreateConstraint<SketchConstraintParallel>();
                    case Constraints.Horizontal:
                        if(swapOrientation)
                            return sketchEditTool.CanCreateConstraint<SketchConstraintVertical>();
                        else
                            return sketchEditTool.CanCreateConstraint<SketchConstraintHorizontal>();
                    case Constraints.Vertical:
                        if(swapOrientation)
                            return sketchEditTool.CanCreateConstraint<SketchConstraintHorizontal>();
                        else
                            return sketchEditTool.CanCreateConstraint<SketchConstraintVertical>();
                    case Constraints.Angle:
                        return sketchEditTool.CanCreateConstraint<SketchConstraintAngle>();
                    case Constraints.Concentric:
                        return sketchEditTool.CanCreateConstraint<SketchConstraintConcentric>();
                    case Constraints.Equal:
                        return sketchEditTool.CanCreateConstraint<SketchConstraintEqual>();
                    case Constraints.PointOnSegment:
                        return sketchEditTool.CanCreateConstraint<SketchConstraintPointOnSegment>();
                    case Constraints.PointOnMidpoint:
                        return sketchEditTool.CanCreateConstraint<SketchConstraintPointOnMidpoint>();
                    case Constraints.HorizontalDistance:
                        if(swapOrientation)
                            return sketchEditTool.CanCreateConstraint<SketchConstraintVerticalDistance>();
                        else
                            return sketchEditTool.CanCreateConstraint<SketchConstraintHorizontalDistance>();
                    case Constraints.VerticalDistance:
                        if(swapOrientation)
                            return sketchEditTool.CanCreateConstraint<SketchConstraintHorizontalDistance>();
                        else
                            return sketchEditTool.CanCreateConstraint<SketchConstraintVerticalDistance>();
                    case Constraints.Fixed:
                        return sketchEditTool.CanCreateConstraint<SketchConstraintFixed>();
                    case Constraints.Tangent:
                        return sketchEditTool.CanCreateConstraint<SketchConstraintTangent>();
                }

                return false;
            })
        {
            Header = (constraintType) =>
            {
                switch (constraintType)
                {
                    case Constraints.LineLength: return "Length";
                    case Constraints.CircleRadius: return "Radius";
                    case Constraints.Perpendicular: return "Perpendicular";
                    case Constraints.Parallel: return "Parallel";
                    case Constraints.Horizontal: return "Horizontal";
                    case Constraints.Vertical: return "Vertical";
                    case Constraints.Angle: return "Angle";
                    case Constraints.Concentric: return "Concentric";
                    case Constraints.Equal: return "Equal";
                    case Constraints.PointOnSegment: return "Point on Segment";
                    case Constraints.PointOnMidpoint: return "Point on Midpoint";
                    case Constraints.HorizontalDistance: return "Horizontal Distance";
                    case Constraints.VerticalDistance: return "Vertical Distance";
                    case Constraints.Fixed: return "Fixed";
                    case Constraints.Tangent: return "Tangent";
                    default: return "Create Constraint";
                }
            },
            Icon = (constraintType) => $"Sketch-Constraint{constraintType.ToString()}"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<SegmentCreator> CreateSegment { get; } = new ActionCommand<SegmentCreator>(
            (creator) =>
            {
                var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                if (sketchEditTool == null)
                    return;

                switch (creator)
                {
                    case SegmentCreator.Circle:
                        sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
                        break;
                    case SegmentCreator.Line:
                        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
                        break;
                    case SegmentCreator.PolyLine:
                        sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>(true);
                        break;
                    case SegmentCreator.ArcCenter:
                        sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>();
                        break;
                    case SegmentCreator.ArcRim:
                        sketchEditTool.StartSegmentCreation<SketchSegmentArcRimCreator>();
                        break;
                    case SegmentCreator.EllipseCenter:
                        sketchEditTool.StartSegmentCreation<SketchSegmentEllipseCenterCreator>();
                        break;
                    case SegmentCreator.EllipticalArcCenter:
                        sketchEditTool.StartSegmentCreation<SketchSegmentEllipticalArcCenterCreator>();
                        break;
                    case SegmentCreator.Rectangle:
                        sketchEditTool.StartSegmentCreation<SketchSegmentRectangleCreator>();
                        break;
                    case SegmentCreator.Bezier2:
                        sketchEditTool.StartSegmentCreation<SketchSegmentBezier2Creator>();
                        break;
                    case SegmentCreator.Bezier3:
                        sketchEditTool.StartSegmentCreation<SketchSegmentBezier3Creator>();
                        break;
                }
            },
            (creator) => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool
        )
        {
            Header = (creator) =>
            {
                switch (creator)
                {
                    case SegmentCreator.Circle: return "Circle";
                    case SegmentCreator.Line: return "Line";
                    case SegmentCreator.PolyLine: return "Polyline";
                    case SegmentCreator.ArcCenter: return "Arc using Center";
                    case SegmentCreator.ArcRim: return "Arc using Rim";
                    case SegmentCreator.EllipseCenter: return "Ellipse";
                    case SegmentCreator.EllipticalArcCenter: return "Elliptical Arc";
                    case SegmentCreator.Rectangle: return "Rectangle";
                    case SegmentCreator.Bezier2: return "Quadratic Bézier";
                    case SegmentCreator.Bezier3: return "Cubic Bézier";
                    default: return "Create Segment";
                }
            },
            Icon = (creator) => $"Sketch-Segment{creator.ToString()}",
            IsCheckedBinding = (creator) => BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveSketchTool", BindingMode.OneWay,
                                                                 EqualityToBoolConverter.Instance, $"SketchSegment{creator.ToString()}Creator")
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<double> RotateSketchView { get; } = new ActionCommand<double>(
            (param) =>
            {
                var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                if (sketchEditTool == null)
                    return;

                sketchEditTool.RotateView(param);
            },
            (param) => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool)
        {
            Header = (param) => param < 0 ? "Rotate Left" : "Rotate Right",
            Icon = (param) => param < 0 ? "Sketch-RotateLeft" : "Sketch-RotateRight",
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ToggleClippingPlane { get; } = new ActionCommand(
            () =>
            {
                var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                if (sketchEditTool == null)
                    return;

                sketchEditTool.EnableClipPlane(!sketchEditTool.ClipPlaneEnabled);
            },
            () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool)
        {
            Header = () => "Clip Plane",
            Icon = () => "Sketch-ClipPlane",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.SketchClipPlaneEnabled", BindingMode.OneWay)
        };

        //--------------------------------------------------------------------------------------------------
        
        public static ActionCommand RecenterGrid { get; } = new ActionCommand(
            () =>
            {
                var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
                if (sketchEditTool == null)
                    return;

                if (sketchEditTool.CurrentTool is RecenterGridSketchTool)
                {
                    sketchEditTool.StopTool();
                    return;
                }

                var tool = new RecenterGridSketchTool();
                sketchEditTool.StartTool(tool);
            },
            () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool)
        {
            Header = () => "Recenter Grid",
            Icon = () => "WorkingPlane-Align",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveSketchTool", BindingMode.OneWay,
                                                    EqualityToBoolConverter.Instance, "RecenterGridSketchTool")
        };

        //--------------------------------------------------------------------------------------------------
    }
}