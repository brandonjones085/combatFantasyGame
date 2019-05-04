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
	void setStrength(); 
	void setArmor(); 


	virtual void makeAttack();
	//virtual int makeDefense(); 
	//virtual void specialAbility(); 



	~Character();
};

