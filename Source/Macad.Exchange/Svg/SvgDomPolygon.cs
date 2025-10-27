namespace Macad.Exchange.Svg;

internal class SvgDomPolygon : SvgDomPolyline
{
    // A polygon is the same as a polyline, but closed
    // It does not add any new properties or methods
    // The difference is handled in the importer/exporter logic
}