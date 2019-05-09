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
	int total = roll1 + roll2;
	setTotalAttack(total);
	std::cout << std::endl;
}


int blueMen::getTotalAttack()
{
	return totalAttack; 
}

void blueMen::makeDefense( int attack)
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


blueMen::~blueMen()
{
}
