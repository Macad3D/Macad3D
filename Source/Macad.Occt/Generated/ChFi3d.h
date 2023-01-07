// Generated wrapper code for package ChFi3d

#pragma once


namespace Macad
{
namespace Occt
{
//---------------------------------------------------------------------
//  Enum  ChFi3d_FilletShape
//---------------------------------------------------------------------
/// <summary>
/// Lists the types of fillet shapes. These include the following:
/// -   ChFi3d_Rational (default value), which is the
/// standard NURBS representation of circles,
/// -   ChFi3d_QuasiAngular, which is a NURBS
/// representation of circles where the parameters
/// match those of the circle,
/// -   ChFi3d_Polynomial, which corresponds to a
/// polynomial approximation of circles. This type
/// facilitates the implementation of the construction algorithm.
/// </summary>
public enum class ChFi3d_FilletShape
{
    Rational = 0,
    QuasiAngular = 1,
    Polynomial = 2
}; // enum  class ChFi3d_FilletShape

}; // namespace Occt
}; // namespace Macad
