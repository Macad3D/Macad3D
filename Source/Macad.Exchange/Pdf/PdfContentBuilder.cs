using System.IO;
using System.Linq;
using System.Text;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Pdf;

internal sealed class PdfContentBuilder
{
    #region Props and Members

    public bool StrokeEnabled { get; set; }
    public bool FillEnabled { get; set; }
    public bool HasContent { get { return _Stream.Length > 0; } }

    const double Precision = 0.00001;

    readonly MemoryStream _Stream = new();
    readonly Encoding _Encoding = Encoding.GetEncoding(1252);
    static readonly Pnt2d _UndefinedPoint = new (double.MinValue, double.MinValue);
    Pnt2d _CurrentPoint = _UndefinedPoint;
    Pnt2d _FirstPoint = _UndefinedPoint;
    bool _HasGeometry;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Helper

    public MemoryStream Finish()
    {
        EndPath();
        _Stream.Flush();
        return _Stream;
    }

    //--------------------------------------------------------------------------------------------------

    public void _Write(string stringValue)
    {
        var stringBytes = _Encoding.GetBytes(stringValue);
        _Stream.Write(stringBytes, 0, stringBytes.Length);
    }

    //--------------------------------------------------------------------------------------------------
        
    static string _Conv(double value)
    {
        return value.ToInvariantString("F4");
    }
    //--------------------------------------------------------------------------------------------------

    static string _Conv(float value)
    {
        return value.ToInvariantString("F4");
    }

    //--------------------------------------------------------------------------------------------------

    void _SetCurrentPosition(Pnt2d pos)
    {
        bool move = false;
        if (_CurrentPoint == _UndefinedPoint)
        {
            move = true;
            _FirstPoint = pos;
        }
        else if (!_CurrentPoint.IsEqual(pos, Precision))
        {
            move = true;
            _FirstPoint = _UndefinedPoint; // Path is broken, so it cannot be closed
        }

        if(move)
        {
            _CurrentPoint = pos;
            _Write($"{_Conv(pos.X)} {_Conv(pos.Y)} m\n");
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Geometry

    public void AddLine(Pnt2d start, Pnt2d end)
    {
        _SetCurrentPosition(start);
        _Write($"{_Conv(end.X)} {_Conv(end.Y)} l\n");
        _CurrentPoint = end;
        _HasGeometry = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void AddCurve(Pnt2d start, Pnt2d c1, Pnt2d c2, Pnt2d end)
    {
        _SetCurrentPosition(start);
        _Write($"{_Conv(c1.X)} {_Conv(c1.Y)} {_Conv(c2.X)} {_Conv(c2.Y)} {_Conv(end.X)} {_Conv(end.Y)} c\n");
        _CurrentPoint = end;
        _HasGeometry = true;
    }

    //--------------------------------------------------------------------------------------------------

    public void EndSegment()
    {
        if (_FirstPoint != _UndefinedPoint 
            && _FirstPoint.IsEqual(_CurrentPoint, Precision)
            && _HasGeometry)
        {
            _Write("h\n");
        }
        _CurrentPoint = _UndefinedPoint;
        _FirstPoint = _UndefinedPoint;
    }

    //--------------------------------------------------------------------------------------------------

    public void EndPath()
    {
        EndSegment();

        if (_HasGeometry)
        {
            if (StrokeEnabled && FillEnabled)
                _Write("B\n");
            else if (StrokeEnabled)
                _Write("S\n");
            else if (FillEnabled)
                _Write("f\n");
            else
                _Write("n\n");
        }

        _HasGeometry = false;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Graphic State

    public void SetLineWidth(float width)
    {
        _Write($"{_Conv(width)} w\n");
    }

    //--------------------------------------------------------------------------------------------------

    public void SetLinePattern(params double[] dasharray)
    {
        _Write($"[{string.Join(' ', dasharray.Select(d => _Conv(d)))}] 0 d\n");
    }

    //--------------------------------------------------------------------------------------------------

    public void SetStrokeColor(float r, float g, float b)
    {
        _Write($"{_Conv(r)} {_Conv(g)} {_Conv(b)} RG\n");
    }

    //--------------------------------------------------------------------------------------------------

    public void SetFillColor(float r, float g, float b)
    {
        _Write($"{_Conv(r)} {_Conv(g)} {_Conv(b)} rg\n");
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Text

    public void AddText(string text, Pnt2d position, double rotation, PdfDomFont font)
    {
        EndPath();

        _Write("BT\n");
        _Write($"/{font.Name} {font.Style.Size} Tf\n");

        Mat2d rotmat = new();
        rotmat.SetRotation(rotation);
        _Write($"{_Conv(rotmat.Value(1, 1))} {_Conv(rotmat.Value(1, 2))} ");
        _Write($"{_Conv(rotmat.Value(2,1))} {_Conv(rotmat.Value(2,2))} ");
        _Write($"{_Conv(position.X)} {_Conv(position.Y)} Tm ");

        _Write("(");
        foreach (var character in text)
        {
            if (character is '(' or ')' or '\\')
            {
                _Write("\\");
            }

            var encodedChar = _Encoding.GetBytes(character.ToString())[0];
            font.AddCharacter(encodedChar);
            _Stream.WriteByte(encodedChar);
        }
        _Write(") Tj\n");
        _Write("ET\n");
    }

    #endregion
}