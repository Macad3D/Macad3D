using System;
using Macad.Common;
using NUnit.Framework;

namespace Macad.Test.Unit.Common;

[TestFixture]
public class WeakTableTests
{
    [Test]
    public void WeakTableStorage()
    {
        var table = new WeakTable<BaseObject, string>();
        var obj1 = new BaseObject();

        table.SetValue(obj1, "obj1");
        Assert.IsTrue(table.HasValue(obj1));
        Assert.AreEqual("obj1", table.GetValue(obj1));

        string s;
        Assert.IsTrue(table.TryGetValue(obj1, out s));
        Assert.AreEqual("obj1", s);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeakTableIndexer()
    {
        var table = new WeakTable<BaseObject, string>();
        var obj1 = new BaseObject();

        table[obj1] = "obj1";
        Assert.IsTrue(table.HasValue(obj1));
        Assert.AreEqual("obj1", table[obj1]);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeakTableNoValue()
    {
        var table = new WeakTable<BaseObject, string>();
        var obj1 = new BaseObject();

        Assert.IsFalse(table.HasValue(obj1));
        Assert.IsNull(table.GetValue(obj1));
        Assert.IsFalse(table.TryGetValue(obj1, out _));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeakTableKeyIsNull()
    {
        var table = new WeakTable<BaseObject, string>();

        Assert.IsFalse(table.HasValue(null));
        Assert.IsNull(table.GetValue(null));
        Assert.IsFalse(table.TryGetValue(null, out _));

        table.SetValue(null, "obj0");
        string s;
        Assert.IsTrue(table.TryGetValue(null, out s));
        Assert.AreEqual("obj0", s);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void WeakTableForget()
    {
        var table = new WeakTable<BaseObject, string>();
        WeakReference weakref;

        void _WorkWithObj1()
        {
            var obj1 = new BaseObject();

            table[obj1] = "obj1";
            Assert.IsTrue(table.HasValue(obj1));
            Assert.AreEqual("obj1", table[obj1]);

            weakref = new WeakReference(obj1);
            obj1 = null;
        }

        _WorkWithObj1();

        GC.Collect();
        Assert.IsFalse(table.HasValue(weakref.Target as BaseObject));
        Assert.IsNull(table.GetValue(weakref.Target as BaseObject));
    }

    //--------------------------------------------------------------------------------------------------

}