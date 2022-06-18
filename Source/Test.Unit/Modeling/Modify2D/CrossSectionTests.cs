using System.IO;
using Macad.Common;
using Macad.Core;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Modifier2D;

[TestFixture]
public class CrossSectionTests
{
    const string _BasePath = @"Modeling\Modifier2D\CrossSection";

    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(CrossSection.WireFilter.All)]
    [TestCase(CrossSection.WireFilter.Inner)]
    [TestCase(CrossSection.WireFilter.Outer)]
    public void Filter(CrossSection.WireFilter filter)
    {
        var body = TestGeomGenerator.CreateHollowCylinder()?.Body;
        Assert.IsNotNull(body);

        var section = CrossSection.Create(body, Pln.XOY.Translated(new Vec(0, 0, 5)));
        section.Filter = filter;
        Assert.IsNotNull(section);

        AssertHelper.IsMade(section);
        AssertHelper.IsSameModel(section, Path.Combine(_BasePath, $"Filter{filter}"));
    }
    
    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void FilterInnerInexistent()
    {
        var body = TestGeomGenerator.CreateCylinder()?.Body;
        Assert.IsNotNull(body);

        var section = CrossSection.Create(body, Pln.XOY.Translated(new Vec(0, 0, 5)));
        section.Filter = CrossSection.WireFilter.Inner;
        Assert.IsNotNull(section);

        Assert.IsFalse(section.Make(Shape.MakeFlags.None));
    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(CrossSection.WireFilter.All)]
    [TestCase(CrossSection.WireFilter.Inner)]
    [TestCase(CrossSection.WireFilter.Outer)]
    public void MultipleSections(CrossSection.WireFilter filter)
    {
        var body = TestGeomGenerator.CreateHollowCylinder()?.Body;
        var body2 = TestGeomGenerator.CreateHollowCylinder()?.Body;
        body2.Position = new Pnt(25, 0, 0);
        BooleanFuse.Create(body, new BodyShapeOperand(body2));

        var section = CrossSection.Create(body, Pln.XOY.Translated(new Vec(0, 0, 5)));
        section.Filter = filter;
        Assert.IsNotNull(section);

        AssertHelper.IsMade(section);
        AssertHelper.IsSameModel(section, Path.Combine(_BasePath, $"MultipleSections{filter}"));

    }
    
    //--------------------------------------------------------------------------------------------------

    [Test]
    [TestCase(0.0, 0.0)]
    [TestCase(0.0, 10.0)]
    [TestCase(0.0, 11.0)]
    [TestCase(45.0, 0.0)]
    [TestCase(45.0, 4.0)]
    public void PlaneProposal(double rotation, double planeZ)
    {
        var cylinder = TestGeomGenerator.CreateCylinder();
        Taper.Create(cylinder.Body, cylinder.GetSubshapeReference(SubshapeType.Face, 0), cylinder.GetSubshapeReference(SubshapeType.Edge, 2), 40.0);
        var body = cylinder.Body;
        body.Position = new Pnt(0, 0, 10);
        body.Rotation = new Quaternion(Dir.DY.ToVec(), rotation.ToRad());

        var proposedPlane = CrossSection.ProposePlane(body, Pln.XOY.Translated(new Vec(0, 0, planeZ)));
        var section = CrossSection.Create(body, proposedPlane);
        Assert.IsNotNull(section);

        AssertHelper.IsMade(section);
        AssertHelper.IsSameModel(section, Path.Combine(_BasePath, $"PlaneProposal_{rotation}_{planeZ}"));
    }
}