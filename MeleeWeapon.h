//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_MELEEWEAPON_H
#define DIVERTPROJECT_MELEEWEAPON_H

#include "Weapon.h"
#include "PlayableCharacter.h"

class MeleeWeapon: public Weapon {
public:
    MeleeWeapon(int s, bool iB, int d, int r, int i, int h, bool m, std::string n, int l,int p, bool a, int ra, int hw) : sharpness(s), isBroken(iB), Weapon(d, r, i, h, m, n, l, p, a, ra, hw) {};
    ~MeleeWeapon() {};

    void useItem (PlayableCharacter &player) override;

    int getSharpness() const;

    void setSharpness(int sharpness);

    bool isIsBroken() const;

    void setIsBroken(bool isBroken);

private:
    int sharpness;
    bool isBroken;

};


#endif //DIVERTPROJECT_MELEEWEAPON_H
