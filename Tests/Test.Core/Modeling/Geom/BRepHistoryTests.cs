using Macad.Core.Geom;
using Macad.Occt;
using NUnit.Framework;
using System.Linq;
using Macad.Core;

namespace Macad.Test.Core.Modeling.Geom;

[TestFixture]
internal class BRepHistoryTests
{
    [Test]
    public void GetModifiedSubshapes_OriginalIsUnknown()
    {
        var history = new BRepHistory();
        var original = _CreateFace(10);

        var result = history.GetModified(original);

        Assert.That(result, Is.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AddOrUpdate_NullModified()
    {
        var history = new BRepHistory();
        var original = _CreateFace(10);

        history.AddOrUpdate(original, (TopoDS_Shape)null);

        Assert.That(history.GetModified(original), Is.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Clear()
    {
        var history = new BRepHistory();
        var original = _CreateFace(10);
        var modified = _CreateFace(20);
        history.AddOrUpdate(original, modified);

        history.Clear();

        Assert.That(history.GetModified(original), Is.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AddModified_ReplacesChainedModifiedShape()
    {
        var history = new BRepHistory();
        var original = _CreateFace(10);
        var intermediate = _CreateFace(20);
        var final = _CreateFace(30);

        history.AddOrUpdate(original, intermediate);
        history.AddOrUpdate(intermediate, final);

        var result = history.GetModified(original);

        Assert.That(result, Is.Not.Null);
        Assert.That(result!.Any(s => s.IsSame(intermediate)), Is.False);
        Assert.That(result.Any(s => s.IsSame(final)), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AddModifiedList_ReplacesChainedModifiedShape()
    {
        var history = new BRepHistory();
        var original = _CreateFace(10);
        var intermediate = _CreateFace(20);
        var finalA = _CreateFace(30);
        var finalB = _CreateFace(40);

        history.AddOrUpdate(original, intermediate);
        history.AddOrUpdate(intermediate, [finalA, finalB]);

        var result = history.GetModified(original);

        Assert.That(result, Is.Not.Null);
        Assert.That(result!.Any(s => s.IsSame(intermediate)), Is.False);
        Assert.That(result.Any(s => s.IsSame(finalA)), Is.True);
        Assert.That(result.Any(s => s.IsSame(finalB)), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Remove_RemovesSingleMapping()
    {
        var history = new BRepHistory();
        var original = _CreateFace(10);
        var modified = _CreateFace(20);

        history.AddOrUpdate(original, modified);
        history.Remove(modified);

        Assert.That(history.GetModified(original), Is.Null);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Remove_RemovesOnlyRequestedModifiedShape()
    {
        var history = new BRepHistory();
        var original = _CreateFace(10);
        var modifiedA = _CreateFace(20);
        var modifiedB = _CreateFace(30);

        history.AddOrUpdate(original, modifiedA);
        history.AddOrUpdate(original, modifiedB);
        history.Remove(modifiedA);

        var result = history.GetModified(original);

        Assert.That(result, Is.Not.Null);
        Assert.That(result!.Count, Is.EqualTo(1));
        Assert.That(result[0].IsSame(modifiedB), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MergeHistory_ReplacesChainedModifiedShape()
    {
        var left = new BRepHistory();
        var right = new BRepHistory();

        var original = _CreateFace(10);
        var intermediate = _CreateFace(20);
        var final = _CreateFace(30);

        left.AddOrUpdate(original, intermediate);
        right.AddOrUpdate(intermediate, final);

        left.Merge(right);

        var result = left.GetModified(original);

        Assert.That(result, Is.Not.Null);
        Assert.That(result!.Any(s => s.IsSame(intermediate)), Is.False);
        Assert.That(result.Any(s => s.IsSame(final)), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GetModifiedSubshapes_ReturnsFlattenedList()
    {
        var history = new BRepHistory();
        var originalA = _CreateFace(10);
        var originalB = _CreateFace(20);
        var modifiedA = _CreateFace(30);
        var modifiedB = _CreateFace(40);

        history.AddOrUpdate(originalA, modifiedA);
        history.AddOrUpdate(originalB, modifiedB);

        var result = history.GetModified([originalA, originalB]).ToList();

        Assert.That(result.Count, Is.EqualTo(2));
        Assert.That(result.Any(s => s.IsSame(modifiedA)), Is.True);
        Assert.That(result.Any(s => s.IsSame(modifiedB)), Is.True);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GetOriginals_ModifiedIsUnknown_ReturnsEmpty()
    {
        var history = new BRepHistory();
        var modified = _CreateFace(10);

        var result = history.GetOriginals(modified).ToList();

        Assert.That(result, Is.Empty);
    }

//--------------------------------------------------------------------------------------------------

    [Test]
    public void GetOriginals_UniqueOriginal_ReturnsSingleOriginal()
    {
        var history = new BRepHistory();
        var original = _CreateFace(10);
        var modified = _CreateFace(20);
        history.AddOrUpdate(original, modified);

        var result = history.GetOriginals(modified).ToList();

        Assert.That(result.Count, Is.EqualTo(1));
        Assert.That(result[0].IsSame(original), Is.True);
    }

//--------------------------------------------------------------------------------------------------

    [Test]
    public void GetOriginals_AmbiguousModified_ReturnsAllOriginals()
    {
        var history = new BRepHistory();
        var originalA = _CreateFace(10);
        var originalB = _CreateFace(20);
        var modified = _CreateFace(30);

        history.AddOrUpdate(originalA, modified);
        history.AddOrUpdate(originalB, modified);

        var result = history.GetOriginals(modified).ToList();

        Assert.That(result.Count, Is.EqualTo(2));
        Assert.That(result.Any(s => s.IsSame(originalA)), Is.True);
        Assert.That(result.Any(s => s.IsSame(originalB)), Is.True);
    }

//--------------------------------------------------------------------------------------------------

    [Test]
    public void GetOriginals_ChainedMapping_ReturnsRootOriginal()
    {
        var history = new BRepHistory();
        var original = _CreateFace(10);
        var intermediate = _CreateFace(20);
        var final = _CreateFace(30);

        history.AddOrUpdate(original, intermediate);
        history.AddOrUpdate(intermediate, final);

        var result = history.GetOriginals(final).ToList();

        Assert.That(result.Count, Is.EqualTo(1));
        Assert.That(result[0].IsSame(original), Is.True);
    }

    //--------------------------------------------------------------------------------------------------
    //  Utility Methods
    //--------------------------------------------------------------------------------------------------

    static TopoDS_Shape _CreateFace(double size)
    {
        return new BRepPrimAPI_MakeBox(size, size, size).Shape().Faces().First();
    }

    static TopoDS_Shape _CreateEdge(double size)
    {
        return new BRepPrimAPI_MakeBox(size, size, size).Shape().Edges().First();
    }
}