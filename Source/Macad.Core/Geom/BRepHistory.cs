using Macad.Occt;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using Macad.Common;

namespace Macad.Core.Geom;

/// <summary>
/// Keeps track of the modified subshapes of a shape. It allows to query the modified subshapes for a given original shape and vice versa.
/// </summary>
public class BRepHistory
{
    readonly Dictionary<TopoDS_Shape, List<TopoDS_Shape>> _ModifiedShapes = new();

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Initializes an empty instance of the BRepHistory class.
    /// </summary>
    public BRepHistory()
    {
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Initializes a new instance with the specified original shape and BRepTools history.
    /// </summary>
    public BRepHistory(TopoDS_Shape original, BRepTools_History history)
    {
        Merge(original, history);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Initializes a new instance with the specified original shapes and BRepTools history.
    /// </summary>
    public BRepHistory(IEnumerable<TopoDS_Shape> originals, BRepTools_History history)
    {
        originals.ForEach(original => Merge(original, history));
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Initializes a new instance with the specified original shape and history from BRepBuilderAPI_MakeShape.
    /// </summary>
    public BRepHistory(TopoDS_Shape original, BRepBuilderAPI_MakeShape makeShape)
    {
        Merge(original, makeShape);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Adds a modified subshape to the history. If the original shape was already modified, it will be replaced with the new shapes.
    /// </summary>
    public void AddOrUpdate(TopoDS_Shape original, TopoDS_Shape modified)
    {
        if (modified == null)
            return;

        // Was the original already modified?
        var kvpModif = _ModifiedShapes.FirstOrDefault(kvp => kvp.Value.Any(s => s.IsSame(original)));
        if (kvpModif.Key != null)
        {
            kvpModif.Value.RemoveAt(kvpModif.Value.IndexOfSame(original));
            if (!kvpModif.Value.ContainsSame(modified))
            {
                kvpModif.Value.Add(modified);
            }
            return;
        }

        // Now add
        var realKey = _ModifiedShapes.Keys.FirstOrDefault(s => s.IsSame(original));
        if (realKey != null)
        {
            if (!_ModifiedShapes[realKey].ContainsSame(modified))
            {
                _ModifiedShapes[realKey].Add(modified);
            }
        }
        else
        {
            _ModifiedShapes.Add(original, [modified]);
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Adds a modified subshape to the history. If the original shape was already modified, it will be replaced with the new shapes.
    /// </summary>
    public void AddOrUpdate(TopoDS_Shape original, List<TopoDS_Shape> shapes)
    {
        if (shapes == null || shapes.Count == 0)
            return;

        // Was the original already modified?
        var kvpModif = _ModifiedShapes.FirstOrDefault(kvp => kvp.Value.Any(s => s.IsSame(original)));
        if (kvpModif.Key != null)
        {
            kvpModif.Value.RemoveAt(kvpModif.Value.IndexOfSame(original));
            kvpModif.Value.AddRange(shapes.Where(s => !kvpModif.Value.ContainsSame(s)));
            return;
        }

        // Now add
        var realKey = _ModifiedShapes.Keys.FirstOrDefault(s => s.IsSame(original));
        if (realKey != null)
        {
            _ModifiedShapes[realKey].AddRange(shapes.Where(s => !_ModifiedShapes[realKey].ContainsSame(s)));
        }
        else
        {
            _ModifiedShapes.Add(original, shapes);
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Removes a modified subshape from the history. If the original shape was already modified, it will be removed from the list of modified shapes.
    /// </summary>
    public void Remove(TopoDS_Shape original)
    {
        if (original == null)
            return;

        var mods = _ModifiedShapes.Where(kvp => kvp.Value.Any(s => s.IsSame(original)));
        foreach (var(key, shapes) in mods)
        {
            if (shapes.Count == 1)
            {
                _ModifiedShapes.Remove(key);
            }
            else
            {
                shapes.RemoveAt(shapes.IndexOfSame(original));
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Updates the modified subshapes.
    /// It processes the faces, edges, and vertices of the original shape and updates the modified
    /// subshapes accordingly.
    /// </summary>
    public void Merge(TopoDS_Shape original, BRepBuilderAPI_MakeShape makeShape)
    {
        __Process(original.Faces());
        __Process(original.Edges());
        __Process(original.Vertices());

        //-----

        void __Process(IEnumerable<TopoDS_Shape> shapes)
        {
            foreach (var shape in shapes)
            {
                var modList = makeShape.Modified(shape);
                if (modList.Size() == 0)
                {
                    // Delete check can result in exception
                    try
                    {
                        if (makeShape.IsDeleted(shape))
                        {
                            Remove(shape);
                        }
                    }
                    catch (SEHException)
                    {
                        // That means that the makeShape has this shape not in list,
                        // so it is NOT deleted and NOT modified
                    }
                }
                else
                {
                    AddOrUpdate(shape, modList.ToList());
                    AddOrUpdate(shape, makeShape.Generated(shape).ToList());
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Updates the modified subshapes.
    /// It processes the faces, edges, and vertices of the original shape and updates the modified
    /// subshapes accordingly.
    /// </summary>
    public void Merge(TopoDS_Shape original, BRepTools_History history)
    {
        bool hasModified = history.HasModified();
        bool hasGenerated = history.HasGenerated();
        bool hasRemoved = history.HasRemoved();

        __Process(original.Faces());
        __Process(original.Edges());
        __Process(original.Vertices());

        //-----

        void __Process(IEnumerable<TopoDS_Shape> shapes)
        {
            foreach (var shape in shapes)
            {
                if (hasModified)
                {
                    var modList = history.Modified(shape);
                    if (modList.Size() != 0)
                    {
                        AddOrUpdate(shape, modList.ToList());
                    }
                }

                if (hasGenerated)
                {
                    AddOrUpdate(shape, history.Generated(shape).ToList());
                }

                if (hasRemoved)
                {
                    if (history.IsRemoved(shape))
                    {
                        Remove(shape);
                    }
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Merge(IEnumerable<TopoDS_Shape> originals, BRepTools_History history)
    {
        originals.ForEach(original => Merge(original, history));
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Clears the modified subshapes history.
    /// </summary>
    public void Clear()
    {
        _ModifiedShapes.Clear();
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Gets the direct original shapes for a given modified subshape.
    /// </summary>
    /// <param name="modified">The modified subshape.</param>
    /// <returns>The original shapes.</returns>
    public IEnumerable<TopoDS_Shape> GetOriginals(TopoDS_Shape modified)
    {
        foreach (var (original, mods) in _ModifiedShapes)
        {
            if(mods.Any(s => s.IsSame(modified)))
            {
                yield return original;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Gets the modified subshapes for a given original shape.
    /// </summary>
    public IList<TopoDS_Shape> GetModified(TopoDS_Shape original)
    {
        var kvpModif = _ModifiedShapes.FirstOrDefault(kvp => kvp.Key.IsSame(original));
        if (kvpModif.Key != null)
        {
            return kvpModif.Value;
        }
        return null;
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Gets the modified subshapes for a given list of original subshapes.
    /// </summary>
    public IEnumerable<TopoDS_Shape> GetModified(IEnumerable<TopoDS_Shape> originals)
    {
        var mods = _ModifiedShapes.Where(kvp => originals.ContainsSame(kvp.Key))
                                  .SelectMany(kvp => kvp.Value).ToList();
        if (mods.Count > 0)
        {
            return mods;
        }

        return Enumerable.Empty<TopoDS_Shape>();
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Merges the modified subshapes from another BRepHistory instance into this instance.
    /// </summary>
    public void Merge(BRepHistory other)
    {
        foreach (var (original, mods) in other._ModifiedShapes)
        {
            foreach (var modified in mods)
            {
                AddOrUpdate(original, modified);
            }
        }
    }
}