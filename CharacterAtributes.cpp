#include <iostream>

#include "CharacterAtributes.h"


#define CELL std::cout << "-------------------------------------" << std::endl;
#define SWORD std::cout << "Damage --||======>" << damage << std::endl;

bool DealDamageToKnight( int damage )
{  // The knight has strong armor
	static int knightHP = CharacterAtributes::hp + (CharacterAtributes::armor + CharacterAtributes::shield);
	knightHP -= damage;
	
	if (knightHP > 0)
	{  
		CELL;
		SWORD;
		std::cout << "Knight's hp left +" << knightHP << std::endl;
		CELL;
		return true;
	}
	else 
	{
		std::cout << "Knight is dead (R.I.P)" << std::endl;
		return false;
	}
	
}

bool DealDamageToViking(int damage)
{  // The Viking has strong health
	static int vikingHP = (CharacterAtributes::hp + CharacterAtributes::elixirOfLife);
	vikingHP -= damage;

	if (vikingHP > 0)
	{
		CELL;
		SWORD;
		std::cout << "Viking's hp left +" << vikingHP << std::endl;
		CELL;
		return true;
	}
	else 
	{
		std::cout << "Viking is dead (R.I.P)" << std::endl;
		return false;
	}

}

bool DealDamageToWizard(int damage)
{  // The Wizard can heal
	static int wizardHP = (CharacterAtributes::hp + CharacterAtributes::magicPowder);
	wizardHP -= damage;
	auto& addHealth = wizardHP;   

	if (damage >= 30)
	{
		addHealth += CharacterAtributes::healthPowder;
	}

	if (wizardHP > 0)
	{
		CELL;
		SWORD;
		std::cout << "Wizard's hp left +" << wizardHP << std::endl;
		CELL;
		return true;
	}
	else 
	{
		std::cout << "Wizard is dead (R.I.P)" << std::endl;
		return false;
	}
	
}

bool DealDamageToTraitor(int damage)
{  
	static int traitorHP = (CharacterAtributes::hp + 300);
	traitorHP -= damage;

	if (traitorHP > 0)
	{
		CELL;
		SWORD;
		std::cout << "Traitor's hp left +" << traitorHP << std::endl;
		CELL;
		return true;
	}
	else 
	{
		std::cout << "Traitor is dead (R.I.P)" << std::endl;
		return false;
	}
}


short CharacterDamage(int min, int max)
{
	double fraction = 1.0 / static_cast<double>(RAND_MAX);
	return static_cast<short>(rand() * fraction * (max - min) + min);
}
