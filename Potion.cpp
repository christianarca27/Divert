//
// Created by User on 24/06/2017.
//

#include "Potion.h"

const std::string &Potion::getType() const {
    return type;
}

void Potion::setType(const std::string &type) {
    Potion::type = type;
}

int Potion::getHpIncrease() const {
    return hpIncrease;
}

void Potion::setHpIncrease(int hpIncrease) {
    Potion::hpIncrease = hpIncrease;
}

int Potion::getStrengthIncrease() const {
    return strengthIncrease;
}

void Potion::setStrengthIncrease(int strengthIncrease) {
    Potion::strengthIncrease = strengthIncrease;
}

int Potion::getResistanceIncrease() const {
    return resistanceIncrease;
}

void Potion::setResistanceIncrease(int resistanceIncrease) {
    Potion::resistanceIncrease = resistanceIncrease;
}
