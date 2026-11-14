using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Occt;
using ModelContextProtocol;
using ModelContextProtocol.Server;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class DocumentTools : ToolsBase
{
    const string _BodyDescription = "The body, referenced by its guid or its unique name.";

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "list_bodies", ReadOnly = true)]
    [Description("Lists all bodies of the active document with their current (top) shape, visibility, error state "
                 + "and the bodies using them as operand (e.g. in a boolean).")]
    public Task<List<BodySummary>> ListBodies()
        => Invoke(() =>
        {
            return CoreContext.Current.Document.OfType<Body>().Select(BodySummary.From).ToList();
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "get_body", ReadOnly = true)]
    [Description("Returns details of a body: position, shape stack (top shape first), errors, bounding box in world "
                 + "coordinates (mm), and for solids the volume (mm³) and surface area (mm²).")]
    public Task<BodyDetails> GetBody(
        [Description(_BodyDescription)] string body)
        => Invoke(() =>
        {
            return BodyDetails.From(ResolveBody(body));
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "rename_body")]
    [Description("Renames a body. If the name is already taken, a unique name is generated. The actual name is returned.")]
    public Task<BodyInfo> RenameBody(
        [Description(_BodyDescription)] string body,
        [Description("The new name.")] string name)
        => Invoke(() =>
        {
            if (string.IsNullOrWhiteSpace(name))
            {
                throw new McpException("'name' must not be empty.");
            }

            var target = ResolveBody(body);
            target.Name = MakeUniqueName(name.Trim(), target);
            Commit();
            return BodyInfo.From(target);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "delete_body", Destructive = true)]
    [Description("Deletes a body. If other bodies use it as operand (e.g. in a boolean), its current geometry is "
                 + "copied into those bodies so they stay unchanged. Can be reverted with undo.")]
    public Task<string> DeleteBody(
        [Description(_BodyDescription)] string body)
        => Invoke(() =>
        {
            var target = ResolveBody(body);
            var users = GetUsingBodies(target);
            CoreContext.Current.Document.SafeDelete([target]);
            Commit();

            return users.Length == 0
                       ? $"Deleted body '{target.Name}'."
                       : $"Deleted body '{target.Name}'. Its geometry was copied into the bodies using it: {string.Join(", ", users)}.";
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "duplicate_body")]
    [Description("Creates an independent copy of a body at the same place, including its complete shape stack. "
                 + "Bodies used as operands (e.g. in a boolean) are copied as well, so changing the copy never changes the original. "
                 + "Use move_body to place the copy.")]
    public Task<BodyInfo> DuplicateBody(
        [Description(_BodyDescription)] string body,
        [Description("Optional name of the copy. If omitted or already taken, a unique name is generated.")] string? name = null)
        => Invoke(() =>
        {
            var source = ResolveBody(body);
            var document = CoreContext.Current.Document;

            var context = new SerializationContext(SerializationScope.CopyPaste);
            context.SetInstance(CoreContext.Current.Document);
            context.SetInstance<IDocument>(CoreContext.Current.Document);
            var serialized = Serializer.Serialize(new List<InteractiveEntity> { source }, context);

            context.SetInstance(ReadOptions.RecreateGuids);
            var cloneOptions = new CloneOptions(true);
            cloneOptions.AddEntitiesToClone([source]);
            context.SetInstance<CloneOptions>(cloneOptions);
            var cloned = Serializer.Deserialize<InteractiveEntity[]>(serialized, context);
            if (cloned?.FirstOrDefault() is not Body copy)
            {
                throw new McpException($"The body '{source.Name}' could not be duplicated.");
            }

            copy.Name = MakeUniqueName(string.IsNullOrWhiteSpace(name) ? source.Name : name.Trim());
            foreach (var entity in context.GetInstanceList<InteractiveEntity>())
            {
                // Copied operand bodies are hidden like their originals, with unique names so they can be referenced by name
                if (entity != copy)
                {
                    entity.Name = MakeUniqueName(entity.Name);
                    entity.IsVisible = false;
                }
                document.Add(entity);
            }
            EnsureValid(copy);
            Commit();
            return BodyInfo.From(copy);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "create_reference")]
    [Description("Creates a new body which shows the current shape of another body and follows all its changes, "
                 + "e.g. to place the same part several times. The reference starts at the place of the source; it can be "
                 + "moved and modified on its own, but its own shape cannot be edited. Use duplicate_body for an independent copy.")]
    public Task<BodyInfo> CreateReference(
        [Description(_BodyDescription)] string body,
        [Description("Optional name of the reference. If omitted or already taken, a unique name is generated.")] string? name = null)
        => Invoke(() =>
        {
            var source = ResolveBody(body);
            if (source.Shape?.ShapeType is not (ShapeType.Solid or ShapeType.Sketch))
            {
                throw new McpException($"The body '{source.Name}' is neither a solid nor a sketch and cannot be referenced.");
            }

            var reference = Reference.Create(source);
            AddBody(reference, string.IsNullOrWhiteSpace(name) ? source.Name + " Reference" : name);
            EnsureValid(reference);
            Commit();
            return BodyInfo.From(reference);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "set_visibility")]
    [Description("Shows or hides a body.")]
    public Task<BodyInfo> SetVisibility(
        [Description(_BodyDescription)] string body,
        [Description("True to show, false to hide.")] bool visible)
        => Invoke(() =>
        {
            var target = ResolveBody(body);
            target.IsVisible = visible;
            Commit();
            return BodyInfo.From(target);
        });

    //--------------------------------------------------------------------------------------------------

    #region Undo, Redo

    public sealed record UndoState(int Steps, bool CanUndo, bool CanRedo);

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "undo")]
    [Description("Undoes the last changes. Every tool call that changes the document is one undo step.")]
    public Task<UndoState> Undo(
        [Description("Number of steps to undo. Default 1.")] int steps = 1)
        => Invoke(() =>
        {
            var undoHandler = CoreContext.Current.UndoHandler;
            _RequireSteps(steps);
            if (!undoHandler.CanUndo)
            {
                throw new McpException("There is nothing to undo.");
            }

            int done = 0;
            while (done < steps && undoHandler.CanUndo)
            {
                undoHandler.DoUndo(1);
                done++;
            }
            return new UndoState(done, undoHandler.CanUndo, undoHandler.CanRedo);
        });

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "redo")]
    [Description("Redoes changes previously undone. Any new change clears the redo history.")]
    public Task<UndoState> Redo(
        [Description("Number of steps to redo. Default 1.")] int steps = 1)
        => Invoke(() =>
        {
            var undoHandler = CoreContext.Current.UndoHandler;
            _RequireSteps(steps);
            if (!undoHandler.CanRedo)
            {
                throw new McpException("There is nothing to redo.");
            }

            int done = 0;
            while (done < steps && undoHandler.CanRedo)
            {
                undoHandler.DoRedo(1);
                done++;
            }
            return new UndoState(done, undoHandler.CanUndo, undoHandler.CanRedo);
        });

    //--------------------------------------------------------------------------------------------------

    static void _RequireSteps(int steps)
    {
        if (steps < 1)
        {
            throw new McpException($"'steps' must be at least 1 (got {steps}).");
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Document

    [McpServerTool(Name = "new_document", Destructive = true)]
    [Description("Replaces the active document with a new, empty one. If the active document has unsaved changes "
                 + "(any modelling leaves some), the call is refused: ask the user whether to discard them, then call again "
                 + "with discardUnsavedChanges=true. Discarded changes cannot be restored.")]
    public Task<string> NewDocument(
        [Description("True to discard unsaved changes of the active document. Only after the user agreed. Default false.")] bool discardUnsavedChanges = false)
        => Invoke(() =>
        {
            if ((CoreContext.Current.Document?.HasUnsavedChanges ?? false) && !discardUnsavedChanges)
            {
                throw new McpException("The active document has unsaved changes. Ask the user whether to discard them, "
                                       + "then call new_document again with discardUnsavedChanges=true, or let the user save the document first.");
            }

            InteractiveContext.Current.DocumentController.NewModel();
            return "A new, empty document is active.";
        });

    //--------------------------------------------------------------------------------------------------

    #endregion

}
