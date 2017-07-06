//
// Created by chris on 24/06/2017.
//

#ifndef DIVERTPROJECT_PLAYABLECHARACTER_H
#define DIVERTPROJECT_PLAYABLECHARACTER_H

#include <string>
#include "Inventory.h"
#include "GameCharacter.h"
#include "Interactive.h"

class PlayableCharacter : GameCharacter {
public:
    void openInventory(Inventory* inventory);
    void levelUp(int level, int exp);
    void switchCharacter(GameCharacter* characterList[]);
    void interact(Interactive* interactive);
    void registerObserver();
    void removeObserver();
    void notifyObserver();
private:
    Inventory* inventory;
    std::string role;
public:
    Inventory *getInventory() const;

    void setInventory(Inventory *inventory);

    const std::string &getRole() const;

    void setRole(const std::string &role);

    const std::string &getGender() const;

    void setGender(const std::string &gender);

    int getMoney() const;

    void setMoney(int money);

    const std::string &getSpecialAbility() const;

    void setSpecialAbility(const std::string &specialAbility);

    int getExp() const;

    void setExp(int exp);

    GameCharacter *const *getCharacterList() const;

private:
    //class in file UML
    std::string gender;
    int money;
    std::string specialAbility;
    int exp;
    GameCharacter* characterList[5];

};


#endif //DIVERTPROJECT_PLAYABLECHARACTER_H
