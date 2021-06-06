using System;
using System.Diagnostics;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction.Visual
{
    [Flags]
    public enum HintStyle
    {
        Styles      = 0xf,
        ThinDashed  = 1,
        WorkingAxis = 2,
        Dashed      = 3,
        Solid       = 4,

        Topmost     = 1 << 16,
        NoResize    = 1 << 32
    }

    //--------------------------------------------------------------------------------------------------

    public abstract class Hint : VisualObject
    {
        protected Hint(WorkspaceController workspaceController)
            : base(workspaceController, null)
        {
        }

        //--------------------------------------------------------------------------------------------------

        protected void SetAspects(AIS_InteractiveObject obj, HintStyle style)
        {
            Debug.Assert(obj != null);

            var drawer = obj.Attributes();

            switch (style & HintStyle.Styles)
            {
            case HintStyle.ThinDashed:
                drawer.SetLineAspect(new Prs3d_LineAspect(Quantity_NameOfColor.Quantity_NOC_GRAY.ToColor(), Aspect_TypeOfLine.Aspect_TOL_DASH, 0.5));
                obj.SetTransparency(0.5);
                break;

            case HintStyle.WorkingAxis:
                drawer.SetLineAspect(new Prs3d_LineAspect(Quantity_NameOfColor.Quantity_NOC_YELLOW.ToColor(), Aspect_TypeOfLine.Aspect_TOL_DASH, 2.0));
                break;

            case HintStyle.Dashed:
                drawer.SetLineAspect(new Prs3d_LineAspect(Quantity_NameOfColor.Quantity_NOC_GRAY.ToColor(), Aspect_TypeOfLine.Aspect_TOL_DASH, 2.0));
                obj.SetTransparency(0.5);
                break;

            case HintStyle.Solid:
                drawer.SetLineAspect(new Prs3d_LineAspect(Quantity_NameOfColor.Quantity_NOC_GRAY.ToColor(), Aspect_TypeOfLine.Aspect_TOL_SOLID, 2.0));
                obj.SetTransparency(0.5);
                break;
            }

            if ((style & HintStyle.Topmost) > 0)
            {
                obj.SetZLayer(-3); // TOPMOST
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}