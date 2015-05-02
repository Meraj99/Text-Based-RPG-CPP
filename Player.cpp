#include<iostream>
#include<fstream>
#include"Player.h"
;

double Player::getArmorBoost()
{
	return HelmetBoost + ChestplateBoost + LeggingsBoost + FootwearBoost;
}

Player::Player() // Constructor for Player
{
	BaseHealth = 15;
	HelmetBoost = 0;
	ChestplateBoost = 0;
	LeggingsBoost = 0;
	FootwearBoost = 0;
	BaseDamage = 5;
	DamageMultiplier = 1;
}

void savePlayer(Player player) // Save the player
{
	std::ofstream out;
	out.open("SaveFile.txt");
	out << player.BaseHealth << std::endl;
	out << player.HelmetBoost << std::endl;
	out << player.ChestplateBoost << std::endl;
	out << player.LeggingsBoost << std::endl;
	out << player.FootwearBoost << std::endl;
	out << player.BaseDamage << std::endl;
	out << player.DamageMultiplier << std::endl;
	out.close();
}

Player loadPlayer() // Load the player from SaveFile.txt. If file does not exist, create a new Player
{
	std::ifstream in("SaveFile.txt");
	if (in.is_open())
	{
		int data;
		Player player = Player();
		in >> data;
		player.BaseHealth = data;
		in >> data;
		player.HelmetBoost;
		in >> data;
		player.ChestplateBoost;
		in >> data;
		player.LeggingsBoost;
		in >> data;
		player.FootwearBoost;
		in >> data;
		player.BaseDamage;
		in >> data;
		player.DamageMultiplier;
		return player;
	}
	else
	{
		std::cout << "Unable to open file. Creating new game..." << std::endl;
		system("pause");
		system("cls");
	}
	Player player = Player();
	return player;
}