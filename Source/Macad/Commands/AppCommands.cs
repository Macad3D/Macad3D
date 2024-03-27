using System.ComponentModel;
using System.Diagnostics;
using System.Reflection;
using System.Windows;
using System.Windows.Input;
using System.Windows.Threading;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Interaction.Dialogs;
using Macad.Presentation;

namespace Macad.Window;

public static class AppCommands
{
    public static ActionCommand ExitApplication { get; } = new(
        () => { Application.Current.MainWindow.Close(); })
    {
        Header = () => "Exit Program"
    };

    //--------------------------------------------------------------------------------------------------

    internal static RelayCommand InitApplication { get; } = new(
        () =>
        {
            Messages.Info("Welcome to Macad|3D.");

            DocumentCommands.CreateNewModel.Execute();

            // Check for update
            if (!AppContext.IsInSandbox && VersionCheck.IsAutoCheckEnabled)
            {
                Dispatcher.CurrentDispatcher.BeginInvoke(VersionCheck.BeginCheckForUpdate, DispatcherPriority.ApplicationIdle);
            }
        });

    //--------------------------------------------------------------------------------------------------

    internal static RelayCommand RunStartupCommands { get; } = new(
        () =>
        {
            var cmdArgs = AppContext.CommandLine;

            // Check for command line option to load project
            if (cmdArgs.HasPathToOpen
                && DocumentCommands.OpenFile.CanExecute(cmdArgs.PathToOpen))
            {
                // Load models immediately, import other files deferred.
                // Importers can open dialogs, which is not allowed before main window is shown
                if (PathUtils.GetExtensionWithoutPoint(cmdArgs.PathToOpen).Equals(Model.FileExtension))
                {
                    DocumentCommands.OpenFile.Execute(cmdArgs.PathToOpen);
                }
                else
                {
                    Dispatcher.CurrentDispatcher.InvokeAsync(() => DocumentCommands.OpenFile.Execute(cmdArgs.PathToOpen), DispatcherPriority.Loaded);
                }
            }

            // Check for command line option to run script
            if (cmdArgs.HasScriptToRun)
            {
                ToolboxCommands.RunScriptCommand.Execute(cmdArgs.ScriptToRun);
            }
        });

    //--------------------------------------------------------------------------------------------------

    public static RelayCommand<CancelEventArgs> PrepareWindowClose { get; } = new(
        (e) =>
        {
            if (DocumentCommands.SaveAll.CanExecute())
            {
                var result = Dialogs.AskForSavingChanges();
                switch (result)
                {
                    case TaskDialogResults.Cancel:
                        e.Cancel = true;
                        return;

                    case TaskDialogResults.Yes:
                        DocumentCommands.SaveAll.Execute();
                        e.Cancel = DocumentCommands.SaveAll.CanExecute();
                        break;

                    case TaskDialogResults.No:
                        break;
                }
            }
        });

    //--------------------------------------------------------------------------------------------------


    public static ActionCommand ShowAboutDialog { get; } = new(
        () =>
        {
            new AboutDialog
            {
                Owner = MainWindow.Current
            }.ShowDialog();
        })
    {
        Header = () => "About Macad|3D...",
        Description = () => "Shows version and license information.",
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ShowLayerEditor { get; } = new(
        () => MainWindow.Current?.Docking.ActivateToolAnchorable("Layers"))
    {
        Header = () => "Layer Editor",
        Description = () => "Opens the layer editor.",
        Icon = () => "Layer-Editor"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ShowShapeInspector { get; } = new(
        () => { MainWindow.Current?.Docking.ActivateToolAnchorable("ShapeInspector"); })
    {
        Header = () => "Shape Inspector",
        Description = () => "Opens the shape inspector.",
        Icon = () => "Tool-ShapeInspect"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ResetWindowLayout { get; } = new(
        () => { MainWindow.Current?.Docking.LoadWindowLayout("Default"); })
    {
        Header = () => "Reset Window Layout",
        Description = () => "Resets the window layout to the default layout.",
        Icon = () => "App-RestoreLayout"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<string> ShowHelpTopic { get; } = new(
        (topicId) =>
        {
            var version = Assembly.GetExecutingAssembly().GetName().Version;
            var url = $"https://macad3d.net/userguide/go/?version={version.Major}.{version.Minor}&guid={topicId}";
            Process.Start(new ProcessStartInfo(url) { UseShellExecute = true });
        })
    {
        Header = (topicId) => "Show User Guide",
        Description = (topicId) => "Open and browse the Macad|3D User Guide.",
        Icon = (topicId) => "App-UserGuide"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<object> ShowHelp { get; } = new(
        (obj) =>
        {
            string topicId = null;
            if (obj is string s)
            {
                topicId = s;
            }
            else
            {
                DependencyObject source = obj as DependencyObject ?? MainWindow.Current;
                DependencyObject currentObj = FocusManager.GetFocusedElement(source) as DependencyObject;
                while (topicId == null && currentObj != null)
                {
                    topicId = Help.GetTopicId(currentObj);
                    currentObj = LogicalTreeHelper.GetParent(currentObj);
                }
            }

            ShowHelpTopic.Execute(topicId ?? "");
        })
    {
        Header = (topicId) => "Show User Guide",
        Description = (topicId) => "Open and browse the Macad|3D User Guide.",
        Icon = (topicId) => "App-UserGuide"
    };
    
    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ShowShortcutCheatSheet { get; } = new(
        () => 
        {
            ShortcutCheatSheet.Execute(MainWindow.Current);
        })
    {
        Header = () => "Keyboard Shortcuts",
        Description = () => "Shows a cheatsheet with all keyboard shortcuts currently defined.",
        Icon = () => "App-ShortcutHelp"
    };

    //--------------------------------------------------------------------------------------------------

}