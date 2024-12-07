using System.IO;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Exchange;
using Macad.Exchange.Gltf;
using Macad.Occt;
using Macad.Test.Utils;
using NUnit.Framework;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Tab;

namespace Macad.Test.Unit.Exchange;

public class GltfExportTests
{
    const string _BasePath = @"Exchange\Gltf\";

    //--------------------------------------------------------------------------------------------------

    [SetUp]
    public void Setup()
    {
        // We need a view to get the zoom fit working
        Context.InitWithView(500);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MeshWriteExternalData()
    {
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        bodies[0].Rotation = new Quaternion(20.0.ToRad(), 0, 0);

        var streams = GltfBodyExporter.Export(bodies, GltfFileType.ExternalData, "MeshWriteExternalData.bin");
        Assert.That(streams, Is.Not.Null);

        Assert.That(streams.Length, Is.EqualTo(2));
        Assert.Multiple(() =>
        {
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MeshWriteExternalData.gltf"), streams[0], AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
            AssertHelper.IsSameFile(Path.Combine(_BasePath, "MeshWriteExternalData.bin"), streams[1]);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MeshWriteEmbeddedData()
    {
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        bodies[0].Rotation = new Quaternion(20.0.ToRad(), 0, 0);

        var streams = GltfBodyExporter.Export(bodies, GltfFileType.EmbeddedData);
        Assert.That(streams, Is.Not.Null);
        Assert.That(streams.Length, Is.EqualTo(1));
        AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MeshWriteEmbeddedData.gltf"), streams[0], AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MeshWriteBinary()
    {
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        bodies[0].Rotation = new Quaternion(20.0.ToRad(), 0, 0);

        var streams = GltfBodyExporter.Export(bodies, GltfFileType.Binary);
        Assert.That(streams, Is.Not.Null);
        Assert.That(streams.Length, Is.EqualTo(1));
        AssertHelper.IsSameFile(Path.Combine(_BasePath, "MeshWriteBinary.glb"), streams[0]);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void MultiLayer()
    {
        var layer1 = new Layer()
        {
            Color = new Color(0, 1, 0),
            Transparency = 0.5f,
            Name = "Layer Number One"
        };
        Context.Current.Layers.Add(layer1);

        var layer2 = new Layer()
        {
            Color = new Color(0, 0, 1),
            Name = "Layer Number Two"
        };
        Context.Current.Layers.Add(layer2);

        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        bodies[0].Layer = layer1;
        bodies[1].Layer = layer2;
        bodies[2].Layer = layer2;

        var streams = GltfBodyExporter.Export(bodies, GltfFileType.ExternalData, "MultiLayer.bin");
        Assert.That(streams, Is.Not.Null);

        Assert.That(streams.Length, Is.EqualTo(2));
        Assert.Multiple(() =>
        {
            AssertHelper.IsSameTextFile(Path.Combine(_BasePath, "MultiLayer.gltf"), streams[0], AssertHelper.TextCompareFlags.IgnoreFloatPrecision);
            AssertHelper.IsSameFile(Path.Combine(_BasePath, "MultiLayer.bin"), streams[1]);
        });
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void UnicodePath()
    {
        var bodies = TestGeomGenerator.CreateBoxCylinderSphere();
        var exchanger = new GltfExchanger();
        var path = Path.Combine(TestData.TempDirectory, $"Gltf_Unicode_{TestData.UnicodeTestString}.glb");
        File.Delete(path);
        Assert.That(((IBodyExporter)exchanger).DoExport(path, bodies), Is.True);
        Assert.That(File.Exists(path));
        File.Delete(path);
    }

    //--------------------------------------------------------------------------------------------------

}