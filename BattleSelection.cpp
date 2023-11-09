#include <iostream>

#include "BattleSelection.h"
#include "CallMenu.h"
#include "CharacterAtributes.h"


enum class Characters
{
	Knight = 1,
	Viking = 2,
	Wizard = 3
};

void ProgressOfTheGame()
{
	if (character1 == static_cast<int>(Characters::Knight) && character2 == static_cast<int>(Characters::Viking))
	{
		FightCountdown();
		std::cout << "Knight vs Viking" << std::endl;
		CLEAN_SCREEN;
		while (DealDamageToKnight(CharacterDamage(60, 100)) && DealDamageToViking(CharacterDamage(20, 50)))
		{
			CLEAN_SCREEN;
		}
	}
	if (character1 == static_cast<int>(Characters::Knight) && character2 == static_cast<int>(Characters::Wizard))
	{
		FightCountdown();
		std::cout << "Knight vs Wizard" << std::endl;
		CLEAN_SCREEN;
		while (DealDamageToKnight(CharacterDamage(80, 120)) && DealDamageToWizard(CharacterDamage(20, 50)))
		{
			CLEAN_SCREEN;
		}
	}
	if (character1 == static_cast<int>(Characters::Viking) && character2 == static_cast<int>(Characters::Knight))
	{
		FightCountdown();
		std::cout << "Viking vs Knight" << std::endl;
		CLEAN_SCREEN;
		while (DealDamageToViking(CharacterDamage(50, 90)) && DealDamageToKnight(CharacterDamage(40, 80)))
		{
			CLEAN_SCREEN;
		}
	}
	if (character1 == static_cast<int>(Characters::Viking) && character2 == static_cast<int>(Characters::Wizard))
	{
		FightCountdown();
		std::cout << "Viking vs Wizard" << std::endl;
		CLEAN_SCREEN;
		while (DealDamageToViking(CharacterDamage(80, 120)) && DealDamageToWizard(CharacterDamage(20, 50)))
		{
			CLEAN_SCREEN;
		}
	}
	if (character1 == static_cast<int>(Characters::Wizard) && character2 == static_cast<int>(Characters::Knight))
	{
		FightCountdown();
		std::cout << "Wizard vs Knight" << std::endl;
		CLEAN_SCREEN;
		while (DealDamageToWizard(CharacterDamage(60, 100)) && DealDamageToKnight(CharacterDamage(50, 100)))
		{
			CLEAN_SCREEN;
		}
	}
	if (character1 == static_cast<int>(Characters::Wizard) && character2 == static_cast<int>(Characters::Viking))
	{
		FightCountdown();
		std::cout << "Wizard vs Viking" << std::endl;
		CLEAN_SCREEN;
		while (DealDamageToWizard(CharacterDamage(80, 120)) && DealDamageToViking(CharacterDamage(20, 50)))
		{
			CLEAN_SCREEN;
		}
	}
	if (character1 == static_cast<int>(Characters::Knight) && character2 == static_cast<int>(Characters::Knight))
	{
		FightCountdown();
		std::cout << "Knight vs Knight" << std::endl;
		CLEAN_SCREEN;
		while (DealDamageToTraitor(CharacterDamage(50, 90)) && DealDamageToKnight(CharacterDamage(30, 70)))
		{
			CLEAN_SCREEN;
		}
	}
	if (character1 == static_cast<int>(Characters::Viking) && character2 == static_cast<int>(Characters::Viking))
	{
		FightCountdown();
		std::cout << "Viking vs Viking" << std::endl;
		CLEAN_SCREEN;
		while (DealDamageToTraitor(CharacterDamage(50, 90)) && DealDamageToViking(CharacterDamage(30, 70)))
		{
			CLEAN_SCREEN;
		}
	}
	if (character1 == static_cast<int>(Characters::Wizard) && character2 == static_cast<int>(Characters::Wizard))
	{
		FightCountdown();
		std::cout << "Wizard vs Wizard" << std::endl;
		CLEAN_SCREEN;
		while (DealDamageToTraitor(CharacterDamage(50, 90)) && DealDamageToWizard(CharacterDamage(30, 70)))
		{
			CLEAN_SCREEN;
		}
	}
}