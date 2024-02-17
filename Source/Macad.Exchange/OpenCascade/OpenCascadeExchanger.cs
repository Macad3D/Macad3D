using System;
using System.Collections.Generic;
using System.IO;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Exchange;

public sealed class OpenCascadeExchanger : IBodyExporter, IBodyImporter
{
    #region Exchanger

    public string Description { get; } =  "OpenCASCADE BRep";
    public string[] Extensions { get; } = {"brep", "brp"};
        
    //--------------------------------------------------------------------------------------------------

    IExchangerSettings IExchanger.Settings
    {
        get { return Settings; }
        set
        {
            if (value is BrepSettings newSettings)
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
        ExchangeRegistry.Register(new OpenCascadeExchanger());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Settings

    [SerializeType]
    public class BrepSettings : IExchangerSettings
    {
        [SerializeMember]
        public bool ExportBinaryFormat { get; set; }
    }

    //--------------------------------------------------------------------------------------------------

    public BrepSettings Settings { get; private set; } = new BrepSettings();

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IBrepExporter

    bool IBodyExporter.DoExport(string fileName, IEnumerable<Body> bodies)
    {
        try
        {
            var builder = new BRep_Builder();
            var compound = new TopoDS_Compound();
            builder.MakeCompound(compound);
            foreach (var body in bodies)
            {
                var bodyShape = body.Shape?.GetTransformedBRep();
                if (bodyShape == null)
                {
                    Messages.Warning($"BRep Exporter: The body {body.Name} has no valid shape, thus it will not be included in the export.");
                    continue;
                }

                builder.Add(compound, bodyShape);
            }

            var bytes = Settings.ExportBinaryFormat ? BRepExchange.WriteBinary(compound, true) : BRepExchange.WriteASCII(compound, true);
            if (bytes == null || bytes.Length == 0)
            {
                Messages.Error("BRep Exporter: Error generating BRep from body shapes.");
                return false;
            }

            File.WriteAllBytes(fileName, bytes);
            return true;
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            Messages.Exception("Error exporting file " + fileName + ".", e);
        }

        return false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IBrepImporter

    bool IBodyImporter.DoImport(string fileName, out IEnumerable<Body> bodies)
    {
        bodies = null;
        try
        {
            var bytes = File.ReadAllBytes(fileName);
            var occShape =
                BRepExchange.ReadASCII(bytes)
                ?? BRepExchange.ReadBinary(bytes);

            if (occShape == null)
            {
                Messages.Error("Error importing file " + fileName + ".");
                return false;
            }

            // Get top level transformation for body
            var trsf = occShape.Location().Transformation();
            var position = trsf.TranslationPart().ToPnt();
            var rotation = trsf.GetRotation();

            // eliminate top level transformation
            occShape.Location(new TopLoc_Location());

            var body = Body.Create(Solid.Create(occShape));
            body.Position = position;
            body.Rotation = rotation;
            body.Name = Path.GetFileNameWithoutExtension(fileName);

            bodies = new[] {body};
            return true;
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            Messages.Exception("Error importing file " + fileName + ".", e);
        }
        return false;
    }

    #endregion
}