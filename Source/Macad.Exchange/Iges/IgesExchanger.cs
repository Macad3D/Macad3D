using System;
using System.Collections.Generic;
using System.IO;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Occt;

namespace Macad.Exchange;

public sealed class IgesExchanger : IBodyExporter, IBodyImporter
{
    #region Exchanger

    public string Description { get; } = "IGES";
    public string[] Extensions { get; } = {"iges", "igs"};

    //--------------------------------------------------------------------------------------------------

    IExchangerSettings IExchanger.Settings
    {
        get { return Settings; }
        set
        {
            if (value is IgesSettings newSettings)
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
        ExchangeRegistry.Register(new IgesExchanger());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Settings

    [SerializeType]
    public class IgesSettings : IExchangerSettings
    {
        [SerializeMember]
        public bool ImportSingleBody { get; set; }
    }

    //--------------------------------------------------------------------------------------------------

    public IgesSettings Settings { get; private set; } = new IgesSettings();

    //--------------------------------------------------------------------------------------------------

    #endregion

    public bool DoExport(string fileName, IEnumerable<Body> bodies)
    {
        try
        {
            bool hasErrors = false;
            var writer = new Occt.Helper.IgesWriter();
            foreach (var body in bodies)
            {
                var bodyShape = body.Shape?.GetTransformedBRep();
                if (bodyShape == null)
                {
                    Messages.Warning($"IGES Exporter: The body {body.Name} has no valid shape, thus it will not be included in the export.");
                    hasErrors = true;
                    continue;
                }

                if (!writer.AddShape(bodyShape))
                {
                    Messages.Warning($"IGES Exporter: The shape of the body {body.Name} cannot be translated to IGES.");
                    hasErrors = true;
                }
            }

            if (!writer.WriteToFile(fileName))
            {
                Messages.Error($"IGES Exporter: Failed to export to file {fileName}." );
                return false;
            }

            if (hasErrors)
            {
                Messages.Warning($"IGES Exporter: Not all shapes has been written to  {fileName}." );
            }

            return true;
        }
        catch (Exception e)
        {
            Messages.Exception("IGES Exporter: Failed to export to file {fileName} due to an exception.", e);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public bool DoImport(string fileName, out IEnumerable<Body> bodies)
    {
        bodies = null;
        try
        {
            var reader = new Occt.Helper.IgesReader();
            if (!reader.ReadFromFile(fileName))
            {
                Messages.Error("IGES Importer: Error importing file " + fileName + ".");
                return false;
            }

            var rootShape = reader.GetRootShape();
            if (rootShape == null)
            {
                Messages.Error("IGES Importer: No shapes found to import from file " + fileName + ".");
                return false;
            }

            var shapes = new List<TopoDS_Shape>();
            var solids = rootShape.Solids();
            if (solids.Count == 0)
            {
                shapes.Add(rootShape);
            }
            else
            {
                if (Settings.ImportSingleBody)
                {
                    var compound = new TopoDS_Compound();
                    var builder = new BRep_Builder();
                    builder.MakeCompound(compound);
                    foreach (var solid in solids)
                    {
                        builder.Add(compound, solid);
                    }
                    shapes.Add(compound);
                }
                else
                {
                    shapes.AddRange(solids);
                }
            }

            var bodyList = new List<Body>();
            int index = 1;
            string bodyName = Path.GetFileNameWithoutExtension(fileName);
            foreach (var shape in shapes)
            {
                // Get top level transformation for body
                var trsf = shape.Location().Transformation();
                var position = trsf.TranslationPart().ToPnt();
                var rotation = trsf.GetRotation();

                // eliminate top level transformation
                shape.Location(new TopLoc_Location());

                var body = Body.Create(Solid.Create(shape));
                body.Position = position;
                body.Rotation = rotation;
                body.Name = $"{bodyName}_{index++}";
                bodyList.Add(body);
            }

            bodies = bodyList;
            return true;
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            Messages.Exception("Error importing file " + fileName + ".", e);
        }
        return false;
    }

    //--------------------------------------------------------------------------------------------------

}