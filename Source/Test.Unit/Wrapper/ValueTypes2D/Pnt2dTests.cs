using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes2D;

[TestFixture]
public class Pnt2dTests
{
    [Test]
    public void Origins()
    {
        Assert.AreEqual(new Pnt2d(0, 0), Pnt2d.Origin);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsEqual()
    {            
        var p1 = new Pnt2d(1, 2);
        var p2 = new Pnt2d(4, 5);
        Assert.IsTrue(p1.IsEqual(p2, 4.3));
        Assert.IsFalse(p1.IsEqual(p2, 4.2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Conversion()
    {
        var p1 = new Pnt2d(1, 2);
        Assert.AreEqual(new XY(1, 2), p1.ToXY());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Distance()
    {
        var p1 = new Pnt2d(1, 2);
        var p2 = new Pnt2d(4, 5);
        Assert.AreEqual(18, p1.SquareDistance(p2));
        Assert.AreEqual(Math.Sqrt(18), p1.Distance(p2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorPnt2d()
    {
        var p2 = new Pnt2d(1, 2);
        Assert.AreEqual(new Pnt2d(3, 2), p2.Mirrored(new Pnt2d(2, 2)));
        p2.Mirror(new Pnt2d(2, 2));
        Assert.AreEqual(new Pnt2d(3, 2), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslatePnt2dPnt2d()
    {
        var p2 = new Pnt2d(1, 2);
        Assert.AreEqual(new Pnt2d(0, 2), p2.Translated(new Pnt2d(2, 2), new Pnt2d(1, 2)));
        p2.Translate(new Pnt2d(2, 2), new Pnt2d(1, 2));
        Assert.AreEqual(new Pnt2d(0, 2), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void TranslateVec2d()
    {
        var p2 = new Pnt2d(1, 2);
        Assert.AreEqual(new Pnt2d(3, 4), p2.Translated(new Vec2d(2, 2)));
        p2.Translate(new Vec2d(2, 2));
        Assert.AreEqual(new Pnt2d(3, 4), p2);

        p2 = new Pnt2d(2, 1);
        Assert.AreEqual(new Pnt2d(4, 4), p2.Translated(new Vec2d(2, 3)));
        p2.Translate(new Vec2d(2, 3));
        Assert.AreEqual(new Pnt2d(4, 4), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Scale()
    {
        var p2 = new Pnt2d(1, 2);
        Assert.AreEqual(new Pnt2d(0, 2), p2.Scaled(new Pnt2d(2, 2), 2));
        p2.Scale(new Pnt2d(2, 2), 2);
        Assert.AreEqual(new Pnt2d(0, 2), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx2d()
    {
        var m2 = new Ax2d(new Pnt2d(-1, 2), new Dir2d(-1, 0));
        var p2 = new Pnt2d(2, 1);
        Assert.AreEqual(new Pnt2d(2, 3), p2.Mirrored(m2));
        p2.Mirror(m2);
        Assert.AreEqual(new Pnt2d(2, 3), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        var p2 = new Pnt2d(2, 1);
        Assert.That(new Pnt2d(2,3).IsEqual(p2.Rotated(new Pnt2d(1, 2), Math.PI / 2), 0.0000001));
        p2.Rotate(new Pnt2d(1, 2), Math.PI / 2);
        Assert.That(new Pnt2d(2,3).IsEqual(p2, 0.0000001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transform()
    {
        Trsf2d t1 = new Trsf2d();
        t1.SetRotation(new Pnt2d(1,2), Math.PI / 2);
        var p2 = new Pnt2d(2, 1);
        Assert.That(new Pnt2d(2,3).IsEqual(p2.Transformed(t1), 0.0000001));
        p2.Transform(t1);
        Assert.That(new Pnt2d(2,3).IsEqual(p2, 0.0000001));
    }
}