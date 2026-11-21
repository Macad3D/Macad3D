using System.IO;
using System.Runtime.InteropServices;
using Macad.Core;
using Macad.Test.Utils;
using NUnit.Framework;

namespace Macad.Test.Core.Infrastructure;

[TestFixture]
public class ClipboardTests
{
    [SetUp]
    public void SetUp()
    {
        Context.InitWithDefault();
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BusyClipboardContainsNoData()
    {
        var clipboard = new BusyClipboard();

        Assert.IsFalse(clipboard.ContainsData("Macad.Test"));
        Assert.IsNull(clipboard.GetDataStream("Macad.Test"));
        Assert.IsNull(clipboard.GetDataAsString("Macad.Test"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void BusyClipboardSetDataReportsWarning()
    {
        var clipboard = new BusyClipboard();
        Context.Current.MessageHandler.MessageItems.Clear();

        Assert.DoesNotThrow(() => clipboard.SetData("Macad.Test", "Hello"));
        Assert.AreEqual(1, Context.Current.MessageHandler.MessageItems.Count);
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void GetDataAsStringWithoutData()
    {
        var clipboard = new TestClipboard();

        Assert.IsNull(clipboard.GetDataAsString("Macad.Test"));
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void SetAndGetString()
    {
        var clipboard = new TestClipboard();
        clipboard.SetData("Macad.Test", "Hello");

        Assert.IsTrue(clipboard.ContainsData("Macad.Test"));
        Assert.AreEqual("Hello", clipboard.GetDataAsString("Macad.Test"));
    }

    //--------------------------------------------------------------------------------------------------
    // Helper
    //--------------------------------------------------------------------------------------------------

    // Behaves like the system clipboard when it is opened by another application
    class BusyClipboard : Clipboard
    {
        const int _CLIPBRD_E_CANT_OPEN = unchecked((int)0x800401D0);

        protected override bool ContainsDataCore(string format)
        {
            throw new COMException("OpenClipboard failed", _CLIPBRD_E_CANT_OPEN);
        }

        protected override MemoryStream GetDataStreamCore(string format)
        {
            throw new COMException("OpenClipboard failed", _CLIPBRD_E_CANT_OPEN);
        }

        protected override void SetDataCore(string format, MemoryStream data)
        {
            throw new COMException("OpenClipboard failed", _CLIPBRD_E_CANT_OPEN);
        }
    }

    //--------------------------------------------------------------------------------------------------

}
