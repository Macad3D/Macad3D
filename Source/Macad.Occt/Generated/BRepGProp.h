// Generated wrapper code for package BRepGProp

#pragma once

#include "GProp.h"

namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Class  BRepGProp
//---------------------------------------------------------------------
/// <summary>
/// Provides global functions to compute a shape's global
/// properties for lines, surfaces or volumes, and bring
/// them together with the global properties already
/// computed for a geometric system.
/// The global properties computed for a system are :
/// - its mass,
/// - its center of mass,
/// - its matrix of inertia,
/// - its moment about an axis,
/// - its radius of gyration about an axis,
/// - and its principal properties of inertia such as
/// principal axis, principal moments, principal radius of gyration.
/// </summary>
public ref class BRepGProp sealed
    : public Macad::Occt::BaseClass<::BRepGProp>
{

#ifdef Include_BRepGProp_h
public:
    Include_BRepGProp_h
#endif

public:
    BRepGProp(::BRepGProp* nativeInstance)
        : Macad::Occt::BaseClass<::BRepGProp>( nativeInstance, true )
    {}

    BRepGProp(::BRepGProp& nativeInstance)
        : Macad::Occt::BaseClass<::BRepGProp>( &nativeInstance, false )
    {}

    property ::BRepGProp* NativeInstance
    {
        ::BRepGProp* get()
        {
            return static_cast<::BRepGProp*>(_NativeInstance);
        }
    }

public:
    BRepGProp();
    /// <summary>
    /// Computes the linear global properties of the shape S,
    /// i.e. the global properties induced by each edge of the
    /// shape S, and brings them together with the global
    /// properties still retained by the framework LProps. If
    /// the current system of LProps was empty, its global
    /// properties become equal to the linear global
    /// properties of S.
    /// For this computation no linear density is attached to
    /// the edges. So, for example, the added mass
    /// corresponds to the sum of the lengths of the edges of
    /// S. The density of the composed systems, i.e. that of
    /// each component of the current system of LProps, and
    /// that of S which is considered to be equal to 1, must be coherent.
    /// Note that this coherence cannot be checked. You are
    /// advised to use a separate framework for each
    /// density, and then to bring these frameworks together
    /// into a global one.
    /// The point relative to which the inertia of the system is
    /// computed is the reference point of the framework LProps.
    /// Note: if your programming ensures that the framework
    /// LProps retains only linear global properties (brought
    /// together for example, by the function
    /// LinearProperties) for objects the density of which is
    /// equal to 1 (or is not defined), the function Mass will
    /// return the total length of edges of the system analysed by LProps.
    /// Warning
    /// No check is performed to verify that the shape S
    /// retains truly linear properties. If S is simply a vertex, it
    /// is not considered to present any additional global properties.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, edges, shared by two or more faces,
    /// are taken into calculation only once.
    /// If we have cube with sizes 1, 1, 1, its linear properties = 12
    /// for SkipEdges = true and 24 for SkipEdges = false.
    /// UseTriangulation is a special flag, which defines preferable
    /// source of geometry data. If UseTriangulation = Standard_False,
    /// exact geometry objects (curves) are used, otherwise polygons of
    /// triangulation are used first.
    /// </summary>
    static void LinearProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ LProps, bool SkipShared, bool UseTriangulation);
    /// <summary>
    /// Computes the linear global properties of the shape S,
    /// i.e. the global properties induced by each edge of the
    /// shape S, and brings them together with the global
    /// properties still retained by the framework LProps. If
    /// the current system of LProps was empty, its global
    /// properties become equal to the linear global
    /// properties of S.
    /// For this computation no linear density is attached to
    /// the edges. So, for example, the added mass
    /// corresponds to the sum of the lengths of the edges of
    /// S. The density of the composed systems, i.e. that of
    /// each component of the current system of LProps, and
    /// that of S which is considered to be equal to 1, must be coherent.
    /// Note that this coherence cannot be checked. You are
    /// advised to use a separate framework for each
    /// density, and then to bring these frameworks together
    /// into a global one.
    /// The point relative to which the inertia of the system is
    /// computed is the reference point of the framework LProps.
    /// Note: if your programming ensures that the framework
    /// LProps retains only linear global properties (brought
    /// together for example, by the function
    /// LinearProperties) for objects the density of which is
    /// equal to 1 (or is not defined), the function Mass will
    /// return the total length of edges of the system analysed by LProps.
    /// Warning
    /// No check is performed to verify that the shape S
    /// retains truly linear properties. If S is simply a vertex, it
    /// is not considered to present any additional global properties.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, edges, shared by two or more faces,
    /// are taken into calculation only once.
    /// If we have cube with sizes 1, 1, 1, its linear properties = 12
    /// for SkipEdges = true and 24 for SkipEdges = false.
    /// UseTriangulation is a special flag, which defines preferable
    /// source of geometry data. If UseTriangulation = Standard_False,
    /// exact geometry objects (curves) are used, otherwise polygons of
    /// triangulation are used first.
    /// </summary>
    static void LinearProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ LProps, bool SkipShared);
    /// <summary>
    /// Computes the linear global properties of the shape S,
    /// i.e. the global properties induced by each edge of the
    /// shape S, and brings them together with the global
    /// properties still retained by the framework LProps. If
    /// the current system of LProps was empty, its global
    /// properties become equal to the linear global
    /// properties of S.
    /// For this computation no linear density is attached to
    /// the edges. So, for example, the added mass
    /// corresponds to the sum of the lengths of the edges of
    /// S. The density of the composed systems, i.e. that of
    /// each component of the current system of LProps, and
    /// that of S which is considered to be equal to 1, must be coherent.
    /// Note that this coherence cannot be checked. You are
    /// advised to use a separate framework for each
    /// density, and then to bring these frameworks together
    /// into a global one.
    /// The point relative to which the inertia of the system is
    /// computed is the reference point of the framework LProps.
    /// Note: if your programming ensures that the framework
    /// LProps retains only linear global properties (brought
    /// together for example, by the function
    /// LinearProperties) for objects the density of which is
    /// equal to 1 (or is not defined), the function Mass will
    /// return the total length of edges of the system analysed by LProps.
    /// Warning
    /// No check is performed to verify that the shape S
    /// retains truly linear properties. If S is simply a vertex, it
    /// is not considered to present any additional global properties.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, edges, shared by two or more faces,
    /// are taken into calculation only once.
    /// If we have cube with sizes 1, 1, 1, its linear properties = 12
    /// for SkipEdges = true and 24 for SkipEdges = false.
    /// UseTriangulation is a special flag, which defines preferable
    /// source of geometry data. If UseTriangulation = Standard_False,
    /// exact geometry objects (curves) are used, otherwise polygons of
    /// triangulation are used first.
    /// </summary>
    static void LinearProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ LProps);
    /// <summary>
    /// Computes the surface global properties of the
    /// shape S, i.e. the global properties induced by each
    /// face of the shape S, and brings them together with
    /// the global properties still retained by the framework
    /// SProps. If the current system of SProps was empty,
    /// its global properties become equal to the surface
    /// global properties of S.
    /// For this computation, no surface density is attached
    /// to the faces. Consequently, the added mass
    /// corresponds to the sum of the areas of the faces of
    /// S. The density of the component systems, i.e. that
    /// of each component of the current system of
    /// SProps, and that of S which is considered to be
    /// equal to 1, must be coherent.
    /// Note that this coherence cannot be checked. You
    /// are advised to use a framework for each different
    /// value of density, and then to bring these
    /// frameworks together into a global one.
    /// The point relative to which the inertia of the system
    /// is computed is the reference point of the framework SProps.
    /// Note : if your programming ensures that the
    /// framework SProps retains only surface global
    /// properties, brought together, for example, by the
    /// function SurfaceProperties, for objects the density
    /// of which is equal to 1 (or is not defined), the
    /// function Mass will return the total area of faces of
    /// the system analysed by SProps.
    /// Warning
    /// No check is performed to verify that the shape S
    /// retains truly surface properties. If S is simply a
    /// vertex, an edge or a wire, it is not considered to
    /// present any additional global properties.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, faces, shared by two or more shells,
    /// are taken into calculation only once.
    /// UseTriangulation is a special flag, which defines preferable
    /// source of geometry data. If UseTriangulation = Standard_False,
    /// exact geometry objects (surfaces) are used,
    /// otherwise face triangulations are used first.
    /// </summary>
    static void SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, bool SkipShared, bool UseTriangulation);
    /// <summary>
    /// Computes the surface global properties of the
    /// shape S, i.e. the global properties induced by each
    /// face of the shape S, and brings them together with
    /// the global properties still retained by the framework
    /// SProps. If the current system of SProps was empty,
    /// its global properties become equal to the surface
    /// global properties of S.
    /// For this computation, no surface density is attached
    /// to the faces. Consequently, the added mass
    /// corresponds to the sum of the areas of the faces of
    /// S. The density of the component systems, i.e. that
    /// of each component of the current system of
    /// SProps, and that of S which is considered to be
    /// equal to 1, must be coherent.
    /// Note that this coherence cannot be checked. You
    /// are advised to use a framework for each different
    /// value of density, and then to bring these
    /// frameworks together into a global one.
    /// The point relative to which the inertia of the system
    /// is computed is the reference point of the framework SProps.
    /// Note : if your programming ensures that the
    /// framework SProps retains only surface global
    /// properties, brought together, for example, by the
    /// function SurfaceProperties, for objects the density
    /// of which is equal to 1 (or is not defined), the
    /// function Mass will return the total area of faces of
    /// the system analysed by SProps.
    /// Warning
    /// No check is performed to verify that the shape S
    /// retains truly surface properties. If S is simply a
    /// vertex, an edge or a wire, it is not considered to
    /// present any additional global properties.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, faces, shared by two or more shells,
    /// are taken into calculation only once.
    /// UseTriangulation is a special flag, which defines preferable
    /// source of geometry data. If UseTriangulation = Standard_False,
    /// exact geometry objects (surfaces) are used,
    /// otherwise face triangulations are used first.
    /// </summary>
    static void SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, bool SkipShared);
    /// <summary>
    /// Computes the surface global properties of the
    /// shape S, i.e. the global properties induced by each
    /// face of the shape S, and brings them together with
    /// the global properties still retained by the framework
    /// SProps. If the current system of SProps was empty,
    /// its global properties become equal to the surface
    /// global properties of S.
    /// For this computation, no surface density is attached
    /// to the faces. Consequently, the added mass
    /// corresponds to the sum of the areas of the faces of
    /// S. The density of the component systems, i.e. that
    /// of each component of the current system of
    /// SProps, and that of S which is considered to be
    /// equal to 1, must be coherent.
    /// Note that this coherence cannot be checked. You
    /// are advised to use a framework for each different
    /// value of density, and then to bring these
    /// frameworks together into a global one.
    /// The point relative to which the inertia of the system
    /// is computed is the reference point of the framework SProps.
    /// Note : if your programming ensures that the
    /// framework SProps retains only surface global
    /// properties, brought together, for example, by the
    /// function SurfaceProperties, for objects the density
    /// of which is equal to 1 (or is not defined), the
    /// function Mass will return the total area of faces of
    /// the system analysed by SProps.
    /// Warning
    /// No check is performed to verify that the shape S
    /// retains truly surface properties. If S is simply a
    /// vertex, an edge or a wire, it is not considered to
    /// present any additional global properties.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, faces, shared by two or more shells,
    /// are taken into calculation only once.
    /// UseTriangulation is a special flag, which defines preferable
    /// source of geometry data. If UseTriangulation = Standard_False,
    /// exact geometry objects (surfaces) are used,
    /// otherwise face triangulations are used first.
    /// </summary>
    static void SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps);
    /// <summary>
    /// Updates <SProps> with the shape <S>, that contains its principal properties.
    /// The surface properties of all the faces in <S> are computed.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter Eps sets maximal relative error of computed mass (area) for each face.
    /// Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// Method returns estimation of relative error reached for whole shape.
    /// WARNING: if Eps > 0.001 algorithm performs non-adaptive integration.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not
    /// For ex., if SkipShared = True, faces, shared by two or more shells,
    /// are taken into calculation only once.
    /// </summary>
    static double SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, double Eps, bool SkipShared);
    /// <summary>
    /// Updates <SProps> with the shape <S>, that contains its principal properties.
    /// The surface properties of all the faces in <S> are computed.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter Eps sets maximal relative error of computed mass (area) for each face.
    /// Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// Method returns estimation of relative error reached for whole shape.
    /// WARNING: if Eps > 0.001 algorithm performs non-adaptive integration.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not
    /// For ex., if SkipShared = True, faces, shared by two or more shells,
    /// are taken into calculation only once.
    /// </summary>
    static double SurfaceProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ SProps, double Eps);
    /// <summary>
    /// 
    /// Computes the global volume properties of the solid
    /// S, and brings them together with the global
    /// properties still retained by the framework VProps. If
    /// the current system of VProps was empty, its global
    /// properties become equal to the global properties of S for volume.
    /// For this computation, no volume density is attached
    /// to the solid. Consequently, the added mass
    /// corresponds to the volume of S. The density of the
    /// component systems, i.e. that of each component of
    /// the current system of VProps, and that of S which
    /// is considered to be equal to 1, must be coherent to each other.
    /// Note that this coherence cannot be checked. You
    /// are advised to use a separate framework for each
    /// density, and then to bring these frameworks
    /// together into a global one.
    /// The point relative to which the inertia of the system
    /// is computed is the reference point of the framework VProps.
    /// Note: if your programming ensures that the
    /// framework VProps retains only global properties of
    /// volume (brought together for example, by the
    /// function VolumeProperties) for objects the density
    /// of which is equal to 1 (or is not defined), the
    /// function Mass will return the total volume of the
    /// solids of the system analysed by VProps.
    /// Warning
    /// The shape S must represent an object whose
    /// global volume properties can be computed. It may
    /// be a finite solid, or a series of finite solids all
    /// oriented in a coherent way. Nonetheless, S must be
    /// exempt of any free boundary. Note that these
    /// conditions of coherence are not checked by this
    /// algorithm, and results will be false if they are not respected.
    /// SkipShared a is special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation) faces are taken
    /// into calculation only once.
    /// UseTriangulation is a special flag, which defines preferable
    /// source of geometry data. If UseTriangulation = Standard_False,
    /// exact geometry objects (surfaces) are used,
    /// otherwise face triangulations are used first.
    /// </summary>
    static void VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, bool OnlyClosed, bool SkipShared, bool UseTriangulation);
    /// <summary>
    /// 
    /// Computes the global volume properties of the solid
    /// S, and brings them together with the global
    /// properties still retained by the framework VProps. If
    /// the current system of VProps was empty, its global
    /// properties become equal to the global properties of S for volume.
    /// For this computation, no volume density is attached
    /// to the solid. Consequently, the added mass
    /// corresponds to the volume of S. The density of the
    /// component systems, i.e. that of each component of
    /// the current system of VProps, and that of S which
    /// is considered to be equal to 1, must be coherent to each other.
    /// Note that this coherence cannot be checked. You
    /// are advised to use a separate framework for each
    /// density, and then to bring these frameworks
    /// together into a global one.
    /// The point relative to which the inertia of the system
    /// is computed is the reference point of the framework VProps.
    /// Note: if your programming ensures that the
    /// framework VProps retains only global properties of
    /// volume (brought together for example, by the
    /// function VolumeProperties) for objects the density
    /// of which is equal to 1 (or is not defined), the
    /// function Mass will return the total volume of the
    /// solids of the system analysed by VProps.
    /// Warning
    /// The shape S must represent an object whose
    /// global volume properties can be computed. It may
    /// be a finite solid, or a series of finite solids all
    /// oriented in a coherent way. Nonetheless, S must be
    /// exempt of any free boundary. Note that these
    /// conditions of coherence are not checked by this
    /// algorithm, and results will be false if they are not respected.
    /// SkipShared a is special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation) faces are taken
    /// into calculation only once.
    /// UseTriangulation is a special flag, which defines preferable
    /// source of geometry data. If UseTriangulation = Standard_False,
    /// exact geometry objects (surfaces) are used,
    /// otherwise face triangulations are used first.
    /// </summary>
    static void VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, bool OnlyClosed, bool SkipShared);
    /// <summary>
    /// 
    /// Computes the global volume properties of the solid
    /// S, and brings them together with the global
    /// properties still retained by the framework VProps. If
    /// the current system of VProps was empty, its global
    /// properties become equal to the global properties of S for volume.
    /// For this computation, no volume density is attached
    /// to the solid. Consequently, the added mass
    /// corresponds to the volume of S. The density of the
    /// component systems, i.e. that of each component of
    /// the current system of VProps, and that of S which
    /// is considered to be equal to 1, must be coherent to each other.
    /// Note that this coherence cannot be checked. You
    /// are advised to use a separate framework for each
    /// density, and then to bring these frameworks
    /// together into a global one.
    /// The point relative to which the inertia of the system
    /// is computed is the reference point of the framework VProps.
    /// Note: if your programming ensures that the
    /// framework VProps retains only global properties of
    /// volume (brought together for example, by the
    /// function VolumeProperties) for objects the density
    /// of which is equal to 1 (or is not defined), the
    /// function Mass will return the total volume of the
    /// solids of the system analysed by VProps.
    /// Warning
    /// The shape S must represent an object whose
    /// global volume properties can be computed. It may
    /// be a finite solid, or a series of finite solids all
    /// oriented in a coherent way. Nonetheless, S must be
    /// exempt of any free boundary. Note that these
    /// conditions of coherence are not checked by this
    /// algorithm, and results will be false if they are not respected.
    /// SkipShared a is special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation) faces are taken
    /// into calculation only once.
    /// UseTriangulation is a special flag, which defines preferable
    /// source of geometry data. If UseTriangulation = Standard_False,
    /// exact geometry objects (surfaces) are used,
    /// otherwise face triangulations are used first.
    /// </summary>
    static void VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, bool OnlyClosed);
    /// <summary>
    /// 
    /// Computes the global volume properties of the solid
    /// S, and brings them together with the global
    /// properties still retained by the framework VProps. If
    /// the current system of VProps was empty, its global
    /// properties become equal to the global properties of S for volume.
    /// For this computation, no volume density is attached
    /// to the solid. Consequently, the added mass
    /// corresponds to the volume of S. The density of the
    /// component systems, i.e. that of each component of
    /// the current system of VProps, and that of S which
    /// is considered to be equal to 1, must be coherent to each other.
    /// Note that this coherence cannot be checked. You
    /// are advised to use a separate framework for each
    /// density, and then to bring these frameworks
    /// together into a global one.
    /// The point relative to which the inertia of the system
    /// is computed is the reference point of the framework VProps.
    /// Note: if your programming ensures that the
    /// framework VProps retains only global properties of
    /// volume (brought together for example, by the
    /// function VolumeProperties) for objects the density
    /// of which is equal to 1 (or is not defined), the
    /// function Mass will return the total volume of the
    /// solids of the system analysed by VProps.
    /// Warning
    /// The shape S must represent an object whose
    /// global volume properties can be computed. It may
    /// be a finite solid, or a series of finite solids all
    /// oriented in a coherent way. Nonetheless, S must be
    /// exempt of any free boundary. Note that these
    /// conditions of coherence are not checked by this
    /// algorithm, and results will be false if they are not respected.
    /// SkipShared a is special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation) faces are taken
    /// into calculation only once.
    /// UseTriangulation is a special flag, which defines preferable
    /// source of geometry data. If UseTriangulation = Standard_False,
    /// exact geometry objects (surfaces) are used,
    /// otherwise face triangulations are used first.
    /// </summary>
    static void VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps);
    /// <summary>
    /// Updates <VProps> with the shape <S>, that contains its principal properties.
    /// The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
    /// If OnlyClosed is True then computed faces must belong to closed Shells.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter Eps sets maximal relative error of computed mass (volume) for each face.
    /// Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// Method returns estimation of relative error reached for whole shape.
    /// WARNING: if Eps > 0.001 algorithm performs non-adaptive integration.
    /// SkipShared is a special flag, which allows taking in calculation shared
    /// topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation)
    /// faces are taken into calculation only once.
    /// </summary>
    static double VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool SkipShared);
    /// <summary>
    /// Updates <VProps> with the shape <S>, that contains its principal properties.
    /// The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
    /// If OnlyClosed is True then computed faces must belong to closed Shells.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter Eps sets maximal relative error of computed mass (volume) for each face.
    /// Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// Method returns estimation of relative error reached for whole shape.
    /// WARNING: if Eps > 0.001 algorithm performs non-adaptive integration.
    /// SkipShared is a special flag, which allows taking in calculation shared
    /// topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation)
    /// faces are taken into calculation only once.
    /// </summary>
    static double VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed);
    /// <summary>
    /// Updates <VProps> with the shape <S>, that contains its principal properties.
    /// The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
    /// If OnlyClosed is True then computed faces must belong to closed Shells.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter Eps sets maximal relative error of computed mass (volume) for each face.
    /// Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// Method returns estimation of relative error reached for whole shape.
    /// WARNING: if Eps > 0.001 algorithm performs non-adaptive integration.
    /// SkipShared is a special flag, which allows taking in calculation shared
    /// topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation)
    /// faces are taken into calculation only once.
    /// </summary>
    static double VolumeProperties(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps);
    /// <summary>
    /// Updates <VProps> with the shape <S>, that contains its principal properties.
    /// The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
    /// If OnlyClosed is True then computed faces must belong to closed Shells.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter IsUseSpan says if it is necessary to define spans on a face.
    /// This option has an effect only for BSpline faces.
    /// Parameter Eps sets maximal relative error of computed property for each face.
    /// Error is delivered by the adaptive Gauss-Kronrod method of integral computation
    /// that is used for properties computation.
    /// Method returns estimation of relative error reached for whole shape.
    /// Returns negative value if the computation is failed.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation) faces are taken into calculation only once.
    /// </summary>
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag, bool SkipShared);
    /// <summary>
    /// Updates <VProps> with the shape <S>, that contains its principal properties.
    /// The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
    /// If OnlyClosed is True then computed faces must belong to closed Shells.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter IsUseSpan says if it is necessary to define spans on a face.
    /// This option has an effect only for BSpline faces.
    /// Parameter Eps sets maximal relative error of computed property for each face.
    /// Error is delivered by the adaptive Gauss-Kronrod method of integral computation
    /// that is used for properties computation.
    /// Method returns estimation of relative error reached for whole shape.
    /// Returns negative value if the computation is failed.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation) faces are taken into calculation only once.
    /// </summary>
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag);
    /// <summary>
    /// Updates <VProps> with the shape <S>, that contains its principal properties.
    /// The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
    /// If OnlyClosed is True then computed faces must belong to closed Shells.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter IsUseSpan says if it is necessary to define spans on a face.
    /// This option has an effect only for BSpline faces.
    /// Parameter Eps sets maximal relative error of computed property for each face.
    /// Error is delivered by the adaptive Gauss-Kronrod method of integral computation
    /// that is used for properties computation.
    /// Method returns estimation of relative error reached for whole shape.
    /// Returns negative value if the computation is failed.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation) faces are taken into calculation only once.
    /// </summary>
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag);
    /// <summary>
    /// Updates <VProps> with the shape <S>, that contains its principal properties.
    /// The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
    /// If OnlyClosed is True then computed faces must belong to closed Shells.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter IsUseSpan says if it is necessary to define spans on a face.
    /// This option has an effect only for BSpline faces.
    /// Parameter Eps sets maximal relative error of computed property for each face.
    /// Error is delivered by the adaptive Gauss-Kronrod method of integral computation
    /// that is used for properties computation.
    /// Method returns estimation of relative error reached for whole shape.
    /// Returns negative value if the computation is failed.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation) faces are taken into calculation only once.
    /// </summary>
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed, bool IsUseSpan);
    /// <summary>
    /// Updates <VProps> with the shape <S>, that contains its principal properties.
    /// The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
    /// If OnlyClosed is True then computed faces must belong to closed Shells.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter IsUseSpan says if it is necessary to define spans on a face.
    /// This option has an effect only for BSpline faces.
    /// Parameter Eps sets maximal relative error of computed property for each face.
    /// Error is delivered by the adaptive Gauss-Kronrod method of integral computation
    /// that is used for properties computation.
    /// Method returns estimation of relative error reached for whole shape.
    /// Returns negative value if the computation is failed.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation) faces are taken into calculation only once.
    /// </summary>
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps, bool OnlyClosed);
    /// <summary>
    /// Updates <VProps> with the shape <S>, that contains its principal properties.
    /// The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
    /// If OnlyClosed is True then computed faces must belong to closed Shells.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter IsUseSpan says if it is necessary to define spans on a face.
    /// This option has an effect only for BSpline faces.
    /// Parameter Eps sets maximal relative error of computed property for each face.
    /// Error is delivered by the adaptive Gauss-Kronrod method of integral computation
    /// that is used for properties computation.
    /// Method returns estimation of relative error reached for whole shape.
    /// Returns negative value if the computation is failed.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation) faces are taken into calculation only once.
    /// </summary>
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, double Eps);
    /// <summary>
    /// Updates <VProps> with the shape <S>, that contains its principal properties.
    /// The volume properties of all the FORWARD and REVERSED faces in <S> are computed.
    /// If OnlyClosed is True then computed faces must belong to closed Shells.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter IsUseSpan says if it is necessary to define spans on a face.
    /// This option has an effect only for BSpline faces.
    /// Parameter Eps sets maximal relative error of computed property for each face.
    /// Error is delivered by the adaptive Gauss-Kronrod method of integral computation
    /// that is used for properties computation.
    /// Method returns estimation of relative error reached for whole shape.
    /// Returns negative value if the computation is failed.
    /// SkipShared is a special flag, which allows taking in calculation
    /// shared topological entities or not.
    /// For ex., if SkipShared = True, the volumes formed by the equal
    /// (the same TShape, location and orientation) faces are taken into calculation only once.
    /// </summary>
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps);
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag, bool SkipShared);
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag, bool IFlag);
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan, bool CGFlag);
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed, bool IsUseSpan);
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps, bool OnlyClosed);
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln, double Eps);
    static double VolumePropertiesGK(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::GProp_GProps^ VProps, Macad::Occt::Pln thePln);
}; // class BRepGProp

