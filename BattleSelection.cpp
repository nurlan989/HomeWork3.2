#include <iostream>

#include "BattleSelection.h"
#include "CallMenu.h"
#include "CharacterAtributes.h"



void PrintVersus(Characters character1, Characters character2)
{
	std::cout << ChoiceCharacter(character1) << " vs " << ChoiceCharacter(character2) << std::endl;
}


void ProgressOfTheGame()
{
	FightCountdown();
	auto characterOneType = static_cast<Characters>(character1);
	auto characterTwoType = static_cast<Characters>(character2);

	PrintVersus(characterOneType, characterTwoType);

	CLEAN_SCREEN;
	while (DealDamageToCharacter(characterOneType, GetDamageCharacter(characterTwoType)) && DealDamageToCharacter(characterTwoType, GetDamageCharacter(characterTwoType)))
	{
		CLEAN_SCREEN;
	}
}

