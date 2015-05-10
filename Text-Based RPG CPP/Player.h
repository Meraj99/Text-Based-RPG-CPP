#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
	double Health = 15;

	double SwordDamageBoost = 0;
	double SwordDamageMultiplier = 1;

	double HelmetBoost = 0;
	double ChestplateBoost = 0;
	double LeggingsBoost = 0;
	double FootwearBoost = 0;

	double Damage = 5;
	double DamageMultiplier = 1;

	double HealBoost = 5;

	double getArmorBoost();
};

void savePlayer(Player player);
Player loadPlayer();
#endif