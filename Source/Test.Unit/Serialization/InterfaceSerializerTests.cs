using System;
using Macad.Common;
using Macad.Core;
using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.Unit.Serialization
{
    [TestFixture]
    public class InterfaceSerializerTests
    {
        [OneTimeSetUp]
        public void SetUp()
        {
            Serializer.RegisterNamespaceAlias("Test", "Macad.Test.Unit.Serialization");
        }

        [Test]
        public void TwoDerivedClasses()
        {
            var value = new InterfaceClass3(10.0);
            var w = new Writer();
            var cs = new ClassSerializer(typeof(InterfaceClass3));
            Assert.True(cs.Write(w, value, null));
            Assert.AreEqual("!Test.InterfaceClass3{C1:!Test.InterfaceClass1{Value1:10},C2:!Test.InterfaceClass2{Value2:20}}", w.ToString());

            var r = new Reader(w.ToString());
            var result = cs.Read(r, null, null) as InterfaceClass3;
            Assert.IsNotNull(result);
            Assert.IsFalse(r.AnyLeft, "Any characters left.");
            Assert.IsNotNull(result.C1);
            Assert.IsInstanceOf<InterfaceClass1>(result.C1);
            Assert.IsNotNull(result.C2);
            Assert.IsInstanceOf<InterfaceClass2>(result.C2);
            Assert.IsTrue(value.IsSame(result), "Read back value is not the same.");
        }

    }
}