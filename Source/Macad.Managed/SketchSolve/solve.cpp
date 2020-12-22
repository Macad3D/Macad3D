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


Solver::Solver()
{

}

void Solver::allocate(int xLength)
{
   this->xLength = xLength;
   if(x.size() < (size_t)xLength)
   {
		x.resize(xLength);
		origSolution.resize(xLength);
		grad.resize(xLength);
		s.resize(xLength);
		xold.resize(xLength);
		deltaX.resize(xLength);
		gradnew.resize(xLength);
		gamma.resize(xLength);
		gammatDotN.resize(xLength);
		FirstSecond.resize(xLength);
		deltaXDotGammatDotN.resize(xLength);
		gammatDotDeltaXt.resize(xLength);
		NDotGammaDotDeltaXt.resize(xLength);
		N.resize(xLength);

		for(int i=0; i < xLength; i++)
		{
			FirstSecond[i].resize(xLength);
			deltaXDotGammatDotN[i].resize(xLength);
			gammatDotDeltaXt[i].resize(xLength);
			NDotGammaDotDeltaXt[i].resize(xLength);
			N[i].resize(xLength);
		}
   }
}

Solver::~Solver()
{

}

void Solver::deallocate()
{
}

int Solver::solve(double  **xin, int xLength, constraint * cons, int consLength, int isFine)
{
	int ret = solveI(xin,xLength,cons,consLength,isFine);
	Unload();
	deallocate();
	return ret;
}

int Solver::solveI(double  **xin, int xLength, constraint * cons, int consLength, int isFine)
{
		xsave = xin;

		Load(cons,consLength,xin,xLength);

		xLength = GetVectorSize();
		allocate(xLength);
		for(int i=0; i < xLength; i++)
			x[i] = GetInitialValue(i);


        std::stringstream cstr;
        double convergence,pert ;
        //Save the original parameters for later.
        for(int i=0;i<xLength;i++)
        {
                origSolution[i]=x[i];
        }

        if(isFine>0) convergence = XconvergenceFine;
        else convergence = XconvergenceRough;
        //integer to keep track of how many times calc is called
        int ftimes=0;
        //Calculate Function at the starting point:
        double f0;
		f0 = GetError();
        if(f0<smallF) return succsess;
        ftimes++;
        //Calculate the gradient at the starting point:

        //Calculate the gradient
        //gradF=x;
        double norm; //The norm of the gradient vector
        double f1,f2,f3,alpha1,alpha2,alpha3,alphaStar;
        norm = 0;
        pert = f0*pertMag;
        for(int j=0;j<xLength;j++)
        {
                grad[j]=GetGradient(j,pert);
                ftimes++;
#ifdef DEBUG
                cstr << "gradient: " << grad[j];
                debugprint(cstr.str());
                cstr.clear();
#endif
                norm = norm+(grad[j]*grad[j]);
        }
        norm = sqrt(norm);
        //Estimate the norm of N

        //Initialize N and calculate s
        for(int i=0;i<xLength;i++)
        {
                for(int j=0;j<xLength;j++)
                {
                        if(i==j)
                        {
                                //N[i][j]=norm; //Calculate a scaled identity matrix as a Hessian inverse estimate
                                //N[i][j]=grad[i]/(norm+.001);
                                N[i][j]=1;
                                s[i]=-grad[i]; //Calculate the initial search vector

                        }
                        else N[i][j]=0;
                }
        }
        double fnew;
        fnew=f0+1;      //make fnew greater than fold
        double alpha=1; //Initial search vector multiplier

        double fold;
        for(int i=0;i<xLength;i++)
        {
                xold[i]=x[i];//Copy last values to xold
        }

        ///////////////////////////////////////////////////////
        /// Start of line search
        ///////////////////////////////////////////////////////

        //Make the initial position alpha1
        alpha1=0;
        f1 = f0;

        //Take a step of alpha=1 as alpha2
        alpha2=1;
        for(int i=0;i<xLength;i++)
        {
                x[i]=xold[i]+alpha2*s[i];//calculate the new x
        }
        f2 = GetError();
        ftimes++;

        //Take a step of alpha 3 that is 2*alpha2
        alpha3 = alpha*2;
        for(int i=0;i<xLength;i++)
        {
                x[i]=xold[i]+alpha3*s[i];//calculate the new x
        }
        f3=GetError();
        ftimes++;

        //Now reduce or lengthen alpha2 and alpha3 until the minimum is
        //Bracketed by the triplet f1>f2<f3
        while(f2>f1 || f2>f3)
        {
                if(f2>f1)
                {
                        //If f2 is greater than f1 then we shorten alpha2 and alpha3 closer to f1
                        //Effectively both are shortened by a factor of two.
                        alpha3=alpha2;
                        f3=f2;
                        alpha2=alpha2/2;
                        for(int i=0;i<xLength;i++)
                        {
                                x[i]=xold[i]+alpha2*s[i];//calculate the new x
                        }
                        f2=GetError();
                        ftimes++;
                }

                else if(f2>f3)
                {
                        //If f2 is greater than f3 then we length alpah2 and alpha3 closer to f1
                        //Effectively both are lengthened by a factor of two.
                        alpha2=alpha3;
                        f2=f3;
                        alpha3=alpha3*2;
                        for(int i=0;i<xLength;i++)
                        {
                                x[i]=xold[i]+alpha3*s[i];//calculate the new x
                        }
                        f3=GetError();
                        ftimes++;

                }
        }
        // get the alpha for the minimum f of the quadratic approximation
        alphaStar= alpha2+((alpha2-alpha1)*(f1-f3))/(3*(f1-2*f2+f3));

        //Guarantee that the new alphaStar is within the bracket
        if(alphaStar>alpha3 || alphaStar<alpha1) alphaStar=alpha2;

        if(alphaStar!=alphaStar)
        {
                alphaStar=.001;//Fix nan problem
        }
        /// Set the values to alphaStar
        for(int i=0;i<xLength;i++)
        {
                x[i]=xold[i]+alphaStar*s[i];//calculate the new x
        }
        fnew=GetError();
        ftimes++;
        fold=fnew;
        /*
        cout<<"F at alphaStar: "<<fnew<<endl;
        cout<<"alphaStar: "<<alphaStar<<endl;
        cout<<"F0: "<<f0<<endl;
        cout<<"F1: "<<f1<<endl;
        cout<<"F2: "<<f2<<endl;
        cout<<"F3: "<<f3<<endl;
        cout<<"Alpha1: "<<alpha1<<endl;
        cout<<"Alpha2: "<<alpha2<<endl;
        cout<<"Alpha3: "<<alpha3<<endl;
        */

        /////////////////////////////////////
        ///end of line search
        /////////////////////////////////////


        double bottom=0;
        double deltaXtDotGamma;
        double gammatDotNDotGamma=0;
        double firstTerm=0;
        double deltaXnorm=1;


        int iterations=1;
        int steps;

        ///Calculate deltaX
        for(int i=0;i<xLength;i++)
        {
                deltaX[i]=x[i]-xold[i];//Calculate the difference in x for the Hessian update
        }
        double maxIterNumber = MaxIterations * xLength;
        while(deltaXnorm>convergence && fnew>smallF && iterations<maxIterNumber)
        {
        //////////////////////////////////////////////////////////////////////
        ///Start of main loop!!!!
        //////////////////////////////////////////////////////////////////////
        bottom=0;
        deltaXtDotGamma = 0;
        pert = fnew*pertMag;
        if(pert<pertMin) pert = pertMin;
        for(int i=0;i<xLength;i++)
        {
                //Calculate the new gradient vector
                gradnew[i]= GetGradient(i,pert);
                ftimes++;
                //Calculate the change in the gradient
                gamma[i]=gradnew[i]-grad[i];
                bottom+=deltaX[i]*gamma[i];

                deltaXtDotGamma += deltaX[i]*gamma[i];

        }

        //make sure that bottom is never 0
        if (bottom==0) bottom=.0000000001;

        //calculate all (1xn).(nxn)

        for(int i=0;i<xLength;i++)
        {
                gammatDotN[i]=0;
                for(int j=0;j<xLength;j++)
                {
                        gammatDotN[i]+=gamma[j]*N[i][j];//This is gammatDotN transpose
                }

        }
        //calculate all (1xn).(nx1)

        gammatDotNDotGamma=0;
        for(int i=0;i<xLength;i++)
        {
                gammatDotNDotGamma+=gammatDotN[i]*gamma[i];
        }

        //Calculate the first term

        firstTerm=0;
        firstTerm=1+gammatDotNDotGamma/bottom;

        //Calculate all (nx1).(1xn) matrices
        for(int i=0;i<xLength;i++)
        {
                for(int j=0;j<xLength;j++)
                {
                        FirstSecond[i][j]=((deltaX[j]*deltaX[i])/bottom)*firstTerm;
                        deltaXDotGammatDotN[i][j]=deltaX[i]*gammatDotN[j];
                        gammatDotDeltaXt[i][j]=gamma[i]*deltaX[j];
                }
        }

        //Calculate all (nxn).(nxn) matrices

        for(int i=0;i<xLength;i++)
        {
                for(int j=0;j<xLength;j++)
                {
                        NDotGammaDotDeltaXt[i][j]=0;
                        for(int k=0;k<xLength;k++)
                        {
                                NDotGammaDotDeltaXt[i][j]+=N[i][k]*gammatDotDeltaXt[k][j];
                        }
                }
        }
        //Now calculate the BFGS update on N
        //cout<<"N:"<<endl;
        for(int i=0;i<xLength;i++)
        {

                for(int j=0;j<xLength;j++)
                {
                        N[i][j]=N[i][j]+FirstSecond[i][j]-(deltaXDotGammatDotN[i][j]+NDotGammaDotDeltaXt[i][j])/bottom;
                        //cout<<" "<<N[i][j]<<" ";
                }
                //cout<<endl;
        }

        //Calculate s
        for(int i=0;i<xLength;i++)
        {
                s[i]=0;
                for(int j=0;j<xLength;j++)
                {
                        s[i]+=-N[i][j]*gradnew[j];
                }
        }

        alpha=1; //Initial search vector multiplier


        //copy newest values to the xold
        for(int i=0;i<xLength;i++)
        {
                xold[i]=x[i];//Copy last values to xold
        }
        steps=0;

        ///////////////////////////////////////////////////////
        /// Start of line search
        ///////////////////////////////////////////////////////

        //Make the initial position alpha1
        alpha1=0;
        f1 = fnew;

        //Take a step of alpha=1 as alpha2
        alpha2=1;
        for(int i=0;i<xLength;i++)
        {
                x[i]=xold[i]+alpha2*s[i];//calculate the new x
        }
        f2 = GetError();
        ftimes++;

        //Take a step of alpha 3 that is 2*alpha2
        alpha3 = alpha2*2;
        for(int i=0;i<xLength;i++)
        {
                x[i]=xold[i]+alpha3*s[i];//calculate the new x
        }
        f3=GetError();
        ftimes++;

        //Now reduce or lengthen alpha2 and alpha3 until the minimum is
        //Bracketed by the triplet f1>f2<f3
        steps=0;
        while(f2>f1 || f2>f3)
        {
                if(f2>f1)
                {
                        //If f2 is greater than f1 then we shorten alpha2 and alpha3 closer to f1
                        //Effectively both are shortened by a factor of two.
                        alpha3=alpha2;
                        f3=f2;
                        alpha2=alpha2/2;
                        for(int i=0;i<xLength;i++)
                        {
                                x[i]=xold[i]+alpha2*s[i];//calculate the new x
                        }
                        f2=GetError();
                        ftimes++;
                }

                else if(f2>f3)
                {
                        //If f2 is greater than f3 then we length alpah2 and alpha3 closer to f1
                        //Effectively both are lengthened by a factor of two.
                        alpha2=alpha3;
                        f2=f3;
                        alpha3=alpha3*2;
                        for(int i=0;i<xLength;i++)
                        {
                                x[i]=xold[i]+alpha3*s[i];//calculate the new x
                        }
                        f3=GetError();
                        ftimes++;
                }
                /* this should be deleted soon!!!!
                if(steps==-4)
                        {
                                alpha2=1;
                                alpha3=2;

                                for(int i=0;i<xLength;i++)
                                {
                                        for(int j=0;j<xLength;j++)
                                        {
                                                if(i==j)
                                                {
                                                        N[i][j]=1;
                                                        s[i]=-gradnew[i]; //Calculate the initial search vector
                                                }
                                                else N[i][j]=0;
                                        }
                                }
                        }
                */
                /*
                if(steps>100)
                        {
                        continue;
                        }
                */
                steps=steps+1;
        }


        // get the alpha for the minimum f of the quadratic approximation
        alphaStar= alpha2+((alpha2-alpha1)*(f1-f3))/(3*(f1-2*f2+f3));


        //Guarantee that the new alphaStar is within the bracket
        if(alphaStar>=alpha3 || alphaStar<=alpha1)
        {
                alphaStar=alpha2;
        }
        if(alphaStar!=alphaStar) alphaStar=0;

        /// Set the values to alphaStar
        for(int i=0;i<xLength;i++)
        {
                x[i]=xold[i]+alphaStar*s[i];//calculate the new x
        }
        fnew=GetError();
        ftimes++;

        /*
        cout<<"F at alphaStar: "<<fnew<<endl;
        cout<<"alphaStar: "<<alphaStar<<endl;
        cout<<"F1: "<<f1<<endl;
        cout<<"F2: "<<f2<<endl;
        cout<<"F3: "<<f3<<endl;
        cout<<"Alpha1: "<<alpha1<<endl;
        cout<<"Alpha2: "<<alpha2<<endl;
        cout<<"Alpha3: "<<alpha3<<endl;
        */

        /////////////////////////////////////
        ///end of line search
        ////////////////////////////////////

        deltaXnorm=0;
        for(int i=0;i<xLength;i++)
        {
                deltaX[i]=x[i]-xold[i];//Calculate the difference in x for the hessian update
                deltaXnorm+=deltaX[i]*deltaX[i];
                grad[i]=gradnew[i];
        }
        deltaXnorm=sqrt(deltaXnorm);
        iterations++;
        /////////////////////////////////////////////////////////////
        ///End of Main loop
        /////////////////////////////////////////////////////////////
        }
        ////Debug


#ifdef DEBUG

        for(int i=0;i<xLength;i++)
        {
                cstr<<"Parameter("<<i<<"): "<<x[i]<<endl;
                //cout<<xold[i]<<endl;
        }
        cstr<<"Fnew: "<<fnew<<endl;
        cstr<<"Number of Iterations: "<<iterations<<endl;
        cstr<<"Number of function calls: "<<ftimes<<endl;
        debugprint(cstr.str());
        cstr.clear();

#endif

        ///End of function
        double validSolution;
        if(isFine==1) validSolution=validSolutionFine;
        else validSolution=validSoltuionRough;
        if(fnew<validSolution)
                {
                return succsess;
                }
        else
                {

                //Replace the bad numbers with the last result
                for(int i=0;i<xLength;i++)
                {
                        x[i]=origSolution[i];
                }
                return noSolution;
                }

}

