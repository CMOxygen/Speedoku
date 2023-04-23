#pragma once

//#include "cell.h"
#include "../Globals/constants.h"

namespace GameLogic
{

	class Grid
	{
	private:
		//Cell grid[Glob::g_gameSize][Glob::g_gameSize];

	public:
		Grid();
		~Grid();

		/*Cell* operator[](int index)
		{
			if (index > 0 && index < 10)
				return grid[index];
		}*/
	};
};