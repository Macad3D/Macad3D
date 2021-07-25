using System;
using System.Collections.Generic;
using System.Windows;
using Macad.Common.Serialization;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Interaction;
using Macad.Occt;
using NUnit.Framework;

namespace Macad.Test.Utils
{
    public sealed class Context : InteractiveContext
    {
        public new static Context Current { get; private set; }

        //--------------------------------------------------------------------------------------------------

        Context()
        {
            MessageHandler.MessageThrown += MessageHub_MessageThrown;

            var viewportParameterSet = InteractiveContext.Current.Parameters.Get<ViewportParameterSet>();
            viewportParameterSet.ShowViewCube = false;
        }

        //--------------------------------------------------------------------------------------------------

        protected override void Dispose(bool disposing)
        {
            if (disposing)
            {
                MessageHandler.MessageThrown -= MessageHub_MessageThrown;
            }

            base.Dispose(disposing);
        }

        //--------------------------------------------------------------------------------------------------

        public static void InitEmpty()
        {
            Current = new Context();
        }

        //--------------------------------------------------------------------------------------------------

        public static void InitWithDefault()
        {
            Current = new Context
            {
                Document = new Model(), 
                DocumentController = new ModelController()
            };
        }

        //--------------------------------------------------------------------------------------------------

        public static void InitWithView(int viewportSize)
        {
            Current = new Context
            {
                Document = new Model(), 
                DocumentController = new ModelController()
            };
            Current.ViewportController.InitWindow(IntPtr.Zero, viewportSize, viewportSize);

            // Neutralize View
            var ocView = Current.Viewport.V3dView;
            ocView.SetBgGradientStyle(Aspect_GradientFillMethod.Aspect_GFM_NONE, false);
            ocView.SetBackgroundColor(Quantity_NameOfColor.Quantity_NOC_BLACK.ToColor());
            ocView.TriedronErase();
            ocView.ChangeRenderingParams().NbMsaaSamples = 0;

            Current.Workspace.GridEnabled = false;
            Current.Workspace.GridStep = 10;
            Current.Workspace.V3dViewer.DisplayPrivilegedPlane(false);
        }

        //--------------------------------------------------------------------------------------------------

        public TestPropertyPanelManager EnablePropertyPanels()
        {
            var testppm = new TestPropertyPanelManager();
            Current.PropertyPanelManager = testppm;
            return testppm;
        }

        //--------------------------------------------------------------------------------------------------

        void MessageHub_MessageThrown(object sender, MessageItem e)
        {
            TestContext.Out.WriteLine(e.ToString());
            TestContext.Out.Flush();
        }

        //--------------------------------------------------------------------------------------------------

        public void Deinit()
        {
            Dispose();
            InitEmpty();
        }

        //--------------------------------------------------------------------------------------------------

        public void ClickAt(int x, int y, bool shiftSelect = false)
        {
            ViewportController.MouseMove(new Point(x, y));
            ViewportController.MouseDown();
            ViewportController.MouseUp(shiftSelect);
        }

        //--------------------------------------------------------------------------------------------------

        public void SelectAt(int x, int y, bool shiftSelect=false)
        {
            ViewportController.MouseMove(new Point(x, y));
            ViewportController.MouseDown();
            ViewportController.MouseUp(shiftSelect);
            ViewportController.MouseMove(new Point(0, 0));
        }

        //--------------------------------------------------------------------------------------------------

        public void MoveTo(int x, int y)
        {
            ViewportController.MouseMove(new Point(x, y));
        }

        //--------------------------------------------------------------------------------------------------

        #region LocalSettings

        readonly Dictionary<string, string> _SavedLocalSettings = new Dictionary<string, string>();

        //--------------------------------------------------------------------------------------------------

        public override T LoadLocalSettings<T>(string name)
        {
            if (!_SavedLocalSettings.TryGetValue(name, out var data))
                return null;

            return Serializer.Deserialize<T>(data, new SerializationContext(SerializationScope.Storage));
        }

        //--------------------------------------------------------------------------------------------------

        public override void SaveLocalSettings(string name, object obj)
        {
            var data = Serializer.Serialize(obj, new SerializationContext(SerializationScope.Storage));
            if (string.IsNullOrEmpty(data))
                return;
            
            _SavedLocalSettings[name] = data;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}