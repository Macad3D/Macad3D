using System.Diagnostics;
using System.Linq;
using Macad.Core.Topology;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes;

[SerializeType]
public sealed class Fillet : EdgeModifierBase
{
    #region Properties

    [SerializeMember]
    public double Radius
    {
        get { return _Radius; }
        set
        {
            if (_Radius != value)
            {
                SaveUndo();
                _Radius = value;
                Invalidate();
                RaisePropertyChanged();
            }
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    double _Radius;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Create

    public Fillet()
    {
        _Radius = 0.5;
    }

    //--------------------------------------------------------------------------------------------------

    public static Fillet Create(Body targetBody)
    {
        Debug.Assert(targetBody != null);

        var fillet = new Fillet();
        targetBody.AddShape(fillet);

        return fillet;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Make

    protected override bool MakeInternal(MakeFlags flags = MakeFlags.None)
    {
        ClearSubshapeLists();

        if (Operands.Count < 1)
        {
            Messages.Error("Fillet needs at least one operand shape.");
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

        var makeFillet = new BRepFilletAPI_MakeFillet(sourceShape, ChFi3d_FilletShape.Rational);

        // Select edges
        var edges = GetOcEdges().ToArray();
        if (!edges.Any())
        {
            Messages.Error("Edges no longer found. You need to reselect edges to fillet.");
            return false;
        }
        foreach (var edge in edges)
        {
            makeFillet.Add(Radius, edge);
        }

        // Get final shape
        BRep = makeFillet.Shape();
        UpdateModifiedSubshapes(sourceShape, makeFillet, edges);

        return base.MakeInternal(flags);
    }

    #endregion

}