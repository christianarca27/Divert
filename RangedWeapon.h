//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_RANGEDWEAPON_H
#define DIVERTPROJECT_RANGEDWEAPON_H

#include "Weapon.h"

class RangedWeapon : public Weapon {
public:
    RangedWeapon( int s, int d, int r, int i, int h, bool m, std::string n, int l, int p, bool a, int ra, int hw) : shots(s), Weapon(d, r, i, h, m, n, l, p, a, ra, hw) {};
    ~RangedWeapon() {};

    int getShots() const;

    void setShots(int shots);

private:
    int shots;

};


#endif //DIVERTPROJECT_RANGEDWEAPON_H
