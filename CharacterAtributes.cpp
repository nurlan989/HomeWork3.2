#include <iostream>

#include "CharacterAtributes.h"


#define CELL std::cout << "-------------------------------------" << std::endl;
#define SWORD std::cout << "Damage --||======>" << damage << std::endl;


std::string ChoiceCharacter(Characters character)
{
	switch (character)
	{
	case Characters::Knight:
		return "Knight";
	case Characters::Viking:
		return "Viking";
	case Characters::Wizard:
		return "Wizard";
	default:
		return "";
		break;
	}
}

bool DealDamageToCharacter( Characters characterType, int damage )
{
	static int knightHP = CharacterAtributes::hp + (CharacterAtributes::armor + CharacterAtributes::shield);
	static int vikingHP = CharacterAtributes::hp + CharacterAtributes::elixirOfLife;
	static int wizardHP = CharacterAtributes::hp + CharacterAtributes::magicPowder;

	switch (characterType)
	{
	case Characters::Knight:
		return DescriptionOfTheBattle(knightHP, damage, characterType);
		break;
	case Characters::Viking:
		return DescriptionOfTheBattle(vikingHP, damage, characterType);
		break;
	case Characters::Wizard:
		
		if (damage >= 30)
		{
			wizardHP += CharacterAtributes::healthPowder;
		}
		return DescriptionOfTheBattle(wizardHP, damage, characterType);
		break;
	default:
		return false;
		break;
	}
}

bool DescriptionOfTheBattle(int& characterHP,int damage, Characters characterType)
{
	characterHP -= damage;

	if (characterHP > 0)
	{  
		CELL;
		SWORD;
		std::cout << ChoiceCharacter( characterType ) << " left hp " << characterHP << std::endl;
		CELL;
		return true;
	}
	else 
	{
		std::cout << ChoiceCharacter( characterType ) << " is dead (R.I.P)" << std::endl;
		return false;
	}
}

int GetDamageCharacter(Characters characterType)
{
	switch (characterType)
	{
	case Characters::Knight:
		return GetDamageRandom(30, 60);
		break;
	case Characters::Viking:
		return GetDamageRandom(25, 50);
		break;
	case Characters::Wizard:
		return GetDamageRandom(20, 40);
		break;
	default:
		return 0;
		break;
	}
}

short GetDamageRandom(int min, int max)
{
	double fraction = 1.0 / static_cast<double>(RAND_MAX);
	return static_cast<short>(rand() * fraction * (max - min) + min);
}
