
#include "solve.h"

using namespace System::Collections::Generic;
using namespace System::Diagnostics;

#define VALUEPTR(x) (parameters[x]->Pointer)

namespace Macad
{
	namespace SketchSolve
	{
		public enum class ConstraintType
		{
			PointOnPoint				= constraintType::pointOnPoint,
			PointToLine					= constraintType::pointToLine,
			PointOnLine					= constraintType::pointOnLine,
			Horizontal					= constraintType::horizontal,
			Vertical					= constraintType::vertical,
			InternalAngle				= constraintType::internalAngle,
			RadiusValue					= constraintType::radiusValue,
			TangentToArc				= constraintType::tangentToArc,
			TangentToArcStart			= constraintType::tangentToArcStart,
			TangentToArcEnd				= constraintType::tangentToArcEnd,
			TangentToCircle				= constraintType::tangentToCircle,
			ArcRules					= constraintType::arcRules,
			PointToPointDistance		= constraintType::P2PDistance,
			PointToPointDistanceVert	= constraintType::P2PDistanceVert,
			PointToPointDistanceHorz	= constraintType::P2PDistanceHorz,
			PointToLineDistance			= constraintType::P2LDistance,
			PointToLineDistanceVert		= constraintType::P2LDistanceVert,
			PointToLineDistanceHorz		= constraintType::P2LDistanceHorz,
			LineLength					= constraintType::lineLength,
			EqualLength					= constraintType::equalLength,
			ArcRadius					= constraintType::arcRadius,
			EqualRadiusArcs				= constraintType::equalRadiusArcs,
			EqualRadiusCircles			= constraintType::equalRadiusCircles,
			EqualRadiusCircArc			= constraintType::equalRadiusCircArc,
			ConcentricArcs				= constraintType::concentricArcs,
			ConcentricCircles			= constraintType::concentricCircles,
			ConcentricCircArc			= constraintType::concentricCircArc,
			CircleRadius				= constraintType::circleRadius,
			ExternalAngle				= constraintType::externalAngle,
			Parallel					= constraintType::parallel,
			Perpendicular				= constraintType::perpendicular,
			Colinear					= constraintType::colinear,
			PointOnCircle				= constraintType::pointOnCircle,
			PointOnArc					= constraintType::pointOnArc,
			PointOnLineMidpoint			= constraintType::pointOnLineMidpoint,
			PointOnArcMidpoint			= constraintType::pointOnArcMidpoint,
			PointOnCircleQuad			= constraintType::pointOnCircleQuad,
			SymmetricPoints				= constraintType::symmetricPoints,
			SymmetricLines				= constraintType::symmetricLines,
			SymmetricCircles			= constraintType::symmetricCircles,
			SymmetricArcs				= constraintType::symmetricArcs,
			PointOnArcStart				= constraintType::pointOnArcStart,
			PointOnArcEnd				= constraintType::pointOnArcEnd,
			ArcStartToArcEnd			= constraintType::arcStartToArcEnd,     
			ArcStartToArcStart			= constraintType::arcStartToArcStart,   
			ArcEndToArcEnd				= constraintType::arcEndToArcEnd,       
			ArcTangentToArc				= constraintType::arcTangentToArc,       
			CircleTangentToCircle		= constraintType::circleTangentToCircle, 
			CircleTangentToArc			= constraintType::circleTangentToArc,
			TangentToEllipse			= constraintType::tangentToEllipse,
			PointHorizontalDistance		= constraintType::pointHorizontalDistance,
			PointVerticalDistance		= constraintType::pointVerticalDistance,
		};

		//--------------------------------------------------------------------------------------------------

		public enum class Result
		{
			Success = 0,
			NoSolution = 1
		};

		//--------------------------------------------------------------------------------------------------

		public enum class Usage
		{
			Variable,
			Constant,
			Immutable
		};
		
		//--------------------------------------------------------------------------------------------------
		
		public ref class Parameter
		{
		public:
			double Value = 0.0;
			Usage Usage = Usage::Variable;
			int PointKey = -1;

			double* Pointer;
		};

		//--------------------------------------------------------------------------------------------------

