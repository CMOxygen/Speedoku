#include "cell.h"


//GameLogic::Cell::Cell()
//{
//	this->value = 1;
//	this->status = CellStatus::VISIBLE;
//}
//
//GameLogic::Cell::Cell(unsigned char value, CellStatus status)
//{
//	if (value < 1 || 9 < value)
//		return;
//
//	this->value = value;
//	this->status = status;
//}
//
////GameLogic::Cell::Cell(Cell& c) // конструктор копирования
////{
////	if (c.getValue() < 1 || 9 < c.getValue())
////		return;
////
////	this->status = c.getStatus();
////	this->value = c.getValue();
////}
//
//GameLogic::Cell::~Cell()
//{
//
//}
//
////GameLogic::Cell GameLogic::Cell::operator=(Cell& c)
////{
////	return Cell(c);
////}