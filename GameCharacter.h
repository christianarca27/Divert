//
// Created by chris on 24/06/2017.
//

#ifndef DIVERTPROJECT_GAMECHARACTER_H
#define DIVERTPROJECT_GAMECHARACTER_H

#include <string>
#include "Race.h"
#include "Armor.h"
#include "Weapon.h"
#include "GameMap.h"


class GameCharacter {
public:
    GameCharacter(std::string n, int h, int l, int str, int r, int s, Race* rc=nullptr, Armor* a=nullptr, Weapon* w=nullptr, int x=0, int y=0) : name(n), hp(h), level(l), strength(str), resistance(r), stamina(s), race(rc), weapon(w), posX(x), posY(y){};

    virtual void move(int x, int y, GameMap gM)=0;
    virtual void attack(GameCharacter& enemy);

    int getStrength() const;

    void setStrength(int strength);

    int getPosX() const;

    void setPosX(int posX);

    int getPosY() const;

    void setPosY(int posY);

protected:
    std::string name;
    int hp;
    int level;
    Race* race;
    int strength;
    int resistance;
    int stamina;
    Armor* armor;
    Weapon* weapon;
    int posX;
    int posY;
};


#endif //DIVERTPROJECT_GAMECHARACTER_H
