#include "Barbarian.h"
#include <ctime>
#include <cstdlib>
#include <iostream>



Barbarian::Barbarian()
{
	srand(time(NULL)); 
	this->armor = 0; 
	this->strengthPoints = 12;
}

Barbarian::Barbarian(int a, int s)
{
	srand(time(NULL));
	this->armor = a; 
	this->strengthPoints = s; 
}


void Barbarian::makeAttack()
{
	int roll1 = std::rand() % 6 + 1; 
	int roll2 = std::rand() % 6 + 1;
	std::cout << "Barbarian attack " << std::endl; 
	std::cout << "Roll 1: " << roll1 << std::endl; 
	std::cout << "Roll 2: " << roll2 << std::endl;

	int total = roll1 + roll2; 
	setTotalAttack(total); 
	std::cout << std::endl; 
	
}

int Barbarian::getTotalAttack()
{
	return totalAttack; 
}

int Barbarian::makeDefense()
{
	return 0; 
}


Barbarian::~Barbarian()
{
}
