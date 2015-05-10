#ifndef ENEMY_H
#define ENEMY_H


class Enemy
{
public:
	double Health;
	double Damage;
};

class TutorialTroll : public Enemy
{
public:
	TutorialTroll()
	{
		Enemy::Health = 10;
		Enemy::Damage = 2.5;
	}
};

class Troll : public Enemy
{
public:
	Troll()
	{
		Enemy::Health = 15;
		Enemy::Damage = 3;
	}
};

class Thug : public Enemy
{
public:
	Thug()
	{
		Enemy::Health = 20;
		Enemy::Damage = 5;
	}
};


#endif