using System;
using System.Linq;
using Macad.Test.Utils;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Infrastructure;

[TestFixture]
public class LayerTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GetDefaultLayer()
    {
        var lc = Context.Current.Layers;
        Assert.IsNotNull(lc);

        // Guid is empy
        var layer = lc.Find(Guid.Empty);
        Assert.IsNotNull(layer);
        Assert.AreEqual(lc.Default, layer);

        // Guid is null
        layer = lc.Find(null);
        Assert.IsNotNull(layer);
        Assert.AreEqual(lc.Default, layer);

        // Guid is unknown
        layer = lc.Find(new Guid());
        Assert.IsNotNull(layer);
        Assert.AreEqual(lc.Default, layer);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AddAndRemove()
    {
        var lc = Context.Current.Layers;
        Assert.IsNotNull(lc);

        var second = new Layer() {Name = "Second"};
        lc.Add(second);
        var third = new Layer() { Name = "Third" };
        lc.Add(third);

        Assert.AreEqual(second, lc.Find(second.Guid));
        Assert.AreEqual(third, lc.Find(third.Guid));

        lc.Remove(second);
        Assert.AreEqual(lc.Default, lc.Find(second.Guid));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CreateInActiveLayer()
    {
        var layer = new Layer();
        Context.Current.Layers.Add(layer);
        Context.Current.Layers.ActiveLayer = layer;
        var body = TestGeomGenerator.CreateBox().Body;
        Assert.That(body.Layer, Is.EqualTo(layer));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MoveToLayer()
    {
        var layer = new Layer();
        Context.Current.Layers.Add(layer);
        var body = TestGeomGenerator.CreateBox().Body;
        Assert.That(body.Layer, Is.Not.EqualTo(layer));
        body.Layer = layer;
        Assert.That(body.Layer, Is.EqualTo(layer));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RemoveDefaultLayer()
    {
        var lc = Context.Current.Layers;
        Assert.IsNotNull(lc);

        Assert.Catch<ArgumentException>(() => lc.Remove(lc.Default));

        var layer = lc.Find(null);
        Assert.IsNotNull(layer);
        Assert.AreEqual(lc.Default, layer);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Serialization()
    {
        var lc = Context.Current.Layers;
        Assert.IsNotNull(lc);

        lc.Default.Name = "MyDefault";
        var second = new Layer()
        {
            Name = "Second",
            IsVisible = false,
            IsLocked = true,
            Color = new(1.0f, 0.0f, 0.0f),
            Transparency = 0.4f,
            LineThickness = LineThickness.Thin,
            LineStyle = LineStyle.DotDash,
            PresentationMode = PresentationMode.Wireframe,
        };
        lc.Add(second);

        var s = Serializer.Serialize(lc, new SerializationContext());
        //Console.WriteLine(s);

        var newLc = Serializer.Deserialize<LayerCollection>(s, new SerializationContext());
        Assert.AreEqual("MyDefault", newLc.Default.Name);
        Assert.AreEqual("Second", newLc.Find(second.Guid).Name);

        var newSecond = newLc.Find(second.Guid);
        Assert.AreEqual(second.IsVisible, newSecond.IsVisible);
        Assert.AreEqual(second.IsLocked, newSecond.IsLocked);
        Assert.AreEqual(second.Color, newSecond.Color);
        Assert.AreEqual(second.Transparency, newSecond.Transparency);
        Assert.AreEqual(second.LineThickness, newSecond.LineThickness);
        Assert.AreEqual(second.LineStyle, newSecond.LineStyle);
        Assert.AreEqual(second.PresentationMode, newSecond.PresentationMode);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LayerPropertyUndo()
    {
        var lc = Context.Current.Layers;
        Assert.IsNotNull(lc);

        var oldName = lc.Default.Name;
        var oldColor = lc.Default.Color;
        lc.Default.Name = "MyDefault";
        lc.Default.Color = new Color(1, 0, 0);

        Context.Current.UndoHandler.Commit();

        Assert.That(Context.Current.UndoHandler.CanUndo);
        Context.Current.UndoHandler.DoUndo(1);

        Assert.That(lc.Default.Name, Is.EqualTo(oldName));
        Assert.That(lc.Default.Color, Is.EqualTo(oldColor));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void LayerTopologyUndo()
    {
        var lc = Context.Current.Layers;
        Assert.IsNotNull(lc);

        lc.Default.Name = "MyDefault";
        var second = new Layer()
        {
            Name = "Second"
        };
        var secGuid = second.Guid;
        lc.Add(second);
        Context.Current.UndoHandler.Commit();

        Assert.That(Context.Current.UndoHandler.CanUndo);

        Context.Current.UndoHandler.DoUndo(1);
        Assert.That(lc.Count, Is.EqualTo(1));

        Context.Current.UndoHandler.DoRedo(1);
        Assert.That(lc.Count, Is.EqualTo(2));
        Assert.That(lc.Find(secGuid), Is.Not.Null);
        Assert.That(lc.Find(secGuid).Name, Is.EqualTo("Second"));

        // Remove
        lc.Remove(lc.Find(secGuid));
        Context.Current.UndoHandler.Commit();

        Assert.That(lc.Count, Is.EqualTo(1));
        Assert.That(Context.Current.UndoHandler.CanUndo);

        Context.Current.UndoHandler.DoUndo(1);
        Assert.That(lc.Count, Is.EqualTo(2));
        Assert.That(lc.Find(secGuid), Is.Not.Null);
        Assert.That(lc.Find(secGuid).Name, Is.EqualTo("Second"));
    }

    //--------------------------------------------------------------------------------------------------

}