using System.Linq;
using System.Text;
using Macad.Common;
using Macad.Occt;

namespace Macad.Core.Exchange.Pdf
{ 
    public class PdfPathBuilder
    {
        #region Props and Members

        public bool StrokeEnabled { get; set; }
        public bool FillEnabled { get; set; }

        const double PRECISION = 0.00001;
        readonly StringBuilder _Sb = new();
        static readonly Pnt2d _UndefinedPoint = new (double.MinValue, double.MinValue);
        Pnt2d _CurrentPoint = _UndefinedPoint;
        Pnt2d _FirstPoint = _UndefinedPoint;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Helper

        public byte[] GetBytes()
        {
            return _Sb.ToString().ToUtf8Bytes();
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
        }

        //--------------------------------------------------------------------------------------------------

        public void AddCurve(Pnt2d start, Pnt2d c1, Pnt2d c2, Pnt2d end)
        {
            _SetCurrentPosition(start);
            _Sb.Append($"{_Conv(c1.X)} {_Conv(c1.Y)} {_Conv(c2.X)} {_Conv(c2.Y)} {_Conv(end.X)} {_Conv(end.Y)} c\n");
            _CurrentPoint = end;
        }

        //--------------------------------------------------------------------------------------------------

        public void EndSegment()
        {
            if (_FirstPoint != _UndefinedPoint 
                && _FirstPoint.IsEqual(_CurrentPoint, PRECISION))
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

            if (StrokeEnabled && FillEnabled)
                _Sb.Append("B\n");
            else if (StrokeEnabled)
                _Sb.Append("S\n");
            else if (FillEnabled)
                _Sb.Append("f\n");
            else
                _Sb.Append("n\n");
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
    }
}