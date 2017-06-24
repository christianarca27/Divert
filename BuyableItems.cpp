//
// Created by User on 24/06/2017.
//

#include "BuyableItems.h"

int BuyableItems::getLevel() const {
    return level;
}

void BuyableItems::setLevel(int level) {
    BuyableItems::level = level;
}

int BuyableItems::getPrice() const {
    return price;
}

void BuyableItems::setPrice(int price) {
    BuyableItems::price = price;
}

bool BuyableItems::isAvailability() const {
    return availability;
}

void BuyableItems::setAvailability(bool availability) {
    BuyableItems::availability = availability;
}
