//
// Created by User on 24/06/2017.
//

#include "Armor.h"
#include "PlayableCharacter.h"

void Armor::useItem(PlayableCharacter &player) {
    Armor *ar= player.getArmor();
    player.getInventory()->addItem(*ar);
    player.setArmor(this);
}

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

