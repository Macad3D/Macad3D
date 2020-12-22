/*
 * solve.cpp
 *
 *  Created on: May 4, 2009
 *      Author: Jonathan George
 *      This
 *      Copyright (c) 2009, Jonathan George
 *      This program is released under the BSD license. See the file COPYING for details.
 *
 */	

#include "solve.h"
#include <cmath>
#include <stdlib.h>
#include <sstream>

using namespace std;

void SolveImpl::LoadDouble(std::vector<std::pair<varLocation,void*> > &mylist, double *d, int c)
{
	if(parms[d])
	{
		//many vars may already be in the vector, must check and remap
		if(mapset.find(d) != mapset.end())
		{
			std::pair<varLocation,void*> tparm = mapparms[d];
			mylist.push_back(tparm);
			if(tparm.first == Vector)
				vecmap[(size_t)tparm.second].push_back(c);
			return;
		}

		vecmap[next_vector].push_back(c);
        std::pair<varLocation,void*> newloc(Vector,(void*)next_vector++);
		mylist.push_back(newloc);
		mapparms[d] = newloc;
		mapset.insert(d);
		myvec.push_back(d);
		return;
	}

	mylist.push_back(std::pair<varLocation,void*>(Static,d));
}

void SolveImpl::LoadPoint(std::vector<std::pair<varLocation,void*> > &mylist, point p, int c)
{
	LoadDouble(mylist,p.x,c);
	LoadDouble(mylist,p.y,c);
}

void SolveImpl::LoadLine(std::vector<std::pair<varLocation,void*> > &mylist,line l, int c)
{
	LoadPoint(mylist,l.p1,c);
	LoadPoint(mylist,l.p2,c);
}

void SolveImpl::LoadArc(std::vector<std::pair<varLocation,void*> > &mylist,arc a, int c)
{
	LoadPoint(mylist,a.center,c);
	LoadDouble(mylist,a.startAngle,c);
	LoadDouble(mylist,a.endAngle,c);
	LoadDouble(mylist,a.rad,c);
}

void SolveImpl::LoadCircle(std::vector<std::pair<varLocation,void*> > &mylist,circle c, int con)
{
	LoadPoint(mylist,c.center,con);
	LoadDouble(mylist,c.rad,con);
}

void SolveImpl::LoadEllipse(std::vector<std::pair<varLocation,void*> > &mylist,ellipse e, int con)
{
	LoadPoint(mylist,e.center,con);
	LoadDouble(mylist,e.radone,con);
	LoadDouble(mylist,e.radtwo,con);
	LoadDouble(mylist,e.rot,con);
}

