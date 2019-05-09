#pragma once
#ifndef GAME_HPP
#define GAME_HPP

#include "Character.h"

class Game 
{
private: 
	Character *attacker; 
	Character *opponent; 
	bool game = true; 
	 



public:
	Game();
	
	void runGame(); 
	void setAttacker(Character*); 
	void setOpponent(Character*); 
	
	 

	~Game();
};


#endif // !

