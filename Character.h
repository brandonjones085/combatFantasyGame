#pragma once
class Character
{

protected: 
	int attack; 
	int defense; 
	int armor; 
	int strengthPoints; 


public:
	Character();
	Character(int, int); 
	int getArmor(); 
	int getStregthPoints(); 
	


	virtual int makeAttack();
	virtual int makeDefense(); 
	virtual void specialAbility(); 



	~Character();
};

