using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Macad.Core.Geom;
using Macad.Core.Topology;
using Macad.Common;
using Macad.Common.Serialization;
using Macad.Occt;

namespace Macad.Core.Shapes
{
    public sealed class BoxJoint : ModifierBase
    {
        #region Properties

        public override ShapeType ShapeType
        {
            get { return ShapeType.Solid; }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public int BoxCount
        {
            get { return _BoxCount; }
            set
            {
                var clampedValue = Math.Max(2, value);
                if (_BoxCount != clampedValue)
                {
                    SaveUndo();
                    _BoxCount = clampedValue;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public bool RemoveExcess
        {
            get { return _RemoveExcess; }
            set
            {
                if (_RemoveExcess != value)
                {
                    SaveUndo();
                    _RemoveExcess = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        public BoxJoint AssociatedShape
        {
            get { return _AssociatedShape ?? _UpdateAssociatedShape(); }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public bool ReverseOrder
        {
            get { return _ReverseOrder; }
            set
            {
                if (_ReverseOrder != value)
                {
                    SaveUndo();
                    _ReverseOrder = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public bool IsFirst
        {
            get { return _IsFirst; }
            set
            {
                if (_IsFirst != value)
                {
                    SaveUndo();
                    _IsFirst = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public double Ratio
        {
            get { return _Ratio; }
            set
            {
                if (_Ratio != value)
                {
                    SaveUndo();
                    _Ratio = value.Clamp(0.01, 0.99);
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        [SerializeMember]
        public double[] CustomBoxRatios
        {
            get { return _CustomBoxRatios; }
            set
            {
                if (_CustomBoxRatios != value)
                {
                    SaveUndo();
                    _CustomBoxRatios = value;
                    Invalidate();
                    RaisePropertyChanged();
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Members

        BoxJoint _AssociatedShape;
        int _BoxCount;
        bool _RemoveExcess;
        bool _ReverseOrder;
        bool _IsFirst;
        double _Ratio;        
        double[] _CustomBoxRatios;

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Create

        public BoxJoint()
        {
            Name = "Box Joint";

            _BoxCount = 5;
            _ReverseOrder = false;
            _RemoveExcess = false;
            _IsFirst = false;
            _Ratio = 0.5;
            // OnDeserialized and _AssociatedShape_PropertyChanged needs to be updated for every synced property
        }

        //--------------------------------------------------------------------------------------------------

        public static (BoxJoint First, BoxJoint Second) Create(Body body1, Body body2)
        {
            Debug.Assert(body1 != null);
            Debug.Assert(body2 != null);

            var boxJoint1 = new BoxJoint();
            var boxJoint2 = new BoxJoint();

            boxJoint1.AddOperand(new BodyShapeOperand(body2, boxJoint2));
            boxJoint2.AddOperand(new BodyShapeOperand(body1, boxJoint1));

            body1.AddShape(boxJoint1);
            body2.AddShape(boxJoint2);

            boxJoint1._UpdateAssociatedShape();
            boxJoint2._UpdateAssociatedShape();

            boxJoint1.IsFirst = true;
            boxJoint2.IsFirst = false;

            return (boxJoint1, boxJoint2);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Make

        class MakeContext
        {
            internal TopoDS_Shape OwnBrep;
            internal TopoDS_Shape OtherBrep;
            internal List<TopoDS_Solid> Common;
            internal List<List<TopoDS_Solid>> Boxes = new List<List<TopoDS_Solid>>();
            internal TopoDS_Shape Result;
        }

        //--------------------------------------------------------------------------------------------------

        protected override bool MakeInternal(MakeFlags flags)
        {
            ClearSubshapeLists();

            // Check if connection is valid
            if (AssociatedShape == null)
                return Skip();

            var context = new MakeContext();

            if (!_DoInitContext(context))
                return false;

            // Build common Solid
            if (!_DoMakeCommon(context))
                return false;

            // Nothing in Common
            if (context.Common == null)
                return Skip();

            // Create box pieces
            if (!_DoCreateBoxes(context))
                return false;

            // Cutoff Excess
            if (_RemoveExcess && !_DoCutoffExcess(context))
                return false;

            // Cut box pieces out of the shape
            if (!_DoCutoutBoxes(context))
                return false;

            BRep = context.Result;

            return base.MakeInternal(flags);
        }

        //--------------------------------------------------------------------------------------------------

        bool _DoInitContext(MakeContext context)
        {
            // Currently we work with 2 source shape only
            if (Operands.Count != 2)
            {
                Messages.Error("This modifier needs exactly two operands.");
                return false;
            }

            // The second operand must be a body
            var op1Body = GetOperand(1) as BodyShapeOperand;
            if (op1Body == null)
            {
                Messages.Error("The associated operand is not a valid body.");
                return false;
            }

            if (AssociatedShape.Body != op1Body.Body)
            {
                Messages.Error("The associated shape is not found on the operand body.");
                return false;
            }

            // Get BReps
            context.OwnBrep = GetOperandBRep(0);
            if (context.OwnBrep == null)
            {
                Messages.Error("The predecessor shape is not valid.");
                return false;
            }

            context.OtherBrep = AssociatedShape.GetSourceBRep(GetCoordinateSystem());
            if (context.OtherBrep == null)
            {
                Messages.Error("The associated shape is not valid.");
                return false;
            }

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool _DoMakeCommon(MakeContext context)
        {
            // Make common
            var makeCommon = _IsFirst
                    ? new BRepAlgoAPI_Common(context.OwnBrep, context.OtherBrep)
                    : new BRepAlgoAPI_Common(context.OtherBrep, context.OwnBrep);

            if (!makeCommon.IsDone())
            {
                Messages.Error("Cannot find a common between both shapes.");
                return false;
            }

            var commonBrep = makeCommon.Shape();
            var solids = commonBrep.Solids();
            if (solids.Count == 0)
            {
                // Nothing in common
                return true;
            }

            context.Common = solids;

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool _DoCreateBoxes(MakeContext context)
        {
            foreach (var commonSolid in context.Common)
            {
                // Find smallest face
                var (_, startPlane, _, stopPlane) = FaceAlgo.FindFaceByAreaSize(commonSolid, (area1, area2) => area1 < area2);
                if (startPlane == null || stopPlane == null)
                {
                    Messages.Error("Cannot find two parallel plane faces in common shape.");
                    return false;
                }

                // Create offsets
                var vector = new Vec(startPlane.Value.Location, stopPlane.Value.Location);

                var cutPlaneOffsets = new double[BoxCount - 1];
                if (_CustomBoxRatios != null && _CustomBoxRatios.Length != 0)
                {
                    // Create by custom sizes
                    var sumParts = _CustomBoxRatios.Sum();
                    var planeOffset = 0.0;

                    for (int cutPlaneIndex = 0; cutPlaneIndex < _BoxCount - 1; cutPlaneIndex++)
                    {
                        planeOffset += _CustomBoxRatios[cutPlaneIndex];
                        cutPlaneOffsets[cutPlaneIndex] = planeOffset / sumParts;
                    }
                }
                else
                {
                    // Create by ratio
                    var firstPart = _IsFirst != _ReverseOrder ? _Ratio : 1.0 - _Ratio;
                    var sumParts = (BoxCount >> 1) * 1.0 + (_BoxCount & 1) * firstPart;
                    var planeOffset = 0.0;

                    for (int cutPlaneIndex = 0; cutPlaneIndex < _BoxCount - 1; cutPlaneIndex++)
                    {
                        planeOffset += (cutPlaneIndex & 1) > 0 ? 1.0 - firstPart : firstPart;
                        cutPlaneOffsets[cutPlaneIndex] = planeOffset / sumParts;
                    }
                }

                // Create cut tools
                var build = new BRep_Builder();
                var listOfTools = new TopTools_ListOfShape();


                for (int cutPlaneIndex = 0; cutPlaneIndex < cutPlaneOffsets.Length; cutPlaneIndex++)
                {
                    var cutplane = startPlane.Value.Translated(vector.Multiplied(cutPlaneOffsets[cutPlaneIndex]));
                    var face = new TopoDS_Face();
                    build.MakeFace(face, new Geom_Plane(cutplane), 1e-7);
                    listOfTools.Append(face);
                }

                // Split
                var listOfArguments = new TopTools_ListOfShape();
                listOfArguments.Append(commonSolid);
                var splitter = new BRepAlgoAPI_Splitter();
                splitter.SetArguments(listOfArguments);
                splitter.SetTools(listOfTools);
                splitter.Build();
                if (!splitter.IsDone())
                {
                    Messages.Error("Cannot split common shape into boxes.");
                    return false;
                }

                context.Boxes.Add(splitter.Shape().Solids());
            }

            return true;
        }

        //--------------------------------------------------------------------------------------------------

        bool _DoCutoutBoxes(MakeContext context)
        {
            var listOfTools = new TopTools_ListOfShape();
            foreach (var boxes in context.Boxes)
            {
                for (int boxIndex = _ReverseOrder == _IsFirst ? 0 : 1; boxIndex < boxes.Count; boxIndex += 2)
                {
                    listOfTools.Append(boxes[boxIndex]);
                }
            }

            var listOfArguments = new TopTools_ListOfShape();
            listOfArguments.Append(context.OwnBrep);

            var cutter = new BRepAlgoAPI_Cut();
            cutter.SetArguments(listOfArguments);
            cutter.SetTools(listOfTools);
            cutter.Build();
            if (!cutter.IsDone())
            {
                Messages.Error("Cannot cut boxes out of shape.");
                return false;
            }

            context.Result = cutter.Shape();
            UpdateModifiedSubshapes(context.OwnBrep, cutter);

            return true;
        }

        //--------------------------------------------------------------------------------------------------
        
        bool _DoCutoffExcess(MakeContext context)
        {
            var listOfArguments = new TopTools_ListOfShape();
            listOfArguments.Append(context.OwnBrep);

            // Cutout Commons
            var listOfTools = new TopTools_ListOfShape();
            foreach (var commonSolid in context.Common)
            {
                listOfTools.Append(commonSolid);
            }

            var cutter = new BRepAlgoAPI_Cut();
            cutter.SetArguments(listOfArguments);
            cutter.SetTools(listOfTools);
            cutter.Build();
            if (!cutter.IsDone())
            {
                Messages.Error("Cannot determine excess of instrusion.");
                return false;
            }

            // Check if we have more solids than before
            var originalSolidCount = context.OwnBrep.Solids().Count;
            var solids = cutter.Shape().Solids();
            var excessCount = solids.Count - originalSolidCount;
            if (excessCount <= 0)
                return true; // No excess found

            // Cutout additional solids
            listOfTools = new TopTools_ListOfShape();
            var orderedSolids = solids.OrderBy(solid => solid.Volume()).Take(excessCount);
            foreach (var solid in orderedSolids)
            {
                listOfTools.Append(solid);
            }

            cutter = new BRepAlgoAPI_Cut();
            cutter.SetArguments(listOfArguments);
            cutter.SetTools(listOfTools);
            cutter.Build();
            if (!cutter.IsDone())
            {
                Messages.Error("Cannot remove excess of instrusion from shape.");
                return false;
            }

            UpdateModifiedSubshapes(context.OwnBrep, cutter);
            context.OwnBrep = cutter.Shape();
            return true;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Interconnectivity Functions

        TopoDS_Shape GetSourceBRep(Ax3 targetFrame)
        {
            var transformedBrep = GetOperandBRep(0)?.Moved(new TopLoc_Location(new Trsf(Body.GetCoordinateSystem(), targetFrame)));
            return transformedBrep;
        }

        //--------------------------------------------------------------------------------------------------
        
        void _AssociatedShape_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            if (sender != _AssociatedShape)
                return;

            if (e.PropertyName == nameof(BoxCount))
            {
                BoxCount = _AssociatedShape.BoxCount;
            }
            else if (e.PropertyName == nameof(ReverseOrder))
            {
                ReverseOrder = _AssociatedShape.ReverseOrder;
            }
            else if (e.PropertyName == nameof(Ratio))
            {
                Ratio = 1.0 - _AssociatedShape.Ratio;
            }
            else if (e.PropertyName == nameof(CustomBoxRatios))
            {
                CustomBoxRatios = _AssociatedShape.CustomBoxRatios;
            }
            else if (e.PropertyName == nameof(Body))
            {
                if (_AssociatedShape != null && _AssociatedShape.Body == null)
                {
                    _AssociatedShape = null;
                    Body?.RemoveShape(this);
                }
            }
        }

        //--------------------------------------------------------------------------------------------------

        BoxJoint _UpdateAssociatedShape()
        {
            if (_AssociatedShape != null)
            {
                _AssociatedShape.PropertyChanged -= _AssociatedShape_PropertyChanged;
                _AssociatedShape.RemoveDependent(this);
            }

            _AssociatedShape = null;

            if (Operands.Count != 2)
                return null;

            var secondBodyOperand = GetOperand(1) as BodyShapeOperand;
            if(secondBodyOperand == null)
                return null;

            _AssociatedShape = secondBodyOperand.Shape as BoxJoint;
            if (_AssociatedShape == null)
                return null;

            _AssociatedShape.PropertyChanged += _AssociatedShape_PropertyChanged;
            _AssociatedShape.AddDependent(this);

            return _AssociatedShape;
        }

        //--------------------------------------------------------------------------------------------------

        public override void OnDeserialized(SerializationContext context)
        {
            base.OnDeserialized(context);

            if (context.Scope == SerializationScope.CopyPaste && _UpdateAssociatedShape() != null)
            {
                // Check if the back reference is still valid
                if (_AssociatedShape.Guid != Guid)
                {
                    // Create Clone
                    var boxJoint2 = new BoxJoint();
                    boxJoint2.AddOperand(new BodyShapeOperand(Body, this));
                    boxJoint2.RemoveExcess = _RemoveExcess;
                    boxJoint2.IsFirst = !_IsFirst;
                    boxJoint2.ReverseOrder = _ReverseOrder;
                    boxJoint2.Ratio = 1.0 - _Ratio;
                    boxJoint2.CustomBoxRatios = _CustomBoxRatios;

                    _AssociatedShape.Body.AddShape(boxJoint2);
                    Operands[1] = new BodyShapeOperand(boxJoint2.Body, boxJoint2);

                    RaisePropertyChanged(nameof(BoxCount));
                    RaisePropertyChanged(nameof(ReverseOrder));
                    RaisePropertyChanged(nameof(Ratio));
                    RaisePropertyChanged(nameof(CustomBoxRatios));
                }
            }

            _UpdateAssociatedShape();
        }

        //--------------------------------------------------------------------------------------------------

        public override bool CanReplaceOperand(int operandIndex)
        {
            return operandIndex == 0;
        }

        //--------------------------------------------------------------------------------------------------

        #endregion

        #region Invalidation

        protected override void OnOperandShapeInvalidated(IShapeOperand operand)
        {
            // Only invalidate if this comes directly from our associated shape
            // or our direct predecessor, 
            // since we're not interested in changed in shapes after that.
            // Also not in the general body notification (e.g. changes to root shape)
            if(operand != Predecessor && operand != _AssociatedShape)
                return;

            base.OnOperandShapeInvalidated(operand);
        }

        //--------------------------------------------------------------------------------------------------

        #endregion
    }
}