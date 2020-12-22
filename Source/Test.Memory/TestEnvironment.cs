using Macad.Core;
using NUnit.Framework;

namespace Macad.Test.Memory
{
    [SetUpFixture]
    public class TestEnvironment
    {
        [OneTimeSetUp]
        public void SetUp()
        {
           Utils.Context.InitEmpty();
        }


        [OneTimeTearDown]
        public void TearDown()
        {
            
        }
    }
}