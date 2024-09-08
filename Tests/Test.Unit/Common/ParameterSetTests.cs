using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Common;

[TestFixture]
public class ParameterSetTests
{
    [OneTimeSetUp]
    public void SetUp()
    {
        Serializer.RegisterNamespaceAlias("Test", "Macad.Test.Unit.Common");
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
    public void ResetValue()
    {
        var paramSets = new ParameterSets();

        paramSets.Get<ParamSet1>().DoubleValue = 2.0;
        paramSets.Get<ParamSet1>().StringValue = "ByeByeWorld!";
        paramSets.Get<ParamSet1>().PointValue = new Pnt(4.0, 5.0, 6.0);

        paramSets.Get<ParamSet1>().ResetValue(nameof(ParamSet1.DoubleValue));
        paramSets.Get<ParamSet1>().ResetValue(nameof(ParamSet1.StringValue));
        paramSets.Get<ParamSet1>().ResetValue(nameof(ParamSet1.PointValue));

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
        paramSets.Add(new ParamSet1());
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
    public void ParameterChangedEvent()
    {
        var eventCount = 0;
        ParamSet1.ParameterChanged += (set, key) => eventCount++;
            
        var paramSets = new ParameterSets();
        paramSets.Get<ParamSet1>().DoubleValue = 2.0;
        paramSets.Get<ParamSet1>().StringValue = "ByeByeWorld!";
        paramSets.Get<ParamSet1>().PointValue = new Pnt(4.0, 5.0, 6.0);

        Assert.AreEqual(3, eventCount);
    }
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

sealed class ParamSet1 : OverridableParameterSet
{
    public double DoubleValue   { get => GetValue<double>(); set => SetValue(value); }
    public string StringValue   { get => GetValue<string>(); set => SetValue(value); }
    public Pnt    PointValue    { get => GetValue<Pnt>();    set => SetValue(value); }

    //--------------------------------------------------------------------------------------------------

    public ParamSet1()
    {
        SetDefaultValue(nameof(DoubleValue), 1.0);
        SetDefaultValue(nameof(StringValue), "HelloWorld!");
        SetDefaultValue(nameof(PointValue),  new Pnt(1.0, 2.0, 3.0));
    }
}