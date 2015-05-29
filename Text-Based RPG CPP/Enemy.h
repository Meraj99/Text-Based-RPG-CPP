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
		Health = 10;
		Damage = 2.5;
	}
};

class Troll : public Enemy
{
public:
	Troll()
	{
		Health = 15;
		Damage = 3;
	}
};

class Thug : public Enemy
{
public:
	Thug()
	{
		Health = 20;
		Damage = 5;
	}
};


#endif