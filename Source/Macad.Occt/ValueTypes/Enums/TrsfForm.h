#pragma once

namespace Macad
{
	namespace Occt
	{
		public enum class TrsfForm
		{
			Identity = 0,
			Rotation = 1,
			Translation = 2,
			PntMirror = 3,
			Ax1Mirror = 4,
			Ax2Mirror = 5,
			Scale = 6,
			CompoundTrsf = 7,
			Other = 8
		};
	}
}
