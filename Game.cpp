#include "Game.h"
#include "menu.h"




Game::Game()
{
}


void Game::runGame()
{
	menu(); 
}


void Game::setAttacker(Character a)
{
	this->attacker = a; 
}


void Game::setOpponent(Character o)
{
	this->opponent = o; 
}



Game::~Game()
{
}
