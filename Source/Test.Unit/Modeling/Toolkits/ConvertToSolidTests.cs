using System.IO;
using Macad.Core.Shapes;
using Macad.Core.Toolkits;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Unit.Modeling.Toolkits;

[TestFixture]
public class ConvertToSolidTests
{
    const string _BasePath = @"Modeling\Toolkits\ConvertToSolid";

    //--------------------------------------------------------------------------------------------------
    
    [Test]
    public void CollapseBody()
    {
        var body = TestGeomGenerator.CreateImprint()?.Body;
        Assert.IsTrue(ConvertToSolid.CollapseShapeStack(body));
        Assert.IsInstanceOf<Solid>(body.RootShape);
        AssertHelper.IsSameModel(body.RootShape, Path.Combine(_BasePath, "CollapseBody"));
    }
    
    //--------------------------------------------------------------------------------------------------

}