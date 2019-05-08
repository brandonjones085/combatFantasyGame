#pragma once

#include "Character.h"

class HarryPotter : public Character
{
public:
	HarryPotter();

	virtual void makeAttack();
	virtual int makeDefense();
	//virtual void setTotalAttack(int);
	//virtual int getTotalAttack();
	//virtual void specialAbility();
	~HarryPotter();
};

