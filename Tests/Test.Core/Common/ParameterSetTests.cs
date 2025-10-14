using System.Collections.Generic;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Core.Common;

[TestFixture]
public class ParameterSetTests
{
    [OneTimeSetUp]
    public void SetUp()
    {
        Serializer.RegisterNamespaceAlias("Test", "Macad.Test.Core.Common");
        OcctSerializers.Init();
    }
        
    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GetDefaultValue()
    {
        var paramSets = new ParameterSets();
        Assert.AreEqual( 1.0, paramSets.Get<ParamSet1>().DoubleValue );
        Assert.AreEqual( "HelloWorld!", paramSets.Get<ParamSet1>().StringValue );
        Assert.AreEqual( new Pnt(1.0, 2.0, 3.0), paramSets.Get<ParamSet1>().PointValue );
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void OverrideValue()
    {
        var paramSets = new ParameterSets();

        paramSets.Get<ParamSet1>().DoubleValue = 2.0;
        paramSets.Get<ParamSet1>().StringValue = "ByeByeWorld!";
        paramSets.Get<ParamSet1>().PointValue = new Pnt(4.0, 5.0, 6.0);

        Assert.AreEqual( 2.0, paramSets.Get<ParamSet1>().DoubleValue );
        Assert.AreEqual( "ByeByeWorld!", paramSets.Get<ParamSet1>().StringValue );
        Assert.AreEqual( new Pnt(4.0, 5.0, 6.0), paramSets.Get<ParamSet1>().PointValue );
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void IsOverridden()
    {
        var paramSets = new ParameterSets();

        paramSets.Get<ParamSet1>().DoubleValue = 2.0;
        Assert.That(paramSets.Get<ParamSet1>()[nameof(ParamSet1.DoubleValue)].IsOverridden, Is.True);

        paramSets.Get<ParamSet1>().DoubleValue = 1.0;
        Assert.That(paramSets.Get<ParamSet1>()[nameof(ParamSet1.DoubleValue)].IsOverridden, Is.False);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ResetValue()
    {
        var paramSets = new ParameterSets();

        paramSets.Get<ParamSet1>().DoubleValue = 2.0;
        paramSets.Get<ParamSet1>().StringValue = "ByeByeWorld!";
        paramSets.Get<ParamSet1>().PointValue = new Pnt(4.0, 5.0, 6.0);

        paramSets.Get<ParamSet1>()[nameof(ParamSet1.DoubleValue)].ResetToDefault();
        paramSets.Get<ParamSet1>()[nameof(ParamSet1.StringValue)].ResetToDefault();
        paramSets.Get<ParamSet1>()[nameof(ParamSet1.PointValue)].ResetToDefault();

        Assert.AreEqual( 1.0, paramSets.Get<ParamSet1>().DoubleValue );
        Assert.AreEqual( "HelloWorld!", paramSets.Get<ParamSet1>().StringValue );
        Assert.AreEqual( new Pnt(1.0, 2.0, 3.0), paramSets.Get<ParamSet1>().PointValue );
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Serialize()
    {
        var paramSets = new ParameterSets();

        // Empty
        Assert.AreEqual("{}", Serializer.Serialize(paramSets));

        // Empty set
        paramSets.Get<ParamSet1>();
        Assert.AreEqual("{}", Serializer.Serialize(paramSets));

        // Overridden
        paramSets.Get<ParamSet1>().DoubleValue = 2.0;
        paramSets.Get<ParamSet1>().StringValue = "ByeByeWorld!";
        paramSets.Get<ParamSet1>().PointValue = new Pnt(4.0, 5.0, 6.0);
        Assert.AreEqual("{Test.ParamSet1:{DoubleValue:2,StringValue:\"ByeByeWorld!\",PointValue:[4,5,6]}}", Serializer.Serialize(paramSets));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void Deserialize()
    {
        // Empty set
        var paramSets = Serializer.Deserialize<ParameterSets>("{}");
        Assert.IsNotNull(paramSets);

        // Filled set
        paramSets = Serializer.Deserialize<ParameterSets>("{Test.ParamSet1:{DoubleValue:2,StringValue:\"ByeByeWorld!\",PointValue:[4,5,6]}}");
        Assert.IsNotNull(paramSets);
        Assert.AreEqual( 2.0, paramSets.Get<ParamSet1>().DoubleValue );
        Assert.AreEqual( "ByeByeWorld!", paramSets.Get<ParamSet1>().StringValue );
        Assert.AreEqual( new Pnt(4.0, 5.0, 6.0), paramSets.Get<ParamSet1>().PointValue );
    }

    //--------------------------------------------------------------------------------------------------
        
    [Test]
    public void DeserializeUnknownSet()
    {
        // Unknown Set
        var paramSets = Serializer.Deserialize<ParameterSets>("{Test.ParamSet2:{UnknownValue:1},Test.ParamSet1:{DoubleValue:2,StringValue:\"ByeByeWorld!\",PointValue:[4,5,6]}}");
        Assert.IsNotNull(paramSets);
        Assert.AreEqual( 2.0, paramSets.Get<ParamSet1>().DoubleValue );
        Assert.AreEqual( "ByeByeWorld!", paramSets.Get<ParamSet1>().StringValue );
        Assert.AreEqual( new Pnt(4.0, 5.0, 6.0), paramSets.Get<ParamSet1>().PointValue );
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DeserializeUnknownValue()
    {
        // Unknown Set
        var paramSets = Serializer.Deserialize<ParameterSets>("{Test.ParamSet1:{UnknownValue:1,DoubleValue:2,StringValue:\"ByeByeWorld!\",PointValue:[4,5,6]}}");
        Assert.IsNotNull(paramSets);
        Assert.AreEqual( 2.0, paramSets.Get<ParamSet1>().DoubleValue );
        Assert.AreEqual( "ByeByeWorld!", paramSets.Get<ParamSet1>().StringValue );
        Assert.AreEqual( new Pnt(4.0, 5.0, 6.0), paramSets.Get<ParamSet1>().PointValue );
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void DeserializeWrongValueType()
    {
        // Unknown Set
        var paramSets = Serializer.Deserialize<ParameterSets>("{Test.ParamSet1:{DoubleValue:\"ByeByeWorld\",StringValue:123,PointValue:[4,5]}}");
        Assert.IsNotNull(paramSets);
        Assert.That(paramSets.Get<ParamSet1>().DoubleValue, Is.EqualTo(1.0));
        Assert.That(paramSets.Get<ParamSet1>().StringValue, Is.EqualTo("HelloWorld!"));
        Assert.That(paramSets.Get<ParamSet1>().PointValue, Is.EqualTo(new Pnt(1.0, 2.0, 3.0)));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void ParameterChangedEvent()
    {
        List<string> _Events = new();
            
        var paramSets = new ParameterSets();
        paramSets.Get<ParamSet1>().ParameterChanged += (set, key) => _Events.Add(key);
        paramSets.Get<ParamSet1>().DoubleValue = 2.0;
        paramSets.Get<ParamSet1>().StringValue = "ByeByeWorld!";
        paramSets.Get<ParamSet1>().PointValue = new Pnt(4.0, 5.0, 6.0);

        Assert.That(_Events.Count, Is.EqualTo(3));
        Assert.That(_Events[0], Is.EqualTo(nameof(ParamSet1.DoubleValue)));
        Assert.That(_Events[1], Is.EqualTo(nameof(ParamSet1.StringValue)));
        Assert.That(_Events[2], Is.EqualTo(nameof(ParamSet1.PointValue)));
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

[ParameterSet]
sealed partial class ParamSet1
{
    Parameter<double> _DoubleValue = new()
    {
        Name = nameof(DoubleValue),
        DefaultValue = 1.0,
        Description = "A double value",
        EditorHints = new() { { "Precision", 2 }, { "MinValue", 0.0 }, { "MaxValue", 10.0 } }
    };

    //--------------------------------------------------------------------------------------------------

    Parameter<string> _StringValue = new()
    {
        Name = nameof(StringValue),
        DefaultValue = "HelloWorld!",
        Description = "A string value"
    };

    //--------------------------------------------------------------------------------------------------
    
    Parameter<Pnt> _PointValue = new()
    {
        Name = nameof(PointValue),
        DefaultValue = new Pnt(1.0, 2.0, 3.0),
        Description = "A point value"
    };

    //--------------------------------------------------------------------------------------------------

}