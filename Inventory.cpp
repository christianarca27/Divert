//
// Created by chris on 05/07/2017.
//

#include "Inventory.h"

Inventory::Inventory(int c) : capacity(c) {}

int Inventory::getCapacity() const {
    return capacity;
}

void Inventory::setCapacity(int capacity) {
    Inventory::capacity = capacity;
}
