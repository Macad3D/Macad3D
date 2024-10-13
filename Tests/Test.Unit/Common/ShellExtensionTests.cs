using System;
using System.Drawing;
using System.IO;
using System.Runtime.InteropServices.ComTypes;
using Macad.Test.Utils;
using Macad.Common.Interop;
using NUnit.Framework;

namespace Macad.Test.Unit.Common;

[TestFixture]
public class ShellExtensionTests
{
    [Test]
    public void GetModelThumbnail()
    {
        var server = ComServer.CreateByModule(Path.Combine(TestContext.CurrentContext.TestDirectory, @"Macad.ShellExtension.dll"));
        Assert.IsNotNull(server);
        var thumbnailProvider = server.CreateInstance<IThumbnailProvider>(new Guid("{E8984C18-85E9-4AEB-8662-26F3C7323D92}"));
        Assert.IsNotNull(thumbnailProvider);
        var initializeWithStream = thumbnailProvider as IInitializeWithStream;
        Assert.IsNotNull(initializeWithStream);

        IStream inputStream = null;
        Win32Api.SHCreateStreamOnFileEx(Path.Combine(TestData.TestDataDirectory, @"Misc\ShellExtension_Source.model"),
                                        Win32Api.Stgm.STGM_READ, 0, false, null, ref inputStream);
        Assert.That(inputStream != null);
        initializeWithStream.Initialize(inputStream, Win32Api.Stgm.STGM_READ);

        thumbnailProvider.GetThumbnail(500, out var hBitmap, out var alphaType );
        Assert.IsNotNull(hBitmap);

        var refFile = Path.Combine(TestData.TestDataDirectory, @"Misc\ShellExtension_ModelThumbnail.png");
        var resultFile = Path.Combine(TestData.TestDataDirectory, @"Misc\ShellExtension_ModelThumbnail_TestResult.png");
        using (var bitmap = Image.FromHbitmap(hBitmap))
        {
            Assert.IsNotNull(bitmap);
            bitmap.Save(resultFile);
        }

        AssertHelper.IsSameImage(refFile, resultFile);
    }

    //--------------------------------------------------------------------------------------------------
}