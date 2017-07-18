//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_MELEEWEAPON_H
#define DIVERTPROJECT_MELEEWEAPON_H

#include "Weapon.h"

class MeleeWeapon: public Weapon {
public:
    MeleeWeapon(int s, int hW, bool iB, int d, int r, int i, int h, bool m, std::string n, int p, int l, bool a, int ra, int hw) : sharpness(s), isBroken(iB), Weapon(d, r, i, h, m, n, p, l, a, ra, hw) {};
    ~MeleeWeapon() {};

    int getSharpness() const;

    void setSharpness(int sharpness);

    bool isIsBroken() const;

    void setIsBroken(bool isBroken);

private:
    int sharpness;
    bool isBroken;

};


#endif //DIVERTPROJECT_MELEEWEAPON_H
