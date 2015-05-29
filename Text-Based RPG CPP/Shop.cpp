#include <iostream>
#include <string>
#include "Player.h"
#include "Shop.h"
#include "Items.h"
#include "CLS.h"

// Opens the shop menu
void shopMenu(Player &player)
{
	bool InvalidInput;
	while (true)
	{
		InvalidInput = false;
		std::string ShopChoice;

		std::cout << "Which item would you like to buy?" << std::endl;
		std::cout << "Bronze Sword: +2 damage, x1.1" << std::endl;
		std::cout << "Bronze Helmet: +2 HP" << std::endl;
		std::cout << "Bronze Chestplate: +4 HP" << std::endl;
		std::cout << "Bronze Leggings: +2 HP" << std::endl;
		std::cout << "Bronze Footwear: +2 HP" << std::endl;
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
			purchaseSword(player, bronzeSword);
		}
		else if (ShopChoice == "bronze helmet")
		{
			BronzeHelmet bronzeHelmet;
			purchaseHelmet(player, bronzeHelmet);
		}
		else if (ShopChoice == "bronze chestplate")
		{
			BronzeChestplate bronzeChestplate;
			purchaseChestplate(player, bronzeChestplate);
		}
		else if (ShopChoice == "bronze leggings")
		{
			BronzeLeggings bronzeLeggings;
			purchaseLeggings(player, bronzeLeggings);
		}
		else if (ShopChoice == "bronze footwear")
		{
			BronzeFootwear bronzeFootwear;
			purchaseFootwear(player, bronzeFootwear);
		}
		else
		{
			std::cout << "Invalid input." << std::endl;
		}
	}
}

// Purchase item functions
void purchaseSword(Player& player, Sword sword)
{
	if ((player.EquippedSword.Damage < player.SwordDamageBoost) && (player.EquippedSword.DamageMultiplier < player.SwordDamageMultiplier))
	{
		player.EquippedSword = sword;
		player.SwordDamageBoost = sword.Damage;
		player.SwordDamageMultiplier = sword.DamageMultiplier;
		std::cout << "You have bought the sword." << std::endl;
		getchar();
		cls();
	}
	else
	{
		std::cout << "Your current sword is better." << std::endl;
		getchar();
		cls();
	}
}

void purchaseHelmet(Player& player, Helmet helmet)
{
	if (player.EquippedHelmet.HelmetBoost < helmet.HelmetBoost)
	{
		player.EquippedHelmet = helmet;
		std::cout << "You have bought the helmet." << std::endl;
		getchar();
		cls();
	}
	else
	{
		std::cout << "Your current helmet is better." << std::endl;
		getchar();
		cls();
	}
}

void purchaseChestplate(Player& player, Chestplate chestplate)
{
	if (player.EquippedChestplate.ChestplateBoost < chestplate.ChestplateBoost)
	{
		player.EquippedChestplate = chestplate;
		std::cout << "You have bought the chestplate." << std::endl;
		getchar();
		cls();
	}
	else
	{
		std::cout << "Your current chestplate is better." << std::endl;
		getchar();
		cls();
	}
}

void purchaseLeggings(Player& player, Leggings leggings)
{
	if (player.EquippedLeggings.LeggingsBoost < leggings.LeggingsBoost)
	{
		player.EquippedLeggings = leggings;
		std::cout << "You have bought the leggings." << std::endl;
		getchar();
		cls();
	}
	else
	{
		std::cout << "Your current leggings are better." << std::endl;
		getchar();
		cls();
	}
}

void purchaseFootwear(Player& player, Footwear footwear)
{
	if (player.EquippedFootwear.FootwearBoost < footwear.FootwearBoost)
	{
		player.EquippedFootwear = footwear;
		std::cout << "You have bought the footwear." << std::endl;
		getchar();
		cls();
	}
	else
	{
		std::cout << "Your current footwear is better." << std::endl;
		getchar();
		cls();
	}
}