//---------------------------------------------------------------------
//  Class  BRepGProp_Cinert
//---------------------------------------------------------------------
/// <summary>
/// Computes the  global properties of bounded curves
/// in 3D space. The curve must have at least a continuity C1.
/// It can be a curve as defined in the template CurveTool from
/// package GProp. This template gives the minimum of methods
/// required to evaluate the global properties of a curve 3D with
/// the algorithms of GProp.
/// </summary>
public ref class BRepGProp_Cinert sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_Cinert_h
public:
    Include_BRepGProp_Cinert_h
#endif

public:
    BRepGProp_Cinert(::BRepGProp_Cinert* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    BRepGProp_Cinert(::BRepGProp_Cinert& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::BRepGProp_Cinert* NativeInstance
    {
        ::BRepGProp_Cinert* get()
        {
            return static_cast<::BRepGProp_Cinert*>(_NativeInstance);
        }
    }

public:
    BRepGProp_Cinert();
    BRepGProp_Cinert(Macad::Occt::BRepAdaptor_Curve^ C, Macad::Occt::Pnt CLocation);
    void SetLocation(Macad::Occt::Pnt CLocation);
    void Perform(Macad::Occt::BRepAdaptor_Curve^ C);
}; // class BRepGProp_Cinert

//---------------------------------------------------------------------
//  Class  BRepGProp_Domain
//---------------------------------------------------------------------
/// <summary>
/// Arc iterator. Returns only Forward and Reversed edges from
/// the face in an undigested order.
/// </summary>
public ref class BRepGProp_Domain sealed
    : public Macad::Occt::BaseClass<::BRepGProp_Domain>
{

#ifdef Include_BRepGProp_Domain_h
public:
    Include_BRepGProp_Domain_h
#endif

public:
    BRepGProp_Domain(::BRepGProp_Domain* nativeInstance)
        : Macad::Occt::BaseClass<::BRepGProp_Domain>( nativeInstance, true )
    {}

    BRepGProp_Domain(::BRepGProp_Domain& nativeInstance)
        : Macad::Occt::BaseClass<::BRepGProp_Domain>( &nativeInstance, false )
    {}

    property ::BRepGProp_Domain* NativeInstance
    {
        ::BRepGProp_Domain* get()
        {
            return static_cast<::BRepGProp_Domain*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    BRepGProp_Domain();
    /// <summary>
    /// Constructor. Initializes the domain with the face.
    /// </summary>
    BRepGProp_Domain(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Initializes the domain with the face.
    /// </summary>
    void Init(Macad::Occt::TopoDS_Face^ F);
    /// <summary>
    /// Returns True if there is another arc of curve in the list.
    /// </summary>
    bool More();
    /// <summary>
    /// Initializes the exploration with the face already set.
    /// </summary>
    void Init();
    /// <summary>
    /// Returns the current edge.
    /// </summary>
    Macad::Occt::TopoDS_Edge^ Value();
    /// <summary>
    /// Sets the index of the arc iterator to the next arc of
    /// curve.
    /// </summary>
    void Next();
}; // class BRepGProp_Domain

//---------------------------------------------------------------------
//  Class  BRepGProp_EdgeTool
//---------------------------------------------------------------------
/// <summary>
/// Provides  the required  methods    to instantiate
/// CGProps from GProp with a Curve from BRepAdaptor.
/// </summary>
public ref class BRepGProp_EdgeTool sealed
    : public Macad::Occt::BaseClass<::BRepGProp_EdgeTool>
{

#ifdef Include_BRepGProp_EdgeTool_h
public:
    Include_BRepGProp_EdgeTool_h
#endif

public:
    BRepGProp_EdgeTool(::BRepGProp_EdgeTool* nativeInstance)
        : Macad::Occt::BaseClass<::BRepGProp_EdgeTool>( nativeInstance, true )
    {}

    BRepGProp_EdgeTool(::BRepGProp_EdgeTool& nativeInstance)
        : Macad::Occt::BaseClass<::BRepGProp_EdgeTool>( &nativeInstance, false )
    {}

    property ::BRepGProp_EdgeTool* NativeInstance
    {
        ::BRepGProp_EdgeTool* get()
        {
            return static_cast<::BRepGProp_EdgeTool*>(_NativeInstance);
        }
    }

public:
    BRepGProp_EdgeTool();
    /// <summary>
    /// Returns the parametric value of the start point of
    /// the curve.  The curve is oriented from the start point
    /// to the end point.
    /// </summary>
    static double FirstParameter(Macad::Occt::BRepAdaptor_Curve^ C);
    /// <summary>
    /// Returns the parametric value of the end point of
    /// the curve.  The curve is oriented from the start point
    /// to the end point.
    /// </summary>
    static double LastParameter(Macad::Occt::BRepAdaptor_Curve^ C);
    /// <summary>
    /// Returns the number of Gauss points required to do
    /// the integration with a good accuracy using the
    /// Gauss method.  For a polynomial curve of degree n
    /// the maxima of accuracy is obtained with an order
    /// of integration equal to 2*n-1.
    /// </summary>
    static int IntegrationOrder(Macad::Occt::BRepAdaptor_Curve^ C);
    /// <summary>
    /// Returns the point of parameter U on the loaded curve.
    /// </summary>
    static Macad::Occt::Pnt Value(Macad::Occt::BRepAdaptor_Curve^ C, double U);
    /// <summary>
    /// Returns the point of parameter U and the first derivative
    /// at this point.
    /// </summary>
    static void D1(Macad::Occt::BRepAdaptor_Curve^ C, double U, Macad::Occt::Pnt% P, Macad::Occt::Vec% V1);
    /// <summary>
    /// Returns  the number  of  intervals for  continuity
    /// <S>. May be one if Continuity(me) >= <S>
    /// </summary>
    static int NbIntervals(Macad::Occt::BRepAdaptor_Curve^ C, Macad::Occt::GeomAbs_Shape S);
    /// <summary>
    /// Stores in <T> the  parameters bounding the intervals
    /// of continuity <S>.
    /// 
    /// The array must provide  enough room to  accommodate
    /// for the parameters. i.e. T.Length() > NbIntervals()
    /// </summary>
    static void Intervals(Macad::Occt::BRepAdaptor_Curve^ C, Macad::Occt::TColStd_Array1OfReal^ T, Macad::Occt::GeomAbs_Shape S);
}; // class BRepGProp_EdgeTool

//---------------------------------------------------------------------
//  Class  BRepGProp_Face
//---------------------------------------------------------------------
public ref class BRepGProp_Face sealed
    : public Macad::Occt::BaseClass<::BRepGProp_Face>
{

#ifdef Include_BRepGProp_Face_h
public:
    Include_BRepGProp_Face_h
#endif

public:
    BRepGProp_Face(::BRepGProp_Face* nativeInstance)
        : Macad::Occt::BaseClass<::BRepGProp_Face>( nativeInstance, true )
    {}

    BRepGProp_Face(::BRepGProp_Face& nativeInstance)
        : Macad::Occt::BaseClass<::BRepGProp_Face>( &nativeInstance, false )
    {}

    property ::BRepGProp_Face* NativeInstance
    {
        ::BRepGProp_Face* get()
        {
            return static_cast<::BRepGProp_Face*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Constructor. Initializes the object with a flag IsUseSpan
    /// that says if it is necessary to define spans on a face.
    /// This option has an effect only for BSpline faces. Spans
    /// are returned by the methods GetUKnots and GetTKnots.
    /// </summary>
    BRepGProp_Face(bool IsUseSpan);
    /// <summary>
    /// Constructor. Initializes the object with a flag IsUseSpan
    /// that says if it is necessary to define spans on a face.
    /// This option has an effect only for BSpline faces. Spans
    /// are returned by the methods GetUKnots and GetTKnots.
    /// </summary>
    BRepGProp_Face();
    /// <summary>
    /// Constructor. Initializes the object with the face and the
    /// flag IsUseSpan that says if it is necessary to define
    /// spans on a face. This option has an effect only for
    /// BSpline faces. Spans are returned by the methods GetUKnots
    /// and GetTKnots.
    /// </summary>
    BRepGProp_Face(Macad::Occt::TopoDS_Face^ F, bool IsUseSpan);
    /// <summary>
    /// Constructor. Initializes the object with the face and the
    /// flag IsUseSpan that says if it is necessary to define
    /// spans on a face. This option has an effect only for
    /// BSpline faces. Spans are returned by the methods GetUKnots
    /// and GetTKnots.
    /// </summary>
    BRepGProp_Face(Macad::Occt::TopoDS_Face^ F);
    void Load(Macad::Occt::TopoDS_Face^ F);
    int VIntegrationOrder();
    /// <summary>
    /// Returns Standard_True if the face is not trimmed.
    /// </summary>
    bool NaturalRestriction();
    /// <summary>
    /// Returns the TopoDS face.
    /// </summary>
    Macad::Occt::TopoDS_Face^ GetFace();
    /// <summary>
    /// Returns the value of the boundary curve of the face.
    /// </summary>
    Macad::Occt::Pnt2d Value2d(double U);
    int SIntOrder(double Eps);
    int SVIntSubs();
    int SUIntSubs();
    void UKnots(Macad::Occt::TColStd_Array1OfReal^ Knots);
    void VKnots(Macad::Occt::TColStd_Array1OfReal^ Knots);
    int LIntOrder(double Eps);
    int LIntSubs();
    void LKnots(Macad::Occt::TColStd_Array1OfReal^ Knots);
    /// <summary>
    /// Returns the number of points required to do the
    /// integration in the U parametric direction with
    /// a good accuracy.
    /// </summary>
    int UIntegrationOrder();
    /// <summary>
    /// Returns the parametric bounds of the Face.
    /// </summary>
    void Bounds(double% U1, double% U2, double% V1, double% V2);
    /// <summary>
    /// Computes the point of parameter U, V on the Face <S> and
    /// the normal to the face at this point.
    /// </summary>
    void Normal(double U, double V, Macad::Occt::Pnt% P, Macad::Occt::Vec% VNor);
    /// <summary>
    /// Loading the boundary arc.
    /// Returns FALSE if edge has no P-Curve.
    /// </summary>
    bool Load(Macad::Occt::TopoDS_Edge^ E);
    /// <summary>
    /// Returns the parametric value of the start point of
    /// the current arc of curve.
    /// </summary>
    double FirstParameter();
    /// <summary>
    /// Returns the parametric value of the end point of
    /// the current arc of curve.
    /// </summary>
    double LastParameter();
    /// <summary>
    /// Returns the number of points required to do the
    /// integration along the parameter of curve.
    /// </summary>
    int IntegrationOrder();
    /// <summary>
    /// Returns the point of parameter U and the first derivative
    /// at this point of a boundary curve.
    /// </summary>
    void D12d(double U, Macad::Occt::Pnt2d% P, Macad::Occt::Vec2d% V1);
    /// <summary>
    /// Loading the boundary arc. This arc is either a top, bottom,
    /// left or right bound of a UV rectangle in which the
    /// parameters of surface are defined.
    /// If IsFirstParam is equal to Standard_True, the face is
    /// initialized by either left of bottom bound. Otherwise it is
    /// initialized by the top or right one.
    /// If theIsoType is equal to GeomAbs_IsoU, the face is
    /// initialized with either left or right bound. Otherwise -
    /// with either top or bottom one.
    /// </summary>
    void Load(bool IsFirstParam, Macad::Occt::GeomAbs_IsoType theIsoType);
    /// <summary>
    /// Returns an array of U knots of the face. The first and last
    /// elements of the array will be theUMin and theUMax. The
    /// middle elements will be the U Knots of the face greater
    /// then theUMin and lower then theUMax in increasing order.
    /// If the face is not a BSpline, the array initialized with
    /// theUMin and theUMax only.
    /// </summary>
    void GetUKnots(double theUMin, double theUMax, Macad::Occt::TColStd_HArray1OfReal^ theUKnots);
    /// <summary>
    /// Returns an array of combination of T knots of the arc and
    /// V knots of the face. The first and last elements of the
    /// array will be theTMin and theTMax. The middle elements will
    /// be the Knots of the arc and the values of parameters of
    /// arc on which the value points have V coordinates close to V
    /// knots of face. All the parameter will be greater then
    /// theTMin and lower then theTMax in increasing order.
    /// If the face is not a BSpline, the array initialized with
    /// theTMin and theTMax only.
    /// </summary>
    void GetTKnots(double theTMin, double theTMax, Macad::Occt::TColStd_HArray1OfReal^ theTKnots);
}; // class BRepGProp_Face

//---------------------------------------------------------------------
//  Class  BRepGProp_Gauss
//---------------------------------------------------------------------
/// <summary>
/// Class performs computing of the global inertia properties
/// of geometric object in 3D space by adaptive and non-adaptive
/// 2D Gauss integration algorithms.
/// </summary>
public ref class BRepGProp_Gauss sealed
    : public Macad::Occt::BaseClass<::BRepGProp_Gauss>
{

#ifdef Include_BRepGProp_Gauss_h
public:
    Include_BRepGProp_Gauss_h
#endif

public:
    BRepGProp_Gauss(::BRepGProp_Gauss* nativeInstance)
        : Macad::Occt::BaseClass<::BRepGProp_Gauss>( nativeInstance, true )
    {}

    BRepGProp_Gauss(::BRepGProp_Gauss& nativeInstance)
        : Macad::Occt::BaseClass<::BRepGProp_Gauss>( &nativeInstance, false )
    {}

    property ::BRepGProp_Gauss* NativeInstance
    {
        ::BRepGProp_Gauss* get()
        {
            return static_cast<::BRepGProp_Gauss*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  BRepGProp_GaussType
    //---------------------------------------------------------------------
    /// <summary>
    /// </summary>
    /// @name public API
    /// Describes types of geometric objects.
    /// - Vinert is 3D closed region of space delimited with:
    /// -- Surface;
    /// -- Point and Surface;
    /// -- Plane and Surface.
    /// - Sinert is face in 3D space.
    enum class BRepGProp_GaussType
    {
        Vinert = 0,
        Sinert = 1
    }; // enum  class BRepGProp_GaussType

    /// <summary>
    /// Constructor
    /// </summary>
    BRepGProp_Gauss(Macad::Occt::BRepGProp_Gauss::BRepGProp_GaussType theType);
    /// <summary>
    /// Computes the global properties of a solid region of 3D space which can be
    /// delimited by the surface and point or surface and plane. Surface can be closed.
    /// The method is quick and its precision is enough for many cases of analytical surfaces.
    /// Non-adaptive 2D Gauss integration with predefined numbers of Gauss points
    /// is used. Numbers of points depend on types of surfaces and curves.
    /// Error of the computation is not calculated.
    /// </summary>
    /// <param name="theSurface">
    /// - bounding surface of the region;
    /// </param>
    /// <param name="theLocation">
    /// - location of the point or the plane;
    /// </param>
    /// <param name="theCoeff">
    /// - plane coefficients;
    /// </param>
    /// <param name="theIsByPoint">
    /// - flag of restricition (point/plane);
    /// </param>
    /// <param name="out]">
    /// theOutMass - mass (volume) of region;
    /// </param>
    /// <param name="out]">
    /// theOutGravityCenter - garvity center of region;
    /// </param>
    /// <param name="out]">
    /// theOutInertia - matrix of inertia;
    /// </param>
    void Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double theCoeff, bool theIsByPoint, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia);
    /// <summary>
    /// Computes the global properties of a surface. Surface can be closed.
    /// The method is quick and its precision is enough for many cases of analytical surfaces.
    /// Non-adaptive 2D Gauss integration with predefined numbers of Gauss points
    /// is used. Numbers of points depend on types of surfaces and curves.
    /// Error of the computation is not calculated.
    /// </summary>
    /// <param name="theSurface">
    /// - bounding surface of the region;
    /// </param>
    /// <param name="theLocation">
    /// - surface location;
    /// </param>
    /// <param name="out]">
    /// theOutMass - mass (volume) of region;
    /// </param>
    /// <param name="out]">
    /// theOutGravityCenter - garvity center of region;
    /// </param>
    /// <param name="out]">
    /// theOutInertia - matrix of inertia;
    /// </param>
    void Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia);
    /// <summary>
    /// Computes the global properties of a region of 3D space which can be
    /// delimited by the surface and point or surface and plane. Surface can be closed.
    /// The method is quick and its precision is enough for many cases of analytical surfaces.
    /// Non-adaptive 2D Gauss integration with predefined numbers of Gauss points is used.
    /// Numbers of points depend on types of surfaces and curves.
    /// Error of the computation is not calculated.
    /// </summary>
    /// <param name="theSurface">
    /// - bounding surface of the region;
    /// </param>
    /// <param name="theDomain">
    /// - surface boundings;
    /// </param>
    /// <param name="theLocation">
    /// - location of the point or the plane;
    /// </param>
    /// <param name="theCoeff">
    /// - plane coefficients;
    /// </param>
    /// <param name="theIsByPoint">
    /// - flag of restricition (point/plane);
    /// </param>
    /// <param name="out]">
    /// theOutMass - mass (volume) of region;
    /// </param>
    /// <param name="out]">
    /// theOutGravityCenter - garvity center of region;
    /// </param>
    /// <param name="out]">
    /// theOutInertia - matrix of inertia;
    /// </param>
    void Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theCoeff, bool theIsByPoint, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia);
    /// <summary>
    /// Computes the global properties of a surface. Surface can be closed.
    /// The method is quick and its precision is enough for many cases of analytical surfaces.
    /// Non-adaptive 2D Gauss integration with predefined numbers of Gauss points
    /// is used. Numbers of points depend on types of surfaces and curves.
    /// Error of the computation is not calculated.
    /// </summary>
    /// <param name="theSurface">
    /// - bounding surface of the region;
    /// </param>
    /// <param name="theDomain">
    /// - surface boundings;
    /// </param>
    /// <param name="theLocation">
    /// - surface location;
    /// </param>
    /// <param name="out]">
    /// theOutMass - mass (volume) of region;
    /// </param>
    /// <param name="out]">
    /// theOutGravityCenter - garvity center of region;
    /// </param>
    /// <param name="out]">
    /// theOutInertia - matrix of inertia;
    /// </param>
    void Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia);
    /// <summary>
    /// Computes the global properties of the region of 3D space which can be
    /// delimited by the surface and point or surface and plane.
    /// Adaptive 2D Gauss integration is used.
    /// If Epsilon more than 0.001 then algorithm performs non-adaptive integration.
    /// </summary>
    /// <param name="theSurface">
    /// - bounding surface of the region;
    /// </param>
    /// <param name="theDomain">
    /// - surface boundings;
    /// </param>
    /// <param name="theLocation">
    /// - location of the point or the plane;
    /// </param>
    /// <param name="theEps">
    /// - maximal relative error of computed mass (volume) for face;
    /// </param>
    /// <param name="theCoeff">
    /// - plane coefficients;
    /// </param>
    /// <param name="theIsByPoint">
    /// - flag of restricition (point/plane);
    /// </param>
    /// <param name="out]">
    /// theOutMass - mass (volume) of region;
    /// </param>
    /// <param name="out]">
    /// theOutGravityCenter - garvity center of region;
    /// </param>
    /// <param name="out]">
    /// theOutInertia - matrix of inertia;
    /// </param>
    /// <returns>
    /// value of error which is calculated as
    /// Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// </returns>
    double Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theEps, double theCoeff, bool theByPoint, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia);
    /// <summary>
    /// Computes the global properties of the face. Adaptive 2D Gauss integration is used.
    /// If Epsilon more than 0.001 then algorithm performs non-adaptive integration.
    /// </summary>
    /// <param name="theSurface">
    /// - bounding surface of the region;
    /// </param>
    /// <param name="theDomain">
    /// - surface boundings;
    /// </param>
    /// <param name="theLocation">
    /// - surface location;
    /// </param>
    /// <param name="theEps">
    /// - maximal relative error of computed mass (square) for face;
    /// </param>
    /// <param name="out]">
    /// theOutMass - mass (volume) of region;
    /// </param>
    /// <param name="out]">
    /// theOutGravityCenter - garvity center of region;
    /// </param>
    /// <param name="out]">
    /// theOutInertia - matrix of inertia;
    /// </param>
    /// <returns>
    /// value of error which is calculated as
    /// Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// </returns>
    double Compute(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theEps, double% theOutMass, Macad::Occt::Pnt% theOutGravityCenter, Macad::Occt::Mat% theOutInertia);
}; // class BRepGProp_Gauss

//---------------------------------------------------------------------
//  Class  BRepGProp_MeshCinert
//---------------------------------------------------------------------
/// <summary>
/// Computes the  global properties of
/// of polylines  represented by set of points.
/// This class is used for computation of global
/// properties of edge, which has no exact geometry
/// (3d or 2d curve), but has any of allowed
/// polygons.
/// 
/// </summary>
public ref class BRepGProp_MeshCinert sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_MeshCinert_h
public:
    Include_BRepGProp_MeshCinert_h
#endif

public:
    BRepGProp_MeshCinert(::BRepGProp_MeshCinert* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    BRepGProp_MeshCinert(::BRepGProp_MeshCinert& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::BRepGProp_MeshCinert* NativeInstance
    {
        ::BRepGProp_MeshCinert* get()
        {
            return static_cast<::BRepGProp_MeshCinert*>(_NativeInstance);
        }
    }

public:
    BRepGProp_MeshCinert();
    void SetLocation(Macad::Occt::Pnt CLocation);
    /// <summary>
    /// Computes the  global properties of
    /// of polylines  represented by set of points.
    /// </summary>
    void Perform(Macad::Occt::TColgp_Array1OfPnt^ theNodes);
    /// <summary>
    /// Prepare set of 3d points on base of any available edge polygons:
    /// 3D polygon, polygon on triangulation, 2d polygon on surface
    /// If edge has no polygons, array thePolyg is left unchanged
    /// </summary>
    static void PreparePolygon(Macad::Occt::TopoDS_Edge^ theE, Macad::Occt::TColgp_HArray1OfPnt^ thePolyg);
}; // class BRepGProp_MeshCinert

//---------------------------------------------------------------------
//  Class  BRepGProp_MeshProps
//---------------------------------------------------------------------
/// <summary>
/// Computes the global properties of a surface mesh. The mesh can be
/// interpreted as just a surface or as a piece of volume limited by this surface.
/// </summary>
public ref class BRepGProp_MeshProps sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_MeshProps_h
public:
    Include_BRepGProp_MeshProps_h
#endif

public:
    BRepGProp_MeshProps(::BRepGProp_MeshProps* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    BRepGProp_MeshProps(::BRepGProp_MeshProps& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::BRepGProp_MeshProps* NativeInstance
    {
        ::BRepGProp_MeshProps* get()
        {
            return static_cast<::BRepGProp_MeshProps*>(_NativeInstance);
        }
    }

public:
    //---------------------------------------------------------------------
    //  Enum  BRepGProp_MeshObjType
    //---------------------------------------------------------------------
    /// <summary>
    /// Describes types of geometric objects.
    /// - Vinert is 3D closed region of space delimited with
    /// Point and surface mesh;
    /// - Sinert is surface mesh in 3D space.
    /// </summary>
    enum class BRepGProp_MeshObjType
    {
        Vinert = 0,
        Sinert = 1
    }; // enum  class BRepGProp_MeshObjType

    /// <summary>
    /// Constructor takes the type of object.
    /// </summary>
    BRepGProp_MeshProps(Macad::Occt::BRepGProp_MeshProps::BRepGProp_MeshObjType theType);
    /// <summary>
    /// Sets the point relative which the calculation is to be done
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theLocation);
    /* Method skipped due to unknown mapping: void Perform(Poly_Triangulation theMesh, TopLoc_Location theLoc, TopAbs_Orientation theOri, ) */
    /* Method skipped due to unknown mapping: void Perform(Poly_Triangulation theMesh, TopAbs_Orientation theOri, ) */
    /// <summary>
    /// Computes the global properties of triangle {p1, p2, p3} relatively
    /// point Apex
    /// If isVolume = true, volume properties are calculated
    /// otherwise - surface ones
    /// </summary>
    static void CalculateProps(Macad::Occt::Pnt p1, Macad::Occt::Pnt p2, Macad::Occt::Pnt p3, Macad::Occt::Pnt Apex, bool isVolume, double% GProps, int NbGaussPoints, double GaussPnts);
    /// <summary>
    /// Get type of mesh object
    /// </summary>
    Macad::Occt::BRepGProp_MeshProps::BRepGProp_MeshObjType GetMeshObjType();
}; // class BRepGProp_MeshProps

//---------------------------------------------------------------------
//  Class  BRepGProp_Sinert
//---------------------------------------------------------------------
/// <summary>
/// Computes the global properties of a face in 3D space.
/// The face 's requirements to evaluate the global properties
/// are defined in the template FaceTool from package GProp.
/// </summary>
public ref class BRepGProp_Sinert sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_Sinert_h
public:
    Include_BRepGProp_Sinert_h
#endif

public:
    BRepGProp_Sinert(::BRepGProp_Sinert* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    BRepGProp_Sinert(::BRepGProp_Sinert& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::BRepGProp_Sinert* NativeInstance
    {
        ::BRepGProp_Sinert* get()
        {
            return static_cast<::BRepGProp_Sinert*>(_NativeInstance);
        }
    }

public:
    BRepGProp_Sinert();
    BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt SLocation);
    /// <summary>
    /// Builds a Sinert to evaluate the global properties of
    /// the face <S>. If isNaturalRestriction is true the domain of S is defined
    /// with the natural bounds, else it defined with an iterator
    /// of Edge from TopoDS (see DomainTool from GProp)
    /// </summary>
    BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt SLocation);
    BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt SLocation, double Eps);
    BRepGProp_Sinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt SLocation, double Eps);
    void SetLocation(Macad::Occt::Pnt SLocation);
    void Perform(Macad::Occt::BRepGProp_Face^ S);
    void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D);
    double Perform(Macad::Occt::BRepGProp_Face^ S, double Eps);
    double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, double Eps);
    /// <summary>
    /// If previously used method contained Eps parameter
    /// get actual relative error of the computation, else return  1.0.
    /// </summary>
    double GetEpsilon();
}; // class BRepGProp_Sinert

