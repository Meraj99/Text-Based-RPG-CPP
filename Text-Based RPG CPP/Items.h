#ifndef ITEMS_H
#define ITEMS_H

// WORK IN PROGRESS

class Item
{
public:
	std::string Name = "";
	double Health = 0;
	double Damage = 0;
	double DamageMultiplier = 1;
	double HelmetBoost = 0;
	double ChestplateBoost = 0;
	double LeggingsBoost = 0;
	double FootwearBoost = 0;
};

class Sword : public Item { };

class Helmet : public Item { };

class Chestplate : public Item { };

class Leggings : public Item { };

class Footwear : public Item { };

class BronzeSword : public Sword
{
public:
	BronzeSword()
	{
		Item::Name = "Bronze Sword";
		Item::Damage = 2;
		Item::DamageMultiplier = 1.1;
	}
};

#endif