using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Text;
using Macad.Common;
using Macad.Common.Serialization;

namespace Macad.Core.Shapes;

[SerializeType]
public class SubshapeReference : ISerializeValue, IEquatable<SubshapeReference>
{
    public SubshapeType Type { get; private set; }
    public Guid ShapeId { get; private set; }
    public string Name { get; private set; }
    public int Index { get; private set; }

    //--------------------------------------------------------------------------------------------------

    SubshapeReference()
    {
        // Used only in deserialization
    }

    //--------------------------------------------------------------------------------------------------

    public SubshapeReference(SubshapeType type, Guid shapeId, int index) 
    {
        Type = type;
        ShapeId = shapeId;
        Index = index;
    }

    //--------------------------------------------------------------------------------------------------

    public SubshapeReference(SubshapeType type, Guid shapeId, string name, int index)
    {
        Type = type;
        ShapeId = shapeId;
        Name = name;
        Debug.Assert(!Name.Contains("-"));
        Index = index;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Equals(SubshapeReference other)
    {
        return (other != null) && (other.Type == Type) && other.ShapeId.Equals(ShapeId) && (other.Name == Name) && (other.Index == Index);
    }

    //--------------------------------------------------------------------------------------------------

    [SuppressMessage("ReSharper", "NonReadonlyMemberInGetHashCode")]
    public override int GetHashCode()
    {
        return ShapeId.GetHashCode() ^ (int)Type ^ Index ^ Name.GetHashCode();
    }

    //--------------------------------------------------------------------------------------------------

    public override string ToString()
    {
        var sb = new StringBuilder();
        switch (Type)
        {
            case SubshapeType.Vertex:
                sb.Append('V');
                break;

            case SubshapeType.Edge:
                sb.Append('E');
                break;

            case SubshapeType.Face:
                sb.Append('F');
                break;

            default:
                return "Invalid";
        }
        sb.Append('-');
        sb.Append(ShapeId.ToString("N"));
        sb.Append('-');
        if (!Name.IsNullOrEmpty())
        {
            sb.Append(Name);
            sb.Append('-');
        }
        sb.Append(Index.ToString());
        return sb.ToString();
    }

    //--------------------------------------------------------------------------------------------------

    public bool Write(Writer writer, SerializationContext context)
    {
        var s = ToString();
        if (s.IsNullOrEmpty() || s == "Invalid")
            return false;

        writer.WriteRawString(s);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    public bool Read(Reader reader, SerializationContext context)
    {
        var parts = reader.ReadValueString().Split('-');
        if (parts.Length < 3 || parts.Length > 4)
            return false;

        switch (parts[0])
        {
            case "V": Type = SubshapeType.Vertex;
                break;
            case "E": Type = SubshapeType.Edge;
                break;
            case "F": Type = SubshapeType.Face;
                break;
            default:
                return false;
        }

        ShapeId =new Guid(parts[1]);
			
        if (parts.Length == 4)
        {
            Name = parts[2];
            Index = Int32.Parse(parts[3]);
        }
        else {
            Index = Int32.Parse(parts[2]);
        }

        // Safe for later GUID redirection
        context?.GetInstanceList<SubshapeReference>().Add(this);

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    #region Static Functions

    static SubshapeReference()
    {
        Serializer.Deserialized += _Serializer_Deserialized;
    }

    //--------------------------------------------------------------------------------------------------

    static void _Serializer_Deserialized(object result, SerializationContext context)
    {
        // The GUID changes in certain deserialization cases, so we need to redirect them
        var instances = context?.GetInstanceList<SubshapeReference>();
        var guidMap = context?.GetInstance<Dictionary<Guid, Guid>>();
        if (guidMap == null || instances == null || instances.Count == 0)
        {
            return;
        }

        foreach (var subshapeReference in instances)
        {
            if (guidMap.TryGetValue(subshapeReference.ShapeId, out var newGuid))
            {
                subshapeReference.ShapeId = newGuid;
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}