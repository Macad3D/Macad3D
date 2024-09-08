using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes2D;

[TestFixture]
public class XYTests
{
    [Test]
    public void IsEqual()
    {
        var p1 = new XY(1, 2);
        var p2 = new XY(4, 5);
        Assert.IsTrue(p1.IsEqual(p2, 3));
        Assert.IsFalse(p1.IsEqual(p2, 2.99));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Modulus()
    {
        var p1 = new XY(1, 2);
        Assert.AreEqual(5, p1.SquareModulus());
        Assert.AreEqual(Math.Sqrt(5), p1.Modulus());
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Add()
    {
        var p1 = new XY(1, 2);
        var p2 = p1;
        p2.Add(p1);
        Assert.AreEqual(new XY(2, 4), p2);
        Assert.AreEqual(new XY(2, 4), p1.Added(new XY(1, 2)));
        p2 += new XY(1, 2);
        Assert.AreEqual(new XY(3, 6), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Cross()
    {
        var p1 = new XY(1, 2);
        Assert.AreEqual(-4, p1.Crossed(new XY(3, 2)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void CrossMagnitude()
    {
        var p1 = new XY(1, 2);
        Assert.AreEqual(Math.Sqrt(16), p1.CrossMagnitude(new XY(3, 2)));
        Assert.AreEqual(16, p1.CrossSquareMagnitude(new XY(3, 2)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Divide()
    {
        var p2 = new XY(1, 2);
        Assert.AreEqual(new XY(0.5, 1), p2.Divided(2));
        p2.Divide(2);
        Assert.AreEqual(new XY(0.5, 1), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Dot()
    {
        var p1 = new XY(1, 2);
        Assert.AreEqual(5, p1.Dot(new XY(1, 2)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiplyScalar()
    {
        var p2 = new XY(1, 2);
        Assert.AreEqual(new XY(2, 4), p2.Multiplied(2));
        Assert.AreEqual(new XY(2, 4), p2 * 2);
        p2.Multiply(2);
        Assert.AreEqual(new XY(2, 4), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiplyXY()
    {
        var p2 = new XY(1, 2);
        Assert.AreEqual(new XY(1, 4), p2.Multiplied(new XY(1, 2)));
        Assert.AreEqual(new XY(1, 4), p2 * new XY(1, 2));
        p2.Multiply(new XY(1, 2));
        Assert.AreEqual(new XY(1, 4), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        Mat2d m1 = new Mat2d();
        m1.SetRotation(Math.PI / 2);
        var p2 = new XY(4, 5);
        Assert.That(new XY(-5,4).IsEqual(p2.Multiplied(m1), 0.0000001));
        Assert.That(new XY(-5,4).IsEqual(p2 * m1, 0.0000001));
        p2.Multiply(m1);
        Assert.That(new XY(-5,4).IsEqual(p2, 0.0000001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Normalize()
    {
        var p2 = new XY(1, 23);
        Assert.That(new XY(0.04343722427630694,0.9990561583550596).IsEqual(p2.Normalized(), 0.0000001));
        p2.Normalize();
        Assert.That(new XY(0.04343722427630694,0.9990561583550596).IsEqual(p2, 0.0000001));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Reverse()
    {
        var p2 = new XY(1, 2);
        Assert.AreEqual(new XY(-1, -2), p2.Reversed());
        p2.Reverse();
        Assert.AreEqual(new XY(-1, -2), p2);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Subtract()
    {
        var p1 = new XY(1, 2);
        var p2 = p1;
        p2.Subtract(new XY(3, 2));
        Assert.AreEqual(new XY(-2, 0), p2);
        Assert.AreEqual(new XY(-2, 0), p1.Subtracted(new XY(3, 2)));
        Assert.AreEqual(new XY(-2, 0), p1 - new XY(3, 2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SetLinearForm()
    {
        var p2 = new XY(1, 2);
        p2.SetLinearForm(new XY(1, 2), new XY(4, 5));
        Assert.AreEqual(new XY(5, 7), p2);
        p2.SetLinearForm(2, new XY(1, 2), new XY(4, 5));
        Assert.AreEqual(new XY(6, 9), p2);
        p2.SetLinearForm(2, new XY(1, 2), 3, new XY(4, 5));
        Assert.AreEqual(new XY(14, 19), p2);
        p2.SetLinearForm(2, new XY(1, 2), 3, new XY(4, 5), new XY(7, 8));
        Assert.AreEqual(new XY(21, 27), p2);
    }
}