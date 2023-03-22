using Macad.Interaction.Visual;
using Macad.Common;
using Macad.Core.Shapes;
using Macad.Interaction.Panels;
using Macad.Occt;

namespace Macad.Interaction.Editors.Shapes
{
    public class CircularArrayEditor : Editor<CircularArray>
    {
        HintCircle _HintCircle;
        HintLine[] _HintAngles;

        //--------------------------------------------------------------------------------------------------

        protected override void OnStart()
        {
            CreatePanel<CircularArrayPropertyPanel>(Entity, PropertyPanelSortingKey.Shapes);

            Shape.ShapeChanged += _Shape_ShapeChanged;
            _UpdateHints();
        }

        //--------------------------------------------------------------------------------------------------
        
        protected override void OnStop()
        {
            Shape.ShapeChanged -= _Shape_ShapeChanged;
            _ClearHints();
        }

        //--------------------------------------------------------------------------------------------------

        void _Shape_ShapeChanged(Shape shape)
        {
            if (shape == Entity)
            {
                _UpdateHints();
            }
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

            _HintCircle ??= new HintCircle(WorkspaceController, HintStyle.Solid);
            Ax3 circAxis = axis.Value;
            if (Entity.Radius < 0)
            {
                circAxis.XReverse();
            }
            _HintCircle.Set(new gp_Circ(circAxis.ToAx2(), Entity.Radius.Abs()));

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