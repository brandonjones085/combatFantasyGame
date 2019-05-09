#pragma once
#include "Character.h"
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

class Barbarian : public Character
{
public:
	Barbarian(); 
	Barbarian(int a, int s);
	virtual void makeAttack();
	virtual void makeDefense(int);
	 
	virtual int getTotalAttack(); 
	//virtual void specialAbility();
	~Barbarian();
};

#endif

