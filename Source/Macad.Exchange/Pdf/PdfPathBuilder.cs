using System.Linq;
using System.Text;
using Macad.Common;
using Macad.Occt;

namespace Macad.Exchange.Pdf
{ 
    public class PdfPathBuilder
    {
        #region Props and Members

        public bool StrokeEnabled { get; set; }
        public bool FillEnabled { get; set; }
        public bool HasContent { get { return _Sb.Length > 0; } }

        const double PRECISION = 0.00001;
        readonly StringBuilder _Sb = new();
        static readonly Pnt2d _UndefinedPoint = new (double.MinValue, double.MinValue);
        Pnt2d _CurrentPoint = _UndefinedPoint;
        Pnt2d _FirstPoint = _UndefinedPoint;
        bool _HasGeometry = false;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Helper

        public byte[] GetBytes()
        {
            return Encoding.GetEncoding(1252).GetBytes(_Sb.ToString());
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
            else if (!_CurrentPoint.IsEqual(pos, PRECISION))
            {
                move = true;
                _FirstPoint = _UndefinedPoint; // Path is broken, so it cannot be closed
            }

            if(move)
            {
                _CurrentPoint = pos;
                _Sb.Append($"{_Conv(pos.X)} {_Conv(pos.Y)} m\n");
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Geometry

        public void AddLine(Pnt2d start, Pnt2d end)
        {
            _SetCurrentPosition(start);
            _Sb.Append($"{_Conv(end.X)} {_Conv(end.Y)} l\n");
            _CurrentPoint = end;
            _HasGeometry = true;
        }

        //--------------------------------------------------------------------------------------------------

        public void AddCurve(Pnt2d start, Pnt2d c1, Pnt2d c2, Pnt2d end)
        {
            _SetCurrentPosition(start);
            _Sb.Append($"{_Conv(c1.X)} {_Conv(c1.Y)} {_Conv(c2.X)} {_Conv(c2.Y)} {_Conv(end.X)} {_Conv(end.Y)} c\n");
            _CurrentPoint = end;
            _HasGeometry = true;
        }

        //--------------------------------------------------------------------------------------------------

        public void EndSegment()
        {
            if (_FirstPoint != _UndefinedPoint 
                && _FirstPoint.IsEqual(_CurrentPoint, PRECISION)
                && _HasGeometry)
            {
                _Sb.Append("h\n");
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
                    _Sb.Append("B\n");
                else if (StrokeEnabled)
                    _Sb.Append("S\n");
                else if (FillEnabled)
                    _Sb.Append("f\n");
                else
                    _Sb.Append("n\n");
            }

            _HasGeometry = false;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Graphic State

        public void SetLineWidth(float width)
        {
            _Sb.Append($"{_Conv(width)} w\n");
        }

        //--------------------------------------------------------------------------------------------------

        public void SetLinePattern(params double[] dasharray)
        {
            _Sb.Append($"[{string.Join(' ', dasharray.Select(d => _Conv(d)))}] 0 d\n");
        }

        //--------------------------------------------------------------------------------------------------

        public void SetStrokeColor(float r, float g, float b)
        {
            _Sb.Append($"{_Conv(r)} {_Conv(g)} {_Conv(b)} RG\n");
        }

        //--------------------------------------------------------------------------------------------------

        public void SetFillColor(float r, float g, float b)
        {
            _Sb.Append($"{_Conv(r)} {_Conv(g)} {_Conv(b)} rg\n");
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Text

        public void AddText(string text, Pnt2d position, double rotation, PdfDomFont font)
        {
            EndPath();

            _Sb.Append("BT\n");
            _Sb.Append($"/{font.Name} {font.Style.Size} Tf\n");

            Mat2d rotmat = new();
            rotmat.SetRotation(rotation);
            _Sb.Append($"{_Conv(rotmat.Value(1, 1))} {_Conv(rotmat.Value(1, 2))} ");
            _Sb.Append($"{_Conv(rotmat.Value(2,1))} {_Conv(rotmat.Value(2,2))} ");
            _Sb.Append($"{_Conv(position.X)} {_Conv(position.Y)} Tm");

            _Sb.Append('(');
            foreach (var character in text)
            {
                if (character is '(' or ')' or '\\')
                    _Sb.Append("\\");
                _Sb.Append(character);
            }
            _Sb.Append(") Tj\n");
            _Sb.Append("ET\n");
        }

        #endregion
    }
}