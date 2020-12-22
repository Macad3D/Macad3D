using System.Collections.Generic;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Core.Exchange
{
    public class DrawingExportHelper
    {
        readonly bool _UseTriangulation;
        readonly Ax3 _Projection;

        readonly List<HlrEdgeType> _IncludeEdgeTypes = new List<HlrEdgeType>();
        HlrBRepAlgoBase _HlrAlgo;

        //--------------------------------------------------------------------------------------------------

        public DrawingExportHelper(bool useTriangulation, Ax3 projection)
        {
            _UseTriangulation = useTriangulation;
            _Projection = projection;
        }

        //--------------------------------------------------------------------------------------------------

        public void IncludeEdgeType(HlrEdgeType edgeType)
        {
            if(!_IncludeEdgeTypes.Contains(edgeType))
                _IncludeEdgeTypes.Add(edgeType);
        }

        //--------------------------------------------------------------------------------------------------

        public bool Export(string fileName, IVectorExporter exporter, IEnumerable<TopoDS_Shape> breps)
        {
            VectorExportLayer[] layers = PrepareExportLayers(breps);
            if (layers == null || layers.Length == 0)
            {
                Messages.Error("No lines left to export after HLR processing.");
                return false;
            }
            return exporter.DoExport(fileName, VectorExportTemplate.Drawing, layers);
        }

        //--------------------------------------------------------------------------------------------------

        public VectorExportLayer[] PrepareExportLayers(IEnumerable<TopoDS_Shape> breps)
        {
            // Create algo instance
            if (_UseTriangulation)
                _HlrAlgo = new HlrBRepAlgoPoly(breps);
            else
                _HlrAlgo = new HlrBRepAlgo(breps);

            // Set Projection
            _HlrAlgo.SetProjection(_Projection);

            // Do it
            _HlrAlgo.Update();

            // Export
            List<VectorExportLayer> layers = new List<VectorExportLayer>(4);
            _CreateLayer(layers, VectorExportLayerType.Outline,       HlrEdgeType.VisibleOutline, HlrEdgeType.VisibleSharp, _HlrAlgo);
            _CreateLayer(layers, VectorExportLayerType.Inline,        HlrEdgeType.VisibleSmooth,  HlrEdgeType.VisibleSewn,  _HlrAlgo);
            _CreateLayer(layers, VectorExportLayerType.HiddenOutline, HlrEdgeType.HiddenOutline,  HlrEdgeType.HiddenSharp,  _HlrAlgo);
            _CreateLayer(layers, VectorExportLayerType.HiddenInline,  HlrEdgeType.HiddenSmooth,   HlrEdgeType.HiddenSewn,   _HlrAlgo);

            return layers.ToArray();
        }

        //--------------------------------------------------------------------------------------------------

        void _CreateLayer(List<VectorExportLayer> layers, VectorExportLayerType layerTypeType, HlrEdgeType edgeType1, HlrEdgeType edgeType2, HlrBRepAlgoBase hlrAlgo)
        {
            var shape1 = _IncludeEdgeTypes.Contains(edgeType1) ? hlrAlgo.GetResult(edgeType1) : null;
            var shape2 = _IncludeEdgeTypes.Contains(edgeType2) ? hlrAlgo.GetResult(edgeType2) : null;

            if (shape1 != null && shape2 != null)
            {
                var builder = new BRep_Builder();
                var compound = new TopoDS_Compound();
                builder.MakeCompound(compound);
                builder.Add(compound, hlrAlgo.GetResult(edgeType1));
                builder.Add(compound, hlrAlgo.GetResult(edgeType2));

                layers.Add(new VectorExportLayer(layerTypeType, compound));
            }
            else if (shape1 != null)
            {
                layers.Add(new VectorExportLayer(layerTypeType, shape1));
            }
            else if (shape2 != null)
            {
                layers.Add(new VectorExportLayer(layerTypeType, shape2));
            }
        }

        //--------------------------------------------------------------------------------------------------

    }
}