using Macad.Common;
using Macad.Occt;
using Macad.Occt.Ext;

namespace Macad.Interaction.Visual
{
    public class HintAxis : Hint
    {
        AIS_AxisEx _AisAxis;
        readonly HintStyle _Style;

        //--------------------------------------------------------------------------------------------------

        public HintAxis(WorkspaceController workspaceController, HintStyle style) 
            : base(workspaceController)
        {
            _Style = style;
        }

        //--------------------------------------------------------------------------------------------------

        public override AIS_InteractiveObject AisObject
        {
            get { return _AisAxis; }
        }

        //--------------------------------------------------------------------------------------------------

        public override void Remove()
        {
            if (_AisAxis != null)
            {
                AisContext.Erase(_AisAxis, false);
                _AisAxis = null;
            }
        }

        //--------------------------------------------------------------------------------------------------

        public void SetAxis(Ax1 axis)
        {
            if (!_EnsureAisObject())
                return;

            if ((_Style & HintStyle.NoResize) > 0)
            {
                _AisAxis.SetComponent(new Geom_Line(Pnt.Origin, axis.Direction));
                _AisAxis.SetTransformPersistence(Graphic3d_TransModeFlags.Graphic3d_TMF_ZoomPers, axis.Location);
            }
            else
            {
                _AisAxis.SetComponent(new Geom_Line(axis));
            }
            AisContext.RecomputePrsOnly(_AisAxis, false);
        }

        //--------------------------------------------------------------------------------------------------

        public void SetLength(double length)
        {
            if (!_EnsureAisObject())
                return;

            _AisAxis.SetLength(length);
            AisContext.RecomputePrsOnly(_AisAxis, false);
        }

        //--------------------------------------------------------------------------------------------------

        public void SetColor(Quantity_Color color)
        {
            if (!_EnsureAisObject())
                return;

            _AisAxis.SetColor(color);
            AisContext.RecomputePrsOnly(_AisAxis, false);
        }

        //--------------------------------------------------------------------------------------------------

        bool _EnsureAisObject()
        {
            if (_AisAxis != null)
                return true;

            _AisAxis = new AIS_AxisEx(new Geom_Line(Ax1.OX));
            _AisAxis.SetWidth(3);
            _AisAxis.SetColor(new Quantity_Color(Quantity_NameOfColor.Quantity_NOC_RED));

            var datumAspect = new Prs3d_DatumAspect();
            datumAspect.LineAspect(Prs3d_DatumParts.Prs3d_DP_XArrow).SetTypeOfLine(Aspect_TypeOfLine.Aspect_TOL_SOLID);
            datumAspect.ArrowAspect().SetLength(5);

            SetAspects(_AisAxis, _Style);

            AisContext.Display(_AisAxis, false);
            AisContext.Deactivate(_AisAxis);
            return true;
        }

        //--------------------------------------------------------------------------------------------------

    }
}