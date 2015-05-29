#include <iostream>
#include <string>
#include "Player.h"
#include "Enemy.h"
#include "Battle.h"
#include "CLS.h"

bool battle(Player &player, Enemy &enemy) // This function handles battles
{
	double Health = player.Health;
	while (enemy.Health > 0)
	{
		std::string BattleChoice = "";
		std::cout << "Your HP: " << player.getHealth() << std::endl;
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

		if (player.getHealth() <= 0)
		{
			std::cout << "You have died. Press enter to retry." << std::endl;
			getchar();
			cls();
			return true;
		}
		cls();
	}
	player.Health = Health;
	std::cout << "Congratulations! You have defeated the enemy." << std::endl;
	return false;
}

void hit(Player &player, Enemy &enemy)
{
	double DamageDoneToEnemy = (rand() % static_cast<int>(player.Damage)) * player.DamageMultiplier * player.SwordDamageMultiplier;
	double DamageDoneToPlayer = (rand() % static_cast<int>(enemy.Damage));
	enemy.Health -= DamageDoneToEnemy;
	player.setHealth(player.getHealth() - DamageDoneToPlayer);
}

void bash(Player &player, Enemy &enemy)
{
	double DamageDoneToEnemy = (rand() % static_cast<int>(player.Damage)) * player.DamageMultiplier * player.SwordDamageMultiplier;
	DamageDoneToEnemy *= 1.2;
	double DamageDoneToPlayer = (rand() % static_cast<int>(enemy.Damage));
	DamageDoneToPlayer *= 1.2;
	enemy.Health -= DamageDoneToEnemy;
	player.setHealth(player.getHealth() - DamageDoneToPlayer);
}

void heal(Player &player, Enemy &enemy)
{
	double HealAmount = (rand() % static_cast<int>(player.HealBoost));
	double DamageDoneToPlayer = (rand() % static_cast<int>(enemy.Damage));
	player.setHealth(player.getHealth() + HealAmount);
	player.setHealth(player.getHealth() - DamageDoneToPlayer);
}