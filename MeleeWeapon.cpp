//
// Created by User on 24/06/2017.
//

#include "MeleeWeapon.h"

void MeleeWeapon::useItem(PlayableCharacter &player) {
    Weapon *weapon=player.getWeapon();
    player.getInventory()->addItem(*weapon);
    player.setWeapon(this);
}

int MeleeWeapon::getSharpness() const {
    return sharpness;
}

void MeleeWeapon::setSharpness(int sharpness) {
    MeleeWeapon::sharpness = sharpness;
}

bool MeleeWeapon::isIsBroken() const {
    return isBroken;
}

void MeleeWeapon::setIsBroken(bool isBroken) {
    MeleeWeapon::isBroken = isBroken;
}
