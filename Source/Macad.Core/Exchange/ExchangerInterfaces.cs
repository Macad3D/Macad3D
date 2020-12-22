using System;
using System.Collections.Generic;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Exchange
{
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

    public enum VectorExportTemplate
    {
        /// <summary>Layers: Outline, HiddenOutline, Inline, HiddenInline</summary>
        Drawing, 
        /// <summary>Layers: Outline, Filled</summary>
        Contours,
    }

    //--------------------------------------------------------------------------------------------------

    [Flags]
    public enum VectorExportLayerType
    {
        Outline = 1,
        Inline  = 2,
        Hidden  = 1 << 31,
        Filled  = 1 << 30,

        HiddenOutline   = Outline | Hidden,
        HiddenInline    = Inline | Hidden,
        FilledOutline   = Outline | Filled
    }

    //--------------------------------------------------------------------------------------------------

    public struct VectorExportLayer
    {
        public VectorExportLayerType Type { get; }
        public string Name { get; }
        public TopoDS_Shape BRep { get; }

        public VectorExportLayer(VectorExportLayerType type, string name, TopoDS_Shape bRep)
        {
            Type = type;
            Name = name;
            BRep = bRep;
        }

        public VectorExportLayer(VectorExportLayerType type, TopoDS_Shape bRep)
        {
            Type = type;
            BRep = bRep;
            Name = type.ToString();
        }
    }

    //--------------------------------------------------------------------------------------------------

    public interface IVectorExporter : IExchanger
    {
        bool DoExport(string fileName, VectorExportTemplate template, VectorExportLayer[] layers);
    }

    //--------------------------------------------------------------------------------------------------

    public interface IExchangerSettingsPanelCreator
    {
        Type ExchangerType { get; }
        object CreatePanel<T>(IExchanger exchanger);
    }

    //--------------------------------------------------------------------------------------------------

}