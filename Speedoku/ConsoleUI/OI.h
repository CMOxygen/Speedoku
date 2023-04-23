//#include ""
#include <iostream>
#pragma once
namespace consoleui {
	const int gameSize = 9;
	class OI
	{
	public:
		OI();
		~OI();
		inline int GeyMassiv() { return this->z; }

	private:
		int prototype[gameSize][gameSize];
		int z = 0;
	};

	OI::OI()
	{
	}

	OI::~OI()
	{
	}
}
