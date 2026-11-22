using Macad.Core;
using Macad.Core.Topology;
using ModelContextProtocol;
using ModelContextProtocol.Server;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class FolderTools : ToolsBase
{
    const string _FolderDescription = "The folder, referenced by its guid, its unique name or its path like 'Parent/Child'.";

    //--------------------------------------------------------------------------------------------------

    #region Result structures

    public sealed record FolderInfo(string Guid, string Name, string Path, string? Parent, bool Expanded,
                                    string[] Folders, string[] Bodies)
    {
        public static FolderInfo From(Folder folder)
        {
            var folders = CoreContext.Current.Document.Folders;
            return new(folder.Guid.ToString(), folder.Name, GetFolderPath(folder)!, folder.Parent?.Guid.ToString(), folder.IsExpanded,
                       folders.GetChildren(folder).Select(f => f.Name).ToArray(),
                       CoreContext.Current.Document.OfType<Body>().Where(b => b.Folder == folder).Select(b => b.Name).ToArray());
        }
    }

    //--------------------------------------------------------------------------------------------------

    public sealed record FoldersResult(FolderInfo[] Folders, string[] RootBodies);

    #endregion

    //--------------------------------------------------------------------------------------------------

    #region Tools

    [McpServerTool(Name = "list_folders", ReadOnly = true)]
    [Description("Lists the folders of the document with their subfolders and bodies, parents before children. "
                 + "Folders only organize bodies in the document explorer; they have no effect on geometry, visibility or selection. "
                 + "A body is in at most one folder; bodies without a folder are at root.")]
    public Task<FoldersResult> ListFolders()
        => Invoke(_ListFolders);

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "create_folder")]
    [Description("Creates a new folder at root or inside a parent folder. Use move_to_folder to put bodies into it.")]
    public Task<FolderInfo> CreateFolder(
        [Description("Name of the folder. If the parent already has a folder with this name, a unique name is generated.")] string name,
        [Description("The parent folder (guid, unique name or path). Optional, the folder is created at root by default.")] string? parent = null)
        => Invoke(() =>
        {
            if (string.IsNullOrWhiteSpace(name))
            {
                throw new McpException("'name' must not be empty.");
            }

            var parentFolder = string.IsNullOrWhiteSpace(parent) ? null : _ResolveFolder(parent);
            var folders = CoreContext.Current.Document.Folders;
            var folder = new Folder { Name = folders.MakeUniqueName(name.Trim(), parentFolder) };
            folders.Add(folder, parentFolder);
            return _Commit(folder);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "rename_folder")]
    [Description("Renames a folder. If the parent already has a folder with this name, a unique name is generated.")]
    public Task<FolderInfo> RenameFolder(
        [Description(_FolderDescription)] string folder,
        [Description("The new name.")] string name)
        => Invoke(() =>
        {
            if (string.IsNullOrWhiteSpace(name))
            {
                throw new McpException("'name' must not be empty.");
            }

            var target = _ResolveFolder(folder);
            name = name.Trim();
            if (name != target.Name)
            {
                target.Name = CoreContext.Current.Document.Folders.MakeUniqueName(name, target.Parent, target);
            }
            return _Commit(target);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "delete_folder", Destructive = true)]
    [Description("Deletes a folder. Its bodies and subfolders are not deleted, they are moved to the folder's parent (or root). "
                 + "Can be reverted with undo.")]
    public Task<FoldersResult> DeleteFolder(
        [Description(_FolderDescription)] string folder)
        => Invoke(() =>
        {
            var target = _ResolveFolder(folder);
            CoreContext.Current.Document.Folders.Remove(target);
            _MarkChanged();
            return _ListFolders();
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "move_to_folder")]
    [Description("Moves bodies and folders into a folder, or to root if no folder is given. "
                 + "A folder cannot be moved into itself or one of its subfolders. Returns all folders.")]
    public Task<FoldersResult> MoveToFolder(
        [Description("The bodies to move (guids or unique names). Optional.")] string[]? bodies = null,
        [Description("The folders to move (guids, unique names or paths). Optional.")] string[]? folders = null,
        [Description("The target folder (guid, unique name or path). Optional, moves to root by default.")] string? folder = null)
        => Invoke(() =>
        {
            if ((bodies == null || bodies.Length == 0) && (folders == null || folders.Length == 0))
            {
                throw new McpException("Give at least one body or folder to move.");
            }

            var target = string.IsNullOrWhiteSpace(folder) ? null : _ResolveFolder(folder);
            var fc = CoreContext.Current.Document.Folders;
            var movedFolders = (folders ?? []).Select(_ResolveFolder).Distinct().ToList();
            foreach (var moved in movedFolders)
            {
                if (!fc.CanMove(moved, target))
                {
                    throw new McpException($"The folder '{GetFolderPath(moved)}' cannot be moved into itself or one of its subfolders.");
                }
            }
            var movedBodies = (bodies ?? []).Select(ResolveBody).Distinct().ToList();

            foreach (var moved in movedFolders)
            {
                moved.Parent = target;
            }
            foreach (var body in movedBodies)
            {
                body.Folder = target;
            }
            _MarkChanged();
            return _ListFolders();
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper

    static FoldersResult _ListFolders()
    {
        var fc = CoreContext.Current.Document.Folders;
        var ordered = new List<Folder>();
        void Collect(Folder? parent)
        {
            foreach (var child in fc.GetChildren(parent))
            {
                ordered.Add(child);
                Collect(child);
            }
        }
        Collect(null);

        return new FoldersResult(ordered.Select(FolderInfo.From).ToArray(),
                                 CoreContext.Current.Document.OfType<Body>().Where(b => b.Folder == null).Select(b => b.Name).ToArray());
    }

    //--------------------------------------------------------------------------------------------------

    // Finds a folder by its guid, its path or its name.
    static Folder _ResolveFolder(string reference)
    {
        if (string.IsNullOrWhiteSpace(reference))
        {
            throw new McpException("A folder reference (guid, name or path) is required.");
        }

        var fc = CoreContext.Current.Document.Folders;
        reference = reference.Trim();
        if (Guid.TryParse(reference, out var guid))
        {
            return fc.Find(guid) ?? throw new McpException($"No folder with the guid '{reference}' exists.");
        }

        var matches = fc.Where(f => f.Name == reference).ToList();
        if (matches.Count == 0 && reference.Contains('/'))
        {
            Folder? current = null;
            foreach (var part in reference.Split('/', StringSplitOptions.RemoveEmptyEntries | StringSplitOptions.TrimEntries))
            {
                var candidates = fc.GetChildren(current).Where(f => f.Name == part).ToList();
                if (candidates.Count != 1)
                {
                    throw new McpException(candidates.Count == 0
                                               ? $"No folder with the path '{reference}' exists."
                                               : $"The path '{reference}' is ambiguous. Use the guid instead.");
                }
                current = candidates[0];
            }
            return current ?? throw new McpException($"No folder with the path '{reference}' exists.");
        }

        return matches.Count switch
        {
            1 => matches[0],
            0 => throw new McpException($"No folder named '{reference}' exists. Folders: {string.Join(", ", fc.Select(f => $"'{GetFolderPath(f)}'"))}."),
            _ => throw new McpException($"The name '{reference}' is used by {matches.Count} folders "
                                        + $"({string.Join(", ", matches.Select(f => $"'{GetFolderPath(f)}'"))}). Use the path or guid instead.")
        };
    }

    //--------------------------------------------------------------------------------------------------

    // Folders are not tracked by the document's change detection, like in the UI they are marked explicitly.
    static void _MarkChanged()
    {
        Commit();
        CoreContext.Current.Document?.MarkAsUnsaved();
    }

    //--------------------------------------------------------------------------------------------------

    static FolderInfo _Commit(Folder folder)
    {
        _MarkChanged();
        return FolderInfo.From(folder);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
