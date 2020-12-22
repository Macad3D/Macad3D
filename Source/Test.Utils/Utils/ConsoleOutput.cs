using System;
using System.IO;

namespace Macad.Test.Utils
{
    public class ConsoleOutput : IDisposable
    {
        readonly StringWriter _StringWriter;
        readonly TextWriter _OriginalOutput;

        //--------------------------------------------------------------------------------------------------

        public ConsoleOutput()
        {
            _StringWriter = new StringWriter();
            _OriginalOutput = Console.Out;
            Console.SetOut(_StringWriter);
        }

        //--------------------------------------------------------------------------------------------------

        public string GetOuput()
        {
            return _StringWriter.ToString();
        }

        //--------------------------------------------------------------------------------------------------

        public void Dispose()
        {
            Console.SetOut(_OriginalOutput);
            _StringWriter.Dispose();
        }

        //--------------------------------------------------------------------------------------------------

    }
}