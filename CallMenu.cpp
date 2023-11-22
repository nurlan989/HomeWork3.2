#include <iostream>

#include "CallMenu.h"
#include "BattleSelection.h"

int character1{ 0 };
int character2{ 0 };


	void Menu()
	{
		std::cout << "Select a character :" << std::endl
			<< "1 - Knight " << std::endl
			<< "2 - Viking " << std::endl
			<< "3 - Wizard " << std::endl;

		std::cout << "Select your first character :";
		std::cin >> character1;
		std::cout << "Select your second character :";
		std::cin >> character2;
		CLEAN_SCREEN;
	}

	void FightCountdown()
	{
		for (size_t i = 3; i > 0; --i)
		{
			std::cout << i << std::endl;
			CLEAN_SCREEN;
		}
		std::cout << "Fight " << std::endl;
		CLEAN_SCREEN;

	}
