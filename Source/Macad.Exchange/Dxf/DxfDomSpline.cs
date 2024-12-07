using System;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Occt;

namespace Macad.Exchange.Dxf;

internal sealed class DxfDomSpline : DxfDomEntity
{
    [Flags]
    public enum SplineFlags
    {
        None = 0,
        IsClosed = 1,
        IsPeriodic = 2,
        IsRational = 4,
        IsPlanar = 8,
        IsLinear = 16
    }

    //--------------------------------------------------------------------------------------------------

    public bool HasTangents
    {
        get { return StartTangent != Vec2d.Zero && EndTangent != Vec2d.Zero; }
    }

    //--------------------------------------------------------------------------------------------------

    public int Degree;
    public double[] Knots;
    public Pnt2d[] ControlPoints;
    public double[] Weights;
    public Pnt2d[] FitPoints;
    public Vec2d StartTangent;
    public Vec2d EndTangent;
    public SplineFlags Flags;

    //--------------------------------------------------------------------------------------------------

    public DxfDomSpline()
    {}

    //--------------------------------------------------------------------------------------------------

    public DxfDomSpline(string layer, int degree, double[] knots, Pnt2d[] controlPoints, double[] weights, SplineFlags flags)
    {
        LayerName = layer;
        Degree = degree;
        Knots = knots;
        ControlPoints = controlPoints;
        Weights = weights;
        Flags = flags;
    }

    //--------------------------------------------------------------------------------------------------

    internal override void Write(DxfWriter writer)
    {
        if (writer.Version < DxfVersion.AC1012)
        {
            return;
        }

        writer.Write(0, "SPLINE");
        writer.WriteHandle();
        writer.WriteSubclass("AcDbEntity");
        writer.Write(8, LayerName);
        writer.WriteSubclass("AcDbSpline");

        writer.Write(210, 0.0); // Plane normal vector
        writer.Write(220, 0.0);
        writer.Write(230, 1.0);

        writer.Write(70, (int)Flags.Added(SplineFlags.IsPlanar));
        writer.Write(71, Degree);
        writer.Write(72, Knots.Length);
        writer.Write(73, ControlPoints.Length);
        writer.Write(74, 0); // Number of fit points

        foreach (var knot in Knots)
        {
            writer.Write(40, knot);
        }

        foreach (var point in ControlPoints)
        {
            writer.Write(10, point.X);
            writer.Write(20, point.Y);
            writer.Write(30, 0.0);
        }

        bool saveWeights = Weights?.Any(w => w.IsEqual(1.0, 0.0001)) ?? false;
        if (saveWeights)
        {
            foreach (var weight in Weights)
            {
                writer.Write(41, weight);
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    public override bool Read(DxfReader reader)
    {
        Pnt2d controlPoint = default;
        int controlPointCount = 0;
        var controlPointList = new List<Pnt2d>();
        var controlReadBits = new BitVector32(0);

        int knotCount = 0;
        var knotList = new List<double>();
        var weightList = new List<double>();
            
        Pnt2d fitPoint = default;
        int fitPointCount = 0;
        var fitPointList = new List<Pnt2d>();
        var fitReadBits = new BitVector32(0);

        var tanReadBits = new BitVector32(0);

        Flags = SplineFlags.None;

        while (reader.GroupCode > 0)
        {
            switch (reader.GroupCode)
            {
                case 70:
                    Flags = (SplineFlags)reader.ReadInteger();
                    break;
                case 71:
                    Degree = reader.ReadInteger();
                    break;
                case 72:
                    knotCount = reader.ReadInteger();
                    break;
                case 73:
                    controlPointCount = reader.ReadInteger();
                    break;
                case 74:
                    fitPointCount = reader.ReadInteger();
                    break;
                case 10:
                    controlPoint.X = reader.ReadCoord();
                    controlReadBits[0b01] = true;
                    break;
                case 20:
                    controlPoint.Y = reader.ReadCoord();
                    controlReadBits[0b10] = true;
                    break;
                case 11:
                    fitPoint.X = reader.ReadCoord();
                    fitReadBits[0b01] = true;
                    break;
                case 21:
                    fitPoint.Y = reader.ReadCoord();
                    fitReadBits[0b10] = true;
                    break;
                case 40:
                    knotList.Add(reader.ReadDouble());
                    break;
                case 41:
                    weightList.Add(reader.ReadDouble());
                    break;
                case 12:
                    StartTangent.X = reader.ReadCoord();
                    tanReadBits[0b0001] = true;
                    break;
                case 22:
                    StartTangent.Y = reader.ReadCoord();
                    tanReadBits[0b0010] = true;
                    break;
                case 13:
                    EndTangent.X = reader.ReadCoord();
                    tanReadBits[0b0100] = true;
                    break;
                case 23:
                    EndTangent.Y = reader.ReadCoord();
                    tanReadBits[0b1000] = true;
                    break;
                default:
                    reader.Skip();
                    break;
            }

            if (controlReadBits.Data == 0b11)
            {
                controlPointList.Add(controlPoint);
                controlReadBits = new BitVector32(0);
            }
            if (fitReadBits.Data == 0b11)
            {
                fitPointList.Add(fitPoint);
                fitReadBits = new BitVector32(0);
            }
        }

        if (controlPointCount > 0 && knotCount == 0)
        {
            Messages.Error($"DxfReader: Entity SPLINE has control points, but no knots are given, in line {reader.Line}.");
            return false;
        }

        if (controlPointCount != controlPointList.Count)
        {
            Messages.Error($"DxfReader: Entity SPLINE count of control point data does not match control point list length (groupcode 73) in line {reader.Line}.");
            return false;
        }
        ControlPoints = controlPointList.ToArray();

        if (knotCount != knotList.Count)
        {
            Messages.Error($"DxfReader: Entity SPLINE count of knot data does not match knot list length (groupcode 72) in line {reader.Line}.");
            return false;
        }
        Knots = knotList.ToArray();

        Weights = null;
        if (weightList.Count != 0)
        {
            if (controlPointCount == weightList.Count)
            {
                Weights = weightList.ToArray();
            }
            else
            {
                Messages.Warning($"DxfReader: Entity SPLINE count of weight data does not match number of control point (groupcode 73) in line {reader.Line}. All weights will be reset.");
            }
        }
            
        if (fitPointCount != fitPointList.Count)
        {
            Messages.Error($"DxfReader: Entity SPLINE count of control point data does not match control point list length (groupcode 73) in line {reader.Line}.");
            return false;
        }
        FitPoints = fitPointList.ToArray();

        if (tanReadBits.Data != 0 && tanReadBits.Data != 0b1111)
        {
            Messages.Warning($"DxfReader: Entity SPLINE does define incomplete tangent values in line {reader.Line}. The tangents are ignored.");
            StartTangent = Vec2d.Zero;
            EndTangent = Vec2d.Zero;
        }

        return true;
    }

    //--------------------------------------------------------------------------------------------------

}