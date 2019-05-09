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
	std::cout << "Vampire attack\n " << std::endl; 
	std::cout << "Roll 1: " << roll1 << std::endl;
	int total = roll1; 
	setTotalAttack(total);
	
	std::cout << std::endl;
}


int Vampire::getTotalAttack()
{
	return totalAttack; 
}

void Vampire::makeDefense(int attack)
{
	makeAttack(); 

	int oDamage = getTotalAttack(); 


	int num = specialAbility(); 

	//Calculates the total 
	int damageTotal1 = attack - oDamage - armor;

	std::cout << "Attack " << attack << " - " << oDamage << " - " << armor << std::endl;

	if (damageTotal1 <= 0)
	{
		std::cout << "\nCharacter received no damage\n\n";
	}
	else
	{
		if (num ==1)
		{
			std::cout << "\nVampire used charm to receive no damage\n";
		}
		else
		{




			int total = getStregthPoints() - damageTotal1;
			std::cout << "Opponent strength (" << getStregthPoints() << ") -" << " Damage Total (" << damageTotal1 << ") " << "= Total damage (" << total << ") - " << std::endl;

			setStregthPoints(total);

		}
	}


}

int Vampire::specialAbility()
{
	int num = std::rand() % 2 + 1;

	//no damage
	if (num == 1)
	{
		
		return 1; 
	}
	//receives damage
	else if (num == 2)
	{
		return 2; 
	}
}

Vampire::~Vampire()
{
}
