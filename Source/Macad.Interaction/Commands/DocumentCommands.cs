using System;
using System.IO;
using Macad.Common;
using Macad.Interaction.Dialogs;
using Macad.Interaction.Panels;
using Macad.Presentation;

namespace Macad.Interaction;

public static class DocumentCommands
{
    #region Models

    public static ActionCommand CreateNewModel { get; } = new(
        () =>
        {
            if (InteractiveContext.Current.DocumentController.AskForSavingModelChanges())
                InteractiveContext.Current.DocumentController.NewModel();
        },
        () => !(InteractiveContext.Current?.DocumentController is null))
    {
        Header = () => "New Model",
        Description = () => "Create a new model.",
        Icon = () => "App-NewModel"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand SaveModel { get; } = new(
        () => { InteractiveContext.Current.DocumentController.SaveModel(); },
        () =>
        {
            if (!(InteractiveContext.Current?.DocumentController is null)
                && !(InteractiveContext.Current?.Document is null))
            {
                return InteractiveContext.Current.Document.HasUnsavedChanges;
            }

            return false;
        })
    {
        Header = () => "Save Model",
        Description = () => "Saves the current model to file.",
        Icon = () => "App-SaveModel"
    };

    //--------------------------------------------------------------------------------------------------
        
    public static ActionCommand SaveModelAs { get; } = new(
        () =>
        {
            InteractiveContext.Current.DocumentController.SaveModelAs();
        },
        () => !(InteractiveContext.Current?.DocumentController is null) && !(InteractiveContext.Current?.Document is null) )
    {
        Header = () => "Save Model As...",
        Description = () => "Saves the current model to a new file.",
        Icon = () => "App-SaveModel"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand SaveAll { get; } = new(
        () =>
        {
            if (InteractiveContext.Current.Document.HasUnsavedChanges)
            {
                InteractiveContext.Current.DocumentController.SaveModel();
            }
        },
        () => ((InteractiveContext.Current?.Document != null) && InteractiveContext.Current.Document.HasUnsavedChanges))
    {
        Header = () => "Save All",
        Description = () => "Saves all changes of all open items.",
        Icon = () => "App-SaveAll"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand OpenModelFrom { get; } = new(
        () =>
        {
            if (InteractiveContext.Current.DocumentController.AskForSavingModelChanges())
                InteractiveContext.Current.DocumentController.OpenModelFrom(String.Empty);
        },
        () => !(InteractiveContext.Current?.DocumentController is null))
    {
        Header = () => "Open Model...",
        Description = () => "Opens an existing Model.",
        Icon = () => "App-OpenModel"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<string> OpenFile { get; } = new(
        (fileName) => { InteractiveContext.Current.DocumentController.OpenFile(fileName, false); },
        (fileName) => !(InteractiveContext.Current?.DocumentController is null) && File.Exists(fileName))
    {
        Header = (fileName) => "Open Model",
        Description = (fileName) => "Opens an existing Model.",
        Icon = (fileName) => "App-OpenModel"
    };
        
    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<string> OpenRecentFile { get; } = new(
        (fileName) =>
        {
            if (!File.Exists(fileName))
            {
                if (ErrorDialogs.RecentFileNotFound(fileName))
                    InteractiveContext.Current.DocumentController.RemoveFromMruList(fileName);
                return;
            }

            InteractiveContext.Current.DocumentController.OpenFile(fileName, false);
        },
        () => InteractiveContext.Current?.DocumentController is not null)
    {
        Header = (fileName) => "Open Recent Model",
        Description = (fileName) => "Opens again a recently edited Model.",
        Icon = (fileName) => "App-OpenRecent"
    };

    //--------------------------------------------------------------------------------------------------
        
    public static ActionCommand<DocumentFilterFlags> ToggleFilterFlag { get; } = new(
        (flag) =>
        {
            var editorState = InteractiveContext.Current.EditorState;
            var flags = editorState.DocumentFilterFlags;
            if (flag.HasAny(DocumentFilterFlags.SortingKey))
            {
                if (flags.Has(flag))
                {
                    flags = flags.Toggled(flag);
                }
                else
                {
                    flags = flags.Removed(DocumentFilterFlags.SortingKey)
                                 .Added(flag);
                }
            }
            else
            {
                flags = flags.Toggled(flag);
            }
            editorState.DocumentFilterFlags = flags;
        },
        () => InteractiveContext.Current?.EditorState is not null)
    {
        Header = (flag) =>
        {
            return flag switch
            {
                DocumentFilterFlags.ActiveLayer => "In Active Layer",
                DocumentFilterFlags.Visible => "Is Visible",
                DocumentFilterFlags.SortDescending => "Descending",
                DocumentFilterFlags.SortByName => "Sort by Name",
                DocumentFilterFlags.SortByType => "Sort by Type",
                _ => ""
            };
        }
    };

    //--------------------------------------------------------------------------------------------------

    #endregion

}