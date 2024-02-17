using System.IO;
using System.Windows;
using Macad.Presentation;

namespace Macad.Interaction.Dialogs;

public static class ErrorDialogs
{
    public static void PathNotRelativeToProject()
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               "Path not in project directory.",
                               "The selected path is not part of the project directory or any subdirectory of the project directory. This is needed for correct reference.",
                               "Path not valid",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotLoadFile(string filePath)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Loading file {Path.GetFileName(filePath)} failed.",
                               $"The selected file {filePath} could not be loaded. This maybe because it is not found or has an invalid format.",
                               "File loading failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }
        
    //--------------------------------------------------------------------------------------------------

    public static void FileVersionIsNewer(string filePath)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"File format of {Path.GetFileName(filePath)} is newer.",
                               $"The selected file {filePath} was saved in a newer file format version, and can not safely be loaded. Please consider updating the program version.",
                               "File loading failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }
        
    //--------------------------------------------------------------------------------------------------

    public static void FileLoadedWithErrors(string filePath)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"File {Path.GetFileName(filePath)} loaded with errors.",
                               $"The selected file {filePath} has been loaded, but errors occured. See log for details. It is recommended to check the content and save to a new file.",
                               "File loading",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Warning);
    }

    //--------------------------------------------------------------------------------------------------
        
    public static bool RecentFileNotFound(string filePath) 
    {
        return TaskDialog.ShowMessage(Application.Current?.MainWindow,
                                      $"Recent file {Path.GetFileName(filePath)} not found.",
                                      $"The selected file {filePath} does no longer exist. Should it be removed from the recent file list?",
                                      "Recent file not found",
                                      TaskDialogCommonButtons.YesNo, TaskDialogIcon.Error) == TaskDialogResults.Yes;
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotSaveFile(string filePath)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Saving file {Path.GetFileName(filePath)} failed.",
                               $"The selected file {filePath} could not be saved. This maybe because it is read-only or the path does not exists.",
                               "File saving failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotDelete(string name, string message)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Deleting asset {Path.GetFileName(name)} failed.",
                               message,
                               "Asset deletion failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotRename(string name, string message)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Renaming asset {Path.GetFileName(name)} failed.",
                               message,
                               "Asset renaming failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotMove(string name, string message)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Moving asset {Path.GetFileName(name)} failed.",
                               message,
                               "Asset moving failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotCopy(string name, string message)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Copying asset {Path.GetFileName(name)} failed.",
                               message,
                               "Asset copy failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotRunScript(string scriptname)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Running script {Path.GetFileName(scriptname)} failed.",
                               $"The script {scriptname} cannot be compiled or failed to run. Please check log for details.",
                               "Run script failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotExport(string filePath)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Export to file {Path.GetFileName(filePath)} failed.",
                               $"The export to {filePath} has failed. This maybe because it is read-only, the path does not exists or the exporter itself throwed an error. Please check log for details.",
                               "Export failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotExportToClipboard()
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Export to clipboard failed.",
                               $"The export to clipboard has failed. This maybe because the export format does not support this or the exporter itself throwed an error. Please check log for details.",
                               "Export failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotImport(string filePath)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Import of file {Path.GetFileName(filePath)} failed.",
                               $"The import from {filePath} has failed. This maybe because the path does not exists or the importer itself throwed an error. Please check log for details.",
                               "Import failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotImportFromClipboard()
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Import from clipboard failed.",
                               $"The import from clipboard has failed. This maybe because the import format does not support this or the importer itself throwed an error. Please check log for details.",
                               "Import failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------
        
    public static void CannotLoadImage(string filePath)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               $"Loading image from file {Path.GetFileName(filePath)} failed.",
                               $"The file {filePath} does not contain valid image data or the image format is not supported.",
                               "Image loading failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }
        
    //--------------------------------------------------------------------------------------------------

    public static void CommandExecutionFailed(string detail)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               "Command execution failed.",
                               $"The selected command did not execute successfully. {detail} Please check log for details.",
                               "Command failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

    public static void CannotStartTool(string message)
    {
        TaskDialog.ShowMessage(Application.Current?.MainWindow,
                               "This Tool cannot be started.",
                               message,
                               "Tool failed",
                               TaskDialogCommonButtons.Close, TaskDialogIcon.Error);
    }

    //--------------------------------------------------------------------------------------------------

}