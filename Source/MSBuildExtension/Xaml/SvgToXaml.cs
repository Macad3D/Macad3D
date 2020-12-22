using System;
using Microsoft.Build.Framework;
using Microsoft.Build.Utilities;
using SharpVectors.Converters;
using SharpVectors.Renderers.Wpf;

namespace Macad.Build.Xaml
{
    public class SvgToXaml : Task
    {
        [Required]
        public ITaskItem[] Inputs { get; set; }

        [Required]
        public ITaskItem[] Outputs { get; set; }

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
            WpfDrawingSettings settings = new WpfDrawingSettings();
            settings.IncludeRuntime = false;
            settings.TextAsGeometry = true;
            settings.OptimizePath = true;
            var converter = new FileSvgConverter(true, false, settings);

            // Iterate through files
            for (var i = 0; i < Inputs.Length; i++)
            {
                ITaskItem sourceItem = Inputs[i];
                try
                {
                    if (sourceItem.ItemSpec.Length == 0)
                        continue;

                    ITaskItem destItem = Outputs[i];
                    if (destItem.ItemSpec.Length == 0)
                    {
                        Log.LogError($"The target item to the source item {sourceItem.ItemSpec} is empty.");
                        result = false;
                        continue;
                    }
                
                    if(!converter.Convert(sourceItem.ItemSpec, destItem.ItemSpec))
                    {
                        Log.LogError($"The file {sourceItem.ItemSpec} could not be converted to XAML.");
                        result = false;
                    }
                }
                catch (Exception e)
                {
                    Log.LogError($"The conversion of the file {sourceItem.ItemSpec} raised an exception: {e.Message}");
                }
            }

            return result;
        }

        //--------------------------------------------------------------------------------------------------

    }
}