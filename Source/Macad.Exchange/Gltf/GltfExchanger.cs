using Macad.Common.Serialization;
using Macad.Core;
using System.Collections.Generic;
using System.IO;
using System;
using Macad.Core.Topology;
using Macad.Exchange.Gltf;

namespace Macad.Exchange;

//--------------------------------------------------------------------------------------------------

public sealed class GltfExchanger : IBodyExporter
{
    #region Exchanger

    public string Description { get; } = "GL Transmission Format (Mesh)";
    public string[] Extensions { get; } = ["gltf", "glb"];

    //--------------------------------------------------------------------------------------------------

    IExchangerSettings IExchanger.Settings
    {
        get { return Settings; }
        set
        {
            if (value is GltfSettings newSettings)
                Settings = newSettings;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool CanExportToClipboard()
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    public bool CanImportFromClipboard(Clipboard clipboard)
    {
        return false;
    }

    //--------------------------------------------------------------------------------------------------

    [AutoRegister]
    internal static void Register()
    {
        ExchangeRegistry.Register(new GltfExchanger());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Settings

    [SerializeType]
    public class GltfSettings : IExchangerSettings
    {
        [SerializeMember]
        public bool ExportBinary { get; set; } = true;

        [SerializeMember]
        public bool EmbedBuffer { get; set; } = true;
    }

    //--------------------------------------------------------------------------------------------------

    public GltfSettings Settings { get; private set; } = new();

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper

    bool _WriteToFile(string fileName, MemoryStream[] streams)
    {
        fileName = Path.ChangeExtension(fileName, Settings.ExportBinary ? ".glb" : ".gltf");
        try
        {
            var content = streams[0];
            if (content.Length < 0)
            {
                return false;
            }
            content.Position = 0;
            using (FileStream output = new(fileName, FileMode.Create))
            {
                content.CopyTo(output);
            }

            // Write binary data file if present and not empty
            fileName = Path.ChangeExtension(fileName, ".bin");
            if (streams.Length > 1 && streams[1].Length > 0)
            {
                streams[1].Position = 0;
                using (FileStream output = new(fileName, FileMode.Create))
                {
                    streams[1].CopyTo(output);
                }
            }

            return true;
        }
        catch (Exception e)
        {
            Messages.Exception("Writing glTF to file " + fileName + " failed.", e);
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IBodyExporter

    bool IBodyExporter.DoExport(string fileName, IEnumerable<Body> bodies)
    {
        return ProcessingScope.ExecuteWithGuards(null, "Exporting to GL Transmission Format",
            () =>
            {
                string binFileName = Path.ChangeExtension(Path.GetFileName(fileName), ".bin");
                GltfFileType fileType = Settings.ExportBinary ? GltfFileType.Binary 
                                                              : Settings.EmbedBuffer ? GltfFileType.EmbeddedData 
                                                                                     : GltfFileType.ExternalData;
                return _WriteToFile(fileName, GltfBodyExporter.Export(bodies, fileType, binFileName));
            });
    }

    //--------------------------------------------------------------------------------------------------
    
    #endregion

}