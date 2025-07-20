using System;
using System.IO;
using Microsoft.VisualBasic.Logging;
using SharpVectors.Converters;
using SharpVectors.Renderers.Wpf;

namespace Macad.Build.Xaml;

public class SvgToXamlTool : BuildTool
{
    public override bool Execute(Parameters parameters)
    {
        // Input list
        string inputListFileName = parameters.GetValueOrDefault("In");
        if (string.IsNullOrEmpty(inputListFileName))
        {
            LogError($"No input list file specified.");
            return false;
        }
        if (!File.Exists(inputListFileName))
        {
            LogError($"Input list file does not exist: {inputListFileName}.");
            return false;
        }
        string[] inputs = File.ReadAllLines(inputListFileName);

        // Output list
        string outputListFileName = parameters.GetValueOrDefault("Out");
        if (string.IsNullOrEmpty(outputListFileName))
        {
            LogError($"No output list file specified.");
            return false;
        }
        if (!File.Exists(outputListFileName))
        {
            LogError($"Output list file does not exist: {outputListFileName}.");
            return false;
        }
        string[] outputs = File.ReadAllLines(outputListFileName);


        bool result = true;

        if (inputs.Length != outputs.Length)
        {
            LogError("The number of source items is not equal to the number of target items.");
            return false;
        }

        // Prepare converter
        WpfDrawingSettings drawingSettings = new WpfDrawingSettings
        {
            IncludeRuntime = false,
            TextAsGeometry = true,
            OptimizePath = true
        };
        var converter = new FileSvgConverter(true, false, drawingSettings);

        // Iterate through files
        for (var i = 0; i < inputs.Length; i++)
        {
            string sourceItem = inputs[i];
            try
            {
                if (string.IsNullOrEmpty(sourceItem))
                {
                    continue;
                }

                string destItem = outputs[i];
                if (string.IsNullOrEmpty(destItem))
                {
                    LogError($"The target item to the source item {sourceItem} is empty.");
                    result = false;
                    continue;
                }
                
                if(!converter.Convert(sourceItem, destItem))
                {
                    LogError($"The file {sourceItem} could not be converted to XAML.");
                    result = false;
                }
            }
            catch (Exception e)
            {
                LogError($"The conversion of the file {sourceItem} raised an exception: {e.Message}");
            }
        }

        LogInfo($"Converted {inputs.Length} SVG files to XAML.");

        return result;
    }
}