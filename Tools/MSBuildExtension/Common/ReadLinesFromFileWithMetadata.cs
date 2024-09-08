using System;
using System.Collections.Generic;
using Microsoft.Build.Framework;
using Microsoft.Build.Utilities;

namespace Macad.Build.Common
{
    public class ReadLinesFromFileWithMetadata : Task
    {
        [Required]
        public ITaskItem File { get; set; }

        [Output]
        public ITaskItem[] Lines { get; set; } = new ITaskItem[0];

        public string[] Metadata { get; set; }

        //--------------------------------------------------------------------------------------------------

        public override bool Execute()
        {
            if (File == null || File.ItemSpec.Length == 0)
            {
                Log.LogError("Input file not specified.");
                return false;
            }

            if (!System.IO.File.Exists(File.ItemSpec))
            {
                return true;
            }

            var metadata = new Dictionary<string, string>();
            foreach (var kvp in Metadata)
            {
                var parts = kvp.Split('=');
                if(parts.Length != 2)
                    continue;
                metadata.Add(parts[0], parts[1]);
            }

            try
            {
                var lines = System.IO.File.ReadAllLines(File.ItemSpec);
                var items = new List<ITaskItem>();
                foreach (var line in lines)
                {
                    var newItem = new TaskItem(line, metadata);
                    items.Add(newItem);
                }

                Lines = items.ToArray();
                return true;
            }
            catch (Exception e)
            {
                Log.LogErrorFromException(e, false, false, File.ItemSpec);
            }

            return false;
        }
    }
}