
#include "../GameLogic/cell.h"
#include <iostream>
#pragma once
namespace consoleui {
	class OI
	{
	public:
		OI();
		~OI();
		inline int GameMassiv() { return this->z; }
		int Insert_massiv(int** massive_size, bool state) {

		}
	private:
		GameLogic::Cell prototype[GameLogic::gameSize][GameLogic::gameSize];
		int z = 0;
	};

	OI::OI()
	{
	}

	OI::~OI()
	{
	}
}
