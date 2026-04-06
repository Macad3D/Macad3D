using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.Json;
using System.Xml.Linq;

namespace Macad.Build.Xaml;

public class MergeIconsTool : BuildTool
{
    public override bool Execute(Parameters parameters)
    {
        // Input list
        string inputListFile = parameters.GetValueOrDefault("In");
        if (string.IsNullOrEmpty(inputListFile))
        {
            LogError($"No input list file specified.");
            return false;
        }

        if (!File.Exists(inputListFile))
        {
            LogError($"Input list file does not exist: {inputListFile}.");
            return false;
        }

        string[] inputs = File.ReadAllLines(inputListFile);
        if (inputs.Length == 0)
        {
            LogError($"No input files for merged icon file.");
            return false;
        }

        // Output file
        string outputFileName = parameters.GetValueOrDefault("Out");
        if (string.IsNullOrEmpty(outputFileName))
        {
            LogError($"Output for merged icon dictionary not specified.");
            return false;
        }

        // Alias file
        string aliasFileName = parameters.GetValueOrDefault("Alias");

        bool result = true;

        // iterate through files
        var fileList = new Dictionary<string, string>();
        foreach (var input in inputs)
        {
            var key = Path.GetFileNameWithoutExtension(input);
            if (fileList.ContainsKey(key))
            {
                LogError($"Key has already a file assignment: {key} -> {input}");
                result = false;
            }

            fileList[key] = input;
        }

        // Process aliases
        string inputDir = Path.GetDirectoryName(inputListFile);
        if (!string.IsNullOrEmpty(aliasFileName) & File.Exists(aliasFileName))
        {
            string jsonContent = File.ReadAllText(aliasFileName);
            var aliases = JsonSerializer.Deserialize<Dictionary<string, string>>(jsonContent);
            if (aliases == null)
            {
                LogError($"{Path.GetFileName(aliasFileName)} is not a valid json map.");
                result = false;
            }

            foreach (var kvp in aliases)
            {
                if (fileList.ContainsKey(kvp.Key))
                {
                    LogWarning($"{Path.GetFileName(aliasFileName)}: Key '{kvp.Key}' has already a file assignment.");
                    continue;
                }

                var filePath = Path.Combine(inputDir, kvp.Value);
                if (!File.Exists(filePath))
                {
                    LogError($"Aliases.txt: File does not exist for key '{kvp.Key}': {kvp.Value}");
                    result = false;
                    continue;
                }

                fileList[kvp.Key] = filePath;
            }
        }

        if (!result)
        {
            return false;
        }

        // Prepare main XAML
        int iconCount = 0;
        var outputDoc = XamlUtils.CreateEmptyResourceDictionary();

        // Process files
        foreach (var kvp in fileList)
        {
            var node = _ProcessFile(kvp.Value, kvp.Key);
            if (node != null)
            {
                outputDoc.Root.Add(new XComment("#region " + kvp.Key));
                outputDoc.Root.Add(node);
                outputDoc.Root.Add(new XComment("#endregion"));
                iconCount++;
            }
        }

        outputDoc.Save(outputFileName);
        LogInfo($"{Path.GetFileName(outputFileName)} generated with {iconCount} icons.");

        return result;
    }

    //--------------------------------------------------------------------------------------------------

    XNode _ProcessFile(string filePath, string key)
    {
        var doc = XDocument.Load(filePath);

        // Top element, will be skipped
        if (doc.Root.Name.LocalName != "DrawingGroup")
        {
            LogError($"Icon file {filePath} has not a root node of DrawingGroup.");
            return null;
        }

        var group = doc.Root.Nodes().FirstOrDefault() as XElement;
        if (group == null || group.Name.LocalName != "DrawingGroup")
        {
            LogError($"Icon file {filePath} has not a second node of DrawingGroup.");
            return null;
        }

        group.SetAttributeValue(XamlUtils.XamlNameSpace + "Key", key);
        group.SetAttributeValue(XamlUtils.XamlNameSpace + "Name", null);

        // Add transparent border to ensure correct bounds
        var clip = group.Elements().FirstOrDefault(n => n.Name.LocalName == "DrawingGroup.ClipGeometry");
        if (clip != null)
        {
            var rect = clip.Elements().FirstOrDefault(n => n.Name.LocalName == "RectangleGeometry");
            if (rect != null)
            {
                var drawing = new XElement(XamlUtils.PresentationNameSpace + "GeometryDrawing");
                drawing.SetAttributeValue("Brush", "Transparent");
                var drawingGeom = new XElement(XamlUtils.PresentationNameSpace + "GeometryDrawing.Geometry");
                drawingGeom.Add(rect);
                drawing.Add(drawingGeom);
                group.Add(drawing);
            }
        }

        return group;
    }
}