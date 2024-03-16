using System;
using System.Runtime.InteropServices;
using Macad.Core.Topology;
using Macad.Interop;

namespace Macad.Core;

public sealed class ProcessingScope : IDisposable
{
    #region n'tor

    public ProcessingScope(Entity referenceEntity, string description)
    {
        CoreContext.Current?.MessageHandler?.OnProcessingStarted(referenceEntity, description);
    }

    //--------------------------------------------------------------------------------------------------

    ~ProcessingScope()
    {
        Dispose();
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Execution Guards

    public static bool ExecuteWithGuards(Entity referenceEntity, string description, Func<bool> whatToDo)
    {
        try
        {
            using (new ProcessingScope(referenceEntity, description))
            {
                return whatToDo.Invoke();
            }
        }
        catch (SEHException e)
        {
            // Try to get infos from native
            var info = ExceptionHelper.GetNativeExceptionInfo(Marshal.GetExceptionPointers());
            Messages.Exception(info != null ? $"Modeling Exception - {info.Message}" : $"Exception while {description}.", e, referenceEntity);
            Console.WriteLine(e);
            return false;
        }
        catch (Exception e)
        {
            Messages.Exception($"Exception while {description}.", e, referenceEntity);
            Console.WriteLine(e);
            return false;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region IDisposable Members

    public void Dispose()
    {
        CoreContext.Current?.MessageHandler?.OnProcessingStopped();
        GC.SuppressFinalize(this);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}