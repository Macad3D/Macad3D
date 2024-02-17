using System;
using System.Collections.Generic;
using System.IO;
using Macad.Core.Shapes;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;
using Macad.Core;

namespace Macad.Exchange;

public sealed class StepExchanger : IBodyExporter, IBodyImporter
{
    #region Exchanger

    public string Description { get; } = "STEP AP209";
    public string[] Extensions { get; } = {"step", "stp"};

    //--------------------------------------------------------------------------------------------------

    IExchangerSettings IExchanger.Settings
    {
        get { return Settings; }
        set
        {
            if (value is StepSettings newSettings)
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
        ExchangeRegistry.Register(new StepExchanger());
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Settings

    [SerializeType]
    public class StepSettings : IExchangerSettings
    {
        [SerializeMember]
        public bool ImportSingleBody { get; set; }
    }

    //--------------------------------------------------------------------------------------------------

    public StepSettings Settings { get; private set; } = new StepSettings();

    //--------------------------------------------------------------------------------------------------

    #endregion

    public bool DoExport(string fileName, IEnumerable<Body> bodies)
    {
        try
        {
            bool hasErrors = false;
            var writer = new Occt.Helper.StepWriter();
            foreach (var body in bodies)
            {
                var bodyShape = body.Shape?.GetTransformedBRep();
                if (bodyShape == null)
                {
                    Messages.Warning($"STEP Exporter: The body {body.Name} has no valid shape, thus it will not be included in the export.");
                    hasErrors = true;
                    continue;
                }

                if (!writer.AddSolid(bodyShape))
                {
                    Messages.Warning($"STEP Exporter: The shape of the body {body.Name} cannot be translated to IGES.");
                    hasErrors = true;
                }
            }

            if (!writer.WriteToFile(fileName))
            {
                Messages.Error($"STEP Exporter: Failed to export to file {fileName}." );
                return false;
            }

            if (hasErrors)
            {
                Messages.Warning($"STEP Exporter: Not all shapes has been written to  {fileName}." );
            }

            return true;
        }
        catch (Exception e)
        {
            Messages.Exception("STEP Exporter: Failed to export to file {fileName} due to an exception.", e);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public bool DoImport(string fileName, out IEnumerable<Body> bodies)
    {
        bodies = null;
        try
        {
            var reader = new Occt.Helper.StepReader();
            if (!reader.ReadFromFile(fileName))
            {
                Messages.Error("STEP Importer: Error importing file " + fileName + ".");
                return false;
            }

            var rootShape = reader.GetRootShape();
            if (rootShape == null)
            {
                Messages.Error("STEP Importer: No shapes found to import from file " + fileName + ".");
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