#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
	double BaseHealth;

	double HelmetBoost;
	double ChestplateBoost;
	double LeggingsBoost;
	double FootwearBoost;

	double BaseDamage;
	double DamageMultiplier;

	double getArmorBoost();

	Player();
};

void savePlayer(Player player);
Player loadPlayer();
#endif