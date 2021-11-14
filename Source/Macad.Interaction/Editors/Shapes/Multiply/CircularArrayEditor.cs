using System.Runtime.CompilerServices;
using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class CircularArrayEditor : Editor<CircularArray>
    {
        CircularArrayPropertyPanel _Panel;
        HintCircle _HintCircle;
        HintLine[] _HintAngles;

        //--------------------------------------------------------------------------------------------------

        public override void Start()
        {
            _Panel = PropertyPanel.CreatePanel<CircularArrayPropertyPanel>(Entity);
            InteractiveContext.Current.PropertyPanelManager?.AddPanel(_Panel, PropertyPanelSortingKey.Shapes);

            Entity.PropertyChanged += _Entity_PropertyChanged;

            _UpdateHints();
        }

        //--------------------------------------------------------------------------------------------------
        
        public override void Stop()
        {
            InteractiveContext.Current.PropertyPanelManager?.RemovePanel(_Panel);

            Entity.PropertyChanged -= _Entity_PropertyChanged;

            _ClearHints();
        }

        //--------------------------------------------------------------------------------------------------

        void _Entity_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            _UpdateHints();
        }

        //--------------------------------------------------------------------------------------------------

        void _UpdateHints()
        {
            if (Entity?.Body?.Shape != Entity)
            {
                return;
            }

            var axis = Entity?.GetRotationAxis()?.Transformed(Entity.Body.GetTransformation());
            if (axis == null)
            {
                _ClearHints();
                return;
            }

            if (_HintCircle == null)
            {
                _HintCircle = new HintCircle(WorkspaceController, HintStyle.Solid);
            }

            _HintCircle.Set(new gp_Circ(axis.Value.ToAx2(), Entity.Radius));
            var (startAngle, endAngle) = Entity.GetStartEndAngles();
            _HintCircle.SetRange(startAngle, endAngle);

            if (_HintAngles == null)
            {
                _HintAngles = new HintLine[3];
                _HintAngles[0] = new HintLine(WorkspaceController, HintStyle.ThinDashed);
                _HintAngles[1] = new HintLine(WorkspaceController, HintStyle.Solid);
                _HintAngles[2] = new HintLine(WorkspaceController, HintStyle.Dashed);
            }

            var centerPoint = axis.Value.Location;
            var mainVec = axis.Value.XDirection.ToVec() * Entity.Radius;
            var localRotAxis = new Ax1(Pnt.Origin, axis.Value.Axis.Direction);
            _HintAngles[0].Set(centerPoint, centerPoint.Translated(mainVec));
            _HintAngles[1].Set(centerPoint, centerPoint.Translated(mainVec.Rotated(localRotAxis, startAngle.ToRad())));
            _HintAngles[2].Set(centerPoint, centerPoint.Translated(mainVec.Rotated(localRotAxis, endAngle.ToRad())));

            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        void _ClearHints()
        {
            _HintCircle?.Remove();
            _HintCircle = null;

            if (_HintAngles != null)
            {
                foreach (var hintLine in _HintAngles)
                {
                    hintLine?.Remove();
                }

                _HintAngles = null;
            }


            WorkspaceController.Invalidate();
        }

        //--------------------------------------------------------------------------------------------------

        [AutoRegister]
        internal static void Register()
        {
            RegisterEditor<CircularArrayEditor>();
        }

    }
}