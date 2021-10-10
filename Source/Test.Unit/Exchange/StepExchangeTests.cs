using System.IO;
using System.Linq;
using Macad.Test.Utils;
using Macad.Core;
using Macad.Exchange;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Unit.Exchange
{
    [TestFixture]
    public class StepExchangeTests
    {
        const string _BasePath = @"Exchange\Step";

        //--------------------------------------------------------------------------------------------------

        [Test]
        public void WriteSolid()
        {
            var bodies = TestGeomGenerator.CreateBoxCylinderSphere();

            var exchanger = new StepExchanger();

            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "WriteSolid_TestResult.stp"));
            Assert.IsTrue((exchanger as IBodyExporter).DoExport(path, bodies));

            // Skip header bytes, it contains the export date and time
            AssertHelper.IsSameFile(Path.Combine(_BasePath, "WriteSolid.stp"), path, 235);
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void ReadMultipleSolids()
        {
            var exchanger = new StepExchanger();
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "ReadSolid_Source.stp"));
            Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var bodies));
            Assert.IsNotNull(bodies);
            Assert.AreEqual(47, bodies.Count());

            var compound = new TopoDS_Compound();
            var builder = new BRep_Builder();
            builder.MakeCompound(compound);
            foreach (var body in bodies)
            {
                builder.Add(compound, body.Shape.GetTransformedBRep());
            }
            AssertHelper.IsSameModel(compound, Path.Combine(_BasePath, "ReadMultipleSolids"));
        }

        //--------------------------------------------------------------------------------------------------
        
        [Test]
        public void ReadMultipleSolidOneBody()
        {
            var exchanger = new StepExchanger();
            exchanger.Settings.ImportSingleBody = true;
            var path = Path.Combine(TestData.TestDataDirectory, Path.Combine(_BasePath, "ReadSolid_Source.stp"));
            Assert.IsTrue((exchanger as IBodyImporter).DoImport(path, out var bodies));
            Assert.IsNotNull(bodies);
            Assert.AreEqual(1, bodies.Count());
            Assert.AreEqual(47, bodies.First().Shape.GetBRep().Solids().Count);
        }

        //--------------------------------------------------------------------------------------------------

    }
}