//---------------------------------------------------------------------
//  Class  BRepGProp_Vinert
//---------------------------------------------------------------------
/// <summary>
/// Computes the global properties of a geometric solid
/// (3D closed region of space) delimited with :
/// . a surface
/// . a point and a surface
/// . a plane and a surface
/// 
/// The surface can be :
/// . a surface limited with its parametric values U-V,
/// . a surface limited in U-V space with its curves of restriction,
/// 
/// The surface 's requirements to evaluate the global properties
/// are defined in the template SurfaceTool from package GProp.
/// </summary>
public ref class BRepGProp_Vinert sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_Vinert_h
public:
    Include_BRepGProp_Vinert_h
#endif

public:
    BRepGProp_Vinert(::BRepGProp_Vinert* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    BRepGProp_Vinert(::BRepGProp_Vinert& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::BRepGProp_Vinert* NativeInstance
    {
        ::BRepGProp_Vinert* get()
        {
            return static_cast<::BRepGProp_Vinert*>(_NativeInstance);
        }
    }

public:
    BRepGProp_Vinert();
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface <S> and the point VLocation. S can be closed
    /// The method is quick and its precision is enough for many cases of analytical
    /// surfaces.
    /// Non-adaptive 2D Gauss integration with predefined numbers of Gauss points
    /// is used. Numbers of points depend on types of surfaces and  curves.
    /// Error of the computation is not calculated.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt VLocation);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface <S> and the point VLocation. S can be closed
    /// Adaptive 2D Gauss integration is used.
    /// Parameter Eps sets maximal relative error of computed mass (volume) for face.
    /// Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt VLocation, double Eps);
    /// <summary>
    /// Computes the global properties of the region of 3D space
    /// delimited with the surface <S> and the point VLocation.
    /// The method is quick and its precision is enough for many cases of analytical
    /// surfaces.
    /// Non-adaptive 2D Gauss integration with predefined numbers of Gauss points
    /// is used. Numbers of points depend on types of surfaces and  curves.
    /// Error of the computation is not calculated.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation);
    /// <summary>
    /// Computes the global properties of the region of 3D space
    /// delimited with the surface <S> and the point VLocation.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter Eps sets maximal relative error of computed mass (volume) for face.
    /// Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// WARNING: if Eps > 0.001 algorithm performs non-adaptive integration.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation, double Eps);
    /// <summary>
    /// Computes the global properties of the region of 3D space
    /// delimited with the surface <S> and the plane Pln.
    /// The method is quick and its precision is enough for many cases of analytical
    /// surfaces.
    /// Non-adaptive 2D Gauss integration with predefined numbers of Gauss points
    /// is used. Numbers of points depend on types of surfaces and  curves.
    /// Error of the computation is not calculated.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation);
    /// <summary>
    /// Computes the global properties of the region of 3D space
    /// delimited with the surface <S> and the plane Pln.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter Eps sets maximal relative error of computed mass (volume) for face.
    /// Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// WARNING: if Eps > 0.001 algorithm performs non-adaptive integration.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation, double Eps);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface <S> and the point VLocation. S can be closed
    /// The method is quick and its precision is enough for many cases of analytical
    /// surfaces.
    /// Non-adaptive 2D Gauss integration with predefined numbers of Gauss points
    /// is used. Numbers of points depend on types of surfaces and  curves.
    /// Error of the computation is not calculated.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt VLocation);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface <S> and the point VLocation. S can be closed
    /// Adaptive 2D Gauss integration is used.
    /// Parameter Eps sets maximal relative error of computed mass (volume) for face.
    /// Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt VLocation, double Eps);
    /// <summary>
    /// Computes the global properties of the region of 3D space
    /// delimited with the surface <S> and the point VLocation.
    /// The method is quick and its precision is enough for many cases of analytical
    /// surfaces.
    /// Non-adaptive 2D Gauss integration with predefined numbers of Gauss points
    /// is used. Numbers of points depend on types of surfaces and  curves.
    /// Error of the computation is not calculated.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation);
    /// <summary>
    /// Computes the global properties of the region of 3D space
    /// delimited with the surface <S> and the point VLocation.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter Eps sets maximal relative error of computed mass (volume) for face.
    /// Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// WARNING: if Eps > 0.001 algorithm performs non-adaptive integration.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O, Macad::Occt::Pnt VLocation, double Eps);
    /// <summary>
    /// Computes the global properties of the region of 3D space
    /// delimited with the surface <S> and the plane Pln.
    /// The method is quick and its precision is enough for many cases of analytical
    /// surfaces.
    /// Non-adaptive 2D Gauss integration with predefined numbers of Gauss points
    /// is used. Numbers of points depend on types of surfaces and  curves.
    /// Error of the computation is not calculated.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation);
    /// <summary>
    /// Computes the global properties of the region of 3D space
    /// delimited with the surface <S> and the plane Pln.
    /// Adaptive 2D Gauss integration is used.
    /// Parameter Eps sets maximal relative error of computed mass (volume) for face.
    /// Error is calculated as Abs((M(i+1)-M(i))/M(i+1)), M(i+1) and M(i) are values
    /// for two successive steps of adaptive integration.
    /// WARNING: if Eps > 0.001 algorithm performs non-adaptive integration.
    /// </summary>
    BRepGProp_Vinert(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl, Macad::Occt::Pnt VLocation, double Eps);
    void SetLocation(Macad::Occt::Pnt VLocation);
    void Perform(Macad::Occt::BRepGProp_Face^ S);
    double Perform(Macad::Occt::BRepGProp_Face^ S, double Eps);
    void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O);
    double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pnt O, double Eps);
    void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl);
    double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::Pln Pl, double Eps);
    void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D);
    double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, double Eps);
    void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O);
    double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pnt O, double Eps);
    void Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl);
    double Perform(Macad::Occt::BRepGProp_Face^ S, Macad::Occt::BRepGProp_Domain^ D, Macad::Occt::Pln Pl, double Eps);
    /// <summary>
    /// If previously used methods containe Eps parameter
    /// gets actual relative error of the computation, else returns  1.0.
    /// </summary>
    double GetEpsilon();
}; // class BRepGProp_Vinert

