using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Occt;
using ModelContextProtocol;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Windows;

namespace Macad.Mcp;

public abstract partial class ToolsBase
{
    #region Execution

    // Runs the work on the UI thread. If the work throws, all changes not yet committed are reverted
    // and the error messages reported by Macad during the call are attached to the exception.
    protected static Task<T> Invoke<T>(Func<T> work)
    {
        var dispatcher = Application.Current?.Dispatcher;
        if (dispatcher != null)
        {
            return dispatcher.InvokeAsync(() => _Execute(work)).Task;
        }

        try
        {
            return Task.FromResult(_Execute(work));
        }
        catch (Exception ex)
        {
            return Task.FromException<T>(ex);
        }
    }

    //--------------------------------------------------------------------------------------------------

    static T _Execute<T>(Func<T> work)
    {
        var errors = new List<string>();
        var messageHandler = CoreContext.Current?.MessageHandler;

        void __OnMessage(object? sender, MessageItem item)
        {
            if (item.Severity == MessageSeverity.Error)
            {
                errors.Add(item.Text);
            }
        }

        //--------------------------------------------------------------------------------------------------

        if (messageHandler != null)
        {
            messageHandler.MessageThrown += __OnMessage;
        }

        var currentTool = InteractiveContext.Current.WorkspaceController.CurrentTool;
        if (currentTool != null)
        {
            if (!InteractiveContext.Current.WorkspaceController.CancelTool(currentTool, true))
            {
                throw new McpException("The user is currently using another tool which cannot be canceled.");
            }
        }

        // Changes the user made in the UI and which are not committed yet become an undo step of their own,
        // so a failing call reverts only its own changes.
        var undoHandler = CoreContext.Current?.UndoHandler;
        if (undoHandler?.HasPendingChanges == true)
        {
            undoHandler.Commit();
        }

        try
        {
            return work();
        }
        catch (Exception ex)
        {
            undoHandler?.Revert();
            if (errors.Count == 0 && ex is McpException)
            {
                throw;
            }

            var message = ex is McpException ? ex.Message : $"The operation failed: {ex.Message}";
            var additionalErrors = errors.Distinct().Where(error => !message.Contains(error)).ToList();
            if (additionalErrors.Count > 0)
            {
                message += "\n" + string.Join("\n", additionalErrors);
            }
            throw new McpException(message, ex);
        }
        finally
        {
            if (messageHandler != null)
            {
                messageHandler.MessageThrown -= __OnMessage;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    protected static void Commit()
    {
        CoreContext.Current.UndoHandler.Commit();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Bodies

    // Finds a body by its guid or, if the reference is not a guid, by its name.
    protected static Body ResolveBody(string reference)
    {
        if (string.IsNullOrWhiteSpace(reference))
        {
            throw new McpException("A body reference (guid or name) is required.");
        }

        var document = CoreContext.Current.Document;
        reference = reference.Trim();

        if (Guid.TryParse(reference, out var guid))
        {
            if (document.FindInstance(guid) is Body body && document.IndexOf(body) >= 0)
            {
                return body;
            }
            throw new McpException($"No body with the guid '{reference}' exists.");
        }

        var matches = document.OfType<Body>().Where(b => b.Name == reference).ToList();
        switch (matches.Count)
        {
            case 1:
                return matches[0];
            case 0:
                throw new McpException($"No body named '{reference}' exists.");
            default:
                throw new McpException($"The name '{reference}' is ambiguous, it is used by {matches.Count} bodies "
                                       + $"({string.Join(", ", matches.Select(b => b.Guid))}). Use the guid instead.");
        }
    }

    //--------------------------------------------------------------------------------------------------

    // Adds the body to the document. The name, or the default name if none is given, is made unique.
    protected static void AddBody(Body body, string? name = null)
    {
        body.Name = MakeUniqueName(string.IsNullOrWhiteSpace(name) ? body.Name : name.Trim());
        CoreContext.Current.Document.Add(body);
    }

    //--------------------------------------------------------------------------------------------------

    // Returns the name, or a suffixed variant of it, which is not used by any other body.
    protected static string MakeUniqueName(string name, Body? except = null)
    {
        var document = CoreContext.Current.Document;
        var usedNames = document.OfType<Body>().Where(b => b != except).Select(b => b.Name).ToHashSet();
        var uniqueName = name;
        while (usedNames.Contains(uniqueName))
        {
            uniqueName = document.AddNextNameSuffix(name);
        }
        return uniqueName;
    }

    //--------------------------------------------------------------------------------------------------

    // Returns the topmost sketch in the shape stack of the body.
    protected static Sketch FindSketch(Body body)
    {
        return GetShapeStack(body).OfType<Sketch>().FirstOrDefault()
               ?? throw new McpException($"The body '{body.Name}' does not contain a sketch.");
    }

    //--------------------------------------------------------------------------------------------------

    // Counts the closed and open wires formed by the sketch segments.
    protected static (int Closed, int Open) CountWires(Shape sketch)
    {
        int closed = 0, open = 0;
        var brep = sketch.GetBRep();
        if (brep != null)
        {
            foreach (var wire in brep.Wires())
            {
                if (BRep_Tool.IsClosed(wire))
                    closed++;
                else
                    open++;
            }
        }
        return (closed, open);
    }

    //--------------------------------------------------------------------------------------------------

    // Returns the face with the index (as listed by list_faces) of the body's current shape and its reference.
    protected static (TopoDS_Face face, SubshapeReference reference) GetFace(Body body, int index, bool requirePlanar, string usage)
    {
        var faces = body.Shape?.GetBRep()?.Faces()
                    ?? throw new McpException($"The shape of body '{body.Name}' could not be created, it has no faces.");
        if (index < 0 || index >= faces.Count)
        {
            throw new McpException($"No face with index {index} exists, the body '{body.Name}' has {faces.Count} faces (0 to {faces.Count - 1}). "
                                   + "Face indices change when the shape is modified, use list_faces again.");
        }
        var face = faces[index];
        if (requirePlanar)
        {
            var surfaceType = new BRepAdaptor_Surface(face).GetSurfaceType();
            if (surfaceType != GeomAbs_SurfaceType.Plane)
            {
                throw new McpException($"The face {index} is a {surfaceType} surface, only planar faces can be used {usage}.");
            }
        }
        var reference = body.Shape.GetSubshapeReference(SubshapeType.Face, index)
                        ?? throw new McpException($"The face {index} cannot be referenced.");
        return (face, reference);
    }

    //--------------------------------------------------------------------------------------------------

    // Builds the body's current shape and throws if it could not be created.
    protected static void EnsureValid(Body body)
    {
        var shape = body.Shape;
        if (shape?.GetBRep() != null && !shape.HasErrors)
        {
            return;
        }

        var messages = shape == null
                           ? null
                           : CoreContext.Current.MessageHandler?.GetEntityMessages(shape)?
                                        .Where(m => m.Severity == MessageSeverity.Error)
                                        .Select(m => m.Text);
        var details = messages?.Any() == true ? "\n" + string.Join("\n", messages.Distinct()) : "";
        throw new McpException($"The shape '{shape?.Name}' of body '{body.Name}' could not be created.{details}");
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Validation

    protected static void RequireFinite(double value, string parameter)
    {
        if (!double.IsFinite(value))
        {
            throw new McpException($"'{parameter}' must be a finite number (got {value}).");
        }
    }

    //--------------------------------------------------------------------------------------------------

    // Converts an optional [x, y, z] array to a vector. Returns the default value if the array is null.
    protected static Vec ToVec(double[]? coords, string parameter, Vec defaultValue)
    {
        if (coords == null)
        {
            return defaultValue;
        }
        if (coords.Length != 3 || coords.Any(c => !double.IsFinite(c)))
        {
            throw new McpException($"'{parameter}' must be an array of three finite numbers [x, y, z].");
        }
        return new Vec(coords[0], coords[1], coords[2]);
    }

    //--------------------------------------------------------------------------------------------------

    // Converts an optional [x, y, z] array to a direction. Returns null if the array is null.
    protected static Dir? ToDir(double[]? coords, string parameter)
    {
        if (coords == null)
        {
            return null;
        }
        var vec = ToVec(coords, parameter, Vec.Zero);
        if (vec.Magnitude() < 1e-9)
        {
            throw new McpException($"'{parameter}' must not be a zero vector.");
        }
        return new Dir(vec);
    }

    //--------------------------------------------------------------------------------------------------


    protected static void RequirePositive(double value, string parameter)
    {
        if (!double.IsFinite(value) || value <= 0)
        {
            throw new McpException($"'{parameter}' must be a finite number greater than 0 (got {value}).");
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}
