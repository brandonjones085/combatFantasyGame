#pragma once

#include "Character.h"

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP


class blueMen : public Character
{
public:
	blueMen();
	virtual void makeAttack();
	virtual int makeDefense();
	//virtual void specialAbility();
	~blueMen();
};


#endif
