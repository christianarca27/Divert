//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_ARMOR_H
#define DIVERTPROJECT_ARMOR_H


#include "BuyableItems.h"

class Armor: public BuyableItems {
public:
    Armor(int d, bool m, int p, int l, bool a) : damageDecreaser(d), magical(m), BuyableItems(p, l, a){};
    ~Armor() {};

    int getDamageDecreaser() const;

    void setDamageDecreaser(int damageDecreaser);

    bool isMagical() const;

    void setMagical(bool magical);

private:
    int damageDecreaser;
    bool magical;

};


#endif //DIVERTPROJECT_ARMOR_H
