using System.IO;

namespace Macad.Occt.Generator
{
    public partial class CodeGen
    {
        
        void GenerateEnumHeader(StringWriter wh, Definitions.EnumDefinition ed, bool inner)
        {
            string prefix = inner ? "\t" : "";
            wh.WriteLine($"{prefix}//---------------------------------------------------------------------");
            wh.WriteLine($"{prefix}//  Enum  {ed.Name}");
            wh.WriteLine($"{prefix}//---------------------------------------------------------------------");

            GenerateComment(wh, prefix, ed.Comment);

            if (!inner)
            {
                wh.Write("public ");
            }
            wh.WriteLine($"{prefix}enum class {ed.Name}");
            wh.WriteLine($"{prefix}{{");

            bool isFirst = true;
            // write enumerators
            foreach (var e in ed.Enumerators)
            {
                if (isFirst)
                    isFirst = false;
                else
                    wh.WriteLine(",");

                wh.Write($"{prefix}\t{e.Key}");
                if (!string.IsNullOrEmpty(e.Value))
                {
                    wh.Write(" = " + e.Value);
                }
            }
            wh.WriteLine();

            wh.WriteLine($"{prefix}}}; // enum  class {ed.Name}");
            wh.WriteLine();
        }

        //--------------------------------------------------------------------------------------------------
    }
}