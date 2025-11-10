using System.Threading.Tasks;

namespace Macad.Core;

public static class ScriptUtils
{
    public static void WarmupScriptCompiler()
    {
        Task.Run(() =>
        {
            ScriptCompiler.Evaluate("Pnt pnt=new();");
        });
    }

    //--------------------------------------------------------------------------------------------------
}