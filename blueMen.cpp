#include "blueMen.h"
#include <iostream>
#include <ctime>
#include <cstdlib>


blueMen::blueMen()
{
	srand(time(NULL));
	this->armor = 3;
	this->strengthPoints = 12;
}


blueMen::~blueMen()
{
}
