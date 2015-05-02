#include<iostream>
#include<fstream>
#include"Player.h"
#include"Story.h"
#include"CLS.h"
;


double Player::getArmorBoost()
{
	return HelmetBoost + ChestplateBoost + LeggingsBoost + FootwearBoost;
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
		Player player;
		in >> player.BaseHealth;
		in >> player.HelmetBoost;
		in >> player.ChestplateBoost;
		in >> player.LeggingsBoost;
		in >> player.FootwearBoost;
		in >> player.BaseDamage;
		in >> player.DamageMultiplier;
		return player;
	}
	else
	{
		std::cout << "Unable to open file. Creating new game..." << std::endl;
		getchar();
		cls();
	}
	Player player;
	return player;
}