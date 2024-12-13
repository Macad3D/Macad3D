using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Runtime.InteropServices;
using System.Text.Json;
using System.Text.Json.Serialization;
using Macad.Common;

namespace Macad.Exchange.Gltf;

internal enum GltfFileType
{
    ExternalData,
    EmbeddedData,
    Binary
}

//--------------------------------------------------------------------------------------------------

internal sealed class GltfDomDocument
{
    [JsonPropertyName("asset")]
    public GltfDomAsset AssetHeader { get; } = new();

    [JsonPropertyName("scene")]
    public int DefaultScene { get; } = 0;

    [JsonPropertyName("scenes")]
    public GltfDomScene[] Scenes => [_CurrentScene];

    [JsonPropertyName("nodes")]
    public List<GltfDomNode> Nodes { get; private set; }

    [JsonPropertyName("cameras")]
    public List<GltfDomCamera> Cameras { get; private set; }

    [JsonPropertyName("meshes")]
    public List<GltfDomMesh> Meshes { get; private set; }

    [JsonPropertyName("buffers")]
    public GltfDomBuffer[] Buffers => [_CurrentBuffer];

    [JsonPropertyName("bufferViews")]
    public List<GltfDomBufferView> BufferViews { get; private set; }

    [JsonPropertyName("accessors")]
    public List<GltfDomAccessor> Accessors { get; private set; }

    [JsonPropertyName("materials")]
    public List<GltfDomMaterial> Materials { get; private set; }

    //--------------------------------------------------------------------------------------------------

    readonly GltfDomScene _CurrentScene;
    readonly GltfDomBuffer _CurrentBuffer;
    readonly byte[] _BinPadding = [0, 0, 0];

    //--------------------------------------------------------------------------------------------------

    public GltfDomDocument()
    {
        _CurrentScene = new();
        _CurrentBuffer = new()
        {
            Data = new MemoryStream()
        };
    }

    //--------------------------------------------------------------------------------------------------

    public MemoryStream[] WriteToStream(GltfFileType fileType, string binFileName)
    {
        if (fileType == GltfFileType.ExternalData)
        {
            Debug.Assert(binFileName != null);
            _CurrentBuffer.Uri = binFileName;
        }
        if (fileType == GltfFileType.EmbeddedData)
        {
            _CurrentBuffer.Uri = "data:application/octet-stream;base64," + Convert.ToBase64String(_CurrentBuffer.Data.GetBuffer(), 0, (int)_CurrentBuffer.ByteLength);
            _CurrentBuffer.Data.Dispose();
            _CurrentBuffer.Data = null;
        }

        var options = new JsonSerializerOptions
        {
            WriteIndented = true,
            DefaultIgnoreCondition = JsonIgnoreCondition.WhenWritingNull
        };
        byte[] jsonBytes = JsonSerializer.Serialize(this, options).ToUtf8Bytes();

        if (fileType == GltfFileType.Binary)
        {
            // Export glb binary file
            return _WriteBinary(jsonBytes);
        }

        if (fileType == GltfFileType.ExternalData)
        {
            // One glTF json file in pair with a binary data file
            MemoryStream binStream = _CurrentBuffer.Data;
            _CurrentBuffer.Data = null;
            return [new(jsonBytes), binStream];
        }

        // Only one glTF json file
        return [new(jsonBytes)];
    }

    //--------------------------------------------------------------------------------------------------

    public MemoryStream[] _WriteBinary(byte[] jsonBytes)
    {
        string jsonPadding = "   ";

        // Calc file size
        uint fileSize = 12; // Header
        int jsonPadCount = (4 - jsonBytes.Length % 4) % 4;
        fileSize += (uint)(8 + jsonBytes.Length + jsonPadCount);
        fileSize += (uint)(8 + _CurrentBuffer.ByteLength);

        MemoryStream ms = new();
        BinaryWriter writer = new(ms);
        writer.Write(0x46546c67); // glTF
        writer.Write((uint)2); // Version
        writer.Write(fileSize);

        writer.Write(jsonBytes.Length + jsonPadCount);
        writer.Write(0x4e4f534a); // JSON
        writer.Write(jsonBytes);
        writer.Write(jsonPadding.AsSpan(0, jsonPadCount));

        writer.Write((int)_CurrentBuffer.ByteLength);
        writer.Write(0x004e4942); // BIN
        _CurrentBuffer.Data.Position = 0;
        _CurrentBuffer.Data.CopyTo(ms);

        return [ms];
    }

    //--------------------------------------------------------------------------------------------------

    public int AddNode(GltfDomNode node, int parent = -1)
    {
        Debug.Assert(parent == -1 || (parent >= 0 && parent < Nodes.Count));

        Nodes ??= [];
        int nodeIndex = Nodes.Count;
        Nodes.Add(node);

        if (parent < 0)
        {
            _CurrentScene.AddNodeIndex(nodeIndex);
        }
        else
        {
            Nodes[parent].AddChildIndex(nodeIndex);
        }

        return nodeIndex;
    }

    //--------------------------------------------------------------------------------------------------

    public int AddMesh(GltfDomMesh mesh, int parent)
    {
        Debug.Assert(parent >= 0 && parent < Nodes.Count);

        Meshes ??= [];
        int meshIndex = Meshes.Count;
        Meshes.Add(mesh);

        Nodes[parent].MeshIndex = meshIndex;
        return meshIndex;
    }

    //--------------------------------------------------------------------------------------------------

    public int AddCamera(GltfDomCamera camera, int parent)
    {
        Debug.Assert(parent >= 0 && parent < Nodes.Count);

        Cameras ??= [];
        int camIndex = Cameras.Count;
        Cameras.Add(camera);

        Nodes[parent].CameraIndex = camIndex;
        return camIndex;
    }

    //--------------------------------------------------------------------------------------------------

    public int AddBufferData<T>(int count, out Span<T> data) where T : struct
    {
        int offset = (int)_CurrentBuffer.Data.Length;
        int byteLength = count * Marshal.SizeOf<T>();
        int binPadCount = (4 - byteLength % 4) % 4;

        _CurrentBuffer.Data.SetLength(_CurrentBuffer.Data.Length + byteLength + binPadCount);
        _CurrentBuffer.ByteLength = _CurrentBuffer.Data.Length;
        data = MemoryMarshal.Cast<byte, T>(_CurrentBuffer.Data.GetBuffer().AsSpan(offset));

        if (binPadCount > 0)
        {
            var padSpace = _CurrentBuffer.Data.GetBuffer().AsSpan(offset + byteLength, binPadCount);
            padSpace.Clear();
        }

        return offset;
    }

    //--------------------------------------------------------------------------------------------------

    public int AddBufferView(GltfDomBufferView bufferView)
    {
        BufferViews ??= [];
        int bvIndex = BufferViews.Count;
        BufferViews.Add(bufferView);
        return bvIndex;
    }

    //--------------------------------------------------------------------------------------------------

    public int AddAccessor(GltfDomAccessor accessor)
    {
        Accessors ??= [];
        int accessorIndex = Accessors.Count;
        Accessors.Add(accessor);
        return accessorIndex;
    }

    //--------------------------------------------------------------------------------------------------

    public int AddMaterial(GltfDomMaterial material)
    {
        Materials ??= [];
        int matIndex = Materials.Count;
        Materials.Add(material);
        return matIndex;
    }

    //--------------------------------------------------------------------------------------------------
}
