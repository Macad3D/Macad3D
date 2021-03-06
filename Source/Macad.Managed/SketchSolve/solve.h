/*
 * solve.h
 *
 *  Created on: May 4, 2009
 *      Author: Jonathan
 *      Copyright (c) 2009, Jonathan George
 *      This program is released under the BSD license. See the file License.txt for details.
 */
#include <iostream>
#include <set>
#include <map>
#include <list>
#include <vector>
#ifndef WIN32
        #define _hypot hypot
#endif

//This define selects between the old arc define by start point end point and center point
// and the new arc defined by a centerpoint, radius, start angle, and end angle
#undef NEWARC
// Eventually after everything is changed we will get rid of the old arc type.


#ifndef SOLVE_H_
#define SOLVE_H_

#ifndef M_PI
#define M_PI           3.14159265358979323846
#endif

enum constraintType
{
pointOnPoint,
pointToLine,    
pointOnLine,     
horizontal,      
vertical,        
internalAngle,   
radiusValue,     
tangentToArc,    
tangentToArcStart,
tangentToArcEnd,
tangentToCircle, 
arcRules,        
P2PDistance,     
P2PDistanceVert,  
P2PDistanceHorz,  
P2LDistance,      
P2LDistanceVert,  
P2LDistanceHorz,  
lineLength,        
equalLength,       
arcRadius,         
equalRadiusArcs,   
equalRadiusCircles,
equalRadiusCircArc,
concentricArcs,   
concentricCircles,
concentricCircArc,
circleRadius,     
externalAngle,    
parallel,         
perpendicular,    
colinear,         
pointOnCircle,    
pointOnArc,       
pointOnLineMidpoint,
pointOnArcMidpoint, 
pointOnCircleQuad,  
symmetricPoints,    
symmetricLines,     
symmetricCircles,   
symmetricArcs,        
pointOnArcStart,      
pointOnArcEnd,        
arcStartToArcEnd,     
arcStartToArcStart,   
arcEndToArcEnd,       
arcTangentToArc,       
circleTangentToCircle, 
circleTangentToArc,
tangentToEllipse,
pointHorizontalDistance,
pointVerticalDistance
};

///////////////////////////////////////
/// BFGS Solver parameters
///////////////////////////////////////
#define pertMag           1e-6
#define pertMin                   1e-10
#define XconvergenceRough 1e-8
#define XconvergenceFine  1e-10
#define smallF            1e-20
#define validSolutionFine  1e-12
#define validSoltuionRough 1e-4
#define rough             0
#define fine              1
#define MaxIterations     50 //Note that the total number of iterations allowed is MaxIterations *xLength

///////////////////////////////////////
/// Solve exit codes
///////////////////////////////////////

#define succsess 0
#define noSolution 1

class point
{
public:
        point(){x = 0; y = 0;}
        double * x;
        double * y;
};

class line
{
public:
        line(){}
        point p1;
        point p2;
};


class arc
{
	public:
	arc(){startAngle=0;endAngle=0;rad=0;}
	double *startAngle;
	double *endAngle;
	double *rad;//This is called parameter in the constraint class.
	point start;
	point end;
	point center;
};

class circle
{
public:
        circle(){rad = 0;}
        point center;
        double *rad;
};

class ellipse
{
public:
        ellipse(){radone = 0;radtwo=0;rot=0;}
        point center;
        double *radone;
		double *radtwo;
		double *rot;
};

class constraint
{
public:
        constraint(){parameter = 0;}
        constraintType type;
        point point1;
        point point2;
        line line1;
        line line2;
        line SymLine;
        circle circle1;
        circle circle2;
		ellipse ellipse1;
		ellipse ellipse2;
        arc arc1;
        arc arc2;
        double *parameter; //radius, length, angle etc...
};



void debugprint(std::string s);

enum varLocation
{
   Vector,
   Static
};

enum dependencyType
{
   line1,
   line2,
   point1,
   point2,
   parameter,
   arc1,
   arc2,
   circle1,
   circle2,
   line1_p1,
   line1_p2,
   line2_p1,
   line2_p2,
   arc1_center,
   arc2_center,
   circle1_center,
   circle2_center,
   line1_p1_x,
   line1_p1_y,
   line1_p2_x,
   line1_p2_y,
   line2_p1_x,
   line2_p1_y,
   line2_p2_x,
   line2_p2_y,
   arc1_center_x,
   arc1_center_y,
   arc2_center_x,
   arc2_center_y,
   circle1_center_x,
   circle1_center_y,
   circle2_center_x,
   circle2_center_y,
   arc1_rad,
   arc2_rad,
   circle1_rad,
   circle2_rad,
   arc1_startAngle,
   arc1_endAngle,
   arc2_startAngle,
   arc2_endAngle,
   ellipse1,
   ellipse2,
   ellipse1_center,
   ellipse2_center,
   ellipse1_center_x,
   ellipse1_center_y,
   ellipse2_center_x,
   ellipse2_center_y,
   ellipse1_rad1,
   ellipse2_rad1,
   ellipse1_rad2,
   ellipse2_rad2,
   ellipse1_rot,
   ellipse2_rot
};

