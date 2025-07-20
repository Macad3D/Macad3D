using Microsoft.VisualBasic.Logging;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Xml.Linq;

namespace Macad.Build.Xaml;

public class MergeIconsTool : BuildTool
{
    public override bool Execute(Parameters parameters)
    {
        // Input list
        string inputDir = parameters.GetValueOrDefault("In");
        if (string.IsNullOrEmpty(inputDir))
        {
            LogError($"No input directory specified.");
            return false;
        }

        if (!Directory.Exists(inputDir))
        {
            LogError($"Input directory does not exist: {inputDir}.");
            return false;
        }

        string[] inputs = Directory.GetFiles(inputDir, "*.xaml");
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
        if (!string.IsNullOrEmpty(aliasFileName) & File.Exists(aliasFileName))
        {
            var lines = File.ReadLines(aliasFileName);
            var linecount = 0;
            foreach (var line in lines)
            {
                linecount++;
                if (string.IsNullOrWhiteSpace(line) || line.StartsWith("//"))
                    continue;

                var splitted = line.Split('=');
                if (splitted.Length != 2)
                {
                    LogError($"{Path.GetFileName(aliasFileName)} line {linecount}: More than two segments.");
                    result = false;
                    continue;
                }

                var key = splitted[0];
                if (fileList.ContainsKey(key))
                {
                    LogWarning($"{Path.GetFileName(aliasFileName)} line {linecount}: Key has already a file assignment: {key}");
                    continue;
                }

                var filePath = Path.Combine(inputDir, splitted[1]);
                if (!File.Exists(filePath))
                {
                    LogError($"Aliases.txt Line {linecount}: File does not exist for key {splitted[0]}");
                    result = false;
                    continue;
                }

                fileList[key] = filePath;
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