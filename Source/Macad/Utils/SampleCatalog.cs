using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Macad.Common.Serialization;

namespace Macad.Window;

/// <summary>
/// Provides the list of sample models shipped with the application.
/// Titles, descriptions and order are taken from an index file in the samples directory,
/// which contains a serialized list of <see cref="SampleInfo"/>.
/// </summary>
public static class SampleCatalog
{
    /// <summary>
    /// File name of the index file in the samples directory.
    /// </summary>
    public const string IndexFileName = "Samples.index";

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Collects all samples in the given directory.
    /// </summary>
    /// <remarks>
    /// Samples listed in the index come first, in index order. Index entries for files which do not
    /// exist are skipped. Model files not listed in the index are appended, with their file name as title.
    /// If the index cannot be read, all model files are listed with their file name as title.
    /// This function does not use the message log and can be called from any thread.
    /// </remarks>
    /// <param name="directory">The samples directory.</param>
    /// <param name="indexError">Receives a description of the problem if the index exists but cannot be read, otherwise null.</param>
    /// <returns>The samples in presentation order. Thumbnails are not loaded.</returns>
    public static List<SampleInfo> Load(string directory, out string indexError)
    {
        indexError = null;
        var samples = new List<SampleInfo>();
        if (directory == null || !Directory.Exists(directory))
            return samples;

        var modelFiles = Directory.EnumerateFiles(directory, "*." + Core.Topology.Model.FileExtension)
                                  .Select(Path.GetFileName)
                                  .OrderBy(name => name, StringComparer.OrdinalIgnoreCase)
                                  .ToList();
        var remainingFiles = new HashSet<string>(modelFiles, StringComparer.OrdinalIgnoreCase);

        foreach (var entry in _LoadIndex(directory, out indexError))
        {
            if (entry?.FileName == null || !remainingFiles.Remove(entry.FileName))
                continue; // File does not exist or is listed twice

            entry.FilePath = Path.Combine(directory, entry.FileName);
            if (string.IsNullOrWhiteSpace(entry.Title))
            {
                entry.Title = Path.GetFileNameWithoutExtension(entry.FileName);
            }
            samples.Add(entry);
        }

        samples.AddRange(modelFiles.Where(remainingFiles.Contains)
                                   .Select(fileName => new SampleInfo
                                   {
                                       FileName = fileName,
                                       FilePath = Path.Combine(directory, fileName),
                                       Title = Path.GetFileNameWithoutExtension(fileName),
                                   }));
        return samples;
    }

    //--------------------------------------------------------------------------------------------------

    static List<SampleInfo> _LoadIndex(string directory, out string error)
    {
        error = null;
        var path = Path.Combine(directory, IndexFileName);
        if (!File.Exists(path))
            return new List<SampleInfo>();

        List<SampleInfo> index = null;
        try
        {
            var data = File.ReadAllText(path, Encoding.UTF8);
            index = Serializer.Deserialize<List<SampleInfo>>(data, new SerializationContext(SerializationScope.Storage));
        }
        catch (Exception e)
        {
            error = $"The sample index {path} could not be read: {e.Message}";
            return new List<SampleInfo>();
        }

        if (index == null)
        {
            error = $"The sample index {path} could not be read.";
            return new List<SampleInfo>();
        }
        return index;
    }
}
