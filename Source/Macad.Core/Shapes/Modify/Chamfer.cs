using System.Diagnostics;
using System.Linq;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class Chamfer : EdgeModifierBase
{
    #region Properties

    [SerializeMember]
    public ChamferModes Mode
    {
        get { return _Mode; }
        set
        {
            if (_Mode != value)
            {
                SaveUndo();
                _Mode = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public double Distance
    {
        get { return _Distance; }
        set
        {
            if (_Distance != value)
            {
                SaveUndo();
                _Distance = value;
                Invalidate();
                RaisePropertyChanged();

                if (_Mode != ChamferModes.TwoDistances)
                {
                    SecondDistance = _Distance;
                }
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    [SerializeMember]
    public double SecondDistance
    {
        get { return _SecondDistance; }
        set
        {
            if (_SecondDistance != value)
            {
                SaveUndo();
                _SecondDistance = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    [SerializeMember]
    public double Angle
    {
        get { return _Angle; }
        set
        {
            if (_Angle != value)
            {
                SaveUndo();
                _Angle = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    [SerializeMember]
    public bool ReverseOrientation
    {
        get { return _ReverseOrientation; }
        set
        {
            if (_ReverseOrientation != value)
            {
                SaveUndo();
                _ReverseOrientation = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    ChamferModes _Mode;
    double _Distance;
    double _SecondDistance;
    double _Angle;
    bool _ReverseOrientation;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Enums

    public enum ChamferModes
    {
        Symmetric,
        TwoDistances,
        DistanceAngle
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    public Chamfer()
    {
        _Mode = ChamferModes.Symmetric;
        _Distance = 0.5;
        _SecondDistance = 0.5;
        _Angle = 45;
    }

    //--------------------------------------------------------------------------------------------------

    public static Chamfer Create(Body targetBody, SubshapeReference[] edges = null)
    {
        Debug.Assert(targetBody != null);

        var chamfer = new Chamfer();
        if (edges?.Length > 0)
        {
            chamfer.Edges = edges;
        }
        targetBody.AddShape(chamfer);

        return chamfer;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    protected override bool MakeInternal(MakeFlags flags)
    {
        ClearSubshapeLists();

        if (Operands.Count < 1)
        {
            Messages.Error("Chamfer needs at least one operand shape.");
            return false;
        }

        var sourceShape = GetOperandBRep(0);
        if (sourceShape == null)
            return false;

        // If no edges are selected, just copy the source shape
        if (Edges.Length == 0)
        {
            return Skip();
        }


        // Create algo
        var makeChamfer = new BRepFilletAPI_MakeChamfer(sourceShape);

        // Select edges
        var edges = GetOcEdges().ToArray();
        if (!edges.Any())
        {
            Messages.Error("Edges no longer found. You need to reselect edges to chamfer.");
            return false;
        }

        // Get reference faces
        var faces = FindReferenceFaces(sourceShape, edges, ReverseOrientation);

        // Go for each edge
        foreach (var edge in edges)
        {
            // Get reference face
            TopoDS_Face face;
            if (!faces.TryGetValue(edge, out face))
            {
                Messages.Warning("One edge has no ancestor face. Chamfer cannot operator on free edges.");
                continue;
            }

            switch (_Mode)
            {
                case ChamferModes.Symmetric:
                    makeChamfer.Add(Distance, edge);
                    break;

                case ChamferModes.TwoDistances:
                    makeChamfer.Add(Distance, SecondDistance, edge, face);
                    break;

                case ChamferModes.DistanceAngle:
                    makeChamfer.AddDA(Distance, Angle.ToRad(), edge, face);
                    break;
            }
        }

        // Get final shape
        BRep = makeChamfer.Shape();
        UpdateModifiedSubshapes(sourceShape, makeChamfer, edges);

        return base.MakeInternal(flags);
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

}