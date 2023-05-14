using System;
using System.Diagnostics;
using System.IO;
using System.IO.Compression;
using System.Linq;
using System.Text;
using Macad.Common.Serialization;

namespace Macad.Common;

public sealed class FileSystem : IDisposable
{
    #region Properties

    public string Path { get; }

    //--------------------------------------------------------------------------------------------------

    string _TempPath => Path + ".tmp";

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Construction and Destruction

    public FileSystem(string path)
    {
        Path = path;
    }

    //--------------------------------------------------------------------------------------------------

    ~FileSystem()
    {
        Dispose(false);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IDisposable

    void Dispose(bool disposing)
    {
        bool delTemp = _Archive?.Mode == ZipArchiveMode.Create;

        if (disposing)
        {
            _Archive?.Dispose();
        }
        _Archive = null;

        if (delTemp)
        {
            File.Delete(_TempPath);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Dispose()
    {
        Dispose(true);
        GC.SuppressFinalize(this);
    }

    //--------------------------------------------------------------------------------------------------
        
    #endregion

    #region Public API

    public bool Write(string name, MemoryStream memStream)
    {
        try
        {
            _OpenForWriting();

            // Check if an entry already exists
            var entry = _Archive.GetEntry(name);
            entry?.Delete();
            entry = _Archive.CreateEntry(name);
            using var entryStream = entry.Open();

            memStream.Position = 0;
            memStream.CopyTo(entryStream);
            entryStream.Flush();
            entryStream.Close();

            return true;
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw new Exception($"Error while writing file {name} to archive {Path}. ({e.Message})");
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool Write(string name, byte[] buffer)
    {
        try
        {
            _OpenForWriting();

            var entry = _Archive.CreateEntry(name);
            using var entryStream = entry.Open();

            entryStream.Write(buffer, 0, buffer.Length);
            entryStream.Flush();
            entryStream.Close();

            return true;
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw new Exception($"Error while writing file {name} to archive {Path}. ({e.Message})");
        }
    }

    //--------------------------------------------------------------------------------------------------

    public byte[] Read(string name)
    {
        try
        {
            _OpenForReading(Path);

            var entry = _Archive.GetEntry(name);
            if (entry == null)
                return null;

            using var instream = entry.Open();
            int length = (int)entry.Length;
            byte[] buffer = new byte[length];

            int totalRead = 0;
            while (totalRead < length)
            {
                var bytesRead = instream.Read(buffer, totalRead, length-totalRead);
                if (bytesRead == 0)
                {
                    throw new Exception("Less bytes read than expected.");
                }
                totalRead += bytesRead;
            }

            return buffer;
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw new Exception($"Error while reading file {name} from archive {Path}. ({e.Message})");
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Commit()
    {
        if (_Archive != null)
        {
            _Archive.Dispose();
            _Archive = null;

            File.Copy(_TempPath, Path, true);
            File.Delete(_TempPath);
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public void Remove(string name)
    {
        try
        {
            _OpenForWriting();

            if (name.EndsWith("*"))
            {
                // Remove more
                var maskstring = name.Substring(0, name.Length - 1);
                var entries = _Archive.Entries.Where(e => e.FullName.StartsWith(maskstring)).ToArray();
                foreach (var entry in entries)
                {
                    entry.Delete();
                }
            }
            else
            {
                // Remove one
                var entry = _Archive.GetEntry(name);
                entry?.Delete();
            }
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw new Exception($"Error while writing file {name} to archive {Path}. ({e.Message})");
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Serialization

    public T Deserialize<T>(string name, SerializationContext context, Func<Version, bool> verifyVersion) where T : class
    {
        try
        {
            _OpenForReading(Path);

            var entry = _Archive.GetEntry(name);
            if (entry == null)
                return null;

            using var streamReader = new StreamReader(entry.Open(), Encoding.UTF8);
            var reader = new Reader(streamReader.ReadToEnd());

            var doc = Serializer.Deserialize<DocumentHeader>(reader, context);
            Debug.Assert(doc.ContentType == typeof(T).Name);
            context.Version = new Version(doc.MajorVersion, doc.MinorVersion);

            if (!(verifyVersion?.Invoke(context.Version) ?? true))
            {
                context.Result = SerializationResult.VersionMismatch;
                return null;
            }

            context.BlobArchive = new FileSystemBlobArchive(this, name);
            var instance = Serializer.Deserialize<T>(reader, context);

            context.BlobArchive = null;

            return instance;
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw new Exception($"Error while reading file {name} from archive {Path}. ({e.Message})");
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool Serialize(string name, object instance, SerializationContext context)
    {
        try
        {
            context.BlobArchive = new FileSystemBlobArchive(this, name);

            var document = new DocumentHeader()
            {
                ContentType = instance.GetType().Name,
                MajorVersion = context.Version.Major,
                MinorVersion = context.Version.Minor
            };
            var writer = new Writer();
            if (!Serializer.Serialize(writer, document, context)
                || !Serializer.Serialize(writer, instance, context))
                return false;

            var s = Serializer.Format(writer.ToString());
            if (s.IsNullOrEmpty())
                return false;

            if (Write(name, s.ToUtf8Bytes()))
            {
                return true;
            }
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw new Exception($"Error while serializing file {name} of type {instance.GetType().FullName}. ({e.Message})");
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Private stuff

    ZipArchive _Archive;

    //--------------------------------------------------------------------------------------------------

    void _OpenForWriting()
    {
        Debug.Assert(_Archive?.Mode != ZipArchiveMode.Read);
        if (_Archive != null) 
            return;

        Directory.CreateDirectory(System.IO.Path.GetDirectoryName(Path));
        if (File.Exists(_TempPath))
        {
            File.Delete(_TempPath);
        }

        _Archive = ZipFile.Open(_TempPath, ZipArchiveMode.Create);
    }
        
    //--------------------------------------------------------------------------------------------------

    void _OpenForReading(string path)
    {
        Debug.Assert(_Archive?.Mode != ZipArchiveMode.Create);
        _Archive ??= ZipFile.Open(path, ZipArchiveMode.Read);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}