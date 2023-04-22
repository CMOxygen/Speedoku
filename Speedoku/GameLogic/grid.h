#include "cell.h"

namespace GameLogic
{

	class Grid
	{
	private:
		Cell grid[gameSize][gameSize];

	public:
		Grid();
		~Grid();

		Cell* operator[](int index)
		{
			if (index > 0 && index < 10)
				return grid[index];
		}
	};
};