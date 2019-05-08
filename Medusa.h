
#include "Character.h"

#pragma once

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

class Medusa : public Character
{
public:
	Medusa();
	virtual void makeAttack();
	virtual int makeDefense();
	//virtual void setTotalAttack(int);
	//virtual int getTotalAttack();
	//virtual void specialAbility();
	~Medusa();
};


#endif