//---------------------------------------------------------------------
//  Class  BRepGProp_VinertGK
//---------------------------------------------------------------------
/// <summary>
/// Computes the global properties of a geometric solid
/// (3D closed region of space) delimited with :
/// -  a point and a surface
/// -  a plane and a surface
/// 
/// The surface can be :
/// -  a surface limited with its parametric values U-V,
/// (naturally restricted)
/// -  a surface limited in U-V space with its boundary
/// curves.
/// 
/// The surface's requirements to evaluate the global
/// properties are defined in the template FaceTool class from
/// the package GProp.
/// 
/// The adaptive 2D algorithm of Gauss-Kronrod integration of
/// double integral is used.
/// 
/// The inner integral is computed along U parameter of
/// surface. The integrand function is encapsulated in the
/// support class UFunction that is defined below.
/// 
/// The outer integral is computed along T parameter of a
/// bounding curve. The integrand function is encapsulated in
/// the support class TFunction that is defined below.
/// </summary>
public ref class BRepGProp_VinertGK sealed
    : public Macad::Occt::GProp_GProps
{

#ifdef Include_BRepGProp_VinertGK_h
public:
    Include_BRepGProp_VinertGK_h
#endif

public:
    BRepGProp_VinertGK(::BRepGProp_VinertGK* nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    BRepGProp_VinertGK(::BRepGProp_VinertGK& nativeInstance)
        : Macad::Occt::GProp_GProps( nativeInstance )
    {}

    property ::BRepGProp_VinertGK* NativeInstance
    {
        ::BRepGProp_VinertGK* get()
        {
            return static_cast<::BRepGProp_VinertGK*>(_NativeInstance);
        }
    }

public:
    /// <summary>
    /// Empty constructor.
    /// </summary>
    BRepGProp_VinertGK();
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the point VLocation.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the point VLocation.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the point VLocation.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation, double theTolerance);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the point VLocation.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt theLocation);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the point VLocation. The inertia is computed with
    /// respect to thePoint.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the point VLocation. The inertia is computed with
    /// respect to thePoint.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the point VLocation. The inertia is computed with
    /// respect to thePoint.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the point VLocation. The inertia is computed with
    /// respect to thePoint.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the point VLocation.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the point VLocation.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the point VLocation.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation, double theTolerance);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the point VLocation.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt theLocation);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the point VLocation. The inertia is computed with
    /// respect to thePoint.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the point VLocation. The inertia is computed with
    /// respect to thePoint.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the point VLocation. The inertia is computed with
    /// respect to thePoint.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation, double theTolerance);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the point VLocation. The inertia is computed with
    /// respect to thePoint.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, Macad::Occt::Pnt theLocation);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the plane.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the plane.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the plane.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the naturally restricted surface
    /// and the plane.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the plane.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the plane.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the plane.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation, double theTolerance);
    /// <summary>
    /// Constructor. Computes the global properties of a region of
    /// 3D space delimited with the surface bounded by the domain
    /// and the plane.
    /// </summary>
    BRepGProp_VinertGK(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, Macad::Occt::Pnt theLocation);
    /// <summary>
    /// Sets the vertex that delimit 3D closed region of space.
    /// </summary>
    void SetLocation(Macad::Occt::Pnt theLocation);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// point VLocation.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// point VLocation.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// point VLocation.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, double theTolerance);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// point VLocation.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// point VLocation. The inertia is computed with respect to
    /// thePoint.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// point VLocation. The inertia is computed with respect to
    /// thePoint.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// point VLocation. The inertia is computed with respect to
    /// thePoint.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint, double theTolerance);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// point VLocation. The inertia is computed with respect to
    /// thePoint.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pnt thePoint);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// point VLocation.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// point VLocation.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// point VLocation.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, double theTolerance);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// point VLocation.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// point VLocation. The inertia is computed with respect to
    /// thePoint.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// point VLocation. The inertia is computed with respect to
    /// thePoint.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// point VLocation. The inertia is computed with respect to
    /// thePoint.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint, double theTolerance);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// point VLocation. The inertia is computed with respect to
    /// thePoint.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pnt thePoint);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// plane.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// plane.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// plane.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane, double theTolerance);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the naturally restricted surface and the
    /// plane.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::Pln thePlane);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// plane.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag, bool theIFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// plane.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance, bool theCGFlag);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// plane.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane, double theTolerance);
    /// <summary>
    /// Computes the global properties of a region of 3D space
    /// delimited with the surface bounded by the domain and the
    /// plane.
    /// </summary>
    double Perform(Macad::Occt::BRepGProp_Face^ theSurface, Macad::Occt::BRepGProp_Domain^ theDomain, Macad::Occt::Pln thePlane);
    /// <summary>
    /// Returns the relative reached computation error.
    /// </summary>
    double GetErrorReached();
}; // class BRepGProp_VinertGK

}; // namespace Occt
}; // namespace Macad
