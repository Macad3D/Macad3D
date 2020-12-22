using System.Threading;
using Macad.Test.Utils;
using Macad.Core;
using NUnit.Framework;
using NUnit.Framework.Internal;

namespace Macad.Test.Unit
{
    [SetUpFixture, Apartment(ApartmentState.STA)]
    public class TestEnvironment
    {
        [OneTimeSetUp]
        public void SetUp()
        {
            Context.InitEmpty();
        }


        [OneTimeTearDown]
        public void TearDown()
        {
            
        }
    }
}