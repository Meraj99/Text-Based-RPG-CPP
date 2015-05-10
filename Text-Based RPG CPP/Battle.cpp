#include <iostream>
#include <string>
#include "Player.h"
#include "Enemy.h"
#include "Battle.h"
#include "CLS.h"

bool battle(Player &player, Enemy &enemy) // This function handles battles
{

	while (enemy.Health > 0)
	{
		std::string BattleChoice = "";
		std::cout << "Your HP: " << player.Health << std::endl;
		std::cout << "Enemy HP: " << enemy.Health << std::endl;
		std::cout << "Do you want to hit, bash, or heal?" << std::endl;
		getline(std::cin, BattleChoice);
		for (char &c : BattleChoice)
			c = tolower(c);

		if (BattleChoice == "hit")
			hit(player, enemy);
		else if (BattleChoice == "bash")
			bash(player, enemy);
		else if (BattleChoice == "heal")
			heal(player, enemy);
		else
		{
			std::cout << "Invalid input." << std::endl;
			getchar();
		}

		if (player.Health <= 0)
		{
			std::cout << "You have died. Press enter to retry." << std::endl;
			getchar();
			cls();
			return true;
		}

		cls();
	}
	std::cout << "Congratulations! You have defeated the enemy." << std::endl;
	return false;
}

void hit(Player &player, Enemy &enemy)
{
	double DamageDoneToEnemy = (rand() % (int) player.Damage) * player.DamageMultiplier * player.SwordDamageMultiplier;
	double DamageDoneToPlayer = (rand() % (int) enemy.Damage);
	enemy.Health -= DamageDoneToEnemy;
	player.Health -= DamageDoneToPlayer;
}

void bash(Player &player, Enemy &enemy)
{
	double DamageDoneToEnemy = (rand() % (int) player.Damage) * player.DamageMultiplier * player.SwordDamageMultiplier;
	DamageDoneToEnemy *= 1.2;
	double DamageDoneToPlayer = (rand() % (int) enemy.Damage);
	DamageDoneToPlayer *= 1.2;
	enemy.Health -= DamageDoneToEnemy;
	player.Health -= DamageDoneToPlayer;
}

void heal(Player &player, Enemy &enemy)
{
	double HealAmount = (rand() % (int) player.HealBoost);
	double DamageDoneToPlayer = (rand() % (int) enemy.Damage);
	player.Health += HealAmount;
	player.Health -= DamageDoneToPlayer;
}