//
// Created by chris on 24/06/2017.
//

#ifndef DIVERTPROJECT_PLAYABLECHARACTER_H
#define DIVERTPROJECT_PLAYABLECHARACTER_H

#include <string>
#include "Inventory.h"
#include "GameCharacter.h"
#include "Interactive.h"
#include "Potion.h"

class PlayableCharacter : public GameCharacter {
public:
    PlayableCharacter(std::string n, int h, int l, int str, int r, int s, Race* rc=nullptr, Armor* a=nullptr, Weapon* w=nullptr, int x=0, int y=0) : GameCharacter(n, h, l, str, r, s, rc, a, w, x, y) {};

    void move(int x, int y, GameMap& gM) override;

    void usePotion(Potion& potion);

    void openInventory(Inventory* inventory);
    void levelUp(int level, int exp);
    void switchCharacter(GameCharacter* characterList[]);
    void interact(Interactive* interactive);
    void registerObserver();
    void removeObserver();
    void notifyObserver();

    Inventory *getInventory() const;

    void setInventory(Inventory *inventory);

    int getMoney() const;

    void setMoney(int money);

private:
    Inventory* inventory;
    std::string role;
    std::string gender;
    int money;
    std::string specialAbility;
    int exp;
    GameCharacter* characterList[5];

};


#endif //DIVERTPROJECT_PLAYABLECHARACTER_H
