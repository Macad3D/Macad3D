using System.Linq;
using System.Windows;
using System.Windows.Data;
using Macad.Interaction.Dialogs;
using Macad.Interaction.Editors.Toolkits;
using Microsoft.Win32;
using Macad.Core;
using Macad.Presentation;
using Macad.Common;
using Macad.Core.Drawing;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Core.Topology;

namespace Macad.Interaction
{
    public static class ToolboxCommands
    {
        #region Helper

        static WorkspaceController _WorkspaceController
        {
            get { return InteractiveContext.Current?.WorkspaceController; }
        }

        //--------------------------------------------------------------------------------------------------

        static UndoHandler _UndoHandler
        {
            get { return InteractiveContext.Current?.UndoHandler; }
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CanExecuteOnSingleSolid()
        {
            return _WorkspaceController?.Selection != null
                   && _WorkspaceController.Selection.SelectedEntities.Count == 1
                   && (_WorkspaceController.Selection.SelectedEntities.First() as Body)?.Shape?.ShapeType == ShapeType.Solid;
        }
        
        //--------------------------------------------------------------------------------------------------

        static bool _CanExecuteOnSingleSketch()
        {
            return _WorkspaceController?.Selection != null
                   && _WorkspaceController.Selection.SelectedEntities.Count == 1
                   && (_WorkspaceController.Selection.SelectedEntities.First() as Body)?.Shape?.ShapeType == ShapeType.Sketch;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        public static ActionCommand RunScriptFrom { get; } = new(
            () =>
            {
                var dlg = new OpenFileDialog()
                {
                    Title = "Open Script...",
                    CheckFileExists = true,
                    Filter = "C# script file|*.csx",
                    DefaultExt = "csx",
                };
                var result = dlg.ShowDialog(Application.Current.MainWindow);
                if (result ?? false)
                {
                    RunScriptCommand.Execute(dlg.FileName);
                }
            },
            () => true
        )
        {
            Header = () => "Run Script",
            Title = () => "Run Script From File",
            Description = () => "Select and execute a script file (.csx).",
            Icon = () => "Tool-RunScript"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand<string> RunScriptCommand { get; } = new(
            (param) =>
            {
                if (param.IsNullOrEmpty())
                    return;

                ScriptInstance script;
                bool success = false;
                using (new WaitCursor())
                {
                    script = ScriptInstance.LoadScriptFromFile(param, InteractiveScriptContext.Default);
                    success = script?.Run() ?? false;
                }
                if (!success)
                {
                    ErrorDialogs.CannotRunScript(param);
                    return;
                }

                InteractiveContext.Current.AddToScriptMruList(script.Path);
                InteractiveContext.Current?.WorkspaceController?.Invalidate();
            },
            (param) => true
        )
        {
            Header = (param) => "Run Script",
            Title = (param) =>"Run Script From File",
            Description = (param) =>"Select and execute a script file (.csx).",
            Icon = (param) => "Tool-RunScript"
        };
        
        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ExportViewHlr { get; } = new(
            () =>
            {
                ExportViewportHlr.Execute(Application.Current.MainWindow, InteractiveContext.Current?.ViewportController?.Viewport);
            },
            () => InteractiveContext.Current?.ViewportController?.Viewport != null)
        {
            Header = () => "Create From View",
            Title = () => "Create Drawing From View",
            Description = () => "Create a 2D line drawing from the current view and save it to a vector file.",
            Icon = () => "View-ExportDrawing",
            HelpTopic = "0c834add-faf4-48f0-a8c3-e6dce411774c"
        };

        //--------------------------------------------------------------------------------------------------
        
        public static ActionCommand CreateSliceContour { get; } = new(
            () =>
            {
                if (_WorkspaceController.CurrentTool is SliceContourEditTool)
                {
                    _WorkspaceController.CurrentTool.Stop();
                }
                else
                {
                    var body = _WorkspaceController?.Selection?.SelectedEntities?.First() as Body;
                    if (body == null)
                        return;

                    var tool = new SliceContourEditTool(body);
                    _WorkspaceController.StartTool(tool);
                }
            },
            () => _CanExecuteOnSingleSolid() || _WorkspaceController?.CurrentTool is SliceContourEditTool)
        {
            Header = () => "Slice Contour",
            Title = () => "Create Slice Contour",
            Description = () => "Create and export the contours of a number of slices from the selected body.",
            Icon = () => "Make-SliceContour",
            HelpTopic = "0c834add-faf4-48f0-a8c3-e6dce411774c",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.TwoWay,
                                                    EqualityToBoolConverter.Instance, nameof(SliceContourEditTool))
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand CreateEtchingMask { get; } = new(
            () =>
            {
                if (_WorkspaceController.CurrentTool is EtchingMaskEditTool)
                {
                    _WorkspaceController.CurrentTool.Stop();
                }
                else
                {
                    var body = _WorkspaceController?.Selection?.SelectedEntities?.First() as Body;
                    if (body == null)
                        return;

                    var tool = new EtchingMaskEditTool(body);
                    _WorkspaceController.StartTool(tool);
                }
            },
            () => _CanExecuteOnSingleSolid() || _WorkspaceController?.CurrentTool is EtchingMaskEditTool)
        {
            Header = () => "Etching Mask",
            Title = () => "Create Etching Mask",
            Description = () => "Create and export the mask from the selected body for etching.",
            Icon = () => "Make-EtchingMask",
            HelpTopic = "0c834add-faf4-48f0-a8c3-e6dce411774c",
            IsCheckedBinding = BindingHelper.Create(InteractiveContext.Current, "EditorState.ActiveTool", BindingMode.TwoWay,
                                                    EqualityToBoolConverter.Instance, nameof(EtchingMaskEditTool))
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ExportPipeDrawing { get; } = new(
            () =>
            {
                var body = _WorkspaceController.Selection.SelectedEntities.First() as Body;
                if (body == null || PipeDrawing.FindPipeModifier(body) == null)
                {
                    return; // That shouldn't ever happen
                }

                if (!ExportDialog.Execute<IDrawingExporter>(out string fileName, out var exporter))
                    return; // Cancelled

                if (!ExchangerSettings.Execute<IDrawingExporter>(exporter))
                    return;

                Drawing drawing = new()
                {
                    Name = "Pipe"
                };
                drawing.Add(PipeDrawing.Create(body));

                if (!exporter.DoExport(fileName, drawing))
                {
                    ErrorDialogs.CannotExport(fileName);
                }
            },
            () => _CanExecuteOnSingleSolid() && PipeDrawing.FindPipeModifier(_WorkspaceController.Selection.SelectedEntities.First() as Body) != null)
        {
            Header = () => "Pipe Drawing",
            Title = () => "Create Pipe Drawing",
            Description = () => "Create and export a drawing with dimensions for bending pipes.",
            Icon = () => "Make-PipeDrawing",
            HelpTopic = "69425fd0-ff1a-4dc3-9014-12860684e057"
        };

        //--------------------------------------------------------------------------------------------------

        public static ActionCommand ConvertToEditableSketch { get; } = new(
            () =>
            {
                var body = _WorkspaceController.Selection.SelectedEntities.First() as Body;
                if (body == null || body.Shape.ShapeType != ShapeType.Sketch)
                    return; // That shouldn't ever happen

                if (!Core.Toolkits.ConvertToEditableSketch.CollapseShapeStack(body))
                {
                    ErrorDialogs.CommandExecutionFailed("The selected shape cannot be converted to a editable sketch.");
                    return;
                }

                InteractiveContext.Current.UndoHandler.Commit();
            },
            () => _CanExecuteOnSingleSketch() && (_WorkspaceController.Selection.SelectedEntities.First() as Body)?.Shape.ShapeType == ShapeType.Sketch)
        {
            Header = () => "Convert to Sketch",
            Title = () => "Convert to editable Sketch",
            Description = () => "Convert the current shape into an editable sketch and replace the shape stack of the selected body with it.",
            Icon = () => "Tool-ConvertToSketch",
            HelpTopic = "6ce2c1bf-b08b-4f62-a37a-50ac16fb2845"
        };

        //--------------------------------------------------------------------------------------------------

    }
}