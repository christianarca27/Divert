//
// Created by User on 24/06/2017.
//

#include "RangedWeapon.h"

int RangedWeapon::getRange() const {
    return range;
}

void RangedWeapon::setRange(int range) {
    RangedWeapon::range = range;
}

int RangedWeapon::getShots() const {
    return shots;
}

void RangedWeapon::setShots(int shots) {
    RangedWeapon::shots = shots;
}
