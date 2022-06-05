using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Macad.Occt.Generator
{
    public partial class CodeGen
    {
        void GenerateComment(StringWriter w, string prefix, Definitions.CommentDefintion comment)
        {
            string inSubTag = null;

            var lines = LoadCommentFromFile(comment);
            if (lines == null)
                return;

            w.WriteLine(prefix + "/// <summary>");
            inSubTag = "summary";
            foreach (string rawline in lines)
            {
                var line = TrimLine(rawline);

                // Check for params
                if (line.StartsWith("@"))
                {
                    if (inSubTag != null)
                    {
                        w.WriteLine(prefix + "/// </" + inSubTag + ">");
                        inSubTag = null;
                    }
                    if(line.StartsWith("@param"))
                    {
                        var paramEnd = line.IndexOf(' ', 7);
                        if (paramEnd == -1)
                            continue;
                        w.WriteLine(prefix + "/// <param name=\"" + line.Substring(7, paramEnd-7) + "\">");
                        inSubTag = "param";
                        line = line.Substring(paramEnd + 1);
                    }
                    else if (line.StartsWith("@return"))
                    {
                        w.WriteLine(prefix + "/// <returns>");
                        inSubTag = "returns";
                        line = line.Substring(8);
                    }
                }
                w.WriteLine(prefix + "/// " + line);
            }
            if (inSubTag != null)
            {
                w.WriteLine(prefix + "/// </" + inSubTag + ">");
                inSubTag = null;
            }
        }

        //--------------------------------------------------------------------------------------------------

        string[] LoadCommentFromFile(Definitions.CommentDefintion comment)
        {
            if (comment == null)
                return null;

            try
            {
                byte[] bytes = new byte[comment.EndOffset- comment.BeginOffset];
                using var fstream = File.Open(comment.Filename, FileMode.Open, FileAccess.Read);
                fstream.Seek(comment.BeginOffset, SeekOrigin.Begin);
                fstream.Read(bytes);
                fstream.Close();

                string[] strings = Encoding.UTF8.GetString(bytes).Split('\n');
                if (strings.Length == 0)
                    return null;

                return strings;
            }
            catch (Exception)
            {
                // Ignore if comment could not be loaded
            }
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        string TrimLine(string line)
        {
            // Trim
            line = line.Trim();
            if (line.StartsWith("//!"))
                return line.Substring(3).Trim();
            if (line.StartsWith("///"))
                return line.Substring(3).Trim();
            if (line.StartsWith("//"))
                return line.Substring(3).Trim();
            return line.Trim();
        }
    }
}
