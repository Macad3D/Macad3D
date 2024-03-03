using System;
using System.Diagnostics;
using Macad.Common;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction.Visual;

[Flags]
public enum HintStyle
{
    Styles      = 0xf,
    ThinDashed  = 1,
    WorkingAxis = 2,
    Dashed      = 3,
    Solid       = 4,

    Boundary    = 1 << 14,
    Translucent = 1 << 15,
        
    Topmost     = 1 << 16,
    NoResize    = 1 << 18
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
                drawer.SetLineAspect(new Prs3d_LineAspect(new Color(0.753f, 0.753f, 0.753f).ToQuantityColor(), Aspect_TypeOfLine.DASH, 0.5));
                obj.SetTransparency(0.5);
                break;

            case HintStyle.WorkingAxis:
                drawer.SetLineAspect(new Prs3d_LineAspect(new Color(1.0f, 1.0f, 0.0f).ToQuantityColor(), Aspect_TypeOfLine.DASH, 2.0));
                break;

            case HintStyle.Dashed:
                drawer.SetLineAspect(new Prs3d_LineAspect(new Color(0.753f, 0.753f, 0.753f).ToQuantityColor(), Aspect_TypeOfLine.DASH, 2.0));
                obj.SetTransparency(0.5);
                break;

            case HintStyle.Solid:
                drawer.SetLineAspect(new Prs3d_LineAspect(new Color(0.753f, 0.753f, 0.753f).ToQuantityColor(), Aspect_TypeOfLine.SOLID, 2.0));
                obj.SetTransparency(0.5);
                break;
        }

        drawer.SetFaceBoundaryDraw(style.Has(HintStyle.Boundary));

        if ((style & HintStyle.Translucent) > 0)
        {
            obj.SetTransparency(0.75);
        }

        if ((style & HintStyle.Topmost) > 0)
        {
            obj.SetZLayer(-3); // TOPMOST
        }
    }

    //--------------------------------------------------------------------------------------------------

}