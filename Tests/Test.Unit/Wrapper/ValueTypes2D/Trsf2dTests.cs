using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes2D;

[TestFixture]
public class Trsf2dTests
{
    [Test]
    public void Transforms()
    {
        Trsf2d m1 = new Trsf2d();
        m1.SetRotation(new Pnt2d(1, 2), Math.PI / 2);
        var c1 = new XY(2, 1);
        m1.Transforms(ref c1);
        Assert.That(new XY(2,3).IsEqual(c1, 0.000001));
    }
}