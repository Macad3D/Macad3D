using System;
using System.Diagnostics;
using System.IO;
using System.IO.Compression;
using System.Linq;
using System.Text;
using Macad.Common.Serialization;

namespace Macad.Common
{
    public class FileSystem
    {
        #region Properties

        public string Path { get; }

        //--------------------------------------------------------------------------------------------------

        string _TempPath => Path + ".tmp";

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Public stuff

        public FileSystem(string path)
        {
            Path = path;
        }

        //--------------------------------------------------------------------------------------------------

        ~FileSystem()
        {
            if (_ArchiveForWriting != null)
            {
                _ArchiveForWriting.Dispose();
                _ArchiveForWriting = null;
                File.Delete(_TempPath);
            }
        }

        //--------------------------------------------------------------------------------------------------

        public bool Write(string name, MemoryStream memStream)
        {
            try
            {
                var archive = _OpenForWriting();
                if (archive != null)
                {
                    // Check if an entry already exists
                    var entry = archive.GetEntry(name);
                    entry?.Delete();

                    entry = archive.CreateEntry(name);
                    var entryStream = entry.Open();

                    memStream.Position = 0;
                    memStream.CopyTo(entryStream);
                    entryStream.Flush();
                    entryStream.Close();

                    return true;
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                throw new Exception($"Error while writing file {name} to archive {Path}. ({e.Message})");
            }
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public bool Write(string name, byte[] buffer)
        {
            try
            {
                var archive = _OpenForWriting();
                if (archive != null)
                {
                    var entry = archive.CreateEntry(name);
                    var entryStream = entry.Open();

                    entryStream.Write(buffer, 0, buffer.Length);
                    entryStream.Flush();
                    entryStream.Close();

                    return true;
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                throw new Exception($"Error while writing file {name} to archive {Path}. ({e.Message})");
            }
            return false;
        }

        //--------------------------------------------------------------------------------------------------

        public byte[] Read(string name)
        {
            try
            {
                byte[] buffer;
                using (ZipArchive archive = ZipFile.Open(Path, ZipArchiveMode.Read))
                {
                    var entry = archive.GetEntry(name);
                    if (entry == null)
                        return null;

                    using (var instream = entry.Open())
                    {
                        int length = (int)entry.Length;
                        buffer = new byte[length];

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
                    }
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
            if (_ArchiveForWriting != null)
            {
                _ArchiveForWriting.Dispose();
                _ArchiveForWriting = null;

                File.Copy(_TempPath, Path, true);
                File.Delete(_TempPath);
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Serialization

        public T Deserialize<T>(string name, SerializationContext context, Func<uint, uint, bool> verifyVersion) where T : class
        {
            try
            {
                using (ZipArchive archive = ZipFile.Open(Path, ZipArchiveMode.Read))
                {
                    var entry = archive.GetEntry(name);
                    using var streamReader = new StreamReader(entry.Open(), Encoding.UTF8);
                    var reader = new Reader(streamReader.ReadToEnd());

                    var doc = Serializer.Deserialize<DocumentHeader>(reader, context);
                    Debug.Assert(doc.ContentType == typeof(T).Name);
                    context.MajorVersion = doc.MajorVersion;
                    context.MinorVersion = doc.MinorVersion;

                    if (!(verifyVersion?.Invoke(doc.MajorVersion, doc.MinorVersion) ?? true))
                    {
                        context.Result = SerializationResult.VersionMismatch;
                        return null;
                    }

                    context.BlobArchive = new FileSystemBlobArchive(this, name);
                    var instance = Serializer.Deserialize<T>(reader, context);

                    context.BlobArchive = null;

                    return instance;
                }
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
                    MajorVersion = context.MajorVersion,
                    MinorVersion = context.MinorVersion
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

        //--------------------------------------------------------------------------------------------------

        ZipArchive _ArchiveForWriting;

        //--------------------------------------------------------------------------------------------------

        ZipArchive _OpenForWriting()
        {
            try
            {
                if (_ArchiveForWriting == null)
                {
                    Directory.CreateDirectory(System.IO.Path.GetDirectoryName(Path));
                    if (File.Exists(_TempPath))
                    {
                        File.Delete(_TempPath);
                    }

                    _ArchiveForWriting = ZipFile.Open(_TempPath, ZipArchiveMode.Create);
                }
                return _ArchiveForWriting;
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                throw new Exception($"Error opening archive {Path} for writing. ({e.Message})");
            }
        }

        #endregion

        public void Remove(string name)
        {
            try
            {
                var archive = _OpenForWriting();
                if (archive != null)
                {
                    if (name.EndsWith("*"))
                    {
                        // Remove more
                        var maskstring = name.Substring(0, name.Length - 1);
                        var entries = archive.Entries.Where(e => e.FullName.StartsWith(maskstring)).ToArray();
                        foreach (var entry in entries)
                        {
                            entry.Delete();
                        }
                    }
                    else
                    {
                        // Remove one
                        var entry = archive.GetEntry(name);
                        if (entry != null)
                        {
                            entry.Delete();
                        }
                    }
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                throw new Exception($"Error while writing file {name} to archive {Path}. ({e.Message})");
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}