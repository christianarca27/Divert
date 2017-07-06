//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_RANGEDWEAPON_H
#define DIVERTPROJECT_RANGEDWEAPON_H

#include "Weapon.h"

class RangedWeapon: public Weapon {
public:
    RangedWeapon(int range, int s, int d, int r, int i, int h, bool m, std::string n, int p, int l, bool a) : range(range), shots(s), Weapon(d, r, i, h, m, n, p, l, a) {};
    ~RangedWeapon() {};
    int getRange() const;

    void setRange(int range);

    int getShots() const;

    void setShots(int shots);

private:
    int range;
    int shots;

};


#endif //DIVERTPROJECT_RANGEDWEAPON_H
