using System.IO;
using Microsoft.Build.Framework;
using Microsoft.Build.Utilities;

namespace Macad.Build.Xaml
{
    public class MergeResourceDicts : Task
    {
        [Required]
        public ITaskItem Input { get; set; }

        [Required]
        public ITaskItem Output { get; set; }

        public ITaskItem DependencyOutput { get; set; }

        [Required]
        public string ProjectDir { get; set; }

        //--------------------------------------------------------------------------------------------------

        public override bool Execute()
        {
            if (Output.ItemSpec.Length == 0)
            {
                Log.LogError($"Output for merged resource dictionary not specified.");
                return false;
            }

            if (Input.ItemSpec.Length == 0)
            {
                Log.LogError($"{Output.ItemSpec}: No input specified.");
                return false;
            }

            var outputDoc = XamlResMerger.MergeResources(ProjectDir, Input.ItemSpec, DependencyOutput.ItemSpec);
            if (outputDoc == null)
            {
                Log.LogError($"{Output.ItemSpec}: Merging resource dictionaries failed.");
                return false;
            }

            // Post processing
            if (!XamlProcessor.RunPostProcessing(outputDoc.Root, s => Log.LogError(Output.ItemSpec + s)))
            {
                Log.LogError($"{Output.ItemSpec}: Post processing failed.");
            }

            // save file
            outputDoc.Save( Path.Combine(ProjectDir, Output.ItemSpec));
            return true;
        }
    }
}