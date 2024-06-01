using System;
using Macad.Occt;

namespace Macad.Core;

public static class BndBoxExtensions
{
    public static Pnt Center(this Bnd_Box box)
    {
        double xMin = 0, yMin = 0, zMin = 0, xMax = 0, yMax = 0, zMax = 0;
        box.Get(ref xMin, ref yMin, ref zMin, ref xMax, ref yMax, ref zMax );
        return new Pnt( 
            xMin + (xMax - xMin) / 2, 
            yMin + (yMax - yMin) / 2, 
            zMin + (zMax - zMin) / 2 );
    }

    //--------------------------------------------------------------------------------------------------

    public static (double X, double Y, double Z) Extents(this Bnd_Box box)
    {
        double xMin = 0, yMin = 0, zMin = 0, xMax = 0, yMax = 0, zMax = 0;
        box.Get(ref xMin, ref yMin, ref zMin, ref xMax, ref yMax, ref zMax );

        return (Math.Abs(xMax - xMin), Math.Abs(yMax - yMin), Math.Abs(zMax - zMin));
    }

    //--------------------------------------------------------------------------------------------------

    public static (double minX, double minY, double minZ, double maxX, double maxY, double maxZ) MinMax(this Bnd_Box box)
    {
        double xMin = 0, yMin = 0, zMin = 0, xMax = 0, yMax = 0, zMax = 0;
        box.Get(ref xMin, ref yMin, ref zMin, ref xMax, ref yMax, ref zMax );

        return (xMin, yMin, zMin, xMax, yMax, zMax);
    }

    //--------------------------------------------------------------------------------------------------

    public static Pnt2d Center(this Bnd_Box2d box)
    {
        double xMin = 0, yMin = 0, xMax = 0, yMax = 0;
        box.Get(ref xMin, ref yMin, ref xMax, ref yMax );
        return new Pnt2d( 
            xMin + (xMax - xMin) / 2, 
            yMin + (yMax - yMin) / 2 );
    }

    //--------------------------------------------------------------------------------------------------

    public static (double X, double Y) Extents(this Bnd_Box2d box)
    {
        double xMin = 0, yMin = 0, xMax = 0, yMax = 0;
        box.Get(ref xMin, ref yMin, ref xMax, ref yMax );

        return (Math.Abs(xMax - xMin), Math.Abs(yMax - yMin));
    }

    //--------------------------------------------------------------------------------------------------

    public static (double minX, double minY, double maxX, double maxY) MinMax(this Bnd_Box2d box)
    {
        double xMin = 0, yMin = 0, xMax = 0, yMax = 0;
        box.Get(ref xMin, ref yMin, ref xMax, ref yMax );

        return (xMin, yMin, xMax, yMax);
    }

    //--------------------------------------------------------------------------------------------------

}