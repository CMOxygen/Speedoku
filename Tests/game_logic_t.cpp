//#include "game_logic_t.h"
#pragma once

#include <gtest/gtest.h>

#include "../Speedoku/GameLogic/cell.h"

//#include "../Speedoku/Speedoku.h"


namespace GameLogicTest
{
	/*
		Ïðîñòðàíñòâî èì¸í GameLogicTest è ôàéëû game_logic_t èñïîëüçóþòñÿ
		ÑÒÐÎÃÎ ÄËß ÂÛÏÎËÍÅÍÈß ÒÅÑÒÎÂ ÈÇ ÏÐÎÑÒÐÀÍÑÒÂÀ ÈÌ¨Í GameLogic.
	*/

	TEST(CellTest, ConstructorsTest)
	{
		//	default constructor test
		GameLogic::Cell *a = new GameLogic::Cell();
		ASSERT_EQ(a->getValue(), 1);
		ASSERT_EQ(a->getStatus(), GameLogic::CellStatus::VISIBLE);

		//	args constructor test
		GameLogic::Cell b(2, GameLogic::CellStatus::HIDDEN);
		ASSERT_EQ(b.getValue(), 2);
		ASSERT_EQ(b.getStatus(), GameLogic::CellStatus::HIDDEN);
	}

	TEST(CellTest, GetSetTest)
	{
		GameLogic::Cell a;

		// get/set value test
		a.setValue(6);
		a.setValue(10);
		a.setValue(0);
		ASSERT_EQ(a.getValue(), 6);

		//	get/set status test
		a.setStatus(GameLogic::CellStatus::HIDDEN);
		ASSERT_EQ(a.getStatus(), GameLogic::CellStatus::HIDDEN);
	}
}