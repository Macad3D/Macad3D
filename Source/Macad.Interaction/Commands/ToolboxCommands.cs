using System;
using System.Linq;
using System.Windows;
using System.Windows.Data;
using Macad.Interaction.Dialogs;
using Macad.Interaction.Editors.Toolkits;
using Microsoft.Win32;
using Macad.Core;
using Macad.Presentation;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Core.Topology;

namespace Macad.Interaction
{
    public static class ToolboxCommands
    {
        #region Helper

        static WorkspaceController WorkspaceController
        {
            get { return InteractiveContext.Current?.WorkspaceController; }
        }

        //--------------------------------------------------------------------------------------------------

        static UndoHandler UndoHandler
        {
            get { return InteractiveContext.Current?.UndoHandler; }
        }

        //--------------------------------------------------------------------------------------------------

        static bool _CanExecuteOnSingleSolid()
        {
            return WorkspaceController?.Selection != null
                   && WorkspaceController.Selection.SelectedEntities.Count == 1
                   && (WorkspaceController.Selection.SelectedEntities.First() as Body)?.Shape?.ShapeType == ShapeType.Solid;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        public static ActionCommand RunScriptFromCommand { get; } = new ActionCommand(
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

        public static ActionCommand<string> RunScriptCommand { get; } = new ActionCommand<string>(
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

        public static ActionCommand ExportViewHlr { get; } = new ActionCommand(
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
        
        public static ActionCommand CreateSliceContour { get; } = new ActionCommand(
            () =>
            {
                if (WorkspaceController.CurrentTool is SliceContourEditTool)
                {
                    WorkspaceController.CurrentTool.Stop();
                }
                else
                {
                    var body = WorkspaceController?.Selection?.SelectedEntities?.First() as Body;
                    if (body == null)
                        return;

                    var tool = new SliceContourEditTool(body);
                    WorkspaceController.StartTool(tool);
                }
            },
            () => _CanExecuteOnSingleSolid() || WorkspaceController?.CurrentTool is SliceContourEditTool)
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

        public static ActionCommand CreateEtchingMask { get; } = new ActionCommand(
            () =>
            {
                if (WorkspaceController.CurrentTool is EtchingMaskEditTool)
                {
                    WorkspaceController.CurrentTool.Stop();
                }
                else
                {
                    var body = WorkspaceController?.Selection?.SelectedEntities?.First() as Body;
                    if (body == null)
                        return;

                    var tool = new EtchingMaskEditTool(body);
                    WorkspaceController.StartTool(tool);
                }
            },
            () => _CanExecuteOnSingleSolid() || WorkspaceController?.CurrentTool is EtchingMaskEditTool)
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

    }
}