#ifndef SHOP_H
#define SHOP_H

#include "Items.h"


void shopMenu(Player &player);
template<typename T> void purchaseItem(Player &player, Item item);
template<> void purchaseItem<Sword>(Player &player, Sword item);

#endif