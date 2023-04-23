//#include <gtest/gtest.h>
#pragma once


namespace GameLogic
{
	enum class CellStatus
	{
		VISIBLE,
		HIDDEN
	};

	class Cell
	{
		/*
			Класс Cell представляет из себя модель данных, основанную на игровом объекте "клетка".

		*/

	private:
		unsigned char value = 1;
		CellStatus status = CellStatus::VISIBLE;

	public:
		// конструкторы/деструкторы
	 	explicit	Cell();											// дефолтный
		explicit	Cell(unsigned char value, CellStatus status);	// с аргументами
		//Cell(Cell& c);											// конструктор копирования

		~Cell();

		// перегрузка операторов
		//Cell operator=(Cell& c);

		// геттеры/сеттеры
		inline unsigned char getValue() { return this->value; }
		inline void setValue(unsigned char value) { if (1 <= value && value <= 9) this->value = value; }

		inline CellStatus getStatus() { return this->status; }
		inline void setStatus(CellStatus cs) { this->status = cs; }
	};
};

GameLogic::Cell::Cell()
{
	this->value = 1;
	this->status = CellStatus::VISIBLE;
}

GameLogic::Cell::Cell(unsigned char value, CellStatus status)
{
	if (value < 1 || 9 < value)
		return;

	this->value = value;
	this->status = status;
}

//GameLogic::Cell::Cell(Cell& c) // конструктор копирования
//{
//	if (c.getValue() < 1 || 9 < c.getValue())
//		return;
//
//	this->status = c.getStatus();
//	this->value = c.getValue();
//}

GameLogic::Cell::~Cell()
{

}

//GameLogic::Cell GameLogic::Cell::operator=(Cell& c)
//{
//	return Cell(c);
//}