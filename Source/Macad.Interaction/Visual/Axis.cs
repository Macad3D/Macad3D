
using System;
using Macad.Common;
using Macad.Core;
using Macad.Occt;
using Macad.Occt.Extensions;

namespace Macad.Interaction.Visual;

public sealed class Axis : VisualObject
{
    [Flags]
    public enum Style
    {
        None = 0,
        ArrowHead = 1 << 1,
        KnobHead  = 1 << 2,
        Topmost   = 1 << 16,
        NoResize  = 1 << 18,
    }

    //--------------------------------------------------------------------------------------------------

    public override AIS_InteractiveObject AisObject
    {
        get { return _AisObject; }
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

    public double Length
    {
        get { return _Length; }
        set
        {
            _Length = value;
            _UpdatePresentation();
        }
    }
    
    //--------------------------------------------------------------------------------------------------
    
    public double Width
    {
        get { return _Width; }
        set
        {
            _Width = value;
            _UpdatePresentation();
        }
    }
        
    //--------------------------------------------------------------------------------------------------
    
    public double Margin
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

    readonly Style _Style;
    AISX_Axis _AisObject;
    Ax1 _Axis = Ax1.OZ;
    bool _IsSelectable;
    double _Length = 10.0;
    double _Width = 3.0;
    double _Margin = 0.0;
    Color _Color = Colors.Auxillary;

    //--------------------------------------------------------------------------------------------------

    public Axis(WorkspaceController workspaceController, Style style)
        : base(workspaceController, null)
    {
        _Style = style;
    }
    
    //--------------------------------------------------------------------------------------------------

    public void Set(Ax1 axis)
    {
        _Axis = axis;
        if (_AisObject != null)
        {
            _UpdatePresentation();
        }
        else
        {
            Update();
        }
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
            AisContext.Redisplay(_AisObject, false);
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

        if (_Style.Has(Style.NoResize))
        {
            Graphic3d_TransformPers transformPers = new(Graphic3d_TransModeFlags.ZoomPers, _Axis.Location);
            _AisObject.SetTransformPersistence(transformPers);

            _AisObject.SetLocalTransformation(new Trsf(new Ax3(Pnt.Origin, _Axis.Direction), Ax3.XOY));
            double scale = WorkspaceController.ActiveViewControlller.DpiScale;
            _AisObject.SetSize(_Length * scale * 50.0, _Width * scale);
            _AisObject.SetMargin(_Margin * scale * 50.0);
        }
        else
        {
            _AisObject.SetLocalTransformation(new Trsf(new Ax3(_Axis.Location, _Axis.Direction), Ax3.XOY));
            _AisObject.SetSize(_Length, _Width);
            _AisObject.SetMargin(_Margin);
        }

        _AisObject.SetColor(_Color.ToQuantityColor());
        _AisObject.SetWidth(_Width);

        if(_Style.Has(Style.ArrowHead))
            _AisObject.SetDisplayMode(AISX_Axis.Mode.Arrow);
        else if(_Style.Has(Style.KnobHead))
            _AisObject.SetDisplayMode(AISX_Axis.Mode.Knob);
        else
            _AisObject.SetDisplayMode(AISX_Axis.Mode.Headless);
        
        AisContext.Update(_AisObject, false);
    }

    //--------------------------------------------------------------------------------------------------
        
    void _EnsureAisObject()
    {
        if (_AisObject != null)
            return;

        _AisObject = new AISX_Axis();
        
        if (_Style.HasFlag(Style.Topmost))
            _AisObject.SetZLayer(-3); // TOPMOST

        _UpdatePresentation();

        AisContext.Display(_AisObject, false);
    }

    //--------------------------------------------------------------------------------------------------

}