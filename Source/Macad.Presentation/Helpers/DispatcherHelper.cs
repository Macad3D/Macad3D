using System.Windows.Threading;

namespace Macad.Presentation;

public class DispatcherHelper
{
    public static void DoEvents()
    {
        var frame = new DispatcherFrame();
        Dispatcher.CurrentDispatcher.BeginInvoke(DispatcherPriority.Background,
                                                 new DispatcherOperationCallback(_ExitFrame), frame);
        Dispatcher.PushFrame(frame);
    }

    //--------------------------------------------------------------------------------------------------

    public static void DoEventsSync()
    {
        var frame = new DispatcherFrame();
        Dispatcher.CurrentDispatcher.Invoke(DispatcherPriority.Background,
                                            new DispatcherOperationCallback(_ExitFrame), frame);
        Dispatcher.PushFrame(frame);
    }

    //--------------------------------------------------------------------------------------------------

    static object _ExitFrame(object frame)
    {
        ((DispatcherFrame)frame).Continue = false;
        return null;
    }

    //--------------------------------------------------------------------------------------------------

}