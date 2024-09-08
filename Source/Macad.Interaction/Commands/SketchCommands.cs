using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Data;
using Macad.Interaction.Dialogs;
using Macad.Interaction.Editors.Shapes;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Exchange;
using Macad.Presentation;

namespace Macad.Interaction;

public static class SketchCommands
{
    #region Enumerations

    public enum Segments
    {
        None,
        Circle,
        Line,
        Arc,
        ArcCenter,
        ArcRim,
        EllipseCenter,
        EllipticalArc,
        EllipticalArcCenter,
        Rectangle,
        Bezier,
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
        Tangent,
        SmoothCorner
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    public static ActionCommand CloseSketchEditor { get; } = new(
        () =>
        {
            var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            tool?.Stop();
        },
        () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool)
    {
        Title = () => "Close Sketch Editor",
        Header = () => "Close",
        Icon = () => "Generic-CloseTool",
        Description = () => "Closes the editor and saves the current state."
    };

    //--------------------------------------------------------------------------------------------------
        
    public static ActionCommand<Sketch> StartSketchEditor { get; } = new(
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

    public static ActionCommand ExportAllToFile { get; } = new(
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
        Header = () => "Export to File",
        Description = () => @"Export the current sketch in to a file."
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ExportAllToToSvgClipboard { get; } = new(
        () =>
        {
            var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (tool == null)
                return;

            var exporter = new SvgExchanger() as ISketchExporter;
            if (!exporter.DoExport(InteractiveContext.Current?.Clipboard, tool.Sketch))
            {
                ErrorDialogs.CannotExportToClipboard();
            }
        },
        () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool)
    {
        Header = () => "Export as SVG to Clipboard",
        Description = () => @"Export the current sketch in SVG format to the Windows clipboard."
    };
        
    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<bool> ImportFromFile { get; } = new(
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

                using (new ProcessingScope(tool.Sketch, "Import sketch from file."))
                {
                    if (replace && points?.Count > 0)
                    {
                        tool.Sketch.Clear();
                    }

                    tool.Sketch.AddElements(points, null, segments, constraints);
                    InteractiveContext.Current?.UndoHandler?.Commit();
                }
            }
        },
        () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool)
    {
        Header = (b) => b ? "Replace from File" : "Add from File",
        Description = (b) => b ? "Replaces the current sketch with new segments imported from the Windows clipboard."
        : "Adds new segments imported from the Windows clipboard."
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<bool> ImportFromClipboard { get; } = new(
        replace =>
        {
            var tool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (tool == null)
                return;

            var importer = new SvgExchanger() as ISketchImporter;
            if (!importer.DoImport(InteractiveContext.Current?.Clipboard, out var points, out var segments, out var constraints))
            {
                ErrorDialogs.CannotImportFromClipboard();
                return;
            }

            using (new ProcessingScope(tool.Sketch, "Import sketch from cliboard."))
            {
                if (replace && points?.Count > 0)
                {
                    tool.Sketch.Clear();
                }

                tool.Sketch.AddElements(points, null, segments, constraints);
                InteractiveContext.Current?.UndoHandler?.Commit();
            }
        },
        () =>
        {
            if (!(InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool))
                return false;
            return ExchangeRegistry.CanImportFromClipboard<ISketchImporter>(InteractiveContext.Current?.Clipboard);
        })
    {
        Header = (b) => b ? "Replace from Clipboard" : "Add from Clipboard",
        Description = (b) => b ? "Replaces the current sketch with new segments imported from the Windows clipboard."
                                 : "Adds new segments imported from the Windows clipboard."
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<Constraints> CreateConstraint { get; } = new(
        (constraintType) =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null)
                return;

            bool swapOrientation = false;
            if(InteractiveContext.Current?.WorkspaceController?.LockWorkingPlane ?? false)
            {
                swapOrientation = ((int) ((sketchEditTool.ViewRotation + 45.0) / 90.0) & 0x01) == 1;
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
                case Constraints.SmoothCorner:
                    sketchEditTool.CreateConstraint<SketchConstraintSmoothCorner>();
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
                swapOrientation = ((int) ((sketchEditTool.ViewRotation + 45.0) / 90.0) & 0x01) == 1;
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
                    return swapOrientation ? sketchEditTool.CanCreateConstraint<SketchConstraintVertical>() 
                               : sketchEditTool.CanCreateConstraint<SketchConstraintHorizontal>();
                case Constraints.Vertical:
                    return swapOrientation ? sketchEditTool.CanCreateConstraint<SketchConstraintHorizontal>() 
                               : sketchEditTool.CanCreateConstraint<SketchConstraintVertical>();
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
                    return swapOrientation ? sketchEditTool.CanCreateConstraint<SketchConstraintVerticalDistance>() 
                               : sketchEditTool.CanCreateConstraint<SketchConstraintHorizontalDistance>();
                case Constraints.VerticalDistance:
                    return swapOrientation ? sketchEditTool.CanCreateConstraint<SketchConstraintHorizontalDistance>() 
                               : sketchEditTool.CanCreateConstraint<SketchConstraintVerticalDistance>();
                case Constraints.Fixed:
                    return sketchEditTool.CanCreateConstraint<SketchConstraintFixed>();
                case Constraints.Tangent:
                    return sketchEditTool.CanCreateConstraint<SketchConstraintTangent>();
                case Constraints.SmoothCorner:
                    return sketchEditTool.CanCreateConstraint<SketchConstraintSmoothCorner>();
            }

            return false;
        })
    {
        Header = (constraintType) =>
        {
            switch (constraintType)
            {
                case Constraints.LineLength:         return "Length";
                case Constraints.CircleRadius:       return "Radius";
                case Constraints.Perpendicular:      return "Perpendicular";
                case Constraints.Parallel:           return "Parallel";
                case Constraints.Horizontal:         return "Horizontal";
                case Constraints.Vertical:           return "Vertical";
                case Constraints.Angle:              return "Angle";
                case Constraints.Concentric:         return "Concentric";
                case Constraints.Equal:              return "Equal";
                case Constraints.PointOnSegment:     return "Point on Segment";
                case Constraints.PointOnMidpoint:    return "Point on Midpoint";
                case Constraints.HorizontalDistance: return "Horizontal Distance";
                case Constraints.VerticalDistance:   return "Vertical Distance";
                case Constraints.Fixed:              return "Fixed";
                case Constraints.Tangent:            return "Tangent";
                case Constraints.SmoothCorner:       return "Smooth Corner";
                default:                             return "Create Constraint";
            }
        },
        Icon = (constraintType) => $"Sketch-Constraint{constraintType.ToString()}",
        Description = (creator) => $"Creates a new constraint."
    };

