#pragma once

#include "Character.h"

class HarryPotter : public Character
{
public:
	HarryPotter();

	virtual void makeAttack();
	virtual int makeDefense();
	//virtual void specialAbility();
	~HarryPotter();
};

