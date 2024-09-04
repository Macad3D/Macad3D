using System.Windows;
using Macad.Common;
using Macad.Presentation;

namespace Macad.Interaction.Dialogs;

public static class Dialogs
{
    public static TaskDialogResults AskForSavingChanges()
    {
        return TaskDialog.ShowMessage(Application.Current.MainWindow,
                                      "Save changes?",
                                      "There are unsaved changes left. Do you want to save them before exit?",
                                      "Unsaved Changes",
                                      TaskDialogCommonButtons.YesNoCancel, TaskDialogIcon.Warning);
    }

    //--------------------------------------------------------------------------------------------------

    public static TaskDialogResults AskForSavingModelChanges()
    {
        return TaskDialog.ShowMessage(Application.Current.MainWindow,
                                      "Save current model?",
                                      "The current model has unsaved changes, which will be discarded. Do you want to save the changes before proceeding?",
                                      "Unsaved Changes",
                                      TaskDialogCommonButtons.YesNoCancel, TaskDialogIcon.Warning);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool? AskDropImportBehaviour()
    {
        var options = new TaskDialogOptions()
        {
            Owner = Application.Current.MainWindow,
            MainIcon = TaskDialogIcon.Question,
            AllowDialogCancellation = true,
            Title = "Import Data",
            MainInstruction = "Where shall the file be imported to?",
            CommandButtons = new[]
            {
                "Create new model\nThe file will be imported into a new model.",
                "Merge into current\nThe file will be imported into the current model."
            },
            CommonButtons = TaskDialogCommonButtons.Cancel
        };

        var result = TaskDialog.Show(options);
        if (result.Result == TaskDialogResults.Command)
        {
            return result.CommandButtonResult == 1;
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool AssureComponentDeletion(string componentName)
    {
        return TaskDialog.ShowMessage(Application.Current.MainWindow,
                                      $"Remove {componentName} component?",
                                      $"Do you really want to remove the {componentName} component from this entity?",
                                      "Remove Component",
                                      TaskDialogCommonButtons.OKCancel, TaskDialogIcon.Warning) == TaskDialogResults.Ok;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool AssureAssetDeletion(bool multiple)
    {
        var s = multiple ? "s" : "";
        return TaskDialog.ShowMessage(Application.Current.MainWindow,
                                      $"Permamently delete asset{s}?",
                                      $"The file{s} of the selected asset{s} will be deleted permamently. This action cannot be reverted. The asset file is moved to the recycle bin of your drive, if enabled.",
                                      $"Delete Asset{s}",
                                      TaskDialogCommonButtons.OKCancel, TaskDialogIcon.Warning) == TaskDialogResults.Ok;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool AssureLayerDeletion(bool multiple, string names)
    {
        var s = multiple ? "s" : "";
        return TaskDialog.ShowMessage(Application.Current.MainWindow,
                                      $"Delete selected layer{s}?",
                                      $"The layer{s} '{names}' will be deleted permamently. This action cannot be reverted. All entities assigned to this layer will be reassigned to the default layer.",
                                      $"Delete Layer{s}",
                                      TaskDialogCommonButtons.OKCancel, TaskDialogIcon.Warning) == TaskDialogResults.Ok;
    }

    //--------------------------------------------------------------------------------------------------
        
    public static bool? AskBodyCloneBehaviour()
    {
        var options = new TaskDialogOptions()
        {
            Owner = Application.Current.MainWindow,
            MainIcon = TaskDialogIcon.Question,
            AllowDialogCancellation = true,
            Title = "Foreign Body References",
            MainInstruction = $"The new bodies contain references to foreign bodies.",
            CommandButtons = new[]
            {
                "Use existing bodies\nThe bodies in the model will be used for the new bodies as reference.",
                "Duplicate referenced bodies\nAll foreign bodies will be duplicated and be referenced by the new bodies."
            },
            CommonButtons = TaskDialogCommonButtons.None
        };

        var result = TaskDialog.Show(options);
        if (result.Result == TaskDialogResults.Command)
        {
            return result.CommandButtonResult == 1;
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------
        
    public static bool InformUpdateAvailable(string updateVersion, string updateUrl, ref bool autoCheckDisabled)
    {
        var options = new TaskDialogOptions()
        {
            Owner = Application.Current.MainWindow,
            MainIcon = TaskDialogIcon.Information,
            AllowDialogCancellation = true,
            Title = "Update available",
            MainInstruction = $"A new version is available for download.",
            VerificationText = "Disable update check",
            VerificationByDefault = autoCheckDisabled,
            CommandButtons = new[]
            {
                $"Update now to {updateVersion}\nYou will be forwarded to the download page where you can load and install the update.",
                $"Update later\nYou can download the update later by navigating to the address {updateUrl}."
            },
            CommonButtons = TaskDialogCommonButtons.None
        };

        var result = TaskDialog.Show(options);
        autoCheckDisabled = result.VerificationChecked ?? false;
        if (result.Result == TaskDialogResults.Command)
        {
            return result.CommandButtonResult == 0;
        }
        return false;
    }
    
    //--------------------------------------------------------------------------------------------------

    public static bool AskUseAspectRatioFromImageFile()
    {
        return TaskDialog.ShowMessage(Application.Current.MainWindow,
                                      $"Use Aspect Ratio from image?",
                                      $"The loaded image file has a different aspect ratio than the plane it will be assigned to. Should the Y-dimension of the plane adjusted to match the aspect ratio of the image?",
                                      $"Aspect Ratio",
                                      TaskDialogCommonButtons.YesNo, TaskDialogIcon.Question) == TaskDialogResults.Yes;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool AskUseDimensionsFromImageFile(double dimX, double dimY)
    {
        return TaskDialog.ShowMessage(Application.Current.MainWindow,
                                      $"Use dimensions from image?",
                                      $"The loaded image file has different dimensions than the plane it will be assigned to. Should the dimensions of the plane adjusted to match the image?\n\nImage dimensions: {dimX.ToRoundedString()} mm x {dimY.ToRoundedString()} mm.",
                                      $"Dimensions",
                                      TaskDialogCommonButtons.YesNo, TaskDialogIcon.Question) == TaskDialogResults.Yes;
    }

    //--------------------------------------------------------------------------------------------------

    public static bool AskSketchPointMerge(string pointList)
    {
        if(Application.Current?.MainWindow == null)
            return false;

        return TaskDialog.ShowMessage(Application.Current.MainWindow,
                                      $"Merge coincident points?",
                                      $"The following points are very close in position. These could be combined into one point if they should be coincident.\n Points: {pointList}",
                                      $"Merge Points",
                                      TaskDialogCommonButtons.YesNo, TaskDialogIcon.Question) == TaskDialogResults.Yes;
           
    }
}