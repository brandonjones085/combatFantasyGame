#include "Medusa.h"
#include <cstdlib>
#include <iostream>
#include <ctime>



Medusa::Medusa()
{
	srand(time(NULL));
	this->armor = 0;
	this->strengthPoints = 12;
}


Medusa::~Medusa()
{
}
