//
// Created by User on 24/06/2017.
//

#include "Armor.h"

int Armor::getDamageDecreaser() const {
    return damageDecreaser;
}

void Armor::setDamageDecreaser(int damageDecreaser) {
    Armor::damageDecreaser = damageDecreaser;
}

bool Armor::isMagical() const {
    return magical;
}

void Armor::setMagical(bool magical) {
    Armor::magical = magical;
}

