using System;
using System.Runtime.InteropServices;
using System.Runtime.InteropServices.ComTypes;
using Macad.Common.Interop;

namespace Macad.Test.Utils
{
    [ComImport]
    [Guid("00000001-0000-0000-C000-000000000046")]
    [InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    public interface IClassFactory
    {
        [return: MarshalAs(UnmanagedType.IUnknown, IidParameterIndex = 1)]
        object CreateInstance( [MarshalAs(UnmanagedType.IUnknown)] object pUnkOuter, [In] ref Guid riid);
        void LockServer([MarshalAs(UnmanagedType.Bool)] bool fLock);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Provides a method used to initialize a handler, such as a property handler, thumbnail provider, or preview handler, with a file stream.
    /// </summary>
    [ComVisible(true), Guid("b824b49d-22ac-4161-ac8a-9916e8fa3f7f"), InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    public interface IInitializeWithStream {
        /// <summary>
        /// Initializes a handler with a file stream.
        /// </summary>
        /// <param name="stream">Pointer to an <see cref="IStream"/> interface that represents the file stream source.</param>
        /// <param name="grfMode">Indicates the access mode for <paramref name="stream"/>.</param>
        void Initialize(IStream stream, Win32Api.Stgm grfMode);
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Defines the format of a bitmap returned by an <see cref="IThumbnailProvider"/>.
    /// </summary>
    public enum WTS_ALPHATYPE {
        /// <summary>
        /// The bitmap is an unknown format. The Shell tries nonetheless to detect whether the image has an alpha channel.
        /// </summary>
        WTSAT_UNKNOWN = 0,
        /// <summary>
        /// The bitmap is an RGB image without alpha. The alpha channel is invalid and the Shell ignores it.
        /// </summary>
        WTSAT_RGB = 1,
        /// <summary>
        /// The bitmap is an ARGB image with a valid alpha channel.
        /// </summary>
        WTSAT_ARGB = 2,
    }

    //--------------------------------------------------------------------------------------------------

    /// <summary>
    /// Exposes a method for getting a thumbnail image.
    /// </summary>
    [ComVisible(true), Guid("e357fccd-a995-4576-b01f-234630154e96"), InterfaceType(ComInterfaceType.InterfaceIsIUnknown)]
    public interface IThumbnailProvider {
        /// <summary>
        /// Retrieves a thumbnail image and alpha type. 
        /// </summary>
        /// <param name="cx">The maximum thumbnail size, in pixels. The Shell draws the returned bitmap at this size or smaller. The returned bitmap should fit into a square of width and height <paramref name="cx"/>, though it does not need to be a square image. The Shell scales the bitmap to render at lower sizes. For example, if the image has a 6:4 aspect ratio, then the returned bitmap should also have a 6:4 aspect ratio.</param>
        /// <param name="hBitmap">When this method returns, contains a pointer to the thumbnail image handle. The image must be a device-independent bitmap (DIB) section and 32 bits per pixel. The Shell scales down the bitmap if its width or height is larger than the size specified by cx. The Shell always respects the aspect ratio and never scales a bitmap larger than its original size.</param>
        /// <param name="bitmapType">Specifies the format of the output bitmap.</param>
        void GetThumbnail(int cx, out IntPtr hBitmap, out WTS_ALPHATYPE bitmapType);
    }

    //--------------------------------------------------------------------------------------------------

    public class ComServer : IDisposable
    {
        [UnmanagedFunctionPointer(CallingConvention.StdCall)]
        public delegate uint DllGetClassObjectDelegate([MarshalAs(UnmanagedType.LPStruct)] Guid rclsid,
            [MarshalAs(UnmanagedType.LPStruct)] Guid riid, [MarshalAs(UnmanagedType.IUnknown, IidParameterIndex = 1)] out object pUnknown);

        //--------------------------------------------------------------------------------------------------

        IntPtr _Module;
        DllGetClassObjectDelegate _GetClassObject;

        //--------------------------------------------------------------------------------------------------

        public static ComServer CreateByModule(string moduleName)
        {
            var server = new ComServer();
            if (server.InitByModule(moduleName))
                return server;
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        ComServer() // Hide
        {
        }

        //--------------------------------------------------------------------------------------------------

        bool InitByModule(string moduleName)
        {
            try
            {
                _Module = Win32Api.LoadLibrary(moduleName);
                if (_Module == IntPtr.Zero)
                    return false;

                var proc = Win32Api.GetProcAddress(_Module, "DllGetClassObject");
                if (proc == IntPtr.Zero)
                    return false;

                _GetClassObject = Marshal.GetDelegateForFunctionPointer(proc, typeof(DllGetClassObjectDelegate)) as DllGetClassObjectDelegate;

                return _GetClassObject != null;
            }
            catch (Exception)
            {
                return false;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public T CreateInstance<T>(Guid clsid) where T : class
        {
            clsid = new Guid("{E8984C18-85E9-4AEB-8662-26F3C7323D92}");

            object unknown;
            _GetClassObject(clsid, typeof(IClassFactory).GUID, out unknown);
            var factory = unknown as IClassFactory;
            if (factory == null)
                return null;
 
            var iid = typeof(T).GUID;
            return factory.CreateInstance(null, ref iid) as T;
        }

        //--------------------------------------------------------------------------------------------------

        void ReleaseUnmanagedResources()
        {
            if (_Module != IntPtr.Zero)
            {
                Win32Api.FreeLibrary(_Module);
                _Module = IntPtr.Zero;
            }

            _GetClassObject = null;
        }

        //--------------------------------------------------------------------------------------------------

        public void Dispose()
        {
            ReleaseUnmanagedResources();
            GC.SuppressFinalize(this);
        }

        //--------------------------------------------------------------------------------------------------

        ~ComServer()
        {
            ReleaseUnmanagedResources();
        }

        //--------------------------------------------------------------------------------------------------

    }
}