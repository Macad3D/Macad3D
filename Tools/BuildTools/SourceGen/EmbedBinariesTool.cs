using System.IO;
using System.Text;

namespace Macad.Build.SourceGen;

internal class EmbedBinariesTool : BuildTool
{
    public override bool Execute(Parameters parameters)
    {
        // Input list
        string inputListFileName = parameters.GetValueOrDefault("In");
        if (string.IsNullOrEmpty(inputListFileName))
        {
            LogError("No input list file specified.");
            return false;
        }
        if (!File.Exists(inputListFileName))
        {
            LogError($"Input list file does not exist: {inputListFileName}.");
            return false;
        }
        string[] inputs = File.ReadAllLines(inputListFileName);

        // Output file
        string outputFileName = parameters.GetValueOrDefault("Out");
        if (string.IsNullOrEmpty(outputFileName))
        {
            LogError($"Output for generated source not specified.");
            return false;
        }

        // Init target file
        using StreamWriter writer = new StreamWriter(outputFileName, false, Encoding.UTF8);

        // Iterate through files
        foreach (string input in inputs)
        {
            string trimmedInput = input.Trim();
            if (string.IsNullOrEmpty(trimmedInput))
            {
                continue;
            }

            if (!File.Exists(trimmedInput))
            {
                LogError($"Input file does not exist: {trimmedInput}.");
                return false;
            }

            string binaryName = Path.GetFileName(trimmedInput);
            // Remove invalid characters (keep letters, digits, underscore)
            var sb = new StringBuilder();
            foreach (char c in binaryName)
            {
                if (char.IsLetterOrDigit(c) || c == '_')
                    sb.Append(c);
                else
                    sb.Append('_');
            }
            binaryName = sb.ToString();
            if (string.IsNullOrEmpty(binaryName))
            {
                LogError($"Invalid binary name: {trimmedInput}.");
                continue;
            }

            if (char.IsDigit(binaryName[0]))
            {
                binaryName = "_" + binaryName;
            }

            // Dump bytes
            byte[] fileBytes = File.ReadAllBytes(trimmedInput);

            // Emit an internal data array and an external pointer alias of the expected type
            writer.WriteLine($"extern \"C\" const unsigned char {binaryName}[] =");
            writer.WriteLine("{");
            for (int i = 0; i < fileBytes.Length; i++)
            {
                if (i % 20 == 0)
                {
                    writer.Write("    ");
                }

                writer.Write($"0x{fileBytes[i]:X2}");

                if (i < fileBytes.Length - 1)
                {
                    writer.Write(", ");
                }

                if ((i + 1) % 20 == 0 || i == fileBytes.Length - 1)
                {
                    writer.WriteLine();
                }
            }
            writer.WriteLine("};");
            // External pointer symbol with exact pointer type expected by users of USE_EMBEDDED
            writer.WriteLine($"extern \"C\" const int {binaryName}_size = sizeof({binaryName});");
            writer.WriteLine();
        }

        return true;
    }
}