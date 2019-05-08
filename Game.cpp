#include "Game.h"
#include "attackMenu.h"
#include "opponentMenu.h"
#include "Barbarian.h"
#include "Vampire.h"
#include "blueMen.h"
#include "Medusa.h"
#include "HarryPotter.h"
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
	else if (a == 3)
	{
		//bluemen

		Character *bl1 = new blueMen(); 
		setAttacker(bl1);

	}
	else if (a == 4)
	{
		//medusa
		Character *m1 = new Medusa(); 
		setAttacker(m1);

	}
	else if (a == 5)
	{
		//harry potter
		Character *h1 = new HarryPotter(); 
		setAttacker(h1); 
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
	else if (o == 3)
	{
		//bluemen
		Character *bl2 = new blueMen(); 
		setOpponent(bl2); 
	}
	else if (o == 4)
	{
		//medusa
		Character *m2 = new Medusa(); 
		setOpponent(m2); 
	}
	else if (o == 5)
	{
		//harrypotter
		Character *h2 = new HarryPotter(); 
		setOpponent(h2); 
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


		std::cout << "\nAttcker Total:  "<< attacker->getTotalAttack(); 

		//attacker->setStregthPoints(2);


		std::cout << "\n\nAttacker: " << attacker->getStregthPoints(); 

		

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
