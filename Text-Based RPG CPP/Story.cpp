#include <iostream>
#include <string>
#include "CLS.h"
#include "Player.h"
#include "Enemy.h"
#include "Story.h"
#include "Battle.h"
#include "Shop.h"


void story(Player &player)
{
	bool Retry;
	std::string GoToShop;

	std::cout << "Welcome to the game. This is a text-based RPG, made by Meraj Ahmed." << std::endl;
	std::cout << "Press enter to continue..." << std::endl;
	getchar();
	cls();

	std::cout << "This tutorial will introduce you to the basics of the game. New features will be unlocked as you progress, and you will learn about them when they are unlocked." << std::endl;
	std::cout << "Press enter to continue..." << std::endl;
	getchar();
	cls();

	std::cout << "There are 3 main battle choices: Hit, Bash, and Heal." << std::endl;
	std::cout << "Hit is a normal attack." << std::endl;
	std::cout << "Bash does extra damage to the enemy, but damages you as well." << std::endl;
	std::cout << "Heal simply heals you for a small amount." << std::endl;
	std::cout << "Press enter to continue..." << std::endl;
	getchar();
	cls();
	
	savePlayer(player);
	do
	{
		TutorialTroll tutorialTroll;
		player = loadPlayer();
		Retry = battle(player, tutorialTroll);
	} while (Retry);
	Retry = false;

	std::cout << "Congratulations! You have completed the tutorial." << std::endl;
	getchar();
	cls();

	player.DamageMultiplier = 1.05;
	savePlayer(player);
	std::cout << "You have been rewarded with a wooden sword. Swords give you a passive damage multiplier towards your attacks." << std::endl;
	getchar();
	cls();

	std::cout << "RPG elements will be added into the game from now on." << std::endl;
	getchar();
	cls();

	std::cout << "As you wake up from your bed, you hear some rustling outside your house. It sounds suspicious, so you head out to investigate." << std::endl;
	getchar();
	cls();

	std::cout << "You see a troll stealing carrots from your garden. You get your sword out, and charge to attack." << std::endl;
	getchar();
	cls();

	savePlayer(player);
	do
	{
		Troll troll;
		player = loadPlayer();
		Retry = battle(player, troll);
	} while (Retry);
	Retry = false;

	std::cout << "The troll falls to the ground with a thud. You head to the town to purchase armor, should you encounter more enemies." << std::endl;
	getchar();
	cls();

	std::cout << "Would you like to go to the shop?" << std::endl;
	getline(std::cin, GoToShop);
	cls();
	for (char &c : GoToShop)
		c = tolower(c);

	if (GoToShop == "yes")
	{
		shopMenu(player);
	}
	savePlayer(player);



	return;
}