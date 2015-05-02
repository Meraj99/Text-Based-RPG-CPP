#include<iostream>
#include<string>
#include"CLS.h"
#include"Player.h"
#include"Enemy.h"
#include"Story.h"
#include"Battle.h"

void story(Player &player)
{
	bool Retry;

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



	return;
}