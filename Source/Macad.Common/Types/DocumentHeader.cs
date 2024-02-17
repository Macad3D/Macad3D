using Macad.Common.Serialization;

namespace Macad.Common;

[SerializeType]
public class DocumentHeader
{
    [SerializeMember]
    public string ContentType { get; set; }

    [SerializeMember]
    public int MajorVersion { get; set; }

    [SerializeMember]
    public int MinorVersion { get; set; }
}