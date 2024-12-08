using System;
using System.IO;
using System.Text;
using Macad.Core;
using Macad.Common.Serialization;
using Macad.Interaction;
using Macad.Common;
using Macad.Exchange;

namespace Macad.Window;

public class AppContext : InteractiveContext
{
    #region Properties

    public new static AppContext Current { get; private set; }

    //--------------------------------------------------------------------------------------------------

    public static bool IsInSandbox
    {
        get { return CommandLine.EnableSandbox; }
    }

    //--------------------------------------------------------------------------------------------------

    public static CommandLine CommandLine { get; private set; }

    #endregion

    #region Initialization

    AppContext()
    {
        Clipboard = new WindowsClipboard();
    }

    //--------------------------------------------------------------------------------------------------

    internal static void Initialize(CommandLine cmdLine)
    {
        CommandLine = cmdLine;
        if (IsInSandbox)
        {
            DebugPipeServer.Open();
        }

        Current = new AppContext();
        ExchangeModule.Initialize();

        ShortcutDefinition.RegisterShortcuts(Current.ShortcutHandler);

        if (CommandLine.EnableGlDebugging)
        {
            WorkspaceController.EnableGlDebugging = true;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Local App Data

    public readonly string LocalAppDataDirectory = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData, Environment.SpecialFolderOption.Create), "Macad");

    //--------------------------------------------------------------------------------------------------

    public override void SaveLocalSettings(string name, object obj)
    {
        if (IsInSandbox)
            return;

        try
        {
            var data = Serializer.Serialize(obj, new SerializationContext(SerializationScope.Storage));
            if (data.IsNullOrEmpty())
                return;

            var dir = Path.Combine(LocalAppDataDirectory, "Settings");
            Directory.CreateDirectory(dir);
            var path = Path.Combine(dir, name);
            File.WriteAllText(path, Serializer.Format(data), Encoding.UTF8);
        }
        catch (Exception e)
        {
            Messages.Exception("Exception while saving local settings for " + name, e);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public override T LoadLocalSettings<T>(string name) 
    {
        if (IsInSandbox)
            return null;

        try
        {
            var path = Path.Combine(Environment.GetFolderPath(Environment.SpecialFolder.ApplicationData, Environment.SpecialFolderOption.Create), "Macad", "Settings", name);
            if (!File.Exists(path))
                return null;

            var data = File.ReadAllText(path, Encoding.UTF8);
            if (data.IsNullOrEmpty())
                return null;

            return Serializer.Deserialize<T>(data, new SerializationContext(SerializationScope.Storage));
        }
        catch (Exception e)
        {
            Messages.Exception("Exception while saving local settings for " + name, e);
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}