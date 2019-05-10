
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The HarryPotter class inherits from the Character class. 
*******************************************************************************/

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


/*******************************************************************************
** Description:  This is a virtual funciton inherited from the Character class.
** It is used when making an attack on the opponent.
** The total value of the random die are set.
*******************************************************************************/
void HarryPotter::makeAttack()
{
	int roll1 = std::rand() % 6 + 1;
	int roll2 = std::rand() % 6 + 1;
	std::cout << "************************Harry Potter Attack**********************\n " << std::endl;
	std::cout << "Roll 1: " << roll1 << std::endl;
	std::cout << "Roll 2: " << roll2 << std::endl;
	int total = roll1 + roll2; 
	setTotalAttack(total); 

	std::cout << std::endl;
}

int HarryPotter::getTotalAttack()
{
	return totalAttack; 
}

/*******************************************************************************
** Description:  This is used during the characters defense.
** It takes in an int and uses that value to determine the total damage each round. 
*******************************************************************************/
void HarryPotter::makeDefense(int attack)
{
	makeAttack();

	int oDamage = getTotalAttack();

	//Calculates the total 
	int damageTotal1 = attack - oDamage - armor;

	std::cout << "Attack " << attack << " - " << oDamage << " - " << armor << std::endl;

	//If damage is less than 0
	if (damageTotal1 <= 0)
	{
		std::cout << "\nCharacter received no damage\n\n";
	}
	else
	{
		int total = getStregthPoints() - damageTotal1;
		std::cout <<  "Opponent strength (" << getStregthPoints() << ") -"  << " Damage Total (" << damageTotal1 <<") " << "= Total damage (" << total << ") - "  << std::endl;

		setStregthPoints(total);
	}
}

HarryPotter::~HarryPotter()
{
}
