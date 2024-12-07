using Macad.Occt;

namespace Macad.Exchange.Svg;

internal abstract class SvgExporterBase
{
    #region Helper

    bool _AreEqual(Pnt2d first, Pnt2d second)
    {
        return first.IsEqual(second, 0.0001);
    }

    //--------------------------------------------------------------------------------------------------
        
    public static double DotsPerInch { get; set; } = 96.0;
    public static bool TagGroupsAsLayers { get; set; } = false;

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Paths

    protected void InitPathExport()
    {
        CurrentPath = new SvgDomPath() {Style = CurrentStyle};
        _PathStart = new Pnt2d();
        _PathPosition = new Pnt2d();
        _SubPathStartIndex = 0;
    }

    //--------------------------------------------------------------------------------------------------

    protected void AddToPath(SvgPathSegment segment)
    {
        if (CurrentPath == null)
        {
            InitPathExport();
            _PathStart = segment.Start;
            CurrentPath.Segments.Add(new SvgPathSegMoveto(segment.Start));
        }
        else
        {
            // If Segment-Start does not match current subpath end...
            if (!_AreEqual(_PathPosition, segment.Start))
            {
                if (_AreEqual(_PathStart, segment.End))
                {
                    // Segment-End matches path start, but Segment-Start
                    // not to current subpath end, so insert on top
                    CurrentPath.Segments.Insert(_SubPathStartIndex + 1, segment);
                    CurrentPath.Segments[_SubPathStartIndex] = new SvgPathSegMoveto(segment.Start);
                    _PathStart = segment.Start;
                    return;
                }
                else
                {
                    // Both Segment-Points do not match to any side of the path
                    // Start new subpath
                    ClosePath();
                    _SubPathStartIndex = CurrentPath.Segments.Count;
                    CurrentPath.Segments.Add(new SvgPathSegMoveto(segment.Start));
                    _PathStart = segment.Start;
                }
            }
        }

        // Append to current / just created subpath
        _PathPosition = segment.End;
        CurrentPath.Segments.Add(segment);
    }

    //--------------------------------------------------------------------------------------------------

    protected void ClosePath()
    {
        SvgDomPath path = CurrentPath;

        if (path?.Segments.Count > 0)
        {
            if (_PathPosition != Pnt2d.Origin && _AreEqual(_PathStart, _PathPosition))
                path.Segments.Add(new SvgPathSegClosePath());
        }
        _PathPosition = new Pnt2d();
        _PathStart = new Pnt2d();
    }

    //--------------------------------------------------------------------------------------------------

    protected SvgDomPath FinalizePath()
    {
        ClosePath();

        SvgDomPath path = CurrentPath;
        if (path?.Segments.Count > 0)
        {
            CurrentDomGroup.Children.Add(path);
        }
        CurrentPath = null;
        return path;
    }

    //--------------------------------------------------------------------------------------------------

    #endregion

    #region Members

    protected SvgDomGroup CurrentDomGroup;
    protected SvgDomPath CurrentPath;
    protected SvgStyle CurrentStyle;
    Pnt2d _PathStart;
    Pnt2d _PathPosition;
    int _SubPathStartIndex;

    #endregion
}