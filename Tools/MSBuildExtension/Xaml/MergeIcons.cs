using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Xml.Linq;
using Microsoft.Build.Framework;
using Microsoft.Build.Utilities;

namespace Macad.Build.Xaml
{
    public class MergeIcons : Task
    {
        [Required]
        public ITaskItem[] Inputs { get; set; }

        [Required]
        public ITaskItem Output { get; set; }

        [Required]
        public string KeyPrefix { get; set; }

        public string AliasesFile { get; set; }

        [Required]
        public string TempPath { get; set; }

        //--------------------------------------------------------------------------------------------------

        public override bool Execute()
        {
            bool result = true;

            if (Output.ItemSpec.Length == 0)
            {
                Log.LogError($"Output for icon merge not specified.");
                return false;
            }

            if (Inputs.Length == 0)
            {
                Log.LogError($"No input items specified for merged icon file {Output.ItemSpec}.");
                return false;
            }

            //Log.LogWarning(Output.ItemSpec);
            //foreach (var input in Inputs)
            //{
            //    Log.LogWarning(input.ItemSpec);
            //}

            var outputDirectory = Path.GetDirectoryName(Output.ItemSpec);

            // iterate through files
            var fileList = new Dictionary<string, string>();
            foreach (var input in Inputs)
            {
                var key = KeyPrefix + "_" + Path.GetFileNameWithoutExtension(input.ItemSpec);

                if (fileList.ContainsKey(key))
                {
                    Log.LogError($"Key has already a file assignment: {key} -> {input.ItemSpec}");
                    result = false;
                }

                fileList[key] = input.ItemSpec;
            }

            // Process aliases
            if (!string.IsNullOrEmpty(AliasesFile) & File.Exists(AliasesFile))
            {
                var lines = File.ReadLines(AliasesFile);
                var linecount = 0;
                foreach (var line in lines)
                {
                    linecount++;
                    if (string.IsNullOrWhiteSpace(line) || line.StartsWith("//"))
                        continue;

                    var splitted = line.Split('=');
                    if (splitted.Length != 2)
                    {
                        Log.LogError($"Aliases.txt Line {linecount}: More than two segments.");
                        result = false;
                        continue;
                    }

                    var key = KeyPrefix + "_" + splitted[0];
                    if (fileList.ContainsKey(key))
                    {
                        Log.LogWarning($"Aliases.txt Line {linecount}: Key has already a file assignment: {key}");
                        continue;
                    }

                    var filePath = Path.Combine(TempPath, splitted[1]);
                    if (!File.Exists(filePath))
                    {
                        Log.LogError($"Aliases.txt Line {linecount}: File does not exist for key: {splitted[0]}");
                        result = false;
                        continue;
                    }

                    fileList[key] = filePath;
                }
            }

            // Prepare main XAML
            int iconCount = 0;
            var outputDoc = XamlProcessor.CreateEmptyResourceDictionary();

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

            outputDoc.Save(Output.ItemSpec);
            Log.LogMessage($"{Path.GetFileName(Output.ItemSpec)} generated with {iconCount} icons.");

            return result;
        }

        //--------------------------------------------------------------------------------------------------

        XNode _ProcessFile(string filePath, string key)
        {
            var doc = XDocument.Load(filePath);

            // Top element, will be skipped
            if (doc.Root.Name.LocalName != "DrawingGroup")
            {
                Log.LogError($"Icon file {filePath} has not a root node of DrawingGroup.");
                return null;
            }

            var group = doc.Root.Nodes().FirstOrDefault() as XElement;
            if (group == null || group.Name.LocalName != "DrawingGroup")
            {
                Log.LogError($"Icon file {filePath} has not a second node of DrawingGroup.");
                return null;
            }

            group.SetAttributeValue(XamlProcessor.XamlNameSpace + "Key", key);
            group.SetAttributeValue(XamlProcessor.XamlNameSpace + "Name", null);

            // Add transparent border to ensure correct bounds
            var clip = group.Elements().FirstOrDefault(n => n.Name.LocalName == "DrawingGroup.ClipGeometry");
            if (clip != null)
            {
                var rect = clip.Elements().FirstOrDefault(n => n.Name.LocalName == "RectangleGeometry");
                if (rect != null)
                {
                    var drawing = new XElement(XamlProcessor.PresentationNameSpace + "GeometryDrawing");
                    drawing.SetAttributeValue("Brush", "Transparent");
                    var drawingGeom = new XElement(XamlProcessor.PresentationNameSpace + "GeometryDrawing.Geometry");
                    drawingGeom.Add(rect);
                    drawing.Add(drawingGeom);
                    group.Add(drawing);
                }
            }

            return group;
        }
    }
}