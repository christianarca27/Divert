//
// Created by User on 25/06/2017.
//

#ifndef DIVERTPROJECT_BLACKSMITH_H
#define DIVERTPROJECT_BLACKSMITH_H


#include "InteractiveCharacter.h"
#include "Weapon.h"
#include "PlayableCharacter.h"

class Blacksmith : public InteractiveCharacter {
public:
    Blacksmith (int x, int y, std::string n) : InteractiveCharacter (x, y, n) {};

    void repairWeapon(Weapon& brokenWeapon, PlayableCharacter& player);

    int calcolateRepairCost(Weapon& brokenWeapon);

};


#endif //DIVERTPROJECT_BLACKSMITH_H
