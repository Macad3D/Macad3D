using System;
using Macad.Common;
using Macad.Core;
using Macad.Occt;

namespace Macad.Interaction.Visual;

public class HintLine : Hint
{
    public Color? Color
    {
        get { return _Color; }
        set
        {
            if (_Color != null && _Color.Equals(value)) 
                return;

            _Color = value;
            if (_AisLine != null)
                Update();
        }
    }

    //--------------------------------------------------------------------------------------------------

    AIS_Line _AisLine;
    readonly HintStyle _Style;
    Geom_Point _P1;
    Geom_Point _P2;
    Geom_Line _GeomLine;
    Color? _Color;

    //--------------------------------------------------------------------------------------------------

    public HintLine(WorkspaceController workspaceController, HintStyle style)
        : base(workspaceController)
    {
        _Style = style;
    }

    //--------------------------------------------------------------------------------------------------

    public override AIS_InteractiveObject AisObject
    {
        get { return _AisLine; }
    }

    //--------------------------------------------------------------------------------------------------

    public override void Remove()
    {
        if (_AisLine != null)
        {
            AisContext.Erase(_AisLine, false);
            _AisLine = null;
        }
    }
        
    //--------------------------------------------------------------------------------------------------

    public override void Update()
    {
        bool isValid = true;
        if (_GeomLine == null)
        {
            isValid = _P1.Distance(_P2) > Double.Epsilon;
        }
        if (!isValid)
        {
            Remove();
            return;
        }

        if (_AisLine == null)
        {
            if (!_EnsureAisObject())
                return;
        }
        else
        {
            if (_GeomLine != null)
                _AisLine.SetLine(_GeomLine);
            else
                _AisLine.SetPoints(_P1, _P2);
            AisContext.RecomputePrsOnly(_AisLine, false);
        }
        _UpdatePresentation();
    }

    //--------------------------------------------------------------------------------------------------

    public void Set(Pnt p1, Pnt p2)
    {
        _P1 = new Geom_CartesianPoint(p1);
        _P2 = new Geom_CartesianPoint(p2);
        _GeomLine = null;

        Update();
    }

    //--------------------------------------------------------------------------------------------------

    public void Set(Pnt2d p1, Pnt2d p2, Pln plane)
    {
        Pnt pnt1 = new Pnt();
        Pnt pnt2 = new Pnt();
        ElSLib.D0(p1.X, p1.Y, plane, ref pnt1);
        ElSLib.D0(p2.X, p2.Y, plane, ref pnt2);

        Set(pnt1, pnt2);
    }

    //--------------------------------------------------------------------------------------------------

    public void Set(Ax1 axis)
    {
        _GeomLine = new Geom_Line(axis);
        _P1 = _P2 = null;

        Update();
    }
    
    //--------------------------------------------------------------------------------------------------

    public void Set(Ax2d axis, Pln plane)
    {
        Pnt2d p1 = axis.Location;
        Pnt2d p2 = p1.Translated(axis.Direction.ToVec());
        Pnt pnt1 = new Pnt();
        Pnt pnt2 = new Pnt();
        ElSLib.D0(p1.X, p1.Y, plane, ref pnt1);
        ElSLib.D0(p2.X, p2.Y, plane, ref pnt2);

        Set(new Ax1(pnt1, new Vec(pnt1, pnt2).ToDir()));
    }

    //--------------------------------------------------------------------------------------------------

    bool _EnsureAisObject()
    {
        if (_AisLine != null)
        {
            return true;
        }

        if (((_P1 == null) || (_P2 == null))
            &&(_GeomLine == null))
            return false;

        _AisLine = (_GeomLine != null) 
                       ? new AIS_Line(_GeomLine)
                       : new AIS_Line(_P1, _P2);

        SetAspects(_AisLine, _Style);

        AisContext.Display(_AisLine, false);
        AisContext.Deactivate(_AisLine);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdatePresentation()
    {
        if (_Color.HasValue)
        {
            _AisLine.SetColor(_Color.Value.ToQuantityColor());
        }
    }

    //--------------------------------------------------------------------------------------------------

}