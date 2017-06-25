//
// Created by User on 25/06/2017.
//

#ifndef DIVERTPROJECT_BLACKSMITH_H
#define DIVERTPROJECT_BLACKSMITH_H


#include "InteractiveCharacter.h"

class Blacksmith: public InteractiveCharacter {
public:
    void repairWeapon();
    void calcolateRepairCost();


};


#endif //DIVERTPROJECT_BLACKSMITH_H
