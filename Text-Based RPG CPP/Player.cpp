#include <iostream>
#include <fstream>
#include "Player.h"
#include "Items.h"
#include "CLS.h"
;


double Player::getArmorBoost()
{
	return getHelmetBoost() + getChestplateBoost() + getLeggingsBoost() + getFootwearBoost();
}

void savePlayer(Player player) // Save the player
{
	std::ofstream out;
	out.open("SaveFile.txt");
	out << player.Health << std::endl;
	out << player.SwordDamageBoost << std::endl;
	out << player.SwordDamageMultiplier << std::endl;
	out << player.Damage << std::endl;
	out << player.DamageMultiplier << std::endl;
	out << player.HealBoost << std::endl;
	out << player.EquippedSword.Damage << std::endl;
	out << player.EquippedSword.DamageMultiplier << std::endl;
	out << player.EquippedHelmet.HelmetBoost << std::endl;
	out << player.EquippedChestplate.ChestplateBoost << std::endl;
	out << player.EquippedLeggings.LeggingsBoost << std::endl;
	out << player.EquippedFootwear.FootwearBoost << std::endl;
	out.close();
}

Player loadPlayer() // Load the player from SaveFile.txt. If file does not exist, create a new Player
{
	std::ifstream in("SaveFile.txt");
	if (in.is_open())
	{
		double Damage;
		double DamageMultiplier;
		double HelmetBoost;
		double ChestplateBoost;
		double LeggingsBoost;
		double FootwearBoost;
		Player player;
		in >> player.Health;
		in >> player.SwordDamageBoost;
		in >> player.SwordDamageMultiplier;
		in >> player.Damage;
		in >> player.DamageMultiplier;
		in >> player.HealBoost;
		in >> Damage;
		in >> DamageMultiplier;
		in >> HelmetBoost;
		in >> ChestplateBoost;
		in >> LeggingsBoost;
		in >> FootwearBoost;
		loadObjects(player, Damage, DamageMultiplier, HelmetBoost, ChestplateBoost, LeggingsBoost, FootwearBoost);
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

void loadObjects(Player &player, double Damage, double DamageMultiplier, double HelmetBoost, double ChestplateBoost, double LeggingsBoost, double FootwearBoost) // This function checks its parameters, and instantiates the appropriate objects. It then loads the objects onto the player
{
	if ((Damage == 2) && (DamageMultiplier == 1.1)) { BronzeSword bronzeSword; player.EquippedSword = bronzeSword; }

	if (HelmetBoost == 2) { BronzeHelmet bronzeHelmet; player.EquippedHelmet = bronzeHelmet; }

	if (ChestplateBoost == 4) { BronzeChestplate bronzeChestplate; player.EquippedChestplate = bronzeChestplate; }

	if (LeggingsBoost == 2) { BronzeLeggings bronzeLeggings; player.EquippedLeggings = bronzeLeggings; }

	if (FootwearBoost == 2) { BronzeFootwear bronzeFootwear; player.EquippedFootwear = bronzeFootwear; }
}