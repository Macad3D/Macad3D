using Macad.Core;
using Macad.Core.Topology;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Exchange.Gltf;

internal sealed class GltfBodyExporter
{
    public static MemoryStream[] Export(IEnumerable<Body> bodies, GltfFileType fileType, string binFileName=null)
    {
        var exporter = new GltfBodyExporter();
        return exporter._Export(bodies, fileType, binFileName);
    }

    //--------------------------------------------------------------------------------------------------

    class LayerInfo(int nodeIndex, int materialIndex)
    {
        public int NodeIndex { get; } = nodeIndex;
        public int MaterialIndex { get; } = materialIndex;
    }

    //--------------------------------------------------------------------------------------------------

    class MeshInfo
    {
        public float[] MinPosition;
        public float[] MaxPosition;
        public int VertexBufferOffset;
        public int VertexBufferLength;
        public int IndexBufferOffset;
        public int IndexBufferLength;
        public GltfDomAccessor.DataComponentType IndexDataType;
    }

    //--------------------------------------------------------------------------------------------------

    [StructLayout(LayoutKind.Sequential, Pack = 1)]
    struct Vertex(Pnt pos, Dir nrm)
    {
        float PosX = (float)pos.X;
        float PosY = (float)pos.Z;
        float PosZ = (float)-pos.Y;
        float NrmX = (float)nrm.X;
        float NrmY = (float)nrm.Z;
        float NrmZ = (float)-nrm.Y;
    }

    //--------------------------------------------------------------------------------------------------

    Body[] _Bodies;
    GltfDomDocument _Document;
    readonly Dictionary<Layer, LayerInfo> _LayerInfos = new();
    readonly Trsf _CsTransform;
    readonly Trsf _CsTransformInv;

    //--------------------------------------------------------------------------------------------------

    GltfBodyExporter()
    {
        _CsTransform = new(new Ax3(Pnt.Origin, gp.DY, gp.DX), Ax3.XOY);
        _CsTransformInv = _CsTransform.Inverted();
    }

    //--------------------------------------------------------------------------------------------------

