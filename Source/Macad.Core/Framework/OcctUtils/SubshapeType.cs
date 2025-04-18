﻿using System;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core;

[SerializeType]
public enum SubshapeType
{
    Vertex,
    Edge,
    Wire,
    Face
}

//--------------------------------------------------------------------------------------------------

[SerializeType]
[Flags]
public enum SubshapeTypes
{
    None = 0,
    Vertex = 1<<0,
    Edge = 1<<1,
    Wire = 1<<2,
    Face = 1<<4,
    All = Vertex | Edge | Wire | Face
}

//--------------------------------------------------------------------------------------------------

public static class SubshapeTypeHelper
{
    public static SubshapeTypes GetTypes(SubshapeType topAbsShapeEnum)
    {
        switch (topAbsShapeEnum)
        {
            case SubshapeType.Face:
                return SubshapeTypes.Face;

            case SubshapeType.Edge:
                return SubshapeTypes.Edge;

            case SubshapeType.Wire:
                return SubshapeTypes.Wire;

            case SubshapeType.Vertex:
                return SubshapeTypes.Vertex;

            default:
                throw new NotImplementedException();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static SubshapeType GetType(TopAbs_ShapeEnum topAbsShapeEnum)
    {
        switch (topAbsShapeEnum)
        {
            case TopAbs_ShapeEnum.FACE:
                return SubshapeType.Face;

            case TopAbs_ShapeEnum.EDGE:
                return SubshapeType.Edge;

            case TopAbs_ShapeEnum.WIRE:
                return SubshapeType.Wire;

            case TopAbs_ShapeEnum.VERTEX:
                return SubshapeType.Vertex;

            default:
                throw new NotImplementedException();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static SubshapeType GetType(TopoDS_Shape ocShape)
    {
        return GetType(ocShape.ShapeType());
    }

    //--------------------------------------------------------------------------------------------------

    public static SubshapeTypes GetTypes(TopAbs_ShapeEnum topAbsShapeEnum)
    {
        switch (topAbsShapeEnum)
        {
            case TopAbs_ShapeEnum.FACE:
                return SubshapeTypes.Face;

            case TopAbs_ShapeEnum.EDGE:
                return SubshapeTypes.Edge;

            case TopAbs_ShapeEnum.WIRE:
                return SubshapeTypes.Wire;

            case TopAbs_ShapeEnum.VERTEX:
                return SubshapeTypes.Vertex;

            default:
                throw new NotImplementedException();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public static TopAbs_ShapeEnum ToTopAbs(this SubshapeType type)
    {
        return type switch
        {
            SubshapeType.Vertex => TopAbs_ShapeEnum.VERTEX,
            SubshapeType.Edge => TopAbs_ShapeEnum.EDGE,
            SubshapeType.Wire => TopAbs_ShapeEnum.WIRE,
            SubshapeType.Face => TopAbs_ShapeEnum.FACE,
            _ => throw new NotImplementedException()
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static int ToAisSelectionMode(this SubshapeType type)
    {
        return type switch
        {
            SubshapeType.Vertex => 1,
            SubshapeType.Edge => 2,
            SubshapeType.Wire => 3,
            SubshapeType.Face => 4,
            _ => throw new NotImplementedException()
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static SubshapeType FromAisSelectionMode(int aisMode)
    {
        return aisMode switch
        {
            1 => SubshapeType.Vertex,
            2 => SubshapeType.Edge,
            3 => SubshapeType.Wire,
            4 => SubshapeType.Face,
            _ => throw new NotImplementedException()
        };
    }

    //--------------------------------------------------------------------------------------------------

    public static int Count(this SubshapeTypes types)
    {
        int count = 0;
        if ((types & SubshapeTypes.Vertex) != 0)
            count++;
        if ((types & SubshapeTypes.Edge) != 0)
            count++;
        if ((types & SubshapeTypes.Wire) != 0)
            count++;
        if ((types & SubshapeTypes.Face) != 0)
            count++;
        return count;
    }

    //--------------------------------------------------------------------------------------------------

}