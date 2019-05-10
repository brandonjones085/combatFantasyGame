
/*******************************************************************************
** Author:       Brandon Jones
** Date:         05/10/2019
** Description:  The header file for the HarryPotter class. 
*******************************************************************************/

#include "Character.h"

class HarryPotter : public Character
{
public:
	HarryPotter();

	virtual void makeAttack();
	virtual void makeDefense(int);
	
	virtual int getTotalAttack();
	//virtual void specialAbility();
	~HarryPotter();
};

