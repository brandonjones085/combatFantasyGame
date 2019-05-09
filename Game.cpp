#include "Game.h"
#include "attackMenu.h"
#include "opponentMenu.h"
#include "Barbarian.h"
#include "Vampire.h"
#include "blueMen.h"
#include "Medusa.h"
#include "HarryPotter.h"
#include <iostream>
#include <cstdlib>



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

	while (game) 
	{
		

		std::cin.clear();
		std::cin.sync();
		std::cin.ignore();
		
		std::cout << "\nRound number: " << round << std::endl;

		attacker->makeAttack();
; 
		

		//attacker->specialAbility(); 
		//opponent->specialAbility(); 
		
		int aAttack = attacker->getTotalAttack();
		int oDamage = opponent->getTotalAttack(); 

		opponent->makeDefense(aAttack); 

		int oArmor = opponent->getArmor(); 

		
		

		std::cout << "\nAttacker strength " << attacker->getStregthPoints() << std::endl;
		std::cout << "\nAttacker strength " << attacker->getArmor() << std::endl;
		std::cout << "Opponent strength " << opponent->getStregthPoints() << std::endl;
		std::cout << "\nOpponent strength " << opponent->getArmor() << std::endl;
	

		int oStrength = opponent->getStregthPoints(); 
		
		if (oStrength < 1)
		{
			game = false; 
			std::cout << "\nThe opponent lost\n"; 
			std::cout << "\n\nGAME OVER\n\n";

		}



		std::cout << "\n\nPlease enter for the opponent to attack now\n" << std::endl; 

		round++;

		

		std::cin.clear();
		std::cin.sync();
		std::cin.ignore();
		std::cout << "Round number " << round << std::endl;

		opponent->makeAttack();

		attacker->makeAttack();
		
		

		int aDamage = attacker->getTotalAttack();
		int oAttack = opponent->getTotalAttack();


		attacker->makeDefense(oAttack); 
	
		



		std::cout << "\nAttacker strength " << attacker->getStregthPoints() << std::endl;
		std::cout << "\nAttacker strength " << attacker->getArmor() << std::endl;
		std::cout << "Opponent strength " << opponent->getStregthPoints() << std::endl;
		std::cout << "\nOpponent strength " << opponent->getArmor() << std::endl;


		int aStrength = attacker->getStregthPoints();

		if (aStrength < 1)
		{
			game = false;
			std::cout << "\nThe attacker lost\n";
			std::cout << "\n\nGAME OVER\n\n";

		}

		std::cout << "\nPress enter for the attacker to attack now\n";
		round++;
		 
		
	}


	char choice = 'y'; 
	std::cout << "\nWould you like to play again y/n "; 
	std::cin >> choice; 
	if (choice == 'y')
	{
		game = true; 
		runGame();
	}
	else
	{
		game = false; 
		std::cout << "\n\nGoodbye\n\n"; 
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
