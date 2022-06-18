using System.Collections.Generic;
using Macad.Occt;

namespace Macad.Core.Geom;

public static class BoundingBoxUtils
{
    public static List<Pnt> PlaneIntersection(Bnd_Box box, Pln plane, bool sort=false)
    {
        double a = 0, b = 0, c = 0, d = 0;
        plane.Coefficients(ref a, ref b, ref c, ref d);
        var v = box.MinMax();
        double t, vd;
        List<Pnt> list = new();

        Vec vector = new(v.maxX - v.minX, 0, 0);
        __Test(new Pnt(v.minX, v.minY, v.minZ), vector);
        __Test(new Pnt(v.minX, v.maxY, v.minZ), vector);
        __Test(new Pnt(v.minX, v.minY, v.maxZ), vector);
        __Test(new Pnt(v.minX, v.maxY, v.maxZ), vector);

        vector = new(0, v.maxY - v.minY, 0);
        __Test(new Pnt(v.minX, v.minY, v.minZ), vector);
        __Test(new Pnt(v.maxX, v.minY, v.minZ), vector);
        __Test(new Pnt(v.minX, v.minY, v.maxZ), vector);
        __Test(new Pnt(v.maxX, v.minY, v.maxZ), vector);

        vector = new(0, 0, v.maxZ - v.minZ);
        __Test(new Pnt(v.minX, v.minY, v.minZ), vector);
        __Test(new Pnt(v.maxX, v.minY, v.minZ), vector);
        __Test(new Pnt(v.minX, v.maxY, v.minZ), vector);
        __Test(new Pnt(v.maxX, v.maxY, v.minZ), vector);

        if (list.Count > 3 && sort)
        {
            Pnt origin = list[0];
            Vec planeNormal = plane.Axis.Direction.ToVec();
            list.Sort((lhs, rhs) =>
            {
                Vec v = new Vec(origin, lhs).Crossed(new Vec(origin, rhs));
                return (int)v.Dot(planeNormal);
            });
        }

        return list;

        //--------------------------------------------------------------------------------------------------

        void __Test(Pnt rayOrigin, Vec rayVector)
        {
            vd = a * rayVector.X + b * rayVector.Y + c * rayVector.Z;
            if (vd == 0.0)
            {
                return;
            }
            t = - (a * rayOrigin.X + b * rayOrigin.Y + c * rayOrigin.Z + d) / vd;
            if (t is >= 0 and <= 1)
            {
                list.Add(rayOrigin.Translated(rayVector.Scaled(t)));
            }
        }

    }
}