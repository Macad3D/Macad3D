namespace Macad.Test.UI.Framework;

public class TaskDialogAdaptor : WindowAdaptor
{
    public enum Button
    {
        Ok = 1,
        Yes = 2,
        No = 4,
        Cancel = 8,
        Retry = 16,
        Close = 32,
        Custom1 = 500,
        Custom2 = 501,
        Custom3 = 502,
        Custom4 = 503,
        Custom5 = 504,
        Radio1 = 1000,
        Radio2 = 1001,
        Radio3 = 1002,
        Radio4 = 1003,
        Radio5 = 1004,
        Command1 = 2000,
        Command2 = 2001,
        Command3 = 2002,
        Command4 = 2003,

    }

    //--------------------------------------------------------------------------------------------------

    public TaskDialogAdaptor(MainWindowAdaptor mainWindow)
        : base(mainWindow, "TaskDialog")
    {
    }

    //--------------------------------------------------------------------------------------------------

    public void ClickButton(Button button, bool jump = true)
    {
        Click(((int) button).ToString());
    }

    //--------------------------------------------------------------------------------------------------

    public static bool IsTaskDialogOpen(MainWindowAdaptor mainWindow)
    {
        return WindowAdaptor.IsWindowOpen(mainWindow, "TaskDialog");
    }

}