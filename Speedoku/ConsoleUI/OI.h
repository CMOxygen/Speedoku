
#include "../GameLogic/cell.h"
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
#pragma once
using namespace std;

namespace consoleui {
	class OI
	{
	public:
		OI();
		~OI();
		inline int GameMassiv() { return this->z; }
		char input_state(string input, string del=",")
		{

		};
		bool state_cell(int num, GameLogic::CellStatus state)
		{
			if (state == GameLogic::CellStatus::VISIBLE)
			{

			}
			else if (state == GameLogic::CellStatus::HIDDEN)
			{

			}
			else
			{

			}
		}
	private:
		int z = 0;
	};

	OI::OI()
	{
	}

	OI::~OI()
	{
	}
}