SolveImpl::SolveImpl()
{
	next_vector=0;
	pvec.resize(50);

	registerdependency(tangentToEllipse,line1);
	registerdependency(tangentToEllipse,ellipse1);
	registerconstraint(tangentToEllipse,EllipseTangentError);


	registerdependency(parallel,line1);
	registerdependency(parallel,line2);
	registerconstraint(parallel,ParallelError);

	registerdependency(perpendicular,line1);
	registerdependency(perpendicular,line2);
	registerconstraint(perpendicular,PerpendicularError);

	registerdependency(horizontal,line1);
	registerconstraint(horizontal,HorizontalError);

	registerdependency(vertical,line1);
	registerconstraint(vertical,VerticalError);

	registerdependency(pointOnPoint,point1);
	registerdependency(pointOnPoint,point2);
	registerconstraint(pointOnPoint,PointOnPointError);

	registerdependency(pointOnLineMidpoint,line1);
	registerdependency(pointOnLineMidpoint,point1);
	registerconstraint(pointOnLineMidpoint,PointOnLineMidpointError);


	registerdependency(P2PDistance,point1);
	registerdependency(P2PDistance,point2);
	registerdependency(P2PDistance,parameter);
	registerconstraint(P2PDistance,P2PDistanceError);

	registerdependency(pointOnCircle,point1);
	registerdependency(pointOnCircle,circle1_center);
	registerdependency(pointOnCircle,circle1_rad);
	registerconstraint(pointOnCircle,P2PDistanceError);

	registerdependency(pointOnArc,point1);
	registerdependency(pointOnArc,arc1_center);
	registerdependency(pointOnArc,arc1_rad);
	registerconstraint(pointOnArc,P2PDistanceError);

	registerdependency(P2PDistanceVert,point1);
	registerdependency(P2PDistanceVert,point2);
	registerdependency(P2PDistanceVert,parameter);
	registerconstraint(P2PDistanceVert,P2PDistanceVertError);

	registerdependency(P2PDistanceHorz,point1);
	registerdependency(P2PDistanceHorz,point2);
	registerdependency(P2PDistanceHorz,parameter);
	registerconstraint(P2PDistanceHorz,P2PDistanceHorzError);

	registerdependency(pointOnLine,line1);
	registerdependency(pointOnLine,point1);
	registerconstraint(pointOnLine,PointOnLineError);

	registerdependency(P2LDistance,line1);
	registerdependency(P2LDistance,point1);
	registerdependency(P2LDistance,parameter);
	registerconstraint(P2LDistance,P2LDistanceError);

	registerdependency(P2LDistanceHorz,line1);
	registerdependency(P2LDistanceHorz,point1);
	registerdependency(P2LDistanceHorz,parameter);
	registerconstraint(P2LDistanceHorz,P2LDistanceHorzError);

	registerdependency(P2LDistanceVert,line1);
	registerdependency(P2LDistanceVert,point1);
	registerdependency(P2LDistanceVert,parameter);
	registerconstraint(P2LDistanceVert,P2LDistanceVertError);


	registerdependency(tangentToCircle,line1);
	registerdependency(tangentToCircle,circle1_center);
	registerdependency(tangentToCircle,circle1_rad);
	registerconstraint(tangentToCircle,P2LDistanceError);

	registerdependency(tangentToArc,line1);
	registerdependency(tangentToArc,arc1_center);
	registerdependency(tangentToArc,arc1_rad);
	registerconstraint(tangentToArc,P2LDistanceError);

	registerdependency(tangentToArcStart,line1);
	registerdependency(tangentToArcStart,arc1_startAngle);
	registerconstraint(tangentToArcStart,LinePerpToAngleError);

	registerdependency(tangentToArcEnd,line1);
	registerdependency(tangentToArcEnd,arc1_endAngle);
	registerconstraint(tangentToArcEnd,LinePerpToAngleError);
	
	registerdependency(lineLength,line1);
	registerdependency(lineLength,parameter);
	registerconstraint(lineLength,LineLengthError);

	registerdependency(equalLength,line1);
	registerdependency(equalLength,line2);
	registerconstraint(equalLength,EqualLengthError);

	registerdependency(arcRadius,arc1_rad);
	registerdependency(arcRadius,parameter);
	registerconstraint(arcRadius,EqualScalarError);

	registerdependency(circleRadius,circle1_rad);
	registerdependency(circleRadius,parameter);
	registerconstraint(circleRadius,EqualScalarError);

	registerdependency(equalRadiusArcs,arc1_rad);
	registerdependency(equalRadiusArcs,arc2_rad);
	registerconstraint(equalRadiusArcs,EqualScalarError);

	registerdependency(equalRadiusCircles,circle1_rad);
	registerdependency(equalRadiusCircles,circle2_rad);
	registerconstraint(equalRadiusCircles,EqualScalarError);

	registerdependency(equalRadiusCircArc,arc1_rad);
	registerdependency(equalRadiusCircArc,circle1_rad);
	registerconstraint(equalRadiusCircArc,EqualScalarError);

	registerdependency(concentricArcs,arc1_center);
	registerdependency(concentricArcs,arc2_center);
	registerconstraint(concentricArcs,PointOnPointError);

	registerdependency(concentricCircles,circle1_center);
	registerdependency(concentricCircles,circle2_center);
	registerconstraint(concentricCircles,PointOnPointError);

	registerdependency(concentricCircArc,arc1_center);
	registerdependency(concentricCircArc,circle1_center);
	registerconstraint(concentricCircArc,PointOnPointError);

	registerdependency(pointOnArcStart,point1);
	registerdependency(pointOnArcStart,arc1_center);
	registerdependency(pointOnArcStart,arc1_rad);
	registerdependency(pointOnArcStart,arc1_startAngle);
	registerconstraint(pointOnArcStart,PointOnArcAngleError);

	registerdependency(pointOnArcEnd,point1);
	registerdependency(pointOnArcEnd,arc1_center);
	registerdependency(pointOnArcEnd,arc1_rad);
	registerdependency(pointOnArcEnd,arc1_endAngle);
	registerconstraint(pointOnArcEnd,PointOnArcAngleError);
	
	registerdependency(arcEndToArcEnd,arc1_center);
	registerdependency(arcEndToArcEnd,arc1_rad);
	registerdependency(arcEndToArcEnd,arc1_endAngle);
	registerdependency(arcEndToArcEnd,arc2_center);
	registerdependency(arcEndToArcEnd,arc2_rad);
	registerdependency(arcEndToArcEnd,arc2_endAngle);
	registerconstraint(arcEndToArcEnd,ArcAngleOnArcAngleError);

	registerdependency(arcStartToArcEnd,arc1_center);
	registerdependency(arcStartToArcEnd,arc1_rad);
	registerdependency(arcStartToArcEnd,arc1_startAngle);
	registerdependency(arcStartToArcEnd,arc2_center);
	registerdependency(arcStartToArcEnd,arc2_rad);
	registerdependency(arcStartToArcEnd,arc2_endAngle);
	registerconstraint(arcStartToArcEnd,ArcAngleOnArcAngleError);	

	registerdependency(arcStartToArcStart,arc1_center);
	registerdependency(arcStartToArcStart,arc1_rad);
	registerdependency(arcStartToArcStart,arc1_startAngle);
	registerdependency(arcStartToArcStart,arc2_center);
	registerdependency(arcStartToArcStart,arc2_rad);
	registerdependency(arcStartToArcStart,arc2_startAngle);
	registerconstraint(arcStartToArcStart,ArcAngleOnArcAngleError);	

	registerdependency(colinear,line1);
	registerdependency(colinear,line2);
	registerconstraint(colinear,ColinearError);

	registerdependency(pointHorizontalDistance,point1);
	registerdependency(pointHorizontalDistance,parameter);
	registerconstraint(pointHorizontalDistance,PointHorizontalDistanceError);

	registerdependency(pointVerticalDistance,point1);
	registerdependency(pointVerticalDistance,parameter);
	registerconstraint(pointVerticalDistance,PointVerticalDistanceError);

	registerdependency(internalAngle,line1);
	registerdependency(internalAngle,line2);
	registerdependency(internalAngle,parameter);
	registerconstraint(internalAngle,InternalAngleError);

	registerdependency(externalAngle,line1);
	registerdependency(externalAngle,line2);
	registerdependency(externalAngle,parameter);
	registerconstraint(externalAngle,ExternalAngleError);
}

