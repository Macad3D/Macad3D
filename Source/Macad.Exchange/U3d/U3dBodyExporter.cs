using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Macad.Common;
using Macad.Core;
using Macad.Core.Topology;
using Macad.Occt;
using Macad.Occt.Helper;

namespace Macad.Exchange.U3d;

internal sealed class U3dBodyExporter
{
    public static MemoryStream Export(IEnumerable<Body> bodies)
    {
        var exporter = new U3dBodyExporter();
        return exporter._Export(bodies);
    }

    //--------------------------------------------------------------------------------------------------

    U3dDomDocument _Document;
    Body[] _Bodies;
    readonly Dictionary<Layer, LayerBlocks> _LayerBlocksDict = new ();

    //--------------------------------------------------------------------------------------------------

    public U3dBodyExporter()
    {
    }

    //--------------------------------------------------------------------------------------------------
        
    MemoryStream _Export(IEnumerable<Body> bodies)
    {
        try
        {
            _Document = new U3dDomDocument();
            _Bodies = bodies.ToArray();

            _DoViews();
            _DoLayers();

            foreach (var body in _Bodies)
            {
                var shape = body.Shape.GetTransformedBRep();
                if (shape == null)
                    continue;

                var layerBlocks = _LayerBlocksDict[body.Layer];

                // Get Triangulation
                TriangulationData triangulation = TriangulationHelper.GetTriangulation(shape, true);
                if (triangulation.TriangleCount == 0)
                    continue;

                // Get unique Name
                string nodeName = _Document.GetUniqueName(body.Name);
                string meshName = _Document.GetUniqueName(nodeName + "_Mesh");

                // Create Content
                U3dDomModifierChain nodeChain = new (U3dDomModifierChain.ChainType.Node, nodeName);
                U3dDomModelNode modelNode = new(nodeChain, meshName)
                {
                    Parent = layerBlocks.GroupNode
                };
                U3dDomShadingModifier shader = new(nodeChain, layerBlocks.Shader);

                U3dDomModifierChain modelChain = new(U3dDomModifierChain.ChainType.ModelResource, meshName);
                U3dDomMeshDeclaration meshDecl = new(modelChain);
                U3dDomBaseMeshContinuation mesh = new(meshDecl)
                {
                    Positions = triangulation.Vertices,
                    Indices = triangulation.Indices,
                    Normals = triangulation.Normals,
                };

                // Success, add to document
                _Document.DeclarationBlocks.Add(nodeChain);
                _Document.DeclarationBlocks.Add(modelChain);
                _Document.ContinuationBlocks.Add(mesh);
            }

            var stream = _Document.WriteToStream();
            _Document = null;
            return stream;
        }
        catch (Exception e)
        {
            Messages.Exception($"Exception occured while exporting to U3D.", e);
            return null;
        }
    }

    //--------------------------------------------------------------------------------------------------
        
    #region Auxilliary objects - Layer, View

    void _DoViews()
    {
        var vp = CoreContext.Current?.Viewport;
        if (vp == null)
            return;

        U3dDomViewResource resource = new("ViewResource");
        _Document.DeclarationBlocks.Add(resource);

        var nodeName = _Document.GetUniqueName("View");
        U3dDomModifierChain nodeChain = new (U3dDomModifierChain.ChainType.Node, nodeName);
        _Document.DeclarationBlocks.Add(nodeChain);

        U3dDomViewNode viewNode = new(nodeChain, resource.Name)
        {
            Transform = new Ax3(vp.TargetPoint.Translated(new Vec(vp.TargetPoint, vp.EyePoint).Scaled(vp.Scale)), 
                                vp.GetViewDirection().Reversed(), 
                                vp.GetRightDirection()),
            OrthographicHeight = (float)vp.Size.Height
        };
    }

    //--------------------------------------------------------------------------------------------------

    struct LayerBlocks
    {
        internal U3dDomMaterial Material { get; }
        internal U3dDomLitTextureShader Shader { get; }
        internal U3dDomGroupNode GroupNode { get; }

        public LayerBlocks(U3dDomMaterial material, U3dDomLitTextureShader shader, U3dDomGroupNode groupNode)
        {
            Material = material;
            Shader = shader;
            GroupNode = groupNode;
        }
    }

    //--------------------------------------------------------------------------------------------------

    void _DoLayers()
    {
        var layers = _Bodies.Select(body => body.Layer).Distinct().ToArray();
        bool createGroupNodes = layers.Length > 1;

        foreach (var layer in layers)
        {
            var nodeName = _Document.GetUniqueName(layer.Name);
                
            var materialName = _Document.GetUniqueName(nodeName + "_Material");
            U3dDomMaterial material = new(materialName)
            {
                AmbientColor = layer.Color,
                DiffuseColor = layer.Color,
                SpecularColor = layer.Color.Lerp(Color.White, 0.5f),
                EmmisiveColor = Color.Black,
                Reflectivity = 0.1f,
                Opacity = 1.0f - layer.Transparency
            };

            var shaderName = _Document.GetUniqueName(nodeName + "_Shader");
            U3dDomLitTextureShader shader = new(shaderName)
            {
                Material = material
            };

            // Acrobat requires that material follows shader
            _Document.DeclarationBlocks.Add(shader);
            _Document.DeclarationBlocks.Add(material);

            U3dDomGroupNode groupNode = null;
            if (createGroupNodes)
            {
                U3dDomModifierChain nodeChain = new(U3dDomModifierChain.ChainType.Node, nodeName);
                groupNode = new(nodeChain);
                _Document.DeclarationBlocks.Add(nodeChain);
            }

            _LayerBlocksDict.Add(layer, new LayerBlocks(material, shader, groupNode));
        }
    }

    //--------------------------------------------------------------------------------------------------

    #endregion
}