    //--------------------------------------------------------------------------------------------------

    static bool _StartOrStopSegmentCreator<T>(bool continuesModeEnabled) where T : SketchSegmentCreator, new()
    {
        var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
        if (sketchEditTool == null)
            return false;

        if (sketchEditTool.CurrentTool is T)
        {
            sketchEditTool.StopTool();
            return false;
        }

        bool continuesMode = continuesModeEnabled && sketchEditTool.ContinuesSegmentCreation;
        return sketchEditTool.StartSegmentCreation<T>(continuesMode);
    }

    public static ActionCommand<Segments> CreateSegment { get; } = new(
        (creator) =>
        {
            switch (creator)
            {
                case Segments.Circle:
                    _StartOrStopSegmentCreator<SketchSegmentCircleCreator>(false);
                    break;
                case Segments.Line:
                    _StartOrStopSegmentCreator<SketchSegmentLineCreator>(true);
                    break;
                case Segments.ArcCenter:
                    _StartOrStopSegmentCreator<SketchSegmentArcCenterCreator>(true);
                    break;
                case Segments.ArcRim:
                    _StartOrStopSegmentCreator<SketchSegmentArcRimCreator>(true);
                    break;
                case Segments.EllipseCenter:
                    _StartOrStopSegmentCreator<SketchSegmentEllipseCenterCreator>(false);
                    break;
                case Segments.EllipticalArcCenter:
                    _StartOrStopSegmentCreator<SketchSegmentEllipticalArcCenterCreator>(true);
                    break;
                case Segments.Rectangle:
                    _StartOrStopSegmentCreator<SketchSegmentRectangleCreator>(false);
                    break;
                case Segments.Bezier2:
                    _StartOrStopSegmentCreator<SketchSegmentBezier2Creator>(true);
                    break;
                case Segments.Bezier3:
                    _StartOrStopSegmentCreator<SketchSegmentBezier3Creator>(true);
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
                case Segments.Circle:              return "Circle";
                case Segments.Line:                return "Line";
                case Segments.ArcCenter:           return "Arc using Center";
                case Segments.ArcRim:              return "Arc using Rim";
                case Segments.EllipseCenter:       return "Ellipse";
                case Segments.EllipticalArcCenter: return "Elliptical Arc";
                case Segments.Rectangle:           return "Rectangle";
                case Segments.Bezier2:             return "Quadratic Bézier";
                case Segments.Bezier3:             return "Cubic Bézier";
                default:                           return "Create Segment";
            }
        },
        Icon = (creator) => $"Sketch-Segment{creator.ToString()}",
        IsCheckedBinding = (creator) => BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveSketchTool)}", BindingMode.OneWay,
                                                             EqualityToBoolConverter.Instance, $"SketchSegment{creator.ToString()}Creator"),
        Description = (creator) => $"Creates a new segment."
    };

    //--------------------------------------------------------------------------------------------------
    
    public static ActionCommand CreatePolyLine { get; } = new(
        () =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null)
                return;

            if (InteractiveContext.Current.EditorState.SketchContinuesSegmentCreation)
            {
                sketchEditTool.StopTool();
                return;
            }

            sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>(true);
        },
        () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool
    )
    {
        Header = () => "Polyline",
        Icon = () => $"Sketch-SegmentPolyLine",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.SketchContinuesSegmentCreation)}", BindingMode.OneWay),
        Description = () => $"Creates multiple continues segments."
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<double> RotateSketchView { get; } = new(
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
        Description = (param) => $"Rotates the viewport of the sketch 90° to the {(param < 0 ? "left" : "right.")}"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ToggleClippingPlane { get; } = new(
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
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.SketchClipPlaneEnabled)}", BindingMode.OneWay),
        Description = () => "Toggles the clipping of the whole model by the sketch plane."
    };

    //--------------------------------------------------------------------------------------------------
        
    public static ActionCommand RecenterGrid { get; } = new(
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
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveSketchTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(RecenterGridSketchTool)),
        Description = () => "Moves the grid to a new selected center point."
    };

    //--------------------------------------------------------------------------------------------------
    
    public static ActionCommand ScaleElement { get; } = new(
        () =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null)
                return;

            if (sketchEditTool.CurrentTool is ScaleElementSketchTool)
            {
                sketchEditTool.StopTool();
                return;
            }

            var tool = new ScaleElementSketchTool();
            sketchEditTool.StartTool(tool);
        },
        () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool sketchTool
              && (sketchTool.SelectedPoints.Count > 0 || sketchTool.SelectedSegments.Count > 0))
    {
        Header = () => "Scale",
        Icon = () => "Sketch-ScaleTool",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveSketchTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(ScaleElementSketchTool)),
        Description = () => "Scales selected points or segments."
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand MirrorElement { get; } = new(
        () =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null)
                return;

            if (sketchEditTool.CurrentTool is MirrorElementSketchTool)
            {
                sketchEditTool.StopTool();
                return;
            }

            var tool = new MirrorElementSketchTool();
            sketchEditTool.StartTool(tool);
        },
        () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool sketchTool
              && sketchTool.SelectedSegments.Count > 0)
    {
        Header = () => "Mirror",
        Icon = () => "Sketch-MirrorTool",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveSketchTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(MirrorElementSketchTool)),
        Description = () => "Mirrors selected points or segments by defining the mirror axis."
    };

    //--------------------------------------------------------------------------------------------------
    
    public static ActionCommand OffsetSegment { get; } = new(
        () =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null)
                return;

            if (sketchEditTool.CurrentTool is OffsetSegmentSketchTool)
            {
                sketchEditTool.StopTool();
                return;
            }

            var tool = new OffsetSegmentSketchTool();
            sketchEditTool.StartTool(tool);
        },
        () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool sketchTool
              && sketchTool.SelectedSegments.Count > 0)
    {
        Header = () => "Offset",
        Icon = () => "Sketch-OffsetTool",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveSketchTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(OffsetSegmentSketchTool)),
        Description = () => "Offsets selected segments."
    };
        
    //--------------------------------------------------------------------------------------------------

    public static ActionCommand SplitElement { get; } = new(
        () =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null)
                return;

            if (sketchEditTool.CurrentTool is SplitElementSketchTool)
            {
                sketchEditTool.StopTool();
                return;
            }

            var tool = new SplitElementSketchTool();
            sketchEditTool.StartTool(tool);
        },
        () => InteractiveContext.Current?.WorkspaceController?.CurrentTool is SketchEditorTool)
    {
        Header = () => "Split",
        Icon = () => "Sketch-SplitTool",
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.ActiveSketchTool)}", BindingMode.OneWay,
                                                EqualityToBoolConverter.Instance, nameof(SplitElementSketchTool)),
        Description = () => "1. Split a segment into two parts by selecting the position where to split.\n" 
                            + "2. Split a shared point into separate points for each segment."
    };
        
    //--------------------------------------------------------------------------------------------------

    static Type _GetConversionTargetType(Segments segments)
    {
        switch (segments)
        {
            case Segments.Line:          return typeof(SketchSegmentLine);
            case Segments.Arc:           return typeof(SketchSegmentArc);
            case Segments.EllipticalArc: return typeof(SketchSegmentEllipticalArc);
            case Segments.Bezier:        return typeof(SketchSegmentBezier);
            default:                     return null;
        }
    }

    public static ActionCommand<Segments> ConvertSegment { get; } = new(
        (target) =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null)
                return;

            var targetType = _GetConversionTargetType(target);
            if (targetType == null)
                return;

            var segments = sketchEditTool.SelectedSegments;
            var newSegments = new List<int>();
            foreach (var segment in segments)
            {
                var newSegmentIndex = SketchUtils.ConvertSegment(sketchEditTool.Sketch, segment, targetType);
                if(newSegmentIndex != SketchUtils.ConvertSegmentFailed)
                    newSegments.Add(newSegmentIndex);
            }

            if (newSegments.Count == 0) 
                return;

            InteractiveContext.Current?.UndoHandler?.Commit();
            sketchEditTool.Elements.Select(null, newSegments);
        },
        (target) =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            return sketchEditTool?.SelectedSegments.Count > 0 && sketchEditTool?.SelectedPoints.Count == 0 && sketchEditTool?.SelectedConstraints.Count == 0 
                   && sketchEditTool.SelectedSegments.TrueForAll(seg => SketchUtils.CanConvertSegment(sketchEditTool.Sketch, seg, _GetConversionTargetType(target)));
        })
    {
        Header = (target) =>
        {
            switch (target)
            {
                case Segments.Line:          return "To Line";
                case Segments.Arc:           return "To Arc";
                case Segments.EllipticalArc: return "To Elliptical Arc";
                case Segments.Bezier:        return "To Bezier";
                default:                     return "Convert";
            }
        },
        Description = (_) => "Convert a segment from one type to another."
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand WeldElements { get; } = new(
        () =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null)
                return;

            bool success = false;
            if (sketchEditTool.SelectedPoints.Count > 0 && sketchEditTool.SelectedSegments.Count > 0)
            {
                success = SketchUtils.WeldPointsWithSegments(sketchEditTool.Sketch, sketchEditTool.SelectedSegments, sketchEditTool.SelectedPoints);
            }
            else if (sketchEditTool.SelectedPoints.Count > 1)
            {
                success = SketchUtils.WeldPoints(sketchEditTool.Sketch, sketchEditTool.SelectedPoints);
            }
            else if (sketchEditTool.SelectedSegments.Count == 2)
            {
                success = SketchUtils.WeldSegments(sketchEditTool.Sketch, sketchEditTool.SelectedSegments);
            }

            if (success)
            {
                InteractiveContext.Current?.UndoHandler?.Commit();
                sketchEditTool.Select(null, null);
            }
        },
        () =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null)
                return false;

            return sketchEditTool.SelectedPoints.Count > 0 && sketchEditTool.SelectedSegments.Count > 0
                   || sketchEditTool.SelectedPoints.Count > 1
                   || sketchEditTool.SelectedSegments.Count == 2;
        }
    )
    {
        Header = () => "Weld",
        Icon = () => "Sketch-WeldTool",
        Description = () => "Weld selected elements based on selection.\n" 
                            + "1. Points will be welded to the geometric center of all points.\n" 
                            + "2. Points will be welded on segments they are lying on.\n" 
                            + "3. Segments will be welded where they are tangent or intersecting."
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ToggleAuxiliaryFlag { get; } = new(
        () =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null || sketchEditTool.SelectedSegments.Count < 0)
                return;

            var sketch = sketchEditTool.Sketch;
            bool newState = !sketchEditTool.SelectedSegments[0].IsAuxilliary;
            sketch.SaveUndo(Sketch.ElementType.Segment);
            sketchEditTool.SelectedSegments.ForEach(seg =>
            {
                seg.IsAuxilliary = newState;
            });
            sketch.OnElementsChanged(Sketch.ElementType.Segment);
            sketch.Invalidate();
            InteractiveContext.Current?.UndoHandler?.Commit();
        },
        () =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null)
                return false;

            return sketchEditTool.SelectedSegments.Count > 0;
        }
    )
    {
        Header = () => "Toggle Auxiliary",
        Description = () => "Toggles the auxiliary flag on the selected segments."
    };

    //--------------------------------------------------------------------------------------------------
}