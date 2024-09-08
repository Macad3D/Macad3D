using System;

namespace Macad.Common.Serialization;

//--------------------------------------------------------------------------------------------------

[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface)]
public sealed class SerializeTypeAttribute : Attribute
{
}

//--------------------------------------------------------------------------------------------------

[AttributeUsage(AttributeTargets.Property)]
public sealed class SerializeMemberAttribute : Attribute
{
    public int SortKey { get; set; }
    public bool Redirect { get; set; }
    public string ReaderFunc { get; set; }
    public string WriterFunc { get; set; }
}

//--------------------------------------------------------------------------------------------------

[AttributeUsage(AttributeTargets.Property)]
public sealed class SerializeReferenceIdAttribute : Attribute
{
}

//--------------------------------------------------------------------------------------------------
