#pragma once

#include "Character.h"

class HarryPotter : public Character
{
public:
	HarryPotter();

	virtual void makeAttack();
	virtual void makeDefense(int);
	
	virtual int getTotalAttack();
	//virtual void specialAbility();
	~HarryPotter();
};

