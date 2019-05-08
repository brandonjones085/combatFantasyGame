#include "HarryPotter.h"
#include <iostream>
#include <ctime>
#include <cstdlib>


HarryPotter::HarryPotter()
{
	srand(time(NULL));
	this->armor = 0;
	this->strengthPoints = 10;
}


void HarryPotter::makeAttack()
{
	int roll1 = std::rand() % 6 + 1;
	int roll2 = std::rand() % 6 + 1;
	std::cout << "Harry Potter attack\n " << std::endl;
	std::cout << "Roll 1: " << roll1 << std::endl;
	std::cout << "Roll 2: " << roll2 << std::endl;
	std::cout << std::endl;
}

int HarryPotter::makeDefense()
{
	return 0; 
}

HarryPotter::~HarryPotter()
{
}
