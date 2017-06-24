//
// Created by User on 24/06/2017.
//

#include "MeleeWeapon.h"

int MeleeWeapon::getSharpness() const {
    return sharpness;
}

void MeleeWeapon::setSharpness(int sharpness) {
    MeleeWeapon::sharpness = sharpness;
}

int MeleeWeapon::getHealtWeapon() const {
    return healtWeapon;
}

void MeleeWeapon::setHealtWeapon(int healtWeapon) {
    MeleeWeapon::healtWeapon = healtWeapon;
}

bool MeleeWeapon::isIsBroken() const {
    return isBroken;
}

void MeleeWeapon::setIsBroken(bool isBroken) {
    MeleeWeapon::isBroken = isBroken;
}
