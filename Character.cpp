#include "Character.h"



Character::Character()
{
	this->armor = 0; 
	this->strengthPoints = 0; 
	this->attack = 0; 
	this->defense = 0; 
}

Character::Character(int a, int s)
{
	this->armor = a; 
	this->strengthPoints = s; 
}

int Character::getArmor()
{
	return armor; 
}

int Character::getStregthPoints()
{
	return strengthPoints; 
}



int Character::makeAttack() { return 0; }
int Character::makeDefense() { return 0; }
void Character::specialAbility() {}; 

Character::~Character()
{
}
