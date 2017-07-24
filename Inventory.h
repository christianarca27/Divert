//
// Created by chris on 05/07/2017.
//

#ifndef DIVERTPROJECT_INVENTORY_H
#define DIVERTPROJECT_INVENTORY_H

#include <list>
#include "BuyableItems.h"
#include <iostream>
#include "PlayableCharacter.h"

class Inventory {
public:
    Inventory(int c=0);

    void addItem(BuyableItems& item);
    void removeItem(BuyableItems& item);
    void printInventory();

    void orderByLevel();
    void orderByName();
    void useItem(PlayableCharacter& player, BuyableItems *item);

    int getCapacity() const;

    void setCapacity(int capacity);

private:
    int capacity;
    std::list<BuyableItems*> itemList;
};


#endif //DIVERTPROJECT_INVENTORY_H