		public value struct Point
		{
			int X;
			int Y;

			point ToNative(List<Parameter^>^ parameters)
			{
				point p;
				p.x = VALUEPTR(X);
				p.y = VALUEPTR(Y);
				return p;
			}
		};
		
		//--------------------------------------------------------------------------------------------------

		public value struct Line
		{
			Point P1;
			Point P2;

			line ToNative(List<Parameter^>^ parameters)
			{
				line l;
				l.p1 = P1.ToNative(parameters);
				l.p2 = P2.ToNative(parameters);
				return l;
			}
		};
		
		//--------------------------------------------------------------------------------------------------

		public value struct Circle
		{
			Point Center;
			int Radius;

			circle ToNative(List<Parameter^>^ parameters)
			{
				circle c;
				c.center = Center.ToNative(parameters);
				c.rad = VALUEPTR(Radius);
				return c;
			}
		};
		
		//--------------------------------------------------------------------------------------------------

		public value struct Arc
		{
			Point Start;
			Point End;
			Point Center;

			arc ToNative(List<Parameter^>^ parameters)
			{
				arc a;
				a.start = Start.ToNative(parameters);
				a.end = End.ToNative(parameters);
				a.center = Center.ToNative(parameters);
				return a;
			}
		};
		
		//--------------------------------------------------------------------------------------------------

		[DebuggerDisplay("{Type,nq}")]
		public value struct Constraint
		{
			ConstraintType Type;
			Point Point1;
			Point Point2;
			Line Line1;
			Line Line2;
			Line SymLine;
			Circle Circle1;
			Circle Circle2;
			Arc Arc1;
			Arc Arc2;
			int Parameter;

			constraint ToNative(List<SketchSolve::Parameter^>^ parameters)
			{
				constraint cons;
				cons.type = static_cast<constraintType>(Type);
				cons.point1 = Point1.ToNative(parameters);
				cons.point2 = Point2.ToNative(parameters);
				cons.line1 = Line1.ToNative(parameters);
				cons.line2 = Line2.ToNative(parameters);
				cons.SymLine = SymLine.ToNative(parameters);
				cons.circle1 = Circle1.ToNative(parameters);
				cons.circle2 = Circle2.ToNative(parameters);
				cons.arc1 = Arc1.ToNative(parameters);
				cons.arc2 = Arc2.ToNative(parameters);
				cons.parameter = VALUEPTR(Parameter);
				return cons;
			}
		};
		
		//--------------------------------------------------------------------------------------------------

		public ref class Solver
		{
		public:
			static Result Solve(List<Parameter^>^ parameters, List<Constraint>^ constraints, bool precise)
			{
				int curVariable = 0;
				int curConstant = parameters->Count-1;
				
				// Link parameters to native array
				double* pParameters = new double[parameters->Count];
				for each (Parameter^ parameter in parameters)
				{
					int index;
					if(parameter->Usage == Usage::Variable)
					{
						index = curVariable;
						curVariable++;
					}
					else 
					{
						index = curConstant;
						curConstant--;
					}
					parameter->Pointer = &pParameters[index];
					*parameter->Pointer = parameter->Value;
				}

				// Create variable address array
				const int numVariables = curVariable;
				double** ppParameters = new double*[numVariables];
				for (int i = 0; i<numVariables; i++)
				{
					ppParameters[i] = &(pParameters[i]);
				}

				// Create native constraint array
				constraint* pConstraints = new constraint[constraints->Count];
				for (int i = 0; i < constraints->Count; i++)
				{
					pConstraints[i] = constraints[i].ToNative(parameters);
				}

				// Call solver
				::Solver solver;
				const int result = solver.solve(ppParameters, numVariables, pConstraints, constraints->Count, precise ? fine : rough);
				if (result == succsess)
				{
					// Copy result parameters
					for each (Parameter^ parameter in parameters)
					{
						parameter->Value = *parameter->Pointer;
					}
				}

				// Clean up
				delete[] pConstraints;
				delete[] ppParameters;
				delete[] pParameters;

				return result == succsess ? Result::Success : Result::NoSolution;
			}
		};
	}
}

