using System;
using Macad.Core;
using Macad.Common.Serialization;
using Macad.Core.Shapes;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization;

[TestFixture]
public class CustomValueTests
{
    [Test]
    public void SubshapeReferenceSerialize()
    {
        var originalValue = new SubshapeReference(SubshapeType.Edge, new Guid("{fb82b37c-cc56-415e-baea-773f4bbe7203}"), 42);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(SubshapeReference));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("E-fb82b37ccc56415ebaea773f4bbe7203-42", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as SubshapeReference;
        Assert.False(r.AnyLeft);
        Assert.AreEqual(originalValue, targetValue);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NamedSubshapeReferenceSerialize()
    {
        var originalValue = new SubshapeReference(SubshapeType.Edge, new Guid("{fb82b37c-cc56-415e-baea-773f4bbe7203}"), "MyPart", 42);
        var w = new Writer();
        var serializer = Serializer.GetSerializer(typeof(SubshapeReference));
        Assert.NotNull(serializer);
        serializer.Write(w, originalValue, null);
        Assert.True(w.IsValid());
        Assert.AreEqual("E-fb82b37ccc56415ebaea773f4bbe7203-MyPart-42", w.ToString());

        var r = new Reader(w.ToString());
        var targetValue = serializer.Read(r, null, null) as SubshapeReference;
        Assert.False(r.AnyLeft);
        Assert.AreEqual(originalValue, targetValue);
    }
}