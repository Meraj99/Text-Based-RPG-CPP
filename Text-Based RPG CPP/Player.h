#ifndef PLAYER_H
#define PLAYER_H
#include "Items.h"

class Player
{
public:
	double Health = 15;

	Sword EquippedSword;
	Helmet EquippedHelmet;
	Chestplate EquippedChestplate;
	Leggings EquippedLeggings;
	Footwear EquippedFootwear;

	double SwordDamageBoost = 0;
	double SwordDamageMultiplier = 1;

	double Damage = 5;
	double DamageMultiplier = 1;

	double HealBoost = 5;

	double getArmorBoost();
	double getHelmetBoost() { return EquippedHelmet.HelmetBoost; }
	double getChestplateBoost() { return EquippedChestplate.ChestplateBoost; }
	double getLeggingsBoost() { return EquippedLeggings.LeggingsBoost; }
	double getFootwearBoost() { return EquippedFootwear.FootwearBoost; }

	double getHealth() { return Health + getArmorBoost(); }
	void setHealth(double health) { Health = health; }
};

void savePlayer(Player player);
Player loadPlayer();
void loadObjects(Player &player, double Damage, double DamageMultiplier, double HelmetBoost, double ChestplateBoost, double LeggingsBoost, double FootwearBoost);
#endif