#pragma once

namespace CharacterAtributes
{
	static int hp{ 100 };
	static int armor{ 100 };
	static int shield{ 400 };
	static int elixirOfLife{ 500 };
	static int magicPowder{ 250 };
	static int healthPowder{ 60 };
}
bool DealDamageToKnight(int damage);
bool DealDamageToViking(int damage);
bool DealDamageToWizard(int damage);
bool DealDamageToTraitor(int damage);

short CharacterDamage(int min, int max);

