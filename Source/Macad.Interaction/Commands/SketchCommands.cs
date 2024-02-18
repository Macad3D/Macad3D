using System;
using System.Collections.Generic;
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
        PolyLine,
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
        Header = () => "Export to File"
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
        Header = () => "Export as SVG to Clipboard"
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
            return ExchangeRegistry.CanImportFromClipboard<ISketchImporter>(InteractiveContext.Current?.Clipboard);
        })
    {
        Header = (b) => b ? "Replace from Clipboard" : "Add from Clipboard"
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
        Icon = (constraintType) => $"Sketch-Constraint{constraintType.ToString()}"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<Segments> CreateSegment { get; } = new(
        (creator) =>
        {
            var sketchEditTool = InteractiveContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool;
            if (sketchEditTool == null)
                return;

            switch (creator)
            {
                case Segments.Circle:
                    sketchEditTool.StartSegmentCreation<SketchSegmentCircleCreator>();
                    break;
                case Segments.Line:
                    sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>();
                    break;
                case Segments.PolyLine:
                    sketchEditTool.StartSegmentCreation<SketchSegmentLineCreator>(true);
                    break;
                case Segments.ArcCenter:
                    sketchEditTool.StartSegmentCreation<SketchSegmentArcCenterCreator>();
                    break;
                case Segments.ArcRim:
                    sketchEditTool.StartSegmentCreation<SketchSegmentArcRimCreator>();
                    break;
                case Segments.EllipseCenter:
                    sketchEditTool.StartSegmentCreation<SketchSegmentEllipseCenterCreator>();
                    break;
                case Segments.EllipticalArcCenter:
                    sketchEditTool.StartSegmentCreation<SketchSegmentEllipticalArcCenterCreator>();
                    break;
                case Segments.Rectangle:
                    sketchEditTool.StartSegmentCreation<SketchSegmentRectangleCreator>();
                    break;
                case Segments.Bezier2:
                    sketchEditTool.StartSegmentCreation<SketchSegmentBezier2Creator>();
                    break;
                case Segments.Bezier3:
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
                case Segments.Circle:              return "Circle";
                case Segments.Line:                return "Line";
                case Segments.PolyLine:            return "Polyline";
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
                                                             EqualityToBoolConverter.Instance, $"SketchSegment{creator.ToString()}Creator")
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
        IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, $"{nameof(EditorState)}.{nameof(EditorState.SketchClipPlaneEnabled)}", BindingMode.OneWay)
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
                                                EqualityToBoolConverter.Instance, nameof(RecenterGridSketchTool))
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
}