//
// Created by User on 24/06/2017.
//

#include "RangedWeapon.h"

void RangedWeapon::useItem(PlayableCharacter &player) {
    Weapon *weapon=player.getWeapon();
    player.getInventory()->addItem(*weapon);
    player.setWeapon(this);
}

int RangedWeapon::getShots() const {
    return shots;
}

void RangedWeapon::setShots(int shots) {
    RangedWeapon::shots = shots;
}
