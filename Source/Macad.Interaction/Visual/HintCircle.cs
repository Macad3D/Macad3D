using System;
using Macad.Common;
using Macad.Occt;

namespace Macad.Interaction.Visual;

public class HintCircle : Hint
{
    AIS_Circle _AisCircle;
    readonly HintStyle _Style;
    Geom_Circle _Circle;
    double _StartParam;
    double _EndParam;

    //--------------------------------------------------------------------------------------------------

    public HintCircle(WorkspaceController workspaceController, HintStyle style)
        : base(workspaceController)
    {
        _Style = style;
        _StartParam = 0;
        _EndParam = Maths.DoublePI;
    }

    //--------------------------------------------------------------------------------------------------

    public override AIS_InteractiveObject AisObject
    {
        get { return _AisCircle; }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Remove()
    {
        if (_AisCircle != null)
        {
            AisContext.Erase(_AisCircle, false);
            _AisCircle = null;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public override void Update()
    {
        bool isValid = _Circle.Radius() > Double.Epsilon;
        if (!isValid)
        {
            Remove();
            return;
        }

        if (_AisCircle == null)
        {
            if (!_EnsureAisObject())
                return;
        }
        else
        {
            _AisCircle.SetCircle(_Circle);
            _AisCircle.SetFirstParam(_StartParam);
            _AisCircle.SetLastParam(_EndParam);
            AisContext.RecomputePrsOnly(_AisCircle, false);
        }
    }

    //--------------------------------------------------------------------------------------------------

    public void Set(gp_Circ circle)
    {
        _Circle = new Geom_Circle(circle);

        Update();
    }

    //--------------------------------------------------------------------------------------------------

    public void SetRange(double startAngle, double endAngle)
    {
        _StartParam = startAngle.ToRad();
        _EndParam = endAngle.ToRad();

        Update();
    }

    //--------------------------------------------------------------------------------------------------

    public void Set(gp_Circ2d circle2d, Pln plane)
    {
        _Circle = GeomAPI.To3d(new Geom2d_Circle(circle2d), plane) as Geom_Circle;

        Update();
    }

    //--------------------------------------------------------------------------------------------------

    bool _EnsureAisObject()
    {
        if (_AisCircle != null)
        {
            return true;
        }

        if (_Circle == null)
            return false;

        if (_Circle.Radius() <= 0.0000001)
            return false;

        _AisCircle = new AIS_Circle(_Circle);

        SetAspects(_AisCircle, _Style);

        AisContext.Display(_AisCircle, false);
        AisContext.Deactivate(_AisCircle);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}