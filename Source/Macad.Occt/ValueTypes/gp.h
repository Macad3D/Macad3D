#pragma once

#include <gp.hxx>

namespace Macad
{
	namespace Occt
	{
		public ref class gp sealed
		{
		public:
			static double Resolution = ::gp::Resolution();

			static Pnt Origin = Pnt(0, 0, 0);

			static Dir DX = Dir(1, 0, 0);
			static Dir DY = Dir(0, 1, 0);
			static Dir DZ = Dir(0, 0, 1);

			static Ax1 OX = Ax1(Pnt(0, 0, 0), Dir(1, 0, 0));
			static Ax1 OY = Ax1(Pnt(0, 0, 0), Dir(0, 1, 0));
			static Ax1 OZ = Ax1(Pnt(0, 0, 0), Dir(0, 0, 1));

			static Ax2 XOY = Ax2(Pnt(0, 0, 0), Dir(0, 0, 1), Dir(1, 0, 0));
			static Ax2 ZOX = Ax2(Pnt(0, 0, 0), Dir(0, 1, 0), Dir(0, 0, 1));
			static Ax2 YOZ = Ax2(Pnt(0, 0, 0), Dir(1, 0, 0), Dir(0, 1, 0));

			static Pnt2d Origin2d = Pnt2d(0, 0);

			static Dir2d DX2d = Dir2d(1, 0);
			static Dir2d DY2d = Dir2d(0, 1);

			static Ax2d OX2d = Ax2d(Pnt2d(0, 0), Dir2d(1, 0));
			static Ax2d OY2d = Ax2d(Pnt2d(0, 0), Dir2d(0, 1));
		};
	}
}
