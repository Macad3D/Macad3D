using Macad.Common.Serialization;

namespace Macad.Common
{
    [SerializeType]
    public class DocumentHeader
    {
        [SerializeMember]
        public string ContentType { get; set; }

        [SerializeMember]
        public uint MajorVersion { get; set; }

        [SerializeMember]
        public uint MinorVersion { get; set; }
    }
}