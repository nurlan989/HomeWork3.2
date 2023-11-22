#pragma once


enum class Characters
{
	Knight = 1,
	Viking = 2,
	Wizard = 3
};

namespace CharacterAtributes
{
	static int hp{ 100 };
	static int armor{ 100 };
	static int shield{ 400 };
	static int elixirOfLife{ 500 };
	static int magicPowder{ 250 };
	static int healthPowder{ 40 };
}


std::string ChoiceCharacter(Characters character);

bool DealDamageToCharacter(Characters characterType, int damage);

bool DescriptionOfTheBattle(int& characterHP, int damage, Characters characterType);

int GetDamageCharacter(Characters characterType);

short GetDamageRandom(int min, int max);

