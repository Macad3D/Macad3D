using System.IO;

namespace Macad.Build.Xaml;

public class MergeResourceDictsTool : BuildTool
{
    public override bool Execute(Parameters parameters)
    {
        // Project directory
        string projectDir = parameters.GetValueOrDefault("PrjDir");
        if (string.IsNullOrEmpty(projectDir))
        {
            LogError($"No project directory specified.");
            return false;
        }
        if (!Directory.Exists(projectDir))
        {
            LogError($"Project directory does not exist: {projectDir}.");
            return false;
        }

        // Input file
        string inputFileName = parameters.GetValueOrDefault("In");
        if (string.IsNullOrEmpty(inputFileName))
        {
            LogError($"No input specified.");
            return false;
        }
        if (!File.Exists(Path.Combine(projectDir, inputFileName)))
        {
            LogError($"Input file does not exist: {inputFileName}.");
            return false;
        }

        // Output file
        string outputFileName = parameters.GetValueOrDefault("Out");
        if (string.IsNullOrEmpty(outputFileName))
        {
            LogError($"Output for merged resource dictionary not specified.");
            return false;
        }
        
        // Dependencies list output file
        string depsFileName = parameters.GetValueOrDefault("DepsOut");
        if (string.IsNullOrEmpty(depsFileName))
        {
            LogError($"Output file for dependencies not specified.");
            return false;
        }

        // Call Merger
        var outputDoc = ResMerger.MergeResources(projectDir, inputFileName, depsFileName);
        if (outputDoc == null)
        {
            LogError($"Merging resource dictionaries failed for {outputFileName}.");
            return false;
        }

        // Post processing
        XamlUtils.FreezeElements(outputDoc.Root);

        // save file
        outputDoc.Save( Path.Combine(projectDir, outputFileName));

        LogInfo($"Created merged resource dictionary {Path.GetFileName(outputFileName)}.");
        return true;
    }


}