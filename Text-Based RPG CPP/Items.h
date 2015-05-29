#ifndef ITEMS_H
#define ITEMS_H

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

#pragma region SwordRegion
class BronzeSword : public Sword
{
public:
	BronzeSword()
	{
		Name = "Bronze Sword";
		Damage = 2;
		DamageMultiplier = 1.1;
	}
};
#pragma endregion SwordRegion

#pragma region HelmetRegion
class BronzeHelmet : public Helmet
{
public:
	BronzeHelmet()
	{
		Name = "Bronze Helmet";
		HelmetBoost = 2;
	}
};
#pragma endregion HelmetRegion

#pragma region ChestplateRegion
class BronzeChestplate : public Chestplate
{
public:
	BronzeChestplate()
	{
		Name = "Bronze Chestplate";
		ChestplateBoost = 4;
	}
};
#pragma endregion ChestplateRegion

#pragma region LeggingsRegion
class BronzeLeggings : public Leggings
{
public:
	BronzeLeggings()
	{
		Name = "Bronze Leggings";
		LeggingsBoost = 2;
	}
};
#pragma endregion ChestplateRegion

#pragma region FootwearRegion
class BronzeFootwear : public Footwear
{
public:
	BronzeFootwear()
	{
		Name = "Bronze Footwear";
		FootwearBoost = 2;
	}
};
#pragma endregion FootwearRegion

#endif