using Macad.Core;
using Macad.Interaction;
using System.ComponentModel;
using System.Runtime.CompilerServices;
using System.Windows.Input;
using Macad.Interaction.Editors.Shapes;

namespace Macad.Window;

public class MainWindowModel : INotifyPropertyChanged
{
    public virtual InteractiveContext Context
    {
        get { return InteractiveContext.Current; }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsSketchGroupVisible
    {
        get;
        private set
        {
            field = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool IsSketchTabSelected
    {
        get;
        set
        {
            field = value;
            RaisePropertyChanged();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public MainWindowModel()
    {
        AppContext.Current.MessageHandler.ProgressMessage += _MessageHandler_ProgressMessage;
        AppContext.Current.EditorState.PropertyChanged += _EditorState_PropertyChanged;
    }

    //--------------------------------------------------------------------------------------------------

    void _EditorState_PropertyChanged(object sender, PropertyChangedEventArgs e)
    {
        switch(e.PropertyName)
        {
            case nameof(EditorState.ActiveTool):
                IsSketchGroupVisible = AppContext.Current.EditorState.ActiveTool == nameof(SketchEditorTool);
                IsSketchTabSelected = IsSketchGroupVisible;
                break;
        }
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

    #region INotifyPropertyChanged

    public event PropertyChangedEventHandler PropertyChanged;

    protected virtual void RaisePropertyChanged([CallerMemberName] string propertyName = "")
    {
        PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(propertyName));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}