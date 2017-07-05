//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_WEAPON_H
#define DIVERTPROJECT_WEAPON_H


#include "BuyableItems.h"

class Weapon: public BuyableItems {
public:
    Weapon(int d, int r, int i, int h, bool m, int p, int l, bool a): damage(d), rate(r), integrity(i), numberOfHits(h), magical(m), BuyableItems (p, l, a){};
    virtual ~Weapon(){};
    int getDamage() const;

    void setDamage(int damage);

    int getRate() const;

    void setRate(int rate);

    int getIntegrity() const;

    void setIntegrity(int integrity);

    int getNumberOfHits() const;

    void setNumberOfHits(int numberOfHits);

    bool isMagical() const;

    void setMagical(bool magical);

protected:
    int damage;
    int rate;
    int integrity;
    int numberOfHits;
    bool magical;
};


#endif //DIVERTPROJECT_WEAPON_H
