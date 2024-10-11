using System.IO;
using Macad.Test.Utils;
using Macad.Core.Toolkits;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Toolkits;

[TestFixture]
public class EtchingMaskTests
{
    const string _BasePath = @"Modeling\Toolkits\EtchingMask";

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SimpleDoubleLayer()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "SheetWithTwoLayers_Source.brep"));
        Assert.That(source?.GetBRep() != null);

        var component = new EtchingMaskComponent()
        {
            Owner = source
        };

        Assert.IsTrue(component.Make());
        AssertHelper.IsSameModel2D(component.Layers[0].BRep, Path.Combine(_BasePath, "SimpleDoubleLayer1"));
        AssertHelper.IsSameModel2D(component.Layers[1].BRep, Path.Combine(_BasePath, "SimpleDoubleLayer2"));
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void Reconstruction()
    {
        var source = TestData.GetBodyFromBRep(Path.Combine(_BasePath, "SheetWithTwoLayers_Source.brep"));
        Assert.That(source?.GetBRep() != null);
            
        var component = new EtchingMaskComponent()
        {
            Owner = source
        };

        Assert.IsTrue(component.Make());
        AssertHelper.IsSameModel(component.ReconstructedBRep, Path.Combine(_BasePath, "Reconstruction"));
    }
    
    //--------------------------------------------------------------------------------------------------

}