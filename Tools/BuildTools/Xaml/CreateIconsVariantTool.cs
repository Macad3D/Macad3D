using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.Json;
using System.Windows.Media;
using System.Xml.Linq;

namespace Macad.Build.Xaml;

record IconVariantModifier(
    double ColorScale,
    Dictionary<string, string> ColorMap
);

record IconVariantConfig(
    IconVariantModifier Fill,
    IconVariantModifier Stroke
);

//--------------------------------------------------------------------------------------------------

public class CreateIconsVariantTool : BuildTool
{
    public override bool Execute(Parameters parameters)
    {
        // Input list
        string inputFile = parameters.GetValueOrDefault("In");
        if (string.IsNullOrEmpty(inputFile))
        {
            LogError($"No input list file specified.");
            return false;
        }

        if (!File.Exists(inputFile))
        {
            LogError($"Input file does not exist: {inputFile}.");
            return false;
        }
        
        // load the doc
        var doc = XDocument.Load(inputFile);
        Dictionary<string, XElement> drawingGroups = new();
        foreach (var element in doc.Root.Elements(XamlUtils.PresentationNameSpace + "DrawingGroup"))
        {
            string key = element.Attribute(XamlUtils.XamlNameSpace + "Key")?.Value;
            if(string.IsNullOrEmpty(key))
                continue;
            drawingGroups[key] = element;
        }
        if(drawingGroups.Count == 0)
        {
            LogError("Input file does not have any icons (DrawingGroup elements).");
            return false;
        }

        // Output file
        string outputFileName = parameters.GetValueOrDefault("Out");
        if (string.IsNullOrEmpty(outputFileName))
        {
            LogError($"Output for variant icon dictionary not specified.");
            return false;
        }

        // Config file
        string configFileName = parameters.GetValueOrDefault("Config");
        if (string.IsNullOrEmpty(configFileName))
        {
            LogError($"No config file specified.");
            return false;
        }
        if (!File.Exists(configFileName))
        {
            LogError($"Config file does not exist: {configFileName}.");
            return false;
        }

        string jsonContent = File.ReadAllText(configFileName);
        var configs = JsonSerializer.Deserialize<Dictionary<string, IconVariantConfig>>(jsonContent);
        if (configs == null)
        {
            LogError($"{Path.GetFileName(jsonContent)} is not a valid json map.");
            return false;
        }

        bool result = true;

        // iterate through files
        foreach (var kvp in drawingGroups)
        {
            foreach (var config in configs)
            {
                _ModifyElement(kvp.Value, config.Value);
            }
        }

        // Write
        if (result)
        {
            doc.Save(outputFileName);
        }

        LogInfo($"{Path.GetFileName(outputFileName)} generated with {drawingGroups.Count} icons.");

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    void _ModifyElement(XElement element, IconVariantConfig config)
    {
        switch (element.Name.LocalName)
        {
            case "GeometryDrawing":
                _ModifyColorAttribute(element, "Brush", config.Fill);
                break;

            case "Pen":
                _ModifyColorAttribute(element, "Brush", config.Stroke);
                break;

            case "GeometryDrawing.Brush":
                _ModifyBrushElement(element, config.Fill);
                return; // No child iteration

            case "Pen.Brush":
                _ModifyBrushElement(element, config.Fill);
                return; // No child iteration
        }

        foreach (var child in element.Elements())
        {
            _ModifyElement(child, config);
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ModifyBrushElement(XElement parent, IconVariantModifier modifier)
    {
        var element = parent.Elements().FirstOrDefault();
        if(element == null)
            return;

        switch (element.Name.LocalName)
        {
            case "SolidColorBrush":
                _ModifyColorAttribute(element, "Color", modifier);
                break;

            case "LinearGradientBrush":
                foreach (var colorStopElement in element.Elements(XamlUtils.PresentationNameSpace + "GradientStop"))
                {
                    _ModifyColorAttribute(colorStopElement, "Color", modifier);
                }
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _ModifyColorAttribute(XElement element, string attributeName, IconVariantModifier modifier)
    {
        var attribute = element.Attribute(attributeName);
        if (attribute != null)
        {
            attribute.Value = _ModifyColor(attribute.Value, modifier);
        }
    }

    //--------------------------------------------------------------------------------------------------

    string _ModifyColor(string value, IconVariantModifier modifier)
    {
        if (value == "Transparent")
        {
            return value;
        }

        // Check if there is a direct mapping for this color
        if (modifier.ColorMap.TryGetValue(value, out string newValue))
        {
            return newValue;
        }

        // If not, apply the color scale if needed
        if (modifier.ColorScale != 1.0)
        {
            Color color = (Color)ColorConverter.ConvertFromString(value);
            color = Color.FromArgb(color.A,
                                   (byte)(color.R * modifier.ColorScale),
                                   (byte)(color.G * modifier.ColorScale),
                                   (byte)(color.B * modifier.ColorScale));
            value = color.ToString();
        }

        return value;
    }

    //--------------------------------------------------------------------------------------------------

}