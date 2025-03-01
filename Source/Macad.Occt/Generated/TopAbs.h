// Generated wrapper code for package TopAbs

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  TopAbs_Orientation
//---------------------------------------------------------------------
/// <summary>
/// Identifies the orientation of a topological shape.
/// Orientation can represent a relation between two
/// entities, or it can apply to a shape in its own right.
/// When used to describe a relation between two
/// shapes, orientation allows you to use the underlying
/// entity in either direction. For example on a curve
/// which is oriented FORWARD (say from left to right)
/// you can have both a FORWARD and a REVERSED
/// edge. The FORWARD edge will be oriented from
/// left to right, and the REVERSED edge from right to
/// left. In this way, you share the underlying entity. In
/// other words, two faces of a cube can share an
/// edge, and can also be used to build compound shapes.
/// For each case in which an element is used as the
/// boundary of a geometric domain of a higher
/// dimension, this element defines two local regions of
/// which one is arbitrarily considered as the default
/// region. A change in orientation implies a switch of
/// default region. This allows you to apply changes of
/// orientation to the shape as a whole.
/// </summary>
public enum class TopAbs_Orientation
{
    FORWARD = 0,
    REVERSED = 1,
    INTERNAL = 2,
    EXTERNAL = 3
}; // enum  class TopAbs_Orientation

//---------------------------------------------------------------------
//  Enum  TopAbs_ShapeEnum
//---------------------------------------------------------------------
/// <summary>
/// Identifies various topological shapes. This
/// enumeration allows you to use dynamic typing of shapes.
/// The values are listed in order of complexity, from the
/// most complex to the most simple i.e.
/// COMPOUND > COMPSOLID > SOLID > .... > VERTEX > SHAPE.
/// Any shape can contain simpler shapes in its definition.
/// Abstract topological data structure describes a basic
/// entity, the shape (present in this enumeration as the
/// SHAPE value), which can be divided into the following
/// component topologies:
/// - COMPOUND: A group of any of the shapes below.
/// - COMPSOLID: A set of solids connected by their
/// faces. This expands the notions of WIRE and SHELL to solids.
/// - SOLID: A part of 3D space bounded by shells.
/// - SHELL: A set of faces connected by some of the
/// edges of their wire boundaries. A shell can be open or closed.
/// - FACE: Part of a plane (in 2D geometry) or a surface
/// (in 3D geometry) bounded by a closed wire. Its
/// geometry is constrained (trimmed) by contours.
/// - WIRE: A sequence of edges connected by their
/// vertices. It can be open or closed depending on
/// whether the edges are linked or not.
/// - EDGE: A single dimensional shape corresponding
/// to a curve, and bound by a vertex at each extremity.
/// - VERTEX: A zero-dimensional shape corresponding to a point in geometry.
/// </summary>
public enum class TopAbs_ShapeEnum
{
    COMPOUND = 0,
    COMPSOLID = 1,
    SOLID = 2,
    SHELL = 3,
    FACE = 4,
    WIRE = 5,
    EDGE = 6,
    VERTEX = 7,
    SHAPE = 8
}; // enum  class TopAbs_ShapeEnum

//---------------------------------------------------------------------
//  Enum  TopAbs_State
//---------------------------------------------------------------------
/// <summary>
/// Identifies the position of a vertex or a set of
/// vertices relative to a region of a shape.
/// The figure shown above illustrates the states of
/// vertices found in various parts of the edge relative
/// to the face which it intersects.
/// </summary>
public enum class TopAbs_State
{
    INSIDE = 0,
    OUTSIDE = 1,
    ON = 2,
    UNKNOWN = 3
}; // enum  class TopAbs_State

