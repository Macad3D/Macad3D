using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Occt;

namespace Macad.Core.Geom;

/// <summary>
/// Triangulates simple polygons (convex/concave, no holes) using
/// the common Ear-Clipping algorithm. It works on a list of vertices
/// and a ordered list of indices into the vertex list. The result
/// is a list of indices for all triangles (3 indices per triangle).
/// All triangles are returned in CCW order, regardless of the
/// winding order of the polygon.
/// </summary>
public class EarClippingTriangulator
{
    List<Pnt2d> _PointList;
    List<int> _IndexList;
        
    //--------------------------------------------------------------------------------------------------

    public List<int> DoTriangulation(List<Pnt> vertexList, IEnumerable<int> indices)
    {
        var resultIndices = new List<int>();
        _IndexList = new List<int>(indices);

        Debug.Assert(vertexList.Count >= 3);
        Debug.Assert(_IndexList.Count >= 3);
        Debug.Assert(_IndexList.Max() < vertexList.Count);
        Debug.Assert(_IndexList.Distinct().Count() == _IndexList.Count, "All indices of this polygon must point to a unique vertex!");

        // If last and first indices are identical, remove one
        if(_IndexList[0] == _IndexList[_IndexList.Count-1])
            _IndexList.RemoveAt(_IndexList.Count-1);

        // Project vertices to common plane
        if (!_CreateProjectedPointList(vertexList))
            return null;

        // Proceed until only one triangle left
        while (_IndexList.Count > 3)
        {
            var triangle = _FindEar();

            // Create triangle
            resultIndices.Add(_IndexList[triangle.previous]);
            resultIndices.Add(_IndexList[triangle.index]);
            resultIndices.Add(_IndexList[triangle.next]);

            // Remove index and point
            _IndexList.RemoveAt(triangle.index);
            _PointList.RemoveAt(triangle.index);
        }

        // Copy last triangle
        resultIndices.AddRange(_IndexList);

        return resultIndices;
    }

    //--------------------------------------------------------------------------------------------------

    bool _CreateProjectedPointList(List<Pnt> vertexList)
    {
        _PointList = new List<Pnt2d>(_IndexList.Count);
            
        // Build plane
        var pnts = new TColgp_HArray1OfPnt(1, _IndexList.Count);
        for (int i = 0; i < _IndexList.Count; i++)
        {
            pnts.SetValue(i+1, vertexList[_IndexList[i]]);
        }

        var buildPlane = new GeomPlate_BuildAveragePlane(pnts, pnts.Length(), 0, 1, 1);
        if (!buildPlane.IsPlane())
            return false;

        Pln plane = buildPlane.Plane().Pln();
        //plane.Location = Pnt.Origin;

        // Project points on plane
        double u = 0, v = 0;
        foreach (var i in _IndexList)
        {
            ElSLib.Parameters(plane, vertexList[i], ref u, ref v);
            _PointList.Add(new Pnt2d(u, v));
        }

        // Get winding order of polygon
        double area = 0;
        for (int i = 0; i < _PointList.Count - 1; i++) 
            area += _PointList[i].X * _PointList[i + 1].Y - _PointList[i + 1].X * _PointList[i].Y;
        if (area < 0)
        {
            _PointList.Reverse();
            _IndexList.Reverse();
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

    (int previous, int index, int next) _FindEar()
    {
        for (int current = 0; current < _IndexList.Count; current++)
        {
            // Catch vertices
            int previous = current == 0 ? _IndexList.Count - 1 : current - 1;
            int next = current == _IndexList.Count - 1 ? 0 : current + 1;

            Pnt2d a = _PointList[previous];
            Pnt2d b = _PointList[current];
            Pnt2d c = _PointList[next];

            // If vertex is not convex, skip                
            if(_GetTriangleDirection(a, b, c) > 0)
                continue;

            bool foundPointInTriangle = false;
            for (int i = 0; i < _IndexList.Count; i++)
            {
                if (i == current || i == previous || i == next)
                    continue;

                Pnt2d s = _PointList[i];

                // Point in triangle?
                if (_IsPointInTriangle(a, b, c, s))
                {
                    foundPointInTriangle = true;
                    break;
                }
            }

            if (!foundPointInTriangle)
            {
                // We found an ear!
                return (previous, current, next);
            }
        }

        return (0, 1, 2);
    }

    //--------------------------------------------------------------------------------------------------

    int _GetTriangleDirection( Pnt2d a, Pnt2d b, Pnt2d c )
    {
        return Math.Sign( a.X * ( c.Y - b.Y ) + b.X * ( a.Y - c.Y ) + c.X * ( b.Y - a.Y ) );
    }

    //--------------------------------------------------------------------------------------------------

    bool _IsPointInTriangle(Pnt2d a, Pnt2d b, Pnt2d c, Pnt2d s)
    {
        bool __IsLeftOf(Pnt2d p1, Pnt2d p2)
        {
            return ((p2.X - p1.X) * (s.Y - p1.Y) - (p2.Y - p1.Y) * (s.X - p1.X)) >= 0;
        }

        return __IsLeftOf(a, b) && __IsLeftOf(b, c) && __IsLeftOf(c, a);
    }

    //--------------------------------------------------------------------------------------------------

}