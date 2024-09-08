using System;
using System.IO;
using Markdig;
using Microsoft.Build.Framework;
using Microsoft.Build.Utilities;

namespace Macad.Build.Doc
{
    public class MarkdownToMaml : Task
    {
        [Required]
        public ITaskItem[] Inputs { get; set; }

        [Required]
        public ITaskItem[] Outputs { get; set; }

        [Required]
        public string ProjectDir { get; set; }

        //--------------------------------------------------------------------------------------------------

        public override bool Execute()
        {
            bool result = true;

            if (Inputs.Length != Outputs.Length)
            {
                Log.LogError("The number of source items is not equal to the number of target items.");
                return false;
            }
            
            // Prepare converter
            var pipelineBuilder = new MarkdownPipelineBuilder()
                                  .UsePipeTables()
                                  .UseDefinitionLists()
                                  .UseYamlFrontMatter();
            pipelineBuilder.InlineParsers.Insert(0, new AlertInlineParser());
            pipelineBuilder.BlockParsers.Insert(0, new CodeSnippetBlockParser());
            var pipeline = pipelineBuilder.Build();

            // Iterate through files
            for (var i = 0; i < Inputs.Length; i++)
            {
                ITaskItem sourceItem = Inputs[i];
                if (sourceItem.ItemSpec.Length == 0)
                    continue;

                ITaskItem destItem = Outputs[i];
                if (destItem.ItemSpec.Length == 0)
                {
                    Log.LogError($"The target item to the source item {sourceItem.ItemSpec} is empty.");
                    result = false;
                    continue;
                }

                var relativeDirectory = Path.GetDirectoryName(sourceItem.ItemSpec);
                var fullPathToSource = Path.Combine(ProjectDir, sourceItem.ItemSpec);
                using (var stream = File.Open(destItem.ItemSpec, FileMode.Create))
                {
                    try
                    {
                        Markdown.Convert(File.ReadAllText(fullPathToSource), new MamlRenderer(stream, relativeDirectory), pipelineBuilder.Build());
                    }
                    catch (Exception e)
                    {
                        Log.LogError($"The file {sourceItem.ItemSpec} could not be converted to MAML: {e.Message}.");
                        result = false;
                    }
                }
            }

            return result;
        }
    }
}
