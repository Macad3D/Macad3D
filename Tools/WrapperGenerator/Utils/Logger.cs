using System;
using System.IO;

namespace Macad.Occt.Generator;

public static class Logger
{
    public static string Context = "";
    static TextWriter FileWriter;
    static float LastProgressValue;

    //--------------------------------------------------------------------------------------------------

    public static void SetOutputFilepath(string filePath)
    {
        Directory.CreateDirectory(Path.GetDirectoryName(filePath));
        FileWriter = new StreamWriter(new FileStream(filePath, FileMode.Create));
    }

    //--------------------------------------------------------------------------------------------------

    public static void WriteLine(bool trace, string line)
    {
        if (!string.IsNullOrEmpty(Context))
            line = "[" + Context + "]: " + line;

        if (!trace)
        {
            Console.WriteLine(line);
        }
        FileWriter?.WriteLine(line);
    }

    //--------------------------------------------------------------------------------------------------

    public static void Flush()
    {
        FileWriter?.Flush();
    }

    //--------------------------------------------------------------------------------------------------

    public static void WriteProgress(float value, string line)
    {
        if (value > 0)
        {
            LastProgressValue = value;
        }
        Console.WriteLine($"[ {LastProgressValue:P0} ]  {line}");
    }

    //--------------------------------------------------------------------------------------------------

}