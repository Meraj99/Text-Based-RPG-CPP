#ifndef SHOP_H
#define SHOP_H

#include "Items.h"


void shopMenu(Player &player);
void purchaseSword(Player &player, Sword sword);
void purchaseHelmet(Player &player, Helmet helmet);
void purchaseChestplate(Player &player, Chestplate chestplate);
void purchaseLeggings(Player &player, Leggings leggings);
void purchaseFootwear(Player &player, Footwear footwear);

#endif