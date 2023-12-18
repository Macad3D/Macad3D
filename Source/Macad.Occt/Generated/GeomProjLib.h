// Generated wrapper code for package GeomProjLib

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  GeomProjLib
//---------------------------------------------------------------------
/// <summary>
/// Projection of a curve on a surface.
/// </summary>
public ref class GeomProjLib sealed
    : public Macad::Occt::BaseClass<::GeomProjLib>
{

#ifdef Include_GeomProjLib_h
public:
    Include_GeomProjLib_h
#endif

public:
    GeomProjLib(::GeomProjLib* nativeInstance)
        : Macad::Occt::BaseClass<::GeomProjLib>( nativeInstance, true )
    {}

    GeomProjLib(::GeomProjLib& nativeInstance)
        : Macad::Occt::BaseClass<::GeomProjLib>( &nativeInstance, false )
    {}

    property ::GeomProjLib* NativeInstance
    {
        ::GeomProjLib* get()
        {
            return static_cast<::GeomProjLib*>(_NativeInstance);
        }
    }

public:
    GeomProjLib();
    /// <summary>
    /// gives  the 2d-curve   of  a 3d-curve  lying on   a
    /// surface (  uses GeomProjLib_ProjectedCurve   )
    /// The 3dCurve is taken between the parametrization
    /// range [First, Last]
    /// <Tolerance> is used as input if the projection needs
    /// an approximation. In this case, the reached
    /// tolerance is set in <Tolerance> as output.
    /// WARNING :  if   the projection has  failed,   this
    /// method returns a null Handle.
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S, double UFirst, double ULast, double VFirst, double VLast, double% Tolerance);
    /// <summary>
    /// gives  the 2d-curve   of  a 3d-curve  lying on   a
    /// surface (  uses GeomProjLib_ProjectedCurve   )
    /// The 3dCurve is taken between the parametrization
    /// range [First, Last]
    /// <Tolerance> is used as input if the projection needs
    /// an approximation. In this case, the reached
    /// tolerance is set in <Tolerance> as output.
    /// WARNING :  if   the projection has  failed,   this
    /// method returns a null Handle.
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S, double% Tolerance);
    /// <summary>
    /// gives  the 2d-curve   of  a 3d-curve  lying on   a
    /// surface (  uses GeomProjLib_ProjectedCurve   )
    /// The 3dCurve is taken between the parametrization
    /// range [First, Last]
    /// If the projection needs an approximation,
    /// Precision::PApproximation() is used.
    /// WARNING :  if   the projection has  failed,   this
    /// method returns a null Handle.
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, double First, double Last, Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// gives  the  2d-curve  of  a  3d-curve lying   on a
    /// surface   ( uses   GeomProjLib_ProjectedCurve ).
    /// If the projection needs an approximation,
    /// Precision::PApproximation() is used.
    /// WARNING  :  if the   projection has  failed,  this
    /// method returns a null Handle.
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// gives  the  2d-curve  of  a  3d-curve lying   on a
    /// surface   ( uses   GeomProjLib_ProjectedCurve ).
    /// If the projection needs an approximation,
    /// Precision::PApproximation() is used.
    /// WARNING  :  if the   projection has  failed,  this
    /// method returns a null Handle.
    /// can expand a little the bounds of surface
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin);
    /// <summary>
    /// gives  the  2d-curve  of  a  3d-curve lying   on a
    /// surface   ( uses   GeomProjLib_ProjectedCurve ).
    /// If the projection needs an approximation,
    /// Precision::PApproximation() is used.
    /// WARNING  :  if the   projection has  failed,  this
    /// method returns a null Handle.
    /// can expand a little the bounds of surface
    /// </summary>
    static Macad::Occt::Geom2d_Curve^ Curve2d(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S, double UDeb, double UFin, double VDeb, double VFin, double% Tolerance);
    /// <summary>
    /// Constructs   the  3d-curve  from the normal
    /// projection  of the  Curve <C> on  the surface <S>.
    /// WARNING : if the  projection has failed, returns  a
    /// null Handle.
    /// </summary>
    static Macad::Occt::Geom_Curve^ Project(Macad::Occt::Geom_Curve^ C, Macad::Occt::Geom_Surface^ S);
    /// <summary>
    /// Constructs  the 3d-curves from the projection
    /// of the  curve  <Curve> on the  plane <Plane> along
    /// the direction <Dir>.
    /// If <KeepParametrization> is true, the parametrization
    /// of the Projected Curve <PC> will be  the same as  the
    /// parametrization of the initial curve <C>.
    /// It means: proj(C(u)) = PC(u) for each u.
    /// Otherwise, the parametrization may change.
    /// </summary>
    static Macad::Occt::Geom_Curve^ ProjectOnPlane(Macad::Occt::Geom_Curve^ Curve, Macad::Occt::Geom_Plane^ Plane, Macad::Occt::Dir Dir, bool KeepParametrization);
}; // class GeomProjLib

}; // namespace Occt
}; // namespace Macad
