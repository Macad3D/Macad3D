using Macad.Core;
using Macad.Core.Topology;

namespace Macad.Interaction;

/// <summary>
/// Operations on the interactive entities of the current document, used by the document explorer.
/// </summary>
public static class EntityUtils
{
    /// <summary>
    /// Renames the entity as one undo step. The name is trimmed, duplicate names are allowed.
    /// Returns false if the entity is not part of the current document, or the name is empty or unchanged.
    /// </summary>
    public static bool RenameEntity(InteractiveEntity entity, string newName)
    {
        var document = CoreContext.Current?.Document;
        newName = newName?.Trim();
        if (entity == null || document == null || document.IndexOf(entity) < 0
            || string.IsNullOrEmpty(newName) || newName == entity.Name)
            return false;

        entity.Name = newName;
        CoreContext.Current.UndoHandler.Commit();
        return true;
    }

    //--------------------------------------------------------------------------------------------------
}
