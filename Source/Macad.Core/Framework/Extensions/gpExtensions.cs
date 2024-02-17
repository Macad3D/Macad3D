using System;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core;

public static class gpExtensions
{
    #region Pnt

    public static Pnt Rounded(this Pnt pnt)
    {
        return new Pnt(pnt.X.Round(), pnt.Y.Round(), pnt.Z.Round());
    }
        
    //--------------------------------------------------------------------------------------------------

    public static void Swap(this ref Pnt value, ref Pnt other)
    {
        Pnt temp = value;
        value = other;
        other = temp;
    }

    //--------------------------------------------------------------------------------------------------

    public static Pnt Scaled(this Pnt pnt, double scale)
    {
        return new Pnt(pnt.X * scale, pnt.Y * scale, pnt.Z * scale);
    }
        
    //--------------------------------------------------------------------------------------------------

    #endregion
        
    #region Pnt2d

    public static Pnt2d Rounded(this Pnt2d pnt)
    {
        return new (pnt.X.Round(), pnt.Y.Round());
    }

    //--------------------------------------------------------------------------------------------------

    public static void Swap(this ref Pnt2d value, ref Pnt2d other)
    {
        Pnt2d temp = value;
        value = other;
        other = temp;
    }

    //--------------------------------------------------------------------------------------------------

    public static Pnt2d Lerped(this Pnt2d value, Pnt2d other, double amount)
    {
        return new Pnt2d(value.X.Lerp(other.X, amount), value.Y.Lerp(other.Y, amount));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Vec2d

    public static Vec2d Lerped(this Vec2d value, Vec2d other, double amount)
    {
        return new Vec2d(value.X.Lerp(other.X, amount), value.Y.Lerp(other.Y, amount));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Dir

    public static Dir Slerped(this Dir value, Dir other, double amount)
    {
        double dotProduct = value.Dot(other);

        // Determine the direction of the shortest rotation between the vectors.
        if (dotProduct < 0)
        {
            // Invert one of the vectors to ensure the angle is less than 90 degrees.
            other.Reverse();
            dotProduct = -dotProduct;
        }

        // Calculate the angle of rotation between the two vectors.
        double angle = Math.Acos(dotProduct);

        // If the angle is very close to zero, the vectors are almost parallel, and no interpolation is needed.
        if (Math.Abs(angle) < 0.000001f)
        {
            return value;
        }

        // Interpolate the two vectors using Slerp formula.
        double invSinAngle = 1f / Math.Sin(angle);
        double factorA = Math.Sin((1f - amount) * angle) * invSinAngle;
        double factorB = Math.Sin(amount * angle) * invSinAngle;

        return new Dir(value.ToVec(factorA) + other.ToVec(factorB));
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Pln

    public static Quaternion Rotation(this Pln plane)
    {
        var mat = new Mat(
            plane.XAxis.Direction.Coord,
            plane.YAxis.Direction.Coord,
            plane.Axis.Direction.Coord);
        return new Quaternion(mat);
    }

    //--------------------------------------------------------------------------------------------------

    public static bool IsEqual(this Pln pln1, Pln pln2)
    {
        return pln1.Location.IsEqual(pln2.Location, Double.Epsilon)
               && pln1.Rotation().IsEqual(pln2.Rotation());
    }

    //--------------------------------------------------------------------------------------------------

    public static Pnt2d Parameters(this Pln pln, Pnt pnt)
    {
        double u = 0, v = 0;
        ElSLib.Parameters(pln, pnt, ref u, ref v);
        return new Pnt2d(u, v);
    }

    //--------------------------------------------------------------------------------------------------
        
    public static Pnt Value(this Pln pln, Pnt2d uv)
    {
        return ElSLib.Value(uv.X, uv.Y, pln);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Quaternion

    public static Ax3 ToAx3(this Quaternion rotation, Pnt location)
    {
        return new Ax3(location,
                       rotation.Multiply(new Vec(0, 0, 1)).ToDir(),
                       rotation.Multiply(new Vec(1, 0, 0)).ToDir());
    }

    //--------------------------------------------------------------------------------------------------

    public static (double yaw, double pitch, double roll) ToEuler(this Quaternion rotation)
    {
        double y = 0, p = 0, r = 0;
        rotation.GetEulerAngles(ref y, ref p, ref r);
        return (y, p, r);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Ax22d

    public static int Sense(this Ax22d ax)
    {
        return ax.YAxis.Angle(ax.XAxis) > 0 ? 1 : -1;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}