//
// Created by User on 05/07/2017.
//

#ifndef DIVERTPROJECT_INVENTORY_H
#define DIVERTPROJECT_INVENTORY_H

#include <list>

#include "BuyableItems.h"

class Inventory {
public:
    Inventory(int capacity, const std::list<BuyableItems> &items);

    void orderByLevel();
    void orderByName();
    void deleteItem();
    void useItem();

    int getCapacity() const;

    void setCapacity(int capacity);

    const std::list<BuyableItems> &getItems() const;

    void setItems(const std::list<BuyableItems> &items);

private:
    int capacity;
    std::list <BuyableItems> items;
};


#endif //DIVERTPROJECT_INVENTORY_H
