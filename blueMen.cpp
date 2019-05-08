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


void blueMen::makeAttack()
{
	int roll1 = std::rand() % 10 + 1;
	int roll2 = std::rand() % 10 + 1;
	std::cout << "Blue Men attack\n " << std::endl;
	std::cout << "Roll 1: " << roll1 << std::endl;
	std::cout << "Roll 2: " << roll2 << std::endl;
	std::cout << std::endl;
}

int blueMen::makeDefense()
{
	return 0; 
}

blueMen::~blueMen()
{
}