SolveImpl::~SolveImpl()
{
}

void SolveImpl::Load(constraint *c, int nconstraints, double** p, int nparms)
{
	constraintvars.clear();
	myvec.clear();
	constrainttypes.clear();
	mapparms.clear();
	mapset.clear();
	next_vector=0;
	parms.clear();
	vecmap.clear();

	for(int i=0; i < nparms; i++)
	{
		parms[p[i]] = 1;
	}

	for(int i=0; i < nconstraints; i++)
	{
		Load(c[i]);
	}
}

double SolveImpl::GetErrorForGrad(int i)
{
	double error = 0;
	for(unsigned int j = 0; j < vecmap[i].size(); j++)
	{
		int cindex = (int)vecmap[i][j];
		error += GetError(cindex);
	}
	return error;
}

double SolveImpl::GetGradient(int i, double pert)
{
	double OldValue = GetElement(i);
	SetElement(i,OldValue-pert);
	double e1 = GetErrorForGrad(i);
	SetElement(i,OldValue+pert);
	double e2 = GetErrorForGrad(i);
	SetElement(i,OldValue);
	return .5*(e2-e1)/pert;
}

double SolveImpl::GetError()
{
	double error = 0;

	for(unsigned int i=0; i < constrainttypes.size(); i++)
	{
		error += GetError(i);
	}
	return error;
}

