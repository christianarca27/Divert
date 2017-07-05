//
// Created by User on 05/07/2017.
//

#include "Inventory.h"

int Inventory::getCapacity() const {
    return capacity;
}

void Inventory::setCapacity(int capacity) {
    Inventory::capacity = capacity;
}

const std::list<BuyableItems> &Inventory::getItems() const {
    return items;
}

void Inventory::setItems(const std::list<BuyableItems> &items) {
    Inventory::items = items;
}

Inventory::Inventory(int capacity, const std::list<BuyableItems> &items) : capacity(capacity), items(items) {}
