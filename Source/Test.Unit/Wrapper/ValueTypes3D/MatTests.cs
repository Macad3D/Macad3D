using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Wrapper.ValueTypes3D;

[TestFixture]
public class MatTests
{
    [Test]
    public void Add()
    {
        Mat m1 = new Mat();
        m1.SetIdentity();
        Mat m2 = new Mat(0, 2, 1, 3, 0, 4, 1, 5, 0);
        Mat res = new Mat(1, 2, 1, 3, 1, 4, 1, 5, 1);
        Assert.AreEqual(res, m1.Added(m2));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Determinant()
    {
        Mat m2 = new Mat(0, 2, 1, 3, 0, 4, 1, 5, 0);
        Assert.AreEqual(23, m2.Determinant());
    }
}