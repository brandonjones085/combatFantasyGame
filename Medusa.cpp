#include "Medusa.h"
#include <cstdlib>
#include <iostream>
#include <ctime>



Medusa::Medusa()
{
	srand(time(NULL));
	this->armor = 3;
	this->strengthPoints = 8;
}


void Medusa::makeAttack()
{
	int roll1 = std::rand() % 6 + 1;
	int roll2 = std::rand() % 6 + 1;
	std::cout << "Medusa attack\n " << std::endl;
	std::cout << "Roll 1: " << roll1 << std::endl;
	std::cout << "Roll 2: " << roll2 << std::endl;
	std::cout << std::endl;

}

int Medusa::makeDefense()
{
	return 0; 
}

Medusa::~Medusa()
{
}