class SolveImpl;

class SolveImpl
{
	std::vector<double(*)(std::vector<double>&)> errors;
	std::vector<std::vector<dependencyType> > dependencies;
	std::set<constraintType> depset;
	std::vector<std::vector<std::pair<varLocation,void*> > > constraintvars;
	std::vector<double* > myvec;
	std::vector<constraintType> constrainttypes;
	std::map<double*,std::pair<varLocation,void*> > mapparms;
	std::map<size_t,std::vector<size_t> > vecmap;
	std::set<double*> mapset;
	std::vector<double> pvec;
	size_t next_vector;

	void LoadDouble(std::vector<std::pair<varLocation,void*> > &mylist, double *d, int c);
	void LoadPoint(std::vector<std::pair<varLocation,void*> > &mylist, point p, int c);
	void LoadLine(std::vector<std::pair<varLocation,void*> > &mylist,line l, int c);
	void LoadArc(std::vector<std::pair<varLocation,void*> > &mylist,arc a, int c);
	void LoadCircle(std::vector<std::pair<varLocation,void*> > &mylist,circle c, int con);
	void LoadEllipse(std::vector<std::pair<varLocation,void*> > &mylist,ellipse e, int con);
	void registerconstraint(constraintType,double(*)(std::vector<double>&));
	void registerdependency(constraintType,dependencyType);
	double GetErrorForGrad(int i);

protected:
	std::map<double*,int> parms;

public:
	SolveImpl();
	~SolveImpl();

	void Load(constraint* c, int nconstraints, double** p, int nparms);
	void Load(constraint &c);
	void Unload();
	double GetError();
	double GetError(int i);

	int GetVectorSize() const;
	double GetInitialValue(int i);
	double GetGradient(int i, double pert);
	virtual double GetElement(size_t i) =0; //Pure virtual
	virtual void SetElement(size_t i, double v) = 0;
	virtual int solve(double  **x,int xLength, constraint * cons, int consLength, int isFine) = 0;
};

class Solver: public SolveImpl
{
	int xLength;
	std::vector<double> x;
	double **xsave;
	std::vector<double> origSolution;
	std::vector<double> grad;
	std::vector<double> s;
	std::vector<std::vector<double> > N;
	std::vector<double> xold;
	std::vector<double> deltaX;
	std::vector<double> gradnew;
	std::vector<double> gamma;
	std::vector<double> gammatDotN;
	std::vector<std::vector<double> > FirstSecond;
    std::vector<std::vector<double> > deltaXDotGammatDotN;
    std::vector<std::vector<double> > gammatDotDeltaXt;
    std::vector<std::vector<double> > NDotGammaDotDeltaXt;

	void allocate(int xLength);
	int solveI(double  **x,int xLength, constraint * cons, int consLength, int isFine);
	void deallocate();
public:
	Solver();
	~Solver();
	
	int solve(double  **x,int xLength, constraint * cons, int consLength, int isFine);
	double GetElement(size_t i){return x[i];}
	void SetElement(size_t i, double v) { x[i] = v;}
};

//Function Prototypes
double calc(constraint * cons, int consLength);
void derivatives(double **x,double *gradF,int xLength, constraint * cons, int consLength);

//Error functions
double HorizontalError(std::vector<double> &parms);
double ParallelError(std::vector<double> &parms);
double VerticalError(std::vector<double> &parms);
double PointOnPointError(std::vector<double> &parms);
double P2PDistanceError(std::vector<double> &parms);
double P2PDistanceHorzError(std::vector<double> &parms);
double P2PDistanceVertError(std::vector<double> &parms);
double PointOnLineError(std::vector<double> &parms);
double P2LDistanceError(std::vector<double> &parms);
double P2LDistanceVertError(std::vector<double> &parms);
double P2LDistanceHorzError(std::vector<double> &parms);
double LineLengthError(std::vector<double> &parms);
double EqualLengthError(std::vector<double> &parms);
double EqualScalarError(std::vector<double> &parms);
double PointOnArcAngleError(std::vector<double> &parms);
double PerpendicularError(std::vector<double> &parms);
double ArcAngleOnArcAngleError(std::vector<double> &parms);
double ColinearError(std::vector<double>& parms);
double LinePerpToAngleError(std::vector<double>& parms);
double EllipseTangentError(std::vector<double>& parms);
double PointOnLineMidpointError(std::vector<double>& parms);
double PointHorizontalDistanceError(std::vector<double>& parms);
double PointVerticalDistanceError(std::vector<double>& parms);
double InternalAngleError(std::vector<double>& parms);
double ExternalAngleError(std::vector<double>& parms);


#endif /* SOLVE_H_ */
