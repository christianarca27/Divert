//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_MELEEWEAPON_H
#define DIVERTPROJECT_MELEEWEAPON_H

#include "Weapon.h"

class MeleeWeapon: public Weapon {
public:
    MeleeWeapon(int s, int hW, bool iB, int d, int r, int i, int h, bool m, std::string n, int p, int l, bool a) : sharpness(s), healtWeapon(hW), isBroken(iB), Weapon(d, r, i, h, m, n, p, l, a) {};
    ~MeleeWeapon() {};

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
