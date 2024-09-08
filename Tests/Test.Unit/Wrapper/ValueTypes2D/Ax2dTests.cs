using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes2D;

[TestFixture]
public class Ax2dTests
{
    [Test]
    public void Origins()
    {
        Assert.AreEqual(new Ax2d(Pnt2d.Origin, Dir2d.DX), Ax2d.OX);
        Assert.AreEqual(new Ax2d(Pnt2d.Origin, Dir2d.DY), Ax2d.OY);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsCoaxial()
    {
        var p1 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        var p2 = new Ax2d(new Pnt2d(2, 3), new Dir2d(0, 1));
        Assert.IsFalse(p1.IsCoaxial(p2, 0.1, 0.1));
        Assert.IsFalse(p1.IsCoaxial(p2, Math.PI / 2, 0.1));
        Assert.IsTrue(p1.IsCoaxial(p2, Math.PI / 2, 2.0));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsNormal()
    {
        var p1 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        var p2 = new Ax2d(new Pnt2d(2, 3), new Dir2d(0, 1));
        Assert.IsTrue(p1.IsNormal(p2, 0.1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsOpposite()
    {
        var p1 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        var p2 = new Ax2d(new Pnt2d(2, 3), new Dir2d(0, 1));
        Assert.IsFalse(p1.IsOpposite(p2, 0.1));
        Assert.IsTrue(p1.IsOpposite(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void IsParallel()
    {
        var p1 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        var p2 = new Ax2d(new Pnt2d(2, 3), new Dir2d(0, 1));
        Assert.IsFalse(p1.IsParallel(p2, 0.1));
        Assert.IsTrue(p1.IsParallel(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Angle()
    {
        var p1 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        var p2 = new Ax2d(new Pnt2d(2, 3), new Dir2d(0, 1));
        Assert.AreEqual(Math.PI / 2, p1.Angle(p2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Reverse()
    {
        var p2 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        var m1 = new Ax2d(new Pnt2d(1, 2), new Dir2d(-1, 0));
        Assert.AreEqual(m1, p2.Reversed());
        p2.Reverse();
        Assert.AreEqual(m1, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorPnt2d()
    {
        var m1 = new Ax2d(new Pnt2d(-1, 0), new Dir2d(-1, 0));
        var p2 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        Assert.AreEqual(m1, p2.Mirrored(new Pnt2d(0, 1)));
        p2.Mirror(new Pnt2d(0, 1));
        Assert.AreEqual(m1, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx2d()
    {
        var m1 = new Ax2d(new Pnt2d(-1, 2), new Dir2d(-1, 0));
        var m2 = new Ax2d(new Pnt2d(0, 1), new Dir2d(0, 1));
        var p2 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        Assert.AreEqual(m1, p2.Mirrored(m2));
        p2.Mirror(m2);
        Assert.AreEqual(m1, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        var p2 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        var p3 = p2.Rotated(new Pnt2d(1, 2), Math.PI / 2);
        Assert.That(new Pnt2d(1,2).IsEqual(p3.Location, 0.000001));
        Assert.That(new Dir2d(0,1).IsEqual(p3.Direction, 0.000001));
        p2.Rotate(new Pnt2d(1, 2), Math.PI / 2);
        Assert.That(new Pnt2d(1,2).IsEqual(p2.Location, 0.000001));
        Assert.That(new Dir2d(0,1).IsEqual(p2.Direction, 0.000001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Scale()
    {
        var m1 = new Ax2d(new Pnt2d(-1, 0), new Dir2d(1, 0));
        var p2 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        Assert.AreEqual(m1, p2.Scaled(new Pnt2d(2, 3), 3));
        p2.Scale(new Pnt2d(2, 3), 3);
        Assert.AreEqual(m1, p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslatePnt2dPnt2d()
    {
        var m1 = new Ax2d(new Pnt2d(-1, -1), new Dir2d(1, 0));
        var p2 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        Assert.AreEqual(m1, p2.Translated(new Pnt2d(3, 5), new Pnt2d(1, 2)));
        p2.Translate(new Pnt2d(3, 5), new Pnt2d(1, 2));
        Assert.AreEqual(m1, p2);

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslateVec2d()
    {
        var m1 = new Ax2d(new Pnt2d(3, 5), new Dir2d(1, 0));
        var p2 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        Assert.AreEqual(m1, p2.Translated(new Vec2d(2, 3)));
        p2.Translate(new Vec2d(2, 3));
        Assert.AreEqual(m1, p2);

    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transform()
    {
        Trsf2d t1 = new Trsf2d();
        t1.SetRotation(new Pnt2d(1, 2), Math.PI / 2);
        var p2 = new Ax2d(new Pnt2d(1, 2), new Dir2d(1, 0));
        var p3 = p2.Transformed(t1);
        Assert.That(new Pnt2d(1,2).IsEqual(p3.Location, 0.000001));
        Assert.That(new Dir2d(0,1).IsEqual(p3.Direction, 0.000001));
        p2.Transform(t1);
        Assert.That(new Pnt2d(1,2).IsEqual(p2.Location, 0.000001));
        Assert.That(new Dir2d(0,1).IsEqual(p2.Direction, 0.000001));
    }
}