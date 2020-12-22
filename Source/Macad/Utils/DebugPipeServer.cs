using System;
using System.Globalization;
using System.IO.Pipes;
using System.Linq;
using System.Text;
using System.Threading;
using System.Windows;
using System.Windows.Input;
using System.Windows.Threading;
using Macad.Common;
using Macad.Common.Interop;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Interaction.Editors.Shapes;

namespace Macad.Window
{
    internal static class DebugPipeServer
    {
        #region Pipe Handling

        static Thread _Thread;

        //--------------------------------------------------------------------------------------------------

        internal static void Open()
        {
            if (_Thread != null)
                return;

            _Thread = new Thread(_ThreadProc);
            _Thread.Start();

            App.Current.Exit += (sender, args) => _Close();
        }

        //--------------------------------------------------------------------------------------------------

        static void _Close()
        {
            if (_Thread == null)
                return;

            _Thread.Abort();
            _Thread = null;
        }

        //--------------------------------------------------------------------------------------------------

        static void _ThreadProc(object data)
        {
            try
            {
                using (var pipeServer = new NamedPipeServerStream("MacadDebug", PipeDirection.InOut, 1, PipeTransmissionMode.Message, PipeOptions.Asynchronous))
                {
                    pipeServer.WaitForConnection();

                    var buffer = new byte[64];
                    var sb = new StringBuilder();
                    while(true)
                    {
                        var readBytes = pipeServer.Read(buffer, 0, 64);
                        if (readBytes == 0)
                            break;

                        sb.Append(Encoding.UTF8.GetString(buffer, 0, readBytes));
                        if (pipeServer.IsMessageComplete)
                        {
                            var answer = _OnMessageReceived(sb.ToString());
                            if(answer != null)
                                pipeServer.Write(answer, 0, answer.Length);
                            sb.Clear();
                        }
                    };
                }
            }
            catch (ThreadAbortException)
            {
                // Gracefully close
            }
            catch (Exception e)
            {
                Application.Current.Dispatcher.Invoke(() => Messages.Exception("An exception occured in the debug pipe stream thread.", e));
            }
        }

        //--------------------------------------------------------------------------------------------------

        static byte[] _OnMessageReceived(string message)
        {
            var code = message.Substring(0, 4);
            switch (code)
            {
                case "GETV":
                    var signature = message.Substring(4, 8);
                    string value = Application.Current.Dispatcher.Invoke(() => _GetValue(message.Substring(12)) ?? "INVALID");
                    return $"VALU{signature}{value}".ToUtf8Bytes();

                case "KEYD":
                    var keyd = int.Parse(message.Substring(4), NumberStyles.HexNumber);
                    return (_SendKeyEvent(keyd, false) ? $"DYEK{message.Substring(4)}" : "DYEK$Failed").ToUtf8Bytes();

                case "KEYU":
                    var keyu = int.Parse(message.Substring(4), NumberStyles.HexNumber);
                    return (_SendKeyEvent(keyu, true) ? $"UYEK{message.Substring(4)}" : "UYEK$Failed").ToUtf8Bytes();
            }
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Value Query

        static string _GetValue(string path)
        {
            // Find value based on a path
            var parts = path.Split('.');
            if (parts.Length == 0)
                return null;

            object obj = null;
            if (!_FindRootObject(ref obj, parts[0]))
                return null;

            foreach (var part in parts.Skip(1))
            {
                if (!_FindValue(ref obj, part))
                    return null;
            }

            return Serializer.Serialize(obj);
        }

        //--------------------------------------------------------------------------------------------------

        static bool _FindRootObject(ref object obj, string memberName)
        {
            if (memberName.StartsWith("!"))
            {
                if (!Guid.TryParse(memberName.Substring(1), out var guid))
                    return false;
                obj = AppContext.Current?.Document?.FindInstance(guid);
                return true;
            }

            switch (memberName)
            {
                case "$Context":
                    obj = AppContext.Current;
                    return true;

                case "$Selected":
                    obj = AppContext.Current?.WorkspaceController?.Selection?.SelectedEntities?.FirstOrDefault();
                    return true;

                case "$Sketch":
                    obj = (AppContext.Current?.WorkspaceController?.CurrentTool as SketchEditorTool)?.Sketch;
                    return true;
            }

            return false;
        }

        //--------------------------------------------------------------------------------------------------

        static bool _FindValue(ref object obj, string memberName)
        {
            if (obj == null)
                return false;

            var propInfo = obj.GetType().GetProperty(memberName);
            if (propInfo == null)
                return false;

            obj = propInfo.GetValue(obj);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Keyboard Input

        static bool _SendKeyEvent(int key, bool isUp)
        {
            bool success = false;
            int vkey = key & 0xff;
            Application.Current.Dispatcher.Invoke(() =>
            {
                var sourceElement = Keyboard.PrimaryDevice.ActiveSource;
                var focusElement = Keyboard.PrimaryDevice.FocusedElement;
                if (focusElement == null || sourceElement == null)
                    return;

                var tunnelArgs = new KeyEventArgs(Keyboard.PrimaryDevice, sourceElement, 0, KeyInterop.KeyFromVirtualKey(vkey));
                tunnelArgs.RoutedEvent = isUp ? Keyboard.PreviewKeyUpEvent : Keyboard.PreviewKeyDownEvent;
                focusElement.RaiseEvent(tunnelArgs);

                if (!tunnelArgs.Handled)
                {
                    var bubbleArgs = new KeyEventArgs(Keyboard.PrimaryDevice, sourceElement, 0, KeyInterop.KeyFromVirtualKey(vkey));
                    bubbleArgs.RoutedEvent = isUp ? Keyboard.KeyUpEvent : Keyboard.KeyDownEvent;
                    focusElement.RaiseEvent(bubbleArgs);

                    if (!bubbleArgs.Handled && !isUp)
                    {
                        var sb = new StringBuilder();
                        byte[] bKeyState  = new byte[255];
                        if ((key & 0x0100) > 0)  bKeyState[0x10] = 0x80;
                        if ((key & 0x0200) > 0)  bKeyState[0x11] = 0x80;
                        if ((key & 0x0400) > 0)  bKeyState[0x12] = 0x80;
                        uint lScanCode = Win32Api.MapVirtualKey((uint)(vkey), Win32Api.MapVirtualKeyMapTypes.MAPVK_VK_TO_VSC);
                        Win32Api.ToUnicode((uint)(vkey), lScanCode, bKeyState, sb, 5, 0);

                        TextCompositionManager.StartComposition(new TextComposition(InputManager.Current, Keyboard.FocusedElement, sb.ToString()));
                    }
                }

                success = true;
            });
            return success;
        }
        
        //--------------------------------------------------------------------------------------------------

        #endregion

    }
}