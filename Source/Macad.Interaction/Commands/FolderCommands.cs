using System.Linq;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Presentation;

namespace Macad.Interaction;

public static class FolderCommands
{
    public static ActionCommand<Folder> CreateFolder { get; } = new(
        parent => FolderUtils.AddFolder(parent),
        parent => CoreContext.Current?.Document != null)
    {
        Header = parent => "Add Folder",
        Description = parent => "Creates a new folder inside the selected folder, or at root if no folder is selected.",
        Icon = parent => "Generic-Add"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand<Folder> RemoveFolder { get; } = new(
        folder => FolderUtils.RemoveFolders(new[] { folder }),
        FolderUtils.IsValidFolder)
    {
        Header = folder => "Remove Folder",
        Description = folder => "Removes the selected folder. All entities and folders inside are moved to the parent folder.",
        Icon = folder => "Generic-Remove"
    };

    //--------------------------------------------------------------------------------------------------

    public static ActionCommand ExpandToSelection { get; } = new(
        () => FolderUtils.ExpandToEntities(InteractiveContext.Current?.WorkspaceController?.Selection.SelectedEntities),
        () => FolderUtils.GetCollapsedFolders(InteractiveContext.Current?.WorkspaceController?.Selection.SelectedEntities).Any())
    {
        Header = () => "Expand to Selection",
        Description = () => "Expands all folders containing the selected entities, so that they are shown in the document explorer."
    };

    //--------------------------------------------------------------------------------------------------
}
