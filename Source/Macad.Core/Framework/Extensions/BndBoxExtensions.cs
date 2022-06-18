using System;
using Macad.Occt;

namespace Macad.Core
{
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

    }
}