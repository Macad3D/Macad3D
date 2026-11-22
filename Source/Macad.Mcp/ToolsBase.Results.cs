using System.Collections.Generic;
using System.Linq;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;

namespace Macad.Mcp;

public abstract partial class ToolsBase
{
    public sealed record BodyInfo(string Guid, string Name, string Type)
    {
        public static BodyInfo From(Body body)
        {
            return new(body.Guid.ToString(), body.Name, body.GetType().Name);
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Returns the folder path like 'Parent/Child', or null if at root.
    /// </summary>
    public static string? GetFolderPath(Folder? folder)
    {
        if (folder == null)
            return null;

        var names = new List<string>();
        var folders = CoreContext.Current.Document.Folders;
        for (var f = folder; f != null && names.Count <= folders.Count; f = f.Parent)
        {
            names.Insert(0, f.Name);
        }
        return string.Join("/", names);
    }

    //--------------------------------------------------------------------------------------------------

    public sealed record BoundingBoxInfo(double MinX, double MinY, double MinZ, double MaxX, double MaxY, double MaxZ)
    {
        public double SizeX => MaxX - MinX;
        public double SizeY => MaxY - MinY;
        public double SizeZ => MaxZ - MinZ;

        public static BoundingBoxInfo? From(TopoDS_Shape? shape)
        {
            if (shape == null)
                return null;

            var box = new Bnd_Box();
            BRepBndLib.AddOptimal(shape, box, false, false);
            if (box.IsVoid())
                return null;

            double xMin = 0, yMin = 0, zMin = 0, xMax = 0, yMax = 0, zMax = 0;
            box.Get(ref xMin, ref yMin, ref zMin, ref xMax, ref yMax, ref zMax);
            return new(xMin, yMin, zMin, xMax, yMax, zMax);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public sealed record BodySummary(string Guid, string Name, bool Visible, string? Shape, string? ShapeType, bool HasErrors, string[] UsedBy,
                                     string? Layer, string? Folder)
    {
        public static BodySummary From(Body body)
        {
            return new(body.Guid.ToString(), body.Name, body.IsVisible, body.Shape?.GetType().Name, body.Shape?.ShapeType.ToString(),
                       body.HasErrors || (body.Shape?.HasErrors ?? false), GetUsingBodies(body), body.Layer?.Name,
                       GetFolderPath(body.Folder));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public sealed record BodyDetails(string Guid, string Name, bool Visible, double[] Position, string? ShapeType, 
                                     string[] ShapeStack, bool HasErrors, string[] Errors, string[] UsedBy,
                                     BoundingBoxInfo? BoundingBox, double? Volume, double? Area, string? Layer,
                                     string? Folder)
    {
        public static BodyDetails From(Body body)
        {
            var stack = GetShapeStack(body);
            var errors = new List<string>();
            foreach (var entity in stack.Cast<Entity>().Prepend(body))
            {
                var messages = CoreContext.Current.MessageHandler?.GetEntityMessages(entity);
                if (messages != null)
                {
                    errors.AddRange(messages.Where(m => m.Severity == MessageSeverity.Error).Select(m => m.Text));
                }
            }

            var brep = body.Shape?.GetTransformedBRep();
            bool isSolid = body.Shape?.ShapeType == Macad.Core.Shapes.ShapeType.Solid;
            return new(body.Guid.ToString(), body.Name, body.IsVisible,
                       [body.Position.X, body.Position.Y, body.Position.Z],
                       body.Shape?.ShapeType.ToString(), stack.Select(s => s.GetType().Name).ToArray(),
                       body.HasErrors || stack.Any(s => s.HasErrors), errors.Distinct().ToArray(), GetUsingBodies(body),
                       BoundingBoxInfo.From(brep), 
                       isSolid && brep != null ? brep.Volume() : null,
                       isSolid && brep != null ? brep.Area() : null,
                       body.Layer?.Name, GetFolderPath(body.Folder));
        }
    }

    //--------------------------------------------------------------------------------------------------

    public sealed record ShapeResult(string Guid, string Name, string Shape, string ShapeType, BoundingBoxInfo? BoundingBox, double? Volume)
    {
        public static ShapeResult From(Body body)
        {
            var brep = body.Shape.GetTransformedBRep();
            bool isSolid = body.Shape.ShapeType == Macad.Core.Shapes.ShapeType.Solid;
            return new(body.Guid.ToString(), body.Name, body.Shape.GetType().Name, body.Shape.ShapeType.ToString(),
                       BoundingBoxInfo.From(brep), isSolid && brep != null ? brep.Volume() : null);
        }
    }

    //--------------------------------------------------------------------------------------------------

    // Returns the shapes of the body, from the top (current) shape down to the root shape.
    protected static List<Shape> GetShapeStack(Body body)
    {
        var stack = new List<Shape>();
        var shape = body.Shape;
        while (shape != null && !stack.Contains(shape))
        {
            stack.Add(shape);
            shape = shape.Predecessor as Shape;
        }
        return stack;
    }

    //--------------------------------------------------------------------------------------------------

    // Returns the names of all other bodies which use this body as an operand.
    protected static string[] GetUsingBodies(Body body)
    {
        return body.GetDependents()
                   .OfType<ModifierBase>()
                   .Select(modifier => modifier.Body)
                   .Where(user => user != null && user != body)
                   .Select(user => user!.Name)
                   .Distinct()
                   .ToArray();
    }

    //--------------------------------------------------------------------------------------------------

}
