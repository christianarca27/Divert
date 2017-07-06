//
// Created by chris on 24/06/2017.
//

#ifndef DIVERTPROJECT_GAMECHARACTER_H
#define DIVERTPROJECT_GAMECHARACTER_H

#include <string>
#include "Race.h"
#include "Armor.h"
#include "Weapon.h"


class GameCharacter {
public:
    virtual void move(float posX, float posY) = 0;
    virtual void attack(GameCharacter& enemy) = 0;

    const std::string &getName() const;

    void setName(const std::string &name);

    int getHp() const;

    void setHp(int hp);

    int getLevel() const;

    void setLevel(int level);

    Race *getRace() const;

    void setRace(Race *race);

    int getStrength() const;

    void setStrength(int strength);

    int getResistance() const;

    void setResistance(int resistance);

    int getStamina() const;

    void setStamina(int stamina);

    Armor *getArmor() const;

    void setArmor(Armor *armor);

    Weapon *getWeapon() const;

    void setWeapon(Weapon *weapon);

    float getPosX() const;

    void setPosX(float posX);

    float getPosY() const;

    void setPosY(float posY);

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
    float posX;
    float posY;

};


#endif //DIVERTPROJECT_GAMECHARACTER_H
