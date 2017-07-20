//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_WEAPON_H
#define DIVERTPROJECT_WEAPON_H


#include "BuyableItems.h"

class Weapon: public BuyableItems {
public:
    Weapon(int d, int r, int i, int h, bool m, std::string n, int l, int p, bool a, int ra, int hw): damage(d), rate(r), integrity(i), numberOfHits(h), magical(m),range(ra), healtWeapon(hw),BuyableItems (n, l, p, a) {};
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

    int getRange() const;

    void setRange(int range);

    int getHealtWeapon() const;

    void setHealtWeapon(int healtWeapon);

protected:
    int damage;
    int rate;
    int integrity;
    int numberOfHits;
    bool magical;
    int range;
    int healtWeapon;
};


#endif //DIVERTPROJECT_WEAPON_H
