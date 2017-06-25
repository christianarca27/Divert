//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_RANGEDWEAPON_H
#define DIVERTPROJECT_RANGEDWEAPON_H

#include "Weapon.h"

class RangedWeapon: public Weapon {
public:
    int getRange() const;

    void setRange(int range);

    int getShots() const;

    void setShots(int shots);

private:
    int range;
    int shots;

};


#endif //DIVERTPROJECT_RANGEDWEAPON_H