double SolveImpl::GetError(int i)
{
	int count=0;
	std::vector<std::pair<varLocation,void*> > tlist = constraintvars[i];
	std::vector<std::pair<varLocation,void*> >::iterator it3;
	for(it3 = tlist.begin(); it3 != tlist.end(); ++it3)
	{
		std::pair<varLocation,void*> tvar = *it3;
		if(tvar.first == Vector)
			pvec[count++]=GetElement((size_t)tvar.second);
		else
			pvec[count++] = *((double*)tvar.second);
	}
	return errors[constrainttypes[i]](pvec);
}

void SolveImpl::Load(constraint &c)
{
	std::vector<std::pair<varLocation,void*> > mylist;
	std::vector<dependencyType>::iterator it;
	int count = (int)constrainttypes.size();
	for(unsigned int i = 0; i < dependencies[c.type].size(); i++)
	{
		switch(dependencies[c.type][i])
		{
			case line1: LoadLine(mylist,c.line1,count); break;
			case line1_p1: LoadPoint(mylist,c.line1.p1,count); break;
			case line1_p1_x: LoadDouble(mylist,c.line1.p1.x,count); break;
			case line1_p1_y: LoadDouble(mylist,c.line1.p1.y,count); break;
			case line1_p2: LoadPoint(mylist,c.line2.p2,count); break;
			case line1_p2_x: LoadDouble(mylist,c.line1.p2.x,count); break;
			case line1_p2_y: LoadDouble(mylist,c.line1.p2.y,count); break;
			case line2: LoadLine(mylist,c.line2,count); break;
			case line2_p1: LoadPoint(mylist,c.line2.p1,count); break;
			case line2_p1_x: LoadDouble(mylist,c.line2.p1.x,count); break;
			case line2_p1_y: LoadDouble(mylist,c.line2.p1.y,count); break;
			case line2_p2: LoadPoint(mylist,c.line2.p2,count); break;
			case line2_p2_x: LoadDouble(mylist,c.line2.p2.x,count); break;
			case line2_p2_y: LoadDouble(mylist,c.line2.p2.y,count); break;
			case point1: LoadPoint(mylist,c.point1,count); break;
			case point2: LoadPoint(mylist,c.point2,count); break;
			case parameter: LoadDouble(mylist,c.parameter,count); break;
			case arc1: LoadArc(mylist,c.arc1,count); break;
			case arc1_rad: LoadDouble(mylist,c.arc1.rad,count); break;
			case arc1_startAngle: LoadDouble(mylist,c.arc1.startAngle,count); break;
			case arc1_endAngle: LoadDouble(mylist,c.arc1.endAngle,count); break;
			case arc1_center: LoadPoint(mylist,c.arc1.center,count); break;
			case arc1_center_x: LoadDouble(mylist,c.arc1.center.x,count); break;
			case arc1_center_y: LoadDouble(mylist,c.arc1.center.y,count); break;
			case arc2: LoadArc(mylist,c.arc2,count); break;
			case arc2_rad: LoadDouble(mylist,c.arc2.rad,count); break;
			case arc2_startAngle: LoadDouble(mylist,c.arc2.startAngle,count); break;
			case arc2_endAngle: LoadDouble(mylist,c.arc2.endAngle,count); break;
			case arc2_center: LoadPoint(mylist,c.arc2.center,count); break;
			case arc2_center_x: LoadDouble(mylist,c.arc2.center.x,count); break;
			case arc2_center_y: LoadDouble(mylist,c.arc2.center.y,count); break;
			case circle1: LoadCircle(mylist,c.circle1,count); break;
			case circle1_rad: LoadDouble(mylist,c.circle1.rad,count); break;
			case circle1_center: LoadPoint(mylist,c.circle1.center,count); break;
			case circle1_center_x: LoadDouble(mylist,c.circle1.center.x,count); break;
			case circle1_center_y: LoadDouble(mylist,c.circle1.center.y,count); break;
			case circle2: LoadCircle(mylist,c.circle2,count); break;
			case circle2_rad: LoadDouble(mylist,c.circle2.rad,count); break;
			case circle2_center: LoadPoint(mylist,c.circle2.center,count); break;
			case circle2_center_x: LoadDouble(mylist,c.circle2.center.x,count); break;
			case circle2_center_y: LoadDouble(mylist,c.circle2.center.y,count); break;
			case ellipse1: LoadEllipse(mylist,c.ellipse1,count); break;
			case ellipse2: LoadEllipse(mylist,c.ellipse2,count); break;
			case ellipse1_center: LoadPoint(mylist,c.ellipse1.center,count); break;
			case ellipse2_center: LoadPoint(mylist,c.ellipse2.center,count); break;
			case ellipse1_center_x: LoadDouble(mylist,c.ellipse1.center.x,count); break;
			case ellipse1_center_y: LoadDouble(mylist,c.ellipse1.center.y,count); break;
			case ellipse2_center_x: LoadDouble(mylist,c.ellipse2.center.x,count); break;
			case ellipse2_center_y: LoadDouble(mylist,c.ellipse2.center.y,count); break;
			case ellipse1_rad1: LoadDouble(mylist,c.ellipse1.radone,count); break;
			case ellipse1_rad2: LoadDouble(mylist,c.ellipse1.radtwo,count); break;
			case ellipse1_rot: LoadDouble(mylist,c.ellipse1.rot,count); break;
			case ellipse2_rad1: LoadDouble(mylist,c.ellipse2.radone,count); break;
			case ellipse2_rad2: LoadDouble(mylist,c.ellipse2.radtwo,count); break;
			case ellipse2_rot: LoadDouble(mylist,c.ellipse2.rot,count); break;
		}
	}
	constraintvars.push_back(mylist);
	constrainttypes.push_back(c.type);
}

void SolveImpl::Unload()
{
	//For every item in mapparms, copy variable from vector into pointer
	std::map<double*,std::pair<varLocation,void*> >::iterator it;
	for(it = mapparms.begin(); it != mapparms.end(); ++it)
	{
		std::pair<varLocation, void*> parm = (*it).second;
		double* location = (*it).first;

		if(parm.first != Vector)
			continue;

		*location = GetElement((size_t)parm.second);
	}
}

void SolveImpl::registerconstraint(constraintType type,double(*error)(std::vector<double>&))
{
	if(errors.size() < (unsigned int)type + 1)
		errors.resize((unsigned int)type+1);
	errors[type] = error;
}

void SolveImpl::registerdependency(constraintType type, dependencyType d)
{
	if(depset.find(type) == depset.end())
	{
		if(dependencies.size() < (unsigned int)type + 1)
			dependencies.resize((unsigned int)type+1);
		depset.insert(type);
	}
	dependencies[type].push_back(d);
}

double SolveImpl::GetInitialValue(int i)
{
	return *myvec[i];
}

int SolveImpl::GetVectorSize() const
{
	return (int)myvec.size();
}

