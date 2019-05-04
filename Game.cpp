#include "Game.h"
#include "attackMenu.h"
#include "opponentMenu.h"
#include "Barbarian.h"
#include "Vampire.h"
#include <iostream>



Game::Game()
{
}


void Game::runGame()
{
	int a = attackMenu();
	int o = opponentMenu(); 
	if (a == 1)
	{
		Character *v1 = new Vampire();
		setAttacker(v1); 
	}
	else if (a == 2)
	{
		Character *b1 = new Barbarian();
		setAttacker(b1);
	}
	


	if (o == 1)
	{
		Character *v2 = new Vampire();
		setOpponent(v2); 
	}
	else if (o == 2)
	{
		Character *b2 = new Barbarian();
		setOpponent(b2);
	}

	int attackStrength = attacker->getStregthPoints(); 
	int opponentStrength = opponent->getStregthPoints(); 

	int round = 1;

	while (attackStrength > 0 && opponentStrength>0) 
	{
		std::cin.clear();
		std::cin.sync();
		std::cin.ignore();
		
		std::cout << "\nRound number: " << round << std::endl;

		attacker->makeAttack();

		opponent->makeAttack();

		std::cout << "Please enter to continue " << std::endl; 


		
		round++;
		 
		
	}


	

	


}


void Game::setAttacker(Character *a)
{
	attacker = a; 
}


void Game::setOpponent(Character *o)
{
	this->opponent = o; 
}



Game::~Game()
{
}
