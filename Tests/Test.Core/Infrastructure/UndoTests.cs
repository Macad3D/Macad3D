using Macad.Test.Utils;
using Macad.Common.Serialization;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Core.Infrastructure;

[TestFixture]
public class UndoTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void PropertyUndo()
    {
        // Create object and body, -> State1
        var box = TestGeomGenerator.CreateBox();
        var body = box.Body;

        Assert.IsFalse(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state1 = Serializer.Serialize(body, new SerializationContext());

        // Change property -> State2
        box.DimensionX = 5.0f;
        Context.Current.UndoHandler.Commit();
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state2 = Serializer.Serialize(body, new SerializationContext());

        // Change property -> State3
        box.DimensionY = 5.0f;
        Context.Current.UndoHandler.Commit();
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state3 = Serializer.Serialize(body, new SerializationContext());

        // Undo -> State2
        Context.Current.UndoHandler.DoUndo(1);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsTrue(Context.Current.UndoHandler.CanRedo);
        var state2a = Serializer.Serialize(body, new SerializationContext()); 
        Assert.AreEqual(state2, state2a);

        // Redo -> State3
        Context.Current.UndoHandler.DoRedo(1);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state3a = Serializer.Serialize(body, new SerializationContext());
        Assert.AreEqual(state3, state3a);

        // Undo, Undo -> State 1
        Context.Current.UndoHandler.DoUndo(2);
        Assert.IsFalse(Context.Current.UndoHandler.CanUndo);
        Assert.IsTrue(Context.Current.UndoHandler.CanRedo);
        var state1a = Serializer.Serialize(body, new SerializationContext());
        Assert.AreEqual(state1, state1a);

        // Redo, Redo -> State 3
        Context.Current.UndoHandler.DoRedo(2);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state3b = Serializer.Serialize(body, new SerializationContext());
        Assert.AreEqual(state3, state3b);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BodyTopologyUndo()
    {
        // Create object and body, -> State1
        var box = TestGeomGenerator.CreateBox();
        var body = box.Body;
        var box2 = TestGeomGenerator.CreateBox();
        Assert.IsFalse(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state1 = Serializer.Serialize(body, new SerializationContext());

        // Change topology -> State2
        body.SaveTopologyUndo();
        var fillet = Fillet.Create(body);
        fillet.Radius = 1;
        Context.Current.UndoHandler.Commit();
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state2 = Serializer.Serialize(body, new SerializationContext());

        // Change topology -> State3
        box.DimensionZ = 8;
        body.SaveTopologyUndo();
        var boolean = BooleanCut.Create(body, box2);
        Context.Current.UndoHandler.Commit();
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state3 = Serializer.Serialize(body, new SerializationContext());

        // Undo -> State2
        Context.Current.UndoHandler.DoUndo(1);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsTrue(Context.Current.UndoHandler.CanRedo);
        var state2a = Serializer.Serialize(body, new SerializationContext());
        Assert.AreEqual(state2, state2a);

        // Redo -> State3
        Context.Current.UndoHandler.DoRedo(1);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state3a = Serializer.Serialize(body, new SerializationContext());
        Assert.AreEqual(state3, state3a);

        // Undo, Undo -> State 1
        Context.Current.UndoHandler.DoUndo(2);
        Assert.IsFalse(Context.Current.UndoHandler.CanUndo);
        Assert.IsTrue(Context.Current.UndoHandler.CanRedo);
        var state1a = Serializer.Serialize(body, new SerializationContext());
        Assert.AreEqual(state1, state1a);

        // Redo, Redo -> State 3
        Context.Current.UndoHandler.DoRedo(2);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state3b = Serializer.Serialize(body, new SerializationContext());
        Assert.AreEqual(state3, state3b);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void AssemblyTopologyUndo()
    {
        var asm = Context.Current.Document;

        // Create some bodies -> State 1
        var body1 = TestGeomGenerator.CreateBox().Body;
        var body2 = TestGeomGenerator.CreateBox().Body;
        Assert.IsFalse(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state1 = Serializer.Serialize(asm, new SerializationContext());

        // Add bodies -> State 2
        asm.Add(body1);
        asm.Add(body2);
        Context.Current.UndoHandler.Commit();
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state2 = Serializer.Serialize(asm, new SerializationContext());

        // Remove body -> State 3
        asm.Remove(body2);
        body2.Remove();
        Context.Current.UndoHandler.Commit();
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state3 = Serializer.Serialize(asm, new SerializationContext());

        // Undo -> State2
        Context.Current.UndoHandler.DoUndo(1);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsTrue(Context.Current.UndoHandler.CanRedo);
        var state2a = Serializer.Serialize(asm, new SerializationContext());
        Assert.AreEqual(state2, state2a);

        // Redo -> State3
        Context.Current.UndoHandler.DoRedo(1);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state3a = Serializer.Serialize(asm, new SerializationContext());
        Assert.AreEqual(state3, state3a);

        // Undo, Undo -> State 1
        Context.Current.UndoHandler.DoUndo(2);
        Assert.IsFalse(Context.Current.UndoHandler.CanUndo);
        Assert.IsTrue(Context.Current.UndoHandler.CanRedo);
        var state1a = Serializer.Serialize(asm, new SerializationContext());
        Assert.AreEqual(state1, state1a);

        // Redo, Redo -> State 3
        Context.Current.UndoHandler.DoRedo(2);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
        var state3b = Serializer.Serialize(asm, new SerializationContext());
        Assert.AreEqual(state3, state3b);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RevertPendingPropertyChange()
    {
        var box = TestGeomGenerator.CreateBox();
        box.DimensionX = 5.0;
        Context.Current.UndoHandler.Commit();

        box.DimensionX = 7.0;
        Context.Current.UndoHandler.Revert();

        Assert.AreEqual(5.0, box.DimensionX, 1e-6);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);

        // The committed change must still be undoable
        Context.Current.UndoHandler.DoUndo(1);
        Assert.AreEqual(10.0, box.DimensionX, 1e-6);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RevertPendingTopologyChange()
    {
        var box = TestGeomGenerator.CreateBox();
        Context.Current.Document.Add(box.Body);
        Context.Current.UndoHandler.Revert();

        Assert.AreEqual(0, Context.Current.Document.EntityCount);
        Assert.IsFalse(Context.Current.UndoHandler.CanUndo);
        Assert.IsFalse(Context.Current.UndoHandler.CanRedo);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RevertKeepsFullUndoStack()
    {
        var box = TestGeomGenerator.CreateBox();
        Context.Current.UndoHandler.Commit();
        for (int i = 1; i <= 500; i++)
        {
            box.DimensionX = 10.0 + i;
            Context.Current.UndoHandler.Commit();
        }

        box.DimensionX = 1.0;
        Context.Current.UndoHandler.Revert();
        Assert.AreEqual(510.0, box.DimensionX, 1e-6);

        // All 500 committed changes must still be undoable, the oldest one included
        Context.Current.UndoHandler.DoUndo(500);
        Assert.AreEqual(10.0, box.DimensionX, 1e-6);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void RevertWithoutPendingChanges()
    {
        var box = TestGeomGenerator.CreateBox();
        box.DimensionX = 5.0;
        Context.Current.UndoHandler.Commit();

        Context.Current.UndoHandler.Revert();

        Assert.AreEqual(5.0, box.DimensionX, 1e-6);
        Assert.IsTrue(Context.Current.UndoHandler.CanUndo);
    }

    //--------------------------------------------------------------------------------------------------
}
