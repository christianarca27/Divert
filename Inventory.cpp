//
// Created by chris on 05/07/2017.
//

#include "Inventory.h"

Inventory::Inventory(std::_List_iterator<BuyableItems>* ptr, int c) {
    std::list<BuyableItems> itemList;
    auto itr = itemList.begin();
    ptr = &(itr);
}

int Inventory::getCapacity() const {
    return capacity;
}

void Inventory::setCapacity(int capacity) {
    Inventory::capacity = capacity;
}
