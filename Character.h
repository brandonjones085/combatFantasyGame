#pragma once
class Character
{

protected: 
	int attack; 
	int defense; 
	int armor; 
	int strengthPoints; 
	int totalAttack; 


public:
	Character();
	Character(int, int); 
	int getArmor(); 

	virtual int getDefensePoints(); 
	virtual int getStregthPoints(); 
	virtual void setStregthPoints(int);
	virtual void makeAttack();
	virtual void makeDefense(int); 
	virtual  void setTotalAttack(int); 
	virtual int getTotalAttack(); 
	
	virtual void specialAbility(); 



	~Character();
};

