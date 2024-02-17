using System;
using System.Collections.Generic;
using Macad.Common.Serialization;

namespace Macad.Core;

[SerializeType]
public interface IExchangerSettings
{}

//--------------------------------------------------------------------------------------------------

public interface IExchanger
{
    string Description { get; }
    string[] Extensions { get; }
    IExchangerSettings Settings { get; set; }

    bool CanExportToClipboard();
    bool CanImportFromClipboard(Clipboard clipboard);
}

//--------------------------------------------------------------------------------------------------

public interface IBodyExporter : IExchanger
{
    bool DoExport(string fileName, IEnumerable<Topology.Body> bodies);
}

//--------------------------------------------------------------------------------------------------

public interface IBodyImporter : IExchanger
{
    bool DoImport(string fileName, out IEnumerable<Topology.Body> bodies);
}

//--------------------------------------------------------------------------------------------------

public interface ISketchExporter : IExchanger
{
    bool DoExport(string fileName, Shapes.Sketch sketch);
    bool DoExport(Clipboard clipboard, Shapes.Sketch sketch);
}

//--------------------------------------------------------------------------------------------------

public interface ISketchImporter : IExchanger
{
    bool DoImport(string fileName, out IDictionary<int, Occt.Pnt2d> points, out IDictionary<int, Shapes.SketchSegment> segments, 
                  out IEnumerable<Shapes.SketchConstraint> constraints);
    bool DoImport(Clipboard clipboard, out IDictionary<int, Occt.Pnt2d> points, out IDictionary<int, Shapes.SketchSegment> segments, 
                  out IEnumerable<Shapes.SketchConstraint> constraints);
}

//--------------------------------------------------------------------------------------------------

public interface IDrawingExporter : IExchanger
{
    bool DoExport(string fileName, Drawing.Drawing drawing);
}

//--------------------------------------------------------------------------------------------------

public interface IExchangerSettingsPanelCreator
{
    Type ExchangerType { get; }
    object CreatePanel<T>(IExchanger exchanger);
}

//--------------------------------------------------------------------------------------------------