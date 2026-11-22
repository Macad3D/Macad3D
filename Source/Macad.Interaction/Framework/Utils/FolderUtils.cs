using System.Collections.Generic;
using System.Linq;
using Macad.Core;
using Macad.Core.Topology;

namespace Macad.Interaction;

/// <summary>
/// Operations on the folders of the current document, used by the folder commands and the document explorer.
/// </summary>
public static class FolderUtils
{
    public const string DefaultFolderName = "New Folder";

    //--------------------------------------------------------------------------------------------------

    static FolderCollection _Folders
    {
        get { return CoreContext.Current?.Document?.Folders; }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns true if the folder belongs to the current document.
    /// </summary>
    public static bool IsValidFolder(Folder folder)
    {
        return folder != null && (_Folders?.Contains(folder) ?? false);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Adds a new folder with a unique default name to the parent folder, or at root if parent is null.
    /// </summary>
    public static Folder AddFolder(Folder parent)
    {
        var fc = _Folders;
        if (fc == null)
            return null;

        if (parent != null && !fc.Contains(parent))
            parent = null;

        var folder = new Folder { Name = fc.MakeUniqueName(DefaultFolderName, parent) };
        fc.Add(folder, parent);
        CoreContext.Current.UndoHandler.Commit();
        return folder;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Renames the folder as one undo step. The name is trimmed and made unique among its siblings.
    /// Returns false if the name is empty or unchanged.
    /// </summary>
    public static bool RenameFolder(Folder folder, string newName)
    {
        newName = newName?.Trim();
        if (!IsValidFolder(folder) || string.IsNullOrEmpty(newName) || newName == folder.Name)
            return false;

        folder.Name = _Folders.MakeUniqueName(newName, folder.Parent, folder);
        CoreContext.Current.UndoHandler.Commit();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Removes the folders, after asking for confirmation if askUser is set. The contents are moved to the parent folder.
    /// </summary>
    public static bool RemoveFolders(IReadOnlyCollection<Folder> folders, bool askUser = true)
    {
        var fc = _Folders;
        if (fc == null)
            return false;

        folders = folders.Where(fc.Contains).ToArray();
        if (folders.Count == 0)
            return false;

        if (askUser && !Dialogs.Dialogs.AssureFolderRemoval(folders.Count > 1, string.Join(", ", folders.Select(f => f.Name))))
            return false;

        foreach (var folder in folders)
        {
            fc.Remove(folder);
        }
        CoreContext.Current.UndoHandler.Commit();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns true if moving the items (folders and interactive entities) into target (null = root)
    /// is valid and changes at least one item.
    /// </summary>
    public static bool CanMoveToFolder(IEnumerable<object> items, Folder target)
    {
        var fc = _Folders;
        if (fc == null || items == null)
            return false;

        if (target != null && !fc.Contains(target))
            return false;

        bool anyChange = false;
        foreach (var item in items)
        {
            switch (item)
            {
                case Folder folder:
                    if (!fc.Contains(folder) || !fc.CanMove(folder, target))
                        return false;
                    anyChange |= folder.Parent != target;
                    break;

                case InteractiveEntity entity:
                    anyChange |= entity.Folder != target;
                    break;

                default:
                    return false;
            }
        }
        return anyChange;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Moves the items (folders and interactive entities) into target (null = root) as one undo step.
    /// </summary>
    public static bool MoveToFolder(IEnumerable<object> items, Folder target)
    {
        var list = items?.ToArray();
        if (!CanMoveToFolder(list, target))
            return false;

        foreach (var item in list)
        {
            switch (item)
            {
                case Folder folder:
                    folder.Parent = target;
                    break;
                case InteractiveEntity entity:
                    entity.Folder = target;
                    break;
            }
        }
        CoreContext.Current.UndoHandler.Commit();
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns the folders which must be expanded to show the entities, i.e. all collapsed
    /// folders containing one of the entities directly or indirectly.
    /// </summary>
    public static IEnumerable<Folder> GetCollapsedFolders(IEnumerable<InteractiveEntity> entities)
    {
        var fc = _Folders;
        if (fc == null || entities == null)
            return [];

        var result = new HashSet<Folder>();
        foreach (var entity in entities)
        {
            int guard = fc.Count + 1;
            for (var folder = fc.Find(entity.FolderId); folder != null && guard-- > 0; folder = folder.Parent)
            {
                if (!folder.IsExpanded)
                    result.Add(folder);
            }
        }
        return result;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Expands all folders containing one of the entities, so that the entities are shown in the document explorer.
    /// The expanded state is not recorded for undo.
    /// </summary>
    public static bool ExpandToEntities(IEnumerable<InteractiveEntity> entities)
    {
        var folders = GetCollapsedFolders(entities).ToArray();
        foreach (var folder in folders)
        {
            folder.IsExpanded = true;
        }
        return folders.Length > 0;
    }

    //--------------------------------------------------------------------------------------------------
}
