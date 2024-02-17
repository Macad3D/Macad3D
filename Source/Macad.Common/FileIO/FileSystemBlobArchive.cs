namespace Macad.Common;

public sealed class FileSystemBlobArchive : Serialization.IBlobArchive
{
    readonly FileSystem _FileSystem;
    readonly string _BaseName;
    int _LastId = -1;

    public FileSystemBlobArchive(FileSystem fileSystem, string baseName)
    {
        _FileSystem = fileSystem;
        _BaseName = baseName;
    }

    public int WriteBlob(byte[] data)
    {
        _LastId++;

        var path = $"Blobs\\{_BaseName}\\{_LastId:x8}";
        if (!_FileSystem.Write(path, data))
            return -1;

        return _LastId;
    }

    public byte[] ReadBlob(int reference)
    {
        var path = $"Blobs\\{_BaseName}\\{reference:x8}";
        return _FileSystem.Read(path);
    }
}