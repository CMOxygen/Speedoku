// Speedoku.cpp: определяет точку входа для приложения.
//
/*
	Документация по исходному коду проекта находится по адресу:
	https://docs.google.com/document/d/1KGwSpOmkNIHBYxRl_LeIFeVxit8i2sKbtSYOcDHyl8I/edit
*/

#include "Speedoku.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	//GameLogic::Cell c;

	GameLogic::Grid g;
	cout << static_cast<int>(g[1][1].getValue()) << endl;

	return 0;
}
