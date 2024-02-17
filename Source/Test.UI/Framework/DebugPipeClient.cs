using System;
using System.IO.Pipes;
using System.Text;
using FlaUI.Core.WindowsAPI;
using Macad.Common;
using Macad.Common.Serialization;
using NUnit.Framework;

namespace Macad.Test.UI.Framework;

public class DebugPipeClient
{
    public static DebugPipeClient Current { get; private set; }

    //--------------------------------------------------------------------------------------------------

    NamedPipeClientStream _PipeClient;

    //--------------------------------------------------------------------------------------------------

    public DebugPipeClient()
    {
        Current = this;
    }

    //--------------------------------------------------------------------------------------------------

    ~DebugPipeClient()
    {
        if (Current == this)
            Current = null;

        _Close();
    }

    //--------------------------------------------------------------------------------------------------

    void _Open()
    {
        try
        {
            _PipeClient = new NamedPipeClientStream(".", "MacadDebug", PipeDirection.InOut, PipeOptions.WriteThrough);
            _PipeClient.Connect();
            _PipeClient.ReadMode = PipeTransmissionMode.Message;
        }
        catch (Exception e)
        {
            Console.WriteLine(e);
            throw;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _Close()
    {
        if (_PipeClient == null)
            return;

        _PipeClient.Close();
        _PipeClient.Dispose();
        _PipeClient = null;
    }

    //--------------------------------------------------------------------------------------------------

    public void Cleanup()
    {
        _Close();
    }

    //--------------------------------------------------------------------------------------------------

    public string GetValue(string path)
    {
        if (_PipeClient == null)
            _Open();

        // Write request
        var signature = path.GetHashCode().ToString("X8");
        var writeBuffer = $"GETV{signature}{path}".ToUtf8Bytes();
        _PipeClient.Write(writeBuffer, 0, writeBuffer.Length);
        _PipeClient.WaitForPipeDrain();

        // Receive answer
        var sb = new StringBuilder();
        var buffer = new byte[64];
        do
        {
            var readBytes = _PipeClient.Read(buffer, 0, 64);
            if (readBytes == 0)
                break;
            sb.Append(Encoding.UTF8.GetString(buffer, 0, readBytes));
        } while (!_PipeClient.IsMessageComplete);

        Assert.AreNotEqual(0, sb.Length, "Message is empty.");

        // Check header, signature
        Assert.AreEqual("VALU", sb.ToString(0, 4), "Message header received from pipe is invalid.");
        Assert.AreEqual(signature, sb.ToString(4, 8), "Message signature received from pipe is different.");

        // Check if valid
        var s = sb.ToString(12, sb.Length - 12);
        Assert.IsFalse(s.IsNullOrEmpty(), "Value string is empty.");
        Assert.AreNotEqual("INVALID", s, "The value path was invalid.");
        return s;
    }

    //--------------------------------------------------------------------------------------------------

    public T GetValue<T>(string path)
    {
        var result = GetValue(path);
        return Serializer.Deserialize<T>(result);
    }

    //--------------------------------------------------------------------------------------------------

    public void PressKey(VirtualKeyShort key)
    {
        SendKeyEvent((short)key, false);
    }

    //--------------------------------------------------------------------------------------------------

    public void ReleaseKey(VirtualKeyShort key)
    {
        SendKeyEvent((short)key, true);
    }

    //--------------------------------------------------------------------------------------------------

    public void TypeKey(params VirtualKeyShort[] keys)
    {
        foreach (var key in keys)
        {
            PressKey(key);
        }
        foreach (var key in keys)
        {
            ReleaseKey(key);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void TypeText(string text)
    {
        foreach (var c in text)
        {
            var vk =  Common.Interop.Win32Api.VkKeyScan(c);
            var isShift = (vk & 0x0100) > 0;
            var isCtrl = (vk & 0x0200) > 0;
            var isAlt = (vk & 0x0400) > 0;

            if(isShift) PressKey(VirtualKeyShort.SHIFT);
            if(isCtrl) PressKey(VirtualKeyShort.CONTROL);
            if(isAlt) PressKey(VirtualKeyShort.ALT);

            SendKeyEvent(vk, false);
            SendKeyEvent(vk, true);

            if(isShift) ReleaseKey(VirtualKeyShort.SHIFT);
            if(isCtrl) ReleaseKey(VirtualKeyShort.CONTROL);
            if(isAlt) ReleaseKey(VirtualKeyShort.ALT);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void SendKeyEvent(short key, bool isUp)
    {
        if (_PipeClient == null)
            _Open();

        // Write request
        var cmd = isUp ? "U" : "D";
        var keyStr = ((int) key).ToString("X4");
        var writeBuffer = $"KEY{cmd}{keyStr}".ToUtf8Bytes();
        _PipeClient.Write(writeBuffer, 0, writeBuffer.Length);
        _PipeClient.WaitForPipeDrain();

        // Receive answer
        var sb = new StringBuilder();
        var buffer = new byte[64];
        do
        {
            var readBytes = _PipeClient.Read(buffer, 0, 64);
            if (readBytes == 0)
                break;
            sb.Append(Encoding.UTF8.GetString(buffer, 0, readBytes));
        } while (!_PipeClient.IsMessageComplete);

        Assert.AreNotEqual(0, sb.Length, "Message is empty.");

        // Check header, key code
        Assert.AreEqual($"{cmd}YEK", sb.ToString(0, 4), "Message header received from pipe is invalid.");
        var retKeyStr = sb.ToString(4, sb.Length - 4); 
        Assert.AreNotEqual("$Failed", retKeyStr, "Key event could not be executed.");
        Assert.AreEqual(keyStr, retKeyStr, "Message key code received from pipe is different.");
    }
        
    //--------------------------------------------------------------------------------------------------
}