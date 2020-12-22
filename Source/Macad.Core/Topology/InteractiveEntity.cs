using Macad.Core.Components;
using Macad.Common.Serialization;
using Macad.Core.Shapes;
using Macad.Occt;

namespace Macad.Core.Topology
{
    [SerializeType]
    public abstract class InteractiveEntity : Entity
    {
        #region Properties

        [SerializeMember]
        public bool IsVisible
        {
            get { return _IsVisible; }
            set
            {
                if (_IsVisible != value)
                {
                    SaveUndo();
                    _IsVisible = value;
                    RaisePropertyChanged();
                    if (!IsDeserializing && CoreContext.Current != null && CoreContext.Current.Workspace != null)
                    {
                        RaiseVisualChanged();
                    }
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Member

        bool _IsVisible = true;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Abstract Interface Functions

        public abstract Layer GetLayer();
        public abstract TopoDS_Shape GetTransformedBRep();
        public abstract VisualStyle GetVisualStyleComponent();

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Serialization

        public override void OnBeginDeserializing(SerializationContext context)
        {
            base.OnBeginDeserializing(context);
            context.GetInstanceList<InteractiveEntity>().Add(this);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Events

        public delegate void InteractiveEntityChangedEventHandler(InteractiveEntity entity);

        //--------------------------------------------------------------------------------------------------

        public static event InteractiveEntityChangedEventHandler VisualChanged;

        public void RaiseVisualChanged()
        {
            if (!IsDeserializing)
                VisualChanged?.Invoke(this);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}