using System;
using System.Linq;
using System.Text;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Core.Exchange;
using Macad.Occt;

namespace Macad.Core
{
    /// <summary>
    /// The CoreContext is a singleton holding the global state of the core module. Most functionality
    /// of the classes in the core module access the state using this class.
    /// </summary>
    public abstract class CoreContext: BaseObject, IDisposable
    {
        /// <summary>
        /// The current instance of the CoreContext. It will be set automatically when a new context
        /// class is instantiated.
        /// </summary>
        public static CoreContext Current
        {
            get { return _Current; }
            set
            {
                _Current?.Dispose();
                _Current = value;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public virtual Workspace Workspace
        {
            get { return _Workspace; }
            protected set
            {
                _Workspace = value;
                Viewport = _Workspace?.Viewports.FirstOrDefault();
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public virtual Viewport Viewport
        {
            get { return _Viewport; }
            protected set
            {
                _Viewport = value;
                RaisePropertyChanged();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public virtual Model Document
        {
            get { return _Document; }
            set
            {
                _Document = value;
                
                RaisePropertyChanged();
                RaisePropertyChanged(nameof(UndoHandler));
                RaisePropertyChanged(nameof(Layers));
                Layers?.OnActivated();
                
                if (!(_Document is null) && !_Document.Workspaces.Contains(_Workspace))
                    Workspace = _Document.Workspaces.FirstOrDefault();
            }
        }

        //--------------------------------------------------------------------------------------------------

        public UndoHandler UndoHandler
        {
            get { return Document?.UndoHandler; }
        }

        //--------------------------------------------------------------------------------------------------

        public LayerCollection Layers
        {
            get { return Document?.Layers; }
        }

        //--------------------------------------------------------------------------------------------------

        public MessageHandler MessageHandler { get; } = new();

        //--------------------------------------------------------------------------------------------------

        public ParameterSets Parameters
        {
            get
            {
                if(_ParameterSets == null)
                    _ParameterSets = LoadLocalSettings<ParameterSets>("Parameters") ?? new ParameterSets();

                return _ParameterSets;
            }
        }

        //--------------------------------------------------------------------------------------------------

        protected CoreContext()
        {
            InitializeStatics();
            Current = this;
        }

        //--------------------------------------------------------------------------------------------------
        
        public void Dispose()
        {
            Dispose(true);
            GC.SuppressFinalize(this);
        }
        
        //--------------------------------------------------------------------------------------------------

        protected virtual void Dispose(bool disposing)
        {
            if (disposing)
            {
                MessageHandler?.Dispose();
            }

            _Workspace = null;
            _Viewport = null;
            _Document = null;
        }

        //--------------------------------------------------------------------------------------------------

        public virtual void SaveSettings()
        {
            if(_ParameterSets != null)
                SaveLocalSettings("Parameters", _ParameterSets);
        }

        //--------------------------------------------------------------------------------------------------

        public virtual void SaveLocalSettings(string name, object obj) {}

        //--------------------------------------------------------------------------------------------------

        public virtual T LoadLocalSettings<T>(string name) where T : class
        {
            return null;
        }

        //--------------------------------------------------------------------------------------------------

        static bool _Initialized;
        static CoreContext _Current;
        Model _Document;
        Workspace _Workspace;
        Viewport _Viewport;
        ParameterSets _ParameterSets;

        //--------------------------------------------------------------------------------------------------

        static void InitializeStatics()
        {
            if (_Initialized)
                return;

            Encoding.RegisterProvider(CodePagesEncodingProvider.Instance);

            OcctSerializers.Init();
            Serializer.RegisterNamespaceAlias("Core", "Macad.Core");
            Serializer.RegisterNamespaceAlias("Topology", "Macad.Core.Topology");
            Serializer.RegisterNamespaceAlias("Shapes", "Macad.Core.Shapes");
            Serializer.RegisterNamespaceAlias("Auxiliary", "Macad.Core.Auxiliary");
            Serializer.RegisterNamespaceAlias("Components", "Macad.Core.Components");
            Serializer.RegisterNamespaceAlias("Toolkits", "Macad.Core.Toolkits");
            Serializer.RegisterNamespaceAlias("Exchange", "Macad.Core.Exchange");
            Serializer.RegisterNamespaceAlias("Occt", "Macad.Occt");

            StaticClassInitializer.InitializeStaticClasses(System.Reflection.Assembly.GetExecutingAssembly());

            _Initialized = true;
        }

        //--------------------------------------------------------------------------------------------------

    }
}