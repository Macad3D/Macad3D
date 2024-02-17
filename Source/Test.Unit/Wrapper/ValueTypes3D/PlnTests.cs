using System;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes3D;

[TestFixture]
public class PlnTests
{
    [Test]
    public void Origins()
    {
        Pln p1 = Pln.XOY;
        double a = 0, b = 0, c = 0, d = 0;
        p1.Coefficients(ref a, ref b, ref c, ref d);
        Assert.AreEqual(0, a, 0.000001);
        Assert.AreEqual(0, b, 0.000001);
        Assert.AreEqual(1, c, 0.000001);
        Assert.AreEqual(0, d, 0.000001);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Rotate()
    {
        Pln p1 = Pln.XOY;
        p1.Rotate(Ax1.OZ, Math.PI / 2);
        Assert.That(Pnt.Origin.IsEqual(p1.Location, 0.0000001));
        Assert.That(new Dir(0, 1, 0).IsEqual(p1.XAxis.Direction, 0.0000001));
    }
}