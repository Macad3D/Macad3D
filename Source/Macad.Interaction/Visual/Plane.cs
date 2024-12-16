using System;
using Macad.Common;
using Macad.Core;
using Macad.Occt;
using Macad.Occt.Extensions;

namespace Macad.Interaction.Visual;

public class Plane : VisualObject
{
    [Flags]
    public enum Style
    {
        None = 0,
        Topmost  = 1 << 16,
        NoResize = 1 << 18,
    }

    //--------------------------------------------------------------------------------------------------

    public double Transparency
    {
        get { return _Transparency; }
        set
        {
            _Transparency = value;
            _UpdatePresentation();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Color Color
    {
        get { return _Color; }
        set
        {
            _Color = value;
            _UpdatePresentation();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public bool Boundary
    {
        get { return _Boundary; }
        set
        {
            _Boundary = value;
            _UpdatePresentation();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public XY Size
    {
        get { return _Size; }
        set
        {
            _Size = value;
            _UpdatePresentation();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Vec2d Margin
    {
        get { return _Margin; }
        set
        {
            _Margin = value;
            _UpdatePresentation();
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    public override bool IsSelectable
    {
        get { return _IsSelectable; }
        set
        {
            if (_IsSelectable == value)
                return;

            _IsSelectable = value;
            if (_AisObject != null)
                Update();
        }
    }

    //--------------------------------------------------------------------------------------------------

    AISX_Plane _AisObject;
    readonly Style _Style;
    Pln _Plane = Pln.XOY;
    XY _Size = new XY(100, 100);
    Vec2d _Margin;
    bool _IsSelectable;
    Color _Color = Colors.Auxillary;
    double _Transparency = 0.8;
    bool _Boundary = true;

    //--------------------------------------------------------------------------------------------------

    public override AIS_InteractiveObject AisObject
    {
        get { return _AisObject; }
    }

    //--------------------------------------------------------------------------------------------------
    
    public Plane(WorkspaceController workspaceController, Style style)
        : base(workspaceController, null)
    {
        _Style = style;
        if (_Style.Has(Style.NoResize))
        {
            _Size = new XY(1, 1);
        }
    }

    //--------------------------------------------------------------------------------------------------
    
    public void Set(Pln plane)
    {
        _Plane = plane;
        Update();
    }
    
    //--------------------------------------------------------------------------------------------------

    public override void Remove()
    {
        if (_AisObject != null)
        {
            AisContext.Erase(_AisObject, false);
            _AisObject = null;
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    public override void Update()
    {
        if (_AisObject == null)
        {
            _EnsureAisObject();
        }
        else
        {
            _UpdatePresentation();
            AisContext.RecomputePrsOnly(_AisObject, false);
        }

        if (_IsSelectable)
        {
            AisContext.Activate(_AisObject);
        }
        else
        {
            AisContext.Deactivate(_AisObject);
        }
    }
    
    //--------------------------------------------------------------------------------------------------

    void _UpdatePresentation()
    {
        if (_AisObject == null)
            return;
        
        var planeOrigin = _Plane.Translated(_Plane.Location.ToVec()
                                                  .Reversed());
        var vecMargin = ElSLib.PlaneValue(_Margin.X, _Margin.Y, planeOrigin.Position).ToVec();

        if (_Style.Has(Style.NoResize))
        {
            Graphic3d_TransformPers transformPers = new(Graphic3d_TransModeFlags.ZoomPers, _Plane.Location);
            _AisObject.SetTransformPersistence(transformPers);

            double scale = 50.0 * WorkspaceController.ActiveViewControlller.DpiScale;
            _AisObject.SetPlane(planeOrigin.Translated(vecMargin.Scaled(scale)));
            _AisObject.SetSize(_Size.X * scale, _Size.Y * scale);
        }
        else
        {
            _AisObject.SetPlane(_Plane.Translated(vecMargin));
            _AisObject.SetSize(_Size.X, _Size.Y);
        }

        _AisObject.SetColor(_Color.ToQuantityColor(), true);
        _AisObject.SetTransparency(Transparency);
        _AisObject.Attributes().SetFaceBoundaryDraw(_Boundary);

        AisContext.Update(_AisObject, false);
    }

    //--------------------------------------------------------------------------------------------------

    void _EnsureAisObject()
    {
        if (_AisObject != null)
            return;

        _AisObject = new AISX_Plane();

        if (_Style.HasFlag(Style.Topmost))
        {
            _AisObject.SetZLayer(-3); // TOPMOST
        }

        _UpdatePresentation();

        AisContext.Display(_AisObject, false);
    }

    //--------------------------------------------------------------------------------------------------

}