//---------------------------------------------------------------------
//  Class  TopAbs
//---------------------------------------------------------------------
/// <summary>
/// This package gives resources for Topology oriented
/// applications such as : Topological Data Structure,
/// Topological Algorithms.
/// 
/// It contains :
/// 
/// * The ShapeEnum   enumeration  to  describe  the
/// different topological shapes.
/// 
/// * The  Orientation  enumeration to  describe the
/// orientation of a topological shape.
/// 
/// * The  State    enumeration  to  describes  the
/// position of a point relative to a Shape.
/// 
/// * Methods to manage the enumerations.
/// </summary>
public ref class TopAbs sealed
    : public Macad::Occt::BaseClass<::TopAbs>
{

#ifdef Include_TopAbs_h
public:
    Include_TopAbs_h
#endif

public:
    TopAbs(::TopAbs* nativeInstance)
        : Macad::Occt::BaseClass<::TopAbs>( nativeInstance, true )
    {}

    TopAbs(::TopAbs& nativeInstance)
        : Macad::Occt::BaseClass<::TopAbs>( &nativeInstance, false )
    {}

    property ::TopAbs* NativeInstance
    {
        ::TopAbs* get()
        {
            return static_cast<::TopAbs*>(_NativeInstance);
        }
    }

public:
    TopAbs();
    /// <summary>
    /// Compose  the Orientation    <Or1>  and  <Or2>.    This
    /// composition is not symmetric (if  you switch <Or1> and
    /// <Or2> the result  is different). It assumes that <Or1>
    /// is the Orientation of a Shape S1 containing a Shape S2
    /// of Orientation   Or2.  The result    is the  cumulated
    /// orientation of S2 in S1.  The composition law is :
    /// 
    /// \ Or2     FORWARD  REVERSED INTERNAL EXTERNAL
    /// Or1       -------------------------------------
    /// FORWARD   | FORWARD  REVERSED INTERNAL EXTERNAL
    /// |
    /// REVERSED  | REVERSED FORWARD  INTERNAL EXTERNAL
    /// |
    /// INTERNAL  | INTERNAL INTERNAL INTERNAL INTERNAL
    /// |
    /// EXTERNAL  | EXTERNAL EXTERNAL EXTERNAL EXTERNAL
    /// Note: The top corner in the table is the most important
    /// for the purposes of Open CASCADE topology and shape sharing.
    /// </summary>
    static Macad::Occt::TopAbs_Orientation Compose(Macad::Occt::TopAbs_Orientation Or1, Macad::Occt::TopAbs_Orientation Or2);
    /// <summary>
    /// xchanges the interior/exterior status of the two
    /// sides. This is what happens when the sense of
    /// direction is reversed. The following rules apply:
    /// 
    /// FORWARD          REVERSED
    /// REVERSED         FORWARD
    /// INTERNAL         INTERNAL
    /// EXTERNAL         EXTERNAL
    /// 
    /// Reverse exchange the material sides.
    /// </summary>
    static Macad::Occt::TopAbs_Orientation Reverse(Macad::Occt::TopAbs_Orientation Or);
    /// <summary>
    /// Reverses the interior/exterior status of each side of
    /// the object. So, to take the complement of an object
    /// means to reverse the interior/exterior status of its
    /// boundary, i.e. inside becomes outside.
    /// The method returns the complementary orientation,
    /// following the rules in the table below:
    /// FORWARD          REVERSED
    /// REVERSED         FORWARD
    /// INTERNAL         EXTERNAL
    /// EXTERNAL         INTERNAL
    /// 
    /// Complement  complements   the  material  side.  Inside
    /// becomes outside.
    /// </summary>
    static Macad::Occt::TopAbs_Orientation Complement(Macad::Occt::TopAbs_Orientation Or);
    /// <summary>
    /// Prints the name of Shape type as a String on the Stream.
    /// </summary>
    static System::IO::TextWriter^ Print(Macad::Occt::TopAbs_ShapeEnum theShapeType, System::IO::TextWriter^ theStream);
    /// <summary>
    /// Prints the name of the Orientation as a String on the Stream.
    /// </summary>
    static System::IO::TextWriter^ Print(Macad::Occt::TopAbs_Orientation theOrientation, System::IO::TextWriter^ theStream);
    /// <summary>
    /// Prints the name of the State <St> as a String on
    /// the Stream <S> and returns <S>.
    /// </summary>
    static System::IO::TextWriter^ Print(Macad::Occt::TopAbs_State St, System::IO::TextWriter^ S);
    /// <summary>
    /// Returns the string name for a given shape type.
    /// </summary>
    /// <param name="theType">
    /// shape type
    /// </param>
    /// <returns>
    /// string identifier from the list COMPOUND, COMPSOLID, SOLID, SHELL, FACE, WIRE, EDGE,
    /// VERTEX, SHAPE
    /// </returns>
    static System::String^ ShapeTypeToString(Macad::Occt::TopAbs_ShapeEnum theType);
    /// <summary>
    /// Returns the shape type from the given string identifier (using case-insensitive comparison).
    /// </summary>
    /// <param name="theTypeString">
    /// string identifier
    /// </param>
    /// <returns>
    /// shape type or TopAbs_SHAPE if string identifier is invalid
    /// </returns>
    static Macad::Occt::TopAbs_ShapeEnum ShapeTypeFromString(System::String^ theTypeString);
    /// <summary>
    /// Determines the shape type from the given string identifier (using case-insensitive
    /// comparison).
    /// </summary>
    /// <param name="theTypeString">
    /// string identifier
    /// </param>
    /// <param name="theType">
    /// detected shape type
    /// </param>
    /// <returns>
    /// TRUE if string identifier is known
    /// </returns>
    static bool ShapeTypeFromString(System::String^ theTypeString, Macad::Occt::TopAbs_ShapeEnum% theType);
    /// <summary>
    /// Returns the string name for a given shape orientation.
    /// </summary>
    /// <param name="theOrientation">
    /// shape orientation
    /// </param>
    /// <returns>
    /// string identifier from the list FORWARD, REVERSED, INTERNAL, EXTERNAL
    /// </returns>
    static System::String^ ShapeOrientationToString(Macad::Occt::TopAbs_Orientation theOrientation);
    /// <summary>
    /// Returns the shape orientation from the given string identifier (using case-insensitive
    /// comparison).
    /// </summary>
    /// <param name="theOrientationString">
    /// string identifier
    /// </param>
    /// <returns>
    /// shape orientation or TopAbs_FORWARD if string identifier is invalid
    /// </returns>
    static Macad::Occt::TopAbs_Orientation ShapeOrientationFromString(System::String^ theOrientationString);
    /// <summary>
    /// Determines the shape orientation from the given string identifier (using case-insensitive
    /// comparison).
    /// </summary>
    /// <param name="theOrientationString">
    /// string identifier
    /// </param>
    /// <param name="theOrientation">
    /// detected shape orientation
    /// </param>
    /// <returns>
    /// TRUE if string identifier is known
    /// </returns>
    static bool ShapeOrientationFromString(System::String^ theOrientationString, Macad::Occt::TopAbs_Orientation% theOrientation);
}; // class TopAbs

}; // namespace Occt
}; // namespace Macad
