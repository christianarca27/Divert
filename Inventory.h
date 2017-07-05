//
// Created by chris on 05/07/2017.
//

#ifndef DIVERTPROJECT_INVENTORY_H
#define DIVERTPROJECT_INVENTORY_H

#include <list>
#include "BuyableItems.h"

class Inventory {
public:
    Inventory(std::_List_iterator<BuyableItems>* ptr, int c=0);

    void orderByLevel();
    void orderByName();
    void deleteItem();
    void useItem();

    int getCapacity() const;

    void setCapacity(int capacity);

private:
    int capacity;
    std::_List_iterator<BuyableItems>* beginList;
};


#endif //DIVERTPROJECT_INVENTORY_H
