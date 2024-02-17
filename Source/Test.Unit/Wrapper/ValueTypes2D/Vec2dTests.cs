using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes2D;

[TestFixture]
public class Vec2dTests
{
    [Test]
    public void IsEqual()
    {
        var p1 = new Vec2d(1, 0);
        var p2 = new Vec2d(0, 1);
        Assert.IsFalse(p1.IsEqual(p2, 0.99, 0.1));
        Assert.IsTrue(p1.IsEqual(p2, 1.01, 0.1));
        Assert.IsTrue(p1.IsEqual(p2, 0.99, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsNormal()
    {
        var p1 = new Vec2d(1, 0);
        var p2 = new Vec2d(0, 1);
        Assert.IsTrue(p1.IsNormal(p2, 0.1));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsOpposite()
    {
        var p1 = new Vec2d(1, 0);
        var p2 = new Vec2d(0, 1);
        Assert.IsFalse(p1.IsOpposite(p2, 0.1));
        Assert.IsTrue(p1.IsOpposite(p2, Math.PI / 2));
 
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void IsParallel()
    {
        var p1 = new Vec2d(1, 0);
        var p2 = new Vec2d(0, 1);
        Assert.IsFalse(p1.IsParallel(p2, 0.1));
        Assert.IsTrue(p1.IsParallel(p2, Math.PI / 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Magnitude()
    {
        var p1 = new Vec2d(1, 2);
        Assert.AreEqual(5, p1.SquareMagnitude());
        Assert.AreEqual(Math.Sqrt(5), p1.Magnitude());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Add()
    {
        var p2 = new Vec2d(1, 2);
        Assert.AreEqual(new Vec2d(2, 4), p2.Added(new Vec2d(1, 2)));
        p2.Add(new Vec2d(1, 2));
        Assert.AreEqual(new Vec2d(2, 4), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Subtract()
    {
        var p2 = new Vec2d(1, 2);
        Assert.AreEqual(new Vec2d(-2, 0), p2.Subtracted(new Vec2d(3, 2)));
        p2.Subtract(new Vec2d(3, 2));
        Assert.AreEqual(new Vec2d(-2, 0), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cross()
    {
        var p2 = new Vec2d(1, 2);
        Assert.AreEqual(-4, p2.Crossed(new Vec2d(3, 2)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossMagnitude()
    {
        var p1 = new Vec2d(1, 2);
        Assert.AreEqual(Math.Sqrt(16), p1.CrossMagnitude(new Vec2d(3, 2)));
        Assert.AreEqual(16, p1.CrossSquareMagnitude(new Vec2d(3, 2)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Divide()
    {
        var p2 = new Vec2d(1, 2);
        Assert.AreEqual(new Vec2d(0.5, 1), p2.Divided(2));
        p2.Divide(2);
        Assert.AreEqual(new Vec2d(0.5, 1), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Dot()
    {
        var p1 = new Vec2d(1, 2);
        Assert.AreEqual(5, p1.Dot(new Vec2d(1, 2)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Multiply()
    {
        var p2 = new Vec2d(1, 2);
        Assert.AreEqual(new Vec2d(2, 4), p2.Multiplied(2));
        p2.Multiply(2);
        Assert.AreEqual(new Vec2d(2, 4), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Scale()
    {
        var p2 = new Vec2d(1, 2);
        Assert.AreEqual(new Vec2d(2, 4), p2.Scaled(2));
        p2.Scale(2);
        Assert.AreEqual(new Vec2d(2, 4), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Normalize()
    {
        var p2 = new Vec2d(1, 23);
        Assert.That(new Vec2d(0.04343722427630694,0.9990561583550596).IsEqual(p2.Normalized(), 0.0000001, 0.0000001));
        p2.Normalize();
        Assert.That(new Vec2d(0.04343722427630694,0.9990561583550596).IsEqual(p2, 0.0000001, 0.0000001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Reverse()
    {
        var p2 = new Vec2d(1, 2);
        Assert.AreEqual(new Vec2d(-1, -2), p2.Reversed());
        p2.Reverse();
        Assert.AreEqual(new Vec2d(-1, -2), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SetLinearForm()
    {
        var p2 = new Vec2d();
        p2.SetLinearForm(new Vec2d(1, 2), new Vec2d(4, 5));
        Assert.AreEqual(new Vec2d(5, 7), p2);
        p2.SetLinearForm(2, new Vec2d(1, 2), new Vec2d(4, 5));
        Assert.AreEqual(new Vec2d(6, 9), p2);
        p2.SetLinearForm(2, new Vec2d(1, 2), 3, new Vec2d(4, 5));
        Assert.AreEqual(new Vec2d(14, 19), p2);
        p2.SetLinearForm(2, new Vec2d(1, 2), 3, new Vec2d(4, 5), new Vec2d(7, 8));
        Assert.AreEqual(new Vec2d(21, 27), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorVec2d()
    {
        var p2 = new Vec2d(2, 1);
        Assert.AreEqual(new Vec2d(1,0), p2.Mirrored(new Vec2d(1, 0)));
        p2.Mirror(new Vec2d(1, 0));
        Assert.AreEqual(new Vec2d(1, 0), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MirrorAx2d()
    {
        var m2 = new Ax2d(new Pnt2d(-1, 2), new Dir2d(-1, 0));
        var p2 = new Vec2d(2, 1);
        Assert.AreEqual(new Vec2d(2, -1), p2.Mirrored(m2));
        p2.Mirror(m2);
        Assert.AreEqual(new Vec2d(2, -1), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        var p2 = new Vec2d(2, 1);
        Assert.That(new Vec2d(-0.9999999999999999,2).IsEqual(p2.Rotated(Math.PI / 2), 0.000001, 0.000001));
        p2.Rotate(Math.PI / 2);
        Assert.That(new Vec2d(-0.9999999999999999,2).IsEqual(p2, 0.000001, 0.000001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Transform()
    {
        Trsf2d t1 = new Trsf2d();
        t1.SetRotation(new Pnt2d(1, 2), Math.PI / 2);
        var p2 = new Vec2d(2,1);
        Assert.That(new Vec2d(-1,2).IsEqual(p2.Transformed(t1), 0.000001, 0.000001));
        p2.Transform(t1);
        Assert.That(new Vec2d(-1,2).IsEqual(p2, 0.000001, 0.000001));
    }
}