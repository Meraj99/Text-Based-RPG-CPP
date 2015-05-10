#include <iostream>
#include <string>
#include "Player.h"
#include "Story.h"
#include "Shop.h"
#include "Items.h"
#include "CLS.h"

void shopMenu(Player &player)
{
	bool InvalidInput;
	do
	{
		InvalidInput = false;
		std::string ShopChoice;

		std::cout << "Which item would you like to buy?" << std::endl;
		std::cout << "Bronze Sword" << std::endl;
		std::cout << std::endl;
		std::cout << "Type exit to leave the shop." << std::endl;

		getline(std::cin, ShopChoice);
		cls();
		for (char &c : ShopChoice)
			c = tolower(c);

		if (ShopChoice == "exit")
			return;
		else if (ShopChoice == "bronze sword")
		{
			BronzeSword bronzeSword;
			//purchaseItem(player, bronzeSword);
		}
		else
		{
			std::cout << "Invalid input." << std::endl;
			InvalidInput = true;
		}
	} while (InvalidInput);
}