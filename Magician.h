//
// Created by User on 25/06/2017.
//

#ifndef DIVERTPROJECT_MAGICIAN_H
#define DIVERTPROJECT_MAGICIAN_H


#include "InteractiveCharacter.h"
#include "PlayableCharacter.h"
#include "Weapon.h"
#include "Armor.h"

class Magician : public InteractiveCharacter {
public:
    Magician(int x, int y, const std::string &n) : InteractiveCharacter(x, y, n) {};
    void castMagicWeapon(PlayableCharacter& player, Weapon& weapon);
    void castMagicArmor(PlayableCharacter& player, Armor& armor);

};


#endif //DIVERTPROJECT_MAGICIAN_H
