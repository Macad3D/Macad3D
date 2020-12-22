using System;
using System.IO;

namespace Macad.Occt.Generator
{
    public static class Logger
    {
        private static readonly TextWriter FileWriter;

        public static string Context = "";

        static Logger()
        {
            FileWriter = new StreamWriter(new FileStream("WrapperLog.txt", FileMode.Create));
        }

        static public void WriteLine(bool trace, string line)
        {
            if (!String.IsNullOrEmpty(Context))
                line = "[" + Context + "]: " + line;

            if (!trace)
            {
                Console.WriteLine(line);
            }
            FileWriter.WriteLine(line);
        }

        static public void Flush()
        {
            FileWriter.Flush();
        }
    }
}