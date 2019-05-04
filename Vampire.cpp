#include "Vampire.h"
#include <iostream>
#include <ctime>
#include <cstdlib>


Vampire::Vampire()
{
	srand(time(NULL));
	this->armor = 1;
	this->strengthPoints = 18;

}


void Vampire::makeAttack()
{
	int roll1 = std::rand() % 12 + 1;
	std::cout << "Vampire attack " << std::endl; 
	std::cout << "Roll 1: " << roll1 << std::endl;
	
	std::cout << std::endl;
}


int Vampire::makeDefense()
{
	return 0; 
}

Vampire::~Vampire()
{
}
