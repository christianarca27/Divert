//
// Created by chris on 05/07/2017.
//

#include "Inventory.h"

Inventory::Inventory(int c) : capacity(c) {}

void Inventory::orderByLevel(){
    //da implementare
}

void Inventory::orderByName(){
    //da implementare
}

int Inventory::getCapacity() const {
    return capacity;
}

void Inventory::setCapacity(int capacity) {
    Inventory::capacity = capacity;
}

void Inventory::addItem(BuyableItems& item) {
    itemList.push_back(&item);
}

void Inventory::removeItem(BuyableItems &item) {
    itemList.remove(&item);
}

void Inventory::printInventory() {
    for(auto itr = itemList.begin(); itr != itemList.end(); itr++)
        std::cout << (*itr)->getName() << std::endl;
}