    MemoryStream[] _Export(IEnumerable<Body> bodies, GltfFileType fileType, string binFileName=null)
    {
        try
        {
            _Document = new();
            _Bodies = bodies.ToArray();

            _DoLayers();

            foreach (var body in _Bodies)
            {
                var shape = body.Shape.GetBRep();
                if (shape == null)
                    continue;

                var layerInfo = _LayerInfos[body.Layer];
                GltfDomNode bodyNode = new()
                {
                    Name = body.Name
                };
                var bodyNodeIndex = _Document.AddNode(bodyNode, layerInfo.NodeIndex);
                _SetNodeTransform(bodyNode, body.GetTransformation());

                // Get Triangulation
                TriangulationData triangulation = TriangulationHelper.GetTriangulation(shape, true);
                if (triangulation == null || triangulation.TriangleCount == 0)
                    continue;
                MeshInfo meshInfo = _SerializeBufferData(triangulation);

                GltfDomBufferView vertexBufferView = new()
                {
                    BufferIndex = 0,
                    ByteOffset = meshInfo.VertexBufferOffset,
                    ByteLength = meshInfo.VertexBufferLength,
                    ByteStride = sizeof(float) * 6,
                    TargetHint = GltfDomBufferView.Target.ArrayBuffer
                };
                int vertexBufferViewIndex = _Document.AddBufferView(vertexBufferView);

                // Add vertex positions
                GltfDomAccessor posAccessor = new()
                {
                    BufferViewIndex = vertexBufferViewIndex,
                    ElementType = GltfDomAccessor.DataType.VEC3,
                    ComponentType = GltfDomAccessor.DataComponentType.Float,
                    ElementCount = triangulation.Vertices.Length,
                    MinElementValue = meshInfo.MinPosition,
                    MaxElementValue = meshInfo.MaxPosition
                };
                int posAccessorIndex = _Document.AddAccessor(posAccessor);

                // Add vertex normals
                GltfDomAccessor normalAccessor = new()
                {
                    BufferViewIndex = vertexBufferViewIndex,
                    ByteOffset = sizeof(float) * 3,
                    ElementType = GltfDomAccessor.DataType.VEC3,
                    ComponentType = GltfDomAccessor.DataComponentType.Float,
                    ElementCount = triangulation.Normals.Length
                };
                int normalAccessorIndex = _Document.AddAccessor(normalAccessor);

                // Add indices
                GltfDomBufferView indexBufferView = new()
                {
                    BufferIndex = 0,
                    ByteOffset = meshInfo.IndexBufferOffset,
                    ByteLength = meshInfo.IndexBufferLength,
                    TargetHint = GltfDomBufferView.Target.ElementArrayBuffer
                };
                int indexBufferViewIndex = _Document.AddBufferView(indexBufferView);
                GltfDomAccessor indexAccessor = new()
                {
                    BufferViewIndex = indexBufferViewIndex,
                    ByteOffset = 0,
                    ElementType = GltfDomAccessor.DataType.SCALAR,
                    ComponentType = meshInfo.IndexDataType,
                    ElementCount = triangulation.Indices.Length
                };
                int indexAccessorIndex = _Document.AddAccessor(indexAccessor);

                // Create Mesh
                GltfDomMesh mesh = new();
                _Document.AddMesh(mesh, bodyNodeIndex);
                GltfDomPrimitive primitive = new()
                {
                    MaterialIndex = layerInfo.MaterialIndex,
                    Indices = indexAccessorIndex,
                    Attributes =
                    {
                        { GltfDomPrimitive.AttributeType.POSITION, posAccessorIndex },
                        { GltfDomPrimitive.AttributeType.NORMAL, normalAccessorIndex },
                    }
                };
                mesh.AddPrimitive(primitive);
            }

            var streams = _Document.WriteToStream(fileType, binFileName);
            _Document = null;
            return streams;
        }
        catch (Exception e)
        {
            Messages.Exception($"Exception occured while exporting to glTF.", e);
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _SetNodeTransform(GltfDomNode node, Trsf transform)
    {
        transform = _CsTransform * transform * _CsTransformInv;
        node.SetTranslation(transform.TranslationPart());
        node.SetRotation(transform.GetRotation());
    }

    //--------------------------------------------------------------------------------------------------

    MeshInfo _SerializeBufferData(TriangulationData triangulation)
    {
        MeshInfo info = new()
        {
            MinPosition = [float.MaxValue, float.MaxValue, float.MaxValue],
            MaxPosition = [float.MinValue, float.MinValue, float.MinValue]
        };

        // Vertices
        info.VertexBufferLength = sizeof(float) * 6 * triangulation.Vertices.Length;
        info.VertexBufferOffset = _Document.AddBufferData<Vertex>(triangulation.Vertices.Length, out var vspan);

        for (var i = 0; i < triangulation.Vertices.Length; i++)
        {
            var pnt = triangulation.Vertices[i];
            var nrm = triangulation.Normals[i];
            vspan[i] = new (pnt, nrm);

            float x = (float)pnt.X;
            info.MinPosition[0] = Math.Min(x, info.MinPosition[0]);
            info.MaxPosition[0] = Math.Max(x, info.MaxPosition[0]);
            float y = (float)pnt.Z;
            info.MinPosition[1] = Math.Min(y, info.MinPosition[1]);
            info.MaxPosition[1] = Math.Max(y, info.MaxPosition[1]);
            float z = -(float)pnt.Y;
            info.MinPosition[2] = Math.Min(z, info.MinPosition[2]);
            info.MaxPosition[2] = Math.Max(z, info.MaxPosition[2]);
        }

        // Indices
        switch (triangulation.Indices.Length)
        {
            case < 255:
            {
                info.IndexDataType = GltfDomAccessor.DataComponentType.UnsignedByte;
                info.IndexBufferLength = sizeof(byte) * triangulation.Indices.Length;
                info.IndexBufferOffset = _Document.AddBufferData<byte>(triangulation.Indices.Length, out var ispan);
                for (var i = 0; i < triangulation.Indices.Length; i++)
                {
                    ispan[i] = (byte)triangulation.Indices[i];
                }
                break;
            }
            case < 65535:
            {
                info.IndexDataType = GltfDomAccessor.DataComponentType.UnsignedShort;
                info.IndexBufferLength = sizeof(ushort) * triangulation.Indices.Length;
                info.IndexBufferOffset = _Document.AddBufferData<ushort>(triangulation.Indices.Length, out var ispan);
                for (var i = 0; i < triangulation.Indices.Length; i++)
                {
                    ispan[i] = (ushort)triangulation.Indices[i];
                }

                break;
            }
            default:
            {
                info.IndexDataType = GltfDomAccessor.DataComponentType.UnsignedInt;
                info.IndexBufferLength = sizeof(uint) * triangulation.Indices.Length;
                info.IndexBufferOffset = _Document.AddBufferData<uint>(triangulation.Indices.Length, out var ispan);
                for (var i = 0; i < triangulation.Indices.Length; i++)
                {
                    ispan[i] = (uint)triangulation.Indices[i];
                }

                break;
            }
        }

        return info;
    }

    //--------------------------------------------------------------------------------------------------

    void _DoLayers()
    {
        var layers = _Bodies.Select(body => body.Layer).Distinct().ToArray();

        foreach (var layer in layers)
        {
            GltfDomNode node = new()
            {
                Name = layer.Name
            };
            var nodeIndex = _Document.AddNode(node);

            GltfDomMaterial material = new();
            material.PbrMetallicRoughness.SetBaseColorFactor(layer.Color, 1.0f-layer.Transparency);
            if (layer.Transparency > 0)
            {
                material.AlphaMode = GltfDomMaterial.AlphaModes.BLEND;
            }
            material.PbrMetallicRoughness.MetallicFactor = 0.0f;
            material.PbrMetallicRoughness.RoughnessFactor = 0.0f;
            var materialIndex = _Document.AddMaterial(material);

            _LayerInfos.Add(layer, new(nodeIndex, materialIndex));
        }
    }

    //--------------------------------------------------------------------------------------------------

}