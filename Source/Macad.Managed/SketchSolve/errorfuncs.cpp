/*
 * solve.cpp
 *
 *  Created on: May 4, 2009
 *      Author: Jonathan George
 *      This
 *      Copyright (c) 2009, Jonathan George
 *      This program is released under the BSD license. See the file License.txt for details.
 *
 */

#include "solve.h"
#include <cmath>
#include <stdlib.h>
#include <sstream>

using namespace std;

double ParallelError(std::vector<double> &parms)
{
     double dx = parms[2] - parms[0];
     double dy = parms[3] - parms[1];
     double dx2 = parms[6] - parms[4];
     double dy2 = parms[7] - parms[5];

     double hyp1=sqrt(dx*dx+dy*dy);
     double hyp2=sqrt(dx2*dx2+dy2*dy2);

     dx=dx/hyp1;
     dy=dy/hyp1;
     dx2=dx2/hyp2;
     dy2=dy2/hyp2;

     double temp = dy*dx2-dx*dy2;
     return (temp)*(temp)*1000;
}

double PerpendicularError(std::vector<double> &parms)
{
     double dx = parms[2] - parms[0];
     double dy = parms[3] - parms[1];
     double dx2 = parms[6] - parms[4];
     double dy2 = parms[7] - parms[5];

     double hyp1=sqrt(dx*dx+dy*dy);
     double hyp2=sqrt(dx2*dx2+dy2*dy2);

     dx=dx/hyp1;
     dy=dy/hyp1;
     dx2=dx2/hyp2;
     dy2=dy2/hyp2;

     double temp = dx*dx2+dy*dy2;
     // ts: Changed multiplier from 1000, gives much more stable results
     return (temp)*(temp)*10;
}


double PointOnLineMidpointError(std::vector<double> &parms)
{
     double dx = parms[4] - parms[0];
     double dy = parms[5] - parms[1];
     double dx2 = parms[2] - parms[4];
     double dy2 = parms[3] - parms[5];

     double e1 = dx2 - dx;
     double e2 = dy2 - dy;

     double temp = e1*e1 + e2 * e2;
     return temp;
}

double HorizontalError(std::vector<double> &parms)
{
   double ody = parms[3] - parms[1];
   return ody*ody*1000;
}

double VerticalError(std::vector<double> &parms)
{
   double odx = parms[2] - parms[0];
   return odx*odx*1000;
}

double PointOnPointError(std::vector<double> &parms)
{
    //Hopefully avoid this constraint, make coincident points use the same parameters
	double dx = parms[0] - parms[2];
	double dy = parms[1] - parms[3];
    return dx*dx + dy*dy;
}

double P2PDistanceError(std::vector<double> &parms)
{
	double dx = parms[0] - parms[2];
	double dy = parms[1] - parms[3];
	double d = parms[4];
    double err = dx*dx+dy*dy - d * d;
	return err*err;
}

double P2PDistanceHorzError(std::vector<double> &parms)
{
	double dx = parms[0] - parms[2];
	double d = parms[4];
    double err = dx*dx - d * d;
	return err*err;
}

double P2PDistanceVertError(std::vector<double> &parms)
{
	double dy = parms[1] - parms[3];
	double d = parms[4];
    double err = dy*dy - d * d;
	return err * err;
}

double PointOnLineError(std::vector<double> &parms)
{
	double dx = parms[0] - parms[2];
	double dy = parms[1] - parms[3];

    double m=dy/dx; //Slope
    double n=dx/dy; //1/Slope

    if(m<=1 && m>=-1)
    {
       //Calculate the expected y point given the x coordinate of the point
       double Ey=parms[1]+m*(parms[4]-parms[0]);
       return (Ey-parms[5])*(Ey-parms[5]);
    }
    else
    {
       //Calculate the expected x point given the y coordinate of the point
       double Ex=parms[0]+n*(parms[5]-parms[1]);
       return (Ex-parms[4])*(Ex-parms[4]);
    }
}

double P2LDistanceE(double lx, double ly, double dx, double dy, double px, double py)
{
	double t=-(lx*dx-px*dx+ly*dy-py*dy)/(dx*dx+dy*dy);
	double Xint=lx+dx*t;
	double Yint=ly+dy*t;
	double temp= sqrt((px - Xint)*(px - Xint)+(py - Yint)*(py - Yint));
	return temp;
}

double P2LDistanceError(std::vector<double> &parms)                      
{
	double dx = parms[0] - parms[2];
	double dy = parms[1] - parms[3];

	double radsq = parms[6] * parms[6];
    double temp= P2LDistanceE(parms[0],parms[1],dx,dy,parms[4],parms[5]) - sqrt(radsq);
    return temp*temp*100;
}

double EllipseTangentError(std::vector<double> &parms)                      
{
	//double ldx = parms[0] - parms[2];
	//double ldy = parms[1] - parms[3];

	double ex = parms[4];
	double ey = parms[5];
	double majr = parms[6];
	double minr = parms[7];
	double rot = parms[8];

	//find the major and minor axis
	if(minr > majr)
	{
		double temp = majr;
		majr = minr;
		minr = temp;
		rot += M_PI/2;
	}

	double t = majr;
	majr = minr;
	minr = t;

	//majr*=2;
	//minr*=2;

	rot = -rot;

	//rotate the line around the ellipse
	double lx1 = cos(rot)*(parms[0]-ex) - sin(rot)*(parms[1]-ey);
	double ly1 = sin(rot)*(parms[0]-ex) + cos(rot)*(parms[1]-ey);
	double lx2 = cos(rot)*(parms[2]-ex) - sin(rot)*(parms[3]-ey);
	double ly2 = sin(rot)*(parms[2]-ex) + cos(rot)*(parms[3]-ey);

	double ldx = lx1 - lx2;
	double ldy = ly1 - ly2;

	double g = (2 * ldx * lx1)/majr/majr+(2 * ldy * ly1)/minr / minr;
	double det = g*g-4 * (ldx*ldx/majr/majr+ldy*ldy/minr/minr) * (lx1*lx1/majr/majr+ly1*ly1/minr/minr-1);

	return det * det * 10;

/*	//calculate the eccentricity
	double e = sqrt(majr * majr - minr * minr);

	//Find the focal points
	double f1x = ex + cos(rot) * e;
	double f1y = ey + sin(rot) * e;
	double f2x = ex - cos(rot) * e;
	double f2y = ey - sin(rot) * e;

	double d1 = P2LDistanceE(parms[0],parms[1],ldx,ldy,f1x,f1y);
	double d2 = P2LDistanceE(parms[0],parms[1],ldx,ldy,f2x,f2y);

	double err = d1 + d2 - 2 * majr;
	return err * err * 1000;*/
}


double P2LDistanceVertError(std::vector<double> &parms)
{
	double dx = parms[0] - parms[2];
	double dy = parms[1] - parms[3];

    double t=(parms[4]- parms[0])/dx;
    double Yint=parms[1]+dy*t;
    double temp= fabs((parms[5] - Yint)) - parms[6];
    return temp*temp;
}

double P2LDistanceHorzError(std::vector<double> &parms)
{
	double dx = parms[0] - parms[2];
	double dy = parms[1] - parms[3];

    double t=(parms[5]- parms[1])/dy;
    double Xint=parms[0]+dx*t;
    double temp= fabs((parms[4] - Xint)) - parms[6];
    return temp*temp/10;
}

double LineLengthError(std::vector<double> &parms)
{
	double dx = parms[0] - parms[2];
	double dy = parms[1] - parms[3];
    double temp= sqrt(dx*dx+dy*dy) - parms[4];
	return temp*temp*100;
}
			

double EqualLengthError(std::vector<double> &parms)
{
	double dx = parms[0] - parms[2];
	double dy = parms[1] - parms[3];
	double dx2 = parms[4] - parms[6];
	double dy2 = parms[5] - parms[7];

	double temp = sqrt(dx*dx+dy*dy) -  sqrt(dx2*dx2+dy2*dy2);
    return temp*temp;
}

double EqualScalarError(std::vector<double> &parms)
{
    double temp= parms[0] - parms[1];
    return temp*temp;
}

