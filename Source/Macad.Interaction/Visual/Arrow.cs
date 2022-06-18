
using System;
using Macad.Common;
using Macad.Core;
using Macad.Occt;
using Macad.Occt.Extensions;

namespace Macad.Interaction.Visual;

public sealed class Arrow : VisualObject
{
    [Flags]
    public enum Style
    {
        None = 0,
        AutoScale = 1 << 0,
        Headless = 1 << 1,
    }

    //--------------------------------------------------------------------------------------------------

    public override AIS_InteractiveObject AisObject
    {
        get
        {
            _EnsureAisObject();
            return _AisObject;
        }
    }

    //--------------------------------------------------------------------------------------------------

    public Quantity_Color Color
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
    AISX_Arrow _AisObject;
    Ax1 _Axis = Ax1.OZ;
    bool _IsSelectable;
    double _Length = 10.0;
    double _Width = 3.0;
    Quantity_Color _Color = Colors.Auxillary;

    //--------------------------------------------------------------------------------------------------

    public Arrow(WorkspaceController workspaceController, Style style)
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
        if(_IsSelectable)
            AisContext.Activate(_AisObject);
        else
            AisContext.Deactivate(_AisObject);
    }

    //--------------------------------------------------------------------------------------------------

    void _UpdatePresentation()
    {
        if (_AisObject == null)
            return;

        if (_Style.Has(Style.AutoScale))
        {
            Graphic3d_TransformPers transformPers = new(Graphic3d_TransModeFlags.Graphic3d_TMF_ZoomPers, _Axis.Location);
            _AisObject.SetTransformPersistence(transformPers);

            _AisObject.SetLocalTransformation(new Trsf(new Ax3(Pnt.Origin, _Axis.Direction), Ax3.XOY));
            double size = 5.0 * WorkspaceController.ActiveViewport.DpiScale;
            _AisObject.SetSize(size * 10.0, size);
        }
        else
        {
            _AisObject.SetLocalTransformation(new Trsf(new Ax3(_Axis.Location, _Axis.Direction), Ax3.XOY));
            _AisObject.SetSize(_Length, _Width);
        }

        _AisObject.SetColor(_Color);
        _AisObject.SetWidth(_Width);
        _AisObject.SetDisplayMode(_Style.Has(Style.Headless) ? 1 : 0);
    }

    //--------------------------------------------------------------------------------------------------
        
    void _EnsureAisObject()
    {
        if (_AisObject != null)
            return;

        _AisObject = new AISX_Arrow();

        _UpdatePresentation();

        AisContext.Display(_AisObject, false);
    }

    //--------------------------------------------------------------------------------------------------

}