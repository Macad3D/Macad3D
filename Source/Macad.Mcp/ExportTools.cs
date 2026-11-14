using Macad.Core;
using Macad.Core.Topology;
using ModelContextProtocol;
using ModelContextProtocol.Server;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Threading.Tasks;

namespace Macad.Mcp;

public class ExportTools : ToolsBase
{
    public sealed record ExportResult(string Path, string Format, long FileSize, string[] Bodies);

    //--------------------------------------------------------------------------------------------------

    [McpServerTool(Name = "export_bodies")]
    [Description("Writes bodies to a file for 3D printing or other CAD programs: 'stl' (mesh, for slicers) or 'step' (exact solids). "
                 + "The format defaults to the extension of 'path'. Positions are in world coordinates, units are mm. "
                 + "Returns the written path, the format and the file size.")]
    public Task<ExportResult> ExportBodies(
        [Description("Bodies to export (guids or unique names). At least one.")] string[] bodies,
        [Description("Absolute path of the file to write. The folder must exist.")] string path,
        [Description("'stl' or 'step'. Default: the extension of 'path'.")] string? format = null,
        [Description("True to replace an existing file. Default false.")] bool overwrite = false)
        => Invoke(() =>
        {
            if (bodies == null || bodies.Length == 0)
            {
                throw new McpException("Give at least one body to export.");
            }
            var targets = new List<Body>();
            foreach (var reference in bodies)
            {
                var body = ResolveBody(reference);
                if (body.Shape?.GetBRep() == null)
                {
                    throw new McpException($"The body '{body.Name}' has no valid shape and cannot be exported.");
                }
                if (!targets.Contains(body))
                {
                    targets.Add(body);
                }
            }

            var fullPath = _CheckPath(path, overwrite);
            var extension = (format ?? Path.GetExtension(fullPath)).Trim().TrimStart('.').ToLowerInvariant();
            if (extension == "")
            {
                throw new McpException("Give a 'format' or a 'path' with a file extension, e.g. '.stl' or '.step'.");
            }
            if (extension == "stp")
            {
                extension = "step";
            }

            if (extension is not ("stl" or "step"))
            {
                throw new McpException($"Unknown export format '{extension}'. Use 'stl' or 'step'.");
            }
            var exporter = ExchangeRegistry.FindExchanger<IBodyExporter>(extension)
                           ?? throw new McpException($"No exporter for '{extension}' is available.");

            bool success;
            try
            {
                success = exporter.DoExport(fullPath, targets);
            }
            catch (Exception ex)
            {
                throw new McpException($"Exporting to '{fullPath}' failed: {ex.Message}", ex);
            }
            if (!success || !File.Exists(fullPath))
            {
                throw new McpException($"Exporting to '{fullPath}' failed.");
            }

            return new ExportResult(fullPath, extension, new FileInfo(fullPath).Length, targets.Select(b => b.Name).ToArray());
        });

    //--------------------------------------------------------------------------------------------------

    static string _CheckPath(string path, bool overwrite)
    {
        if (string.IsNullOrWhiteSpace(path) || !Path.IsPathFullyQualified(path))
        {
            throw new McpException("'path' must be an absolute file path.");
        }

        string fullPath;
        try
        {
            fullPath = Path.GetFullPath(path);
        }
        catch (Exception ex)
        {
            throw new McpException($"'path' is not a valid file path: {ex.Message}");
        }

        var folder = Path.GetDirectoryName(fullPath);
        if (folder == null || !Directory.Exists(folder))
        {
            throw new McpException($"The folder '{folder}' does not exist.");
        }
        if (Directory.Exists(fullPath))
        {
            throw new McpException($"'{fullPath}' is a folder, give a file name.");
        }
        if (File.Exists(fullPath) && !overwrite)
        {
            throw new McpException($"The file '{fullPath}' already exists. Set 'overwrite' to replace it.");
        }
        return fullPath;
    }

    //--------------------------------------------------------------------------------------------------
}
