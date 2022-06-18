using Macad.Core;
using Macad.Occt;
using Macad.Occt.Extensions;

namespace Macad.Interaction.Visual;

public class Plane : VisualObject
{
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

    AISX_Plane _AisObject;
    Pln _Plane = Pln.XOY;
    double _SizeX = 100;
    double _SizeY = 100;
    Quantity_Color _Color = Colors.Auxillary;
    double _Transparency = 0.8;
    bool _Boundary = true;

    //--------------------------------------------------------------------------------------------------

    public override AIS_InteractiveObject AisObject
    {
        get { return _AisObject; }
    }

    //--------------------------------------------------------------------------------------------------
    
    public Plane(WorkspaceController workspaceController)
        : base(workspaceController, null)
    {
    }

    //--------------------------------------------------------------------------------------------------
    
    public void Set(Pln plane)
    {
        _Plane = plane;
        Update();
    }

    //--------------------------------------------------------------------------------------------------

    public void SetSize(double sizeX, double sizeY)
    {
        _SizeX = sizeX;
        _SizeY = sizeY;
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
            _AisObject.SetPlane(_Plane);
            _AisObject.SetSize(_SizeX, _SizeY);
            _UpdatePresentation();
            AisContext.RecomputePrsOnly(_AisObject, false);
        }
        AisContext.Deactivate(_AisObject);
    }
    
    //--------------------------------------------------------------------------------------------------

    void _UpdatePresentation()
    {
        if (_AisObject == null)
            return;

        _AisObject.SetColor(_Color);
        _AisObject.SetTransparency(Transparency);
        _AisObject.Attributes().SetFaceBoundaryDraw(_Boundary);
    }

    //--------------------------------------------------------------------------------------------------

    bool _EnsureAisObject()
    {
        if (_AisObject != null)
            return true;

        _AisObject = new AISX_Plane();
        _AisObject.SetPlane(_Plane);
        _AisObject.SetSize(_SizeX, _SizeY);

        _UpdatePresentation();

        AisContext.Display(_AisObject, false);
        return true;
    }

    //--------------------------------------------------------------------------------------------------

}
