using System.Runtime.InteropServices;
using Macad.Interop;
using NUnit.Framework;

namespace Macad.Test.Unit.Common;

[TestFixture]
public class ExceptionsTests
{
    [Test]
    public void NativeExceptionFromOcct()
    {
        try
        {
            ExceptionHelper.RaiseOcctException();
        }
        catch (SEHException)
        {
            var info = ExceptionHelper.GetNativeExceptionInfo(Marshal.GetExceptionPointers());

            Assert.IsNotNull(info);
            Assert.AreEqual(ExceptionInfo.ExceptionSource.OCCT, info.Source);
            Assert.AreEqual("This is a OCCT exception of type Standard_Failure.", info.Message);
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NativeExceptionFromStl()
    {
        try
        {
            ExceptionHelper.RaiseStlException();
        }
        catch (SEHException)
        {
            var info = ExceptionHelper.GetNativeExceptionInfo(Marshal.GetExceptionPointers());

            Assert.IsNotNull(info);
            Assert.AreEqual(ExceptionInfo.ExceptionSource.STL, info.Source);
            Assert.AreEqual("This is a STL exception of type std::exception.", info.Message);
        }
    }

    //--------------------------------------------------------------------------------------------------

    [Test]
    public void NativeExceptionFromUnknown()
    {
        try
        {
            ExceptionHelper.RaiseUnknownException();
        }
        catch (SEHException)
        {
            var info = ExceptionHelper.GetNativeExceptionInfo(Marshal.GetExceptionPointers());

            Assert.IsNull(info);
        }
    }

    //--------------------------------------------------------------------------------------------------

}