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
	int total = roll1 + roll2;
	setTotalAttack(total);
	std::cout << std::endl;

}

int Medusa::getTotalAttack()
{
	return totalAttack; 
}

void Medusa::makeDefense(int attack)
{
	makeAttack();

	int oDamage = getTotalAttack();

	//Calculates the total 
	int damageTotal1 = attack - oDamage - armor;

	std::cout << "Attack " << attack << " - " << oDamage << " - " << armor << std::endl;

	if (damageTotal1 <= 0)
	{
		std::cout << "\nCharacter received no damage\n\n";
	}
	else
	{
		int total = getStregthPoints() - damageTotal1;
		std::cout << "Opponent strength (" << getStregthPoints() << ") -" << " Damage Total (" << damageTotal1 << ") " << " Total damage (" << total << ") - " << std::endl;

		setStregthPoints(total);
	}
}

Medusa::~Medusa()
{
}
