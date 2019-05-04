#pragma once
#include "Character.h"

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP


class Vampire : public Character
{
public:
	Vampire();

	virtual void makeAttack();
	virtual int makeDefense();
	//virtual void specialAbility();
	~Vampire();
};


#endif