double PointOnArcAngleError(std::vector<double> &parms)
{
	double a1x = sin(parms[5]) * parms[4] + parms[2];
	double a1y = cos(parms[5]) * parms[4] + parms[3];
	double dx = parms[0] - a1x;
	double dy = parms[1] - a1y;
    return dx*dx + dy*dy;
}

double ArcAngleOnArcAngleError(std::vector<double> &parms)
{
	double a1x = sin(parms[3]) * parms[2] + parms[0];
	double a1y = cos(parms[3]) * parms[2] + parms[1];

	double a2x = sin(parms[7]) * parms[6] + parms[4];
	double a2y = cos(parms[7]) * parms[6] + parms[5];

	double dx = a2x - a1x;
	double dy = a2y - a1y;
    return dx*dx + dy*dy;
}

double ColinearError(std::vector<double>& parms)
{
    double dx = parms[2] - parms[0];
    double dy = parms[3] - parms[1];

    double m=dy/dx;
    double n=dx/dy;
    // Calculate the error between the expected intersection point
    // and the true point of the second lines two end points on the
    // first line
	double error=0;
    if(m<=1 && m>-1)
    {
        //Calculate the expected y point given the x coordinate of the point
        double Ey=parms[1]+m*(parms[4]-parms[0]);
        error+=(Ey-parms[5])*(Ey-parms[5]);
        Ey=parms[1]+m*(parms[6]-parms[0]);
        error+=(Ey-parms[7])*(Ey-parms[7]);
    }
    else
    {
        //Calculate the expected x point given the y coordinate of the point
        double Ex=parms[0]+n*(parms[5]-parms[1]);
        error+=(Ex-parms[4])*(Ex-parms[4]);
        Ex=parms[0]+n*(parms[7]-parms[1]);
        error+=(Ex-parms[6])*(Ex-parms[6]);
    }
	return error;
}

double LinePerpToAngleError(std::vector<double>& parms)
{
	double dx = parms[0] - parms[2];
	double dy = parms[1] - parms[3];

	double dx2 = sin(parms[4]);
    double dy2 = cos(parms[4]);

    double hyp1=sqrt(dx*dx+dy*dy);
    double hyp2=sqrt(dx2*dx2+dy2*dy2);

    dx=dx/hyp1;
    dy=dy/hyp1;
    dx2=dx2/hyp2;
    dy2=dy2/hyp2;

    double temp = dx*dx2+dy*dy2;
    return (temp)*(temp)*1000;
}

double PointVerticalDistanceError(std::vector<double> &parms)
{
    double err = fabs(parms[1]) - fabs(parms[2]);
	return err*err;
}

double PointHorizontalDistanceError(std::vector<double> &parms)
{
    double err = fabs(parms[0]) - fabs(parms[2]);
	return err*err;
}

double InternalAngleError(std::vector<double>& parms)
{
    double dx = parms[2] - parms[0];
    double dy = parms[3] - parms[1];
	double dx2 = parms[6] - parms[4];
    double dy2 = parms[7] - parms[5];
    double angleP = parms[8];
	
	double hyp1=_hypot(dx,dy);
	double hyp2=_hypot(dx2,dy2);

	dx=dx/hyp1;
	dy=dy/hyp1;
	dx2=dx2/hyp2;
	dy2=dy2/hyp2;

	double temp = dx*dx2+dy*dy2;
	double temp2 = cos(angleP);
	return (temp-temp2)*(temp-temp2);
}

double ExternalAngleError(std::vector<double>& parms)
{
    double dx = parms[2] - parms[0];
    double dy = parms[3] - parms[1];
	double dx2 = parms[6] - parms[4];
    double dy2 = parms[7] - parms[5];
    double angleP = parms[8];
	
	double hyp1=_hypot(dx,dy);
	double hyp2=_hypot(dx2,dy2);

	dx=dx/hyp1;
	dy=dy/hyp1;
	dx2=dx2/hyp2;
	dy2=dy2/hyp2;

	double temp = dx*dx2-dy*dy2;
	double temp2 = cos(M_PI-angleP);
	return (temp-temp2)*(temp-temp2);
}
