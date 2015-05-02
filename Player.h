#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
	double BaseHealth = 15;

	double HelmetBoost = 0;
	double ChestplateBoost = 0;
	double LeggingsBoost = 0;
	double FootwearBoost = 0;

	double BaseDamage = 5;
	double DamageMultiplier = 1;

	double getArmorBoost();
};

void savePlayer(Player player);
Player loadPlayer();
#endif