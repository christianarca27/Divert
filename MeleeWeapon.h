//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_MELEEWEAPON_H
#define DIVERTPROJECT_MELEEWEAPON_H

#include "Weapon.h"

class MeleeWeapon: public Weapon {
public:
    int getSharpness() const;

    void setSharpness(int sharpness);

    int getHealtWeapon() const;

    void setHealtWeapon(int healtWeapon);

    bool isIsBroken() const;

    void setIsBroken(bool isBroken);

private:
    int sharpness;
    int healtWeapon;
    bool isBroken;

};


#endif //DIVERTPROJECT_MELEEWEAPON_H
