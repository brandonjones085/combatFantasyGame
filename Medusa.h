
#include "Character.h"

#pragma once

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

class Medusa : public Character
{
public:
	Medusa();
	virtual void makeAttack();
	virtual void makeDefense(int);
	
	virtual int getTotalAttack();
	//virtual void specialAbility();
	~Medusa();
};


#endif
