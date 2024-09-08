using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes2D;

[TestFixture]
public class Mat2dTests
{
    [Test]
    public void Add()
    {
        Mat2d m1 = new Mat2d();
        m1.SetIdentity();
        Mat2d m2 = new Mat2d(new XY(0, 2), new XY(3, 0));
        Mat2d res = new Mat2d(new XY(1, 2), new XY(3, 1));
        Assert.AreEqual(res, m1.Added(m2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Determinant()
    {
        Mat2d m2 = new Mat2d(new XY(0, 2), new XY(3, 0));
        Assert.AreEqual(-6, m2.Determinant());
    }
}