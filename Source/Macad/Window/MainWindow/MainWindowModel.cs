using System.Windows.Input;
using Macad.Core;
using Macad.Interaction;

namespace Macad.Window;

public class MainWindowModel
{
    public virtual InteractiveContext Context
    {
        get { return InteractiveContext.Current; }
    }

    //--------------------------------------------------------------------------------------------------

    public MainWindowModel()
    {
        AppContext.Current.MessageHandler.ProgressMessage += _MessageHandler_ProgressMessage;
    }

    //--------------------------------------------------------------------------------------------------

    void _MessageHandler_ProgressMessage(object sender, MessageHandler.ProgressMessageEventArgs e)
    {
        switch (e.Reason)
        {
            case MessageHandler.ProgressMessageEventReason.ProcessingStarted:
                Mouse.OverrideCursor = Interaction.Cursors.Wait;
                break;
            case MessageHandler.ProgressMessageEventReason.ProcessingStopped:
                Mouse.OverrideCursor = null;
                break;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool GlobalKeyDown(KeyEventArgs keyEventArgs)
    {
        return AppContext.Current.ShortcutHandler.KeyPressed("Application", keyEventArgs.Key, Keyboard.Modifiers)
               || InteractiveContext.Current.ShortcutHandler.KeyPressed("Workspace", keyEventArgs.Key, Keyboard.Modifiers);
    }

    //--------------------------------------------------------------------------------------------------

}