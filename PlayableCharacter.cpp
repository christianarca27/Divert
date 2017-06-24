//
// Created by chris on 24/06/2017.
//

#include "PlayableCharacter.h"

Inventory *PlayableCharacter::getInventory() const {
    return inventory;
}

void PlayableCharacter::setInventory(Inventory *inventory) {
    PlayableCharacter::inventory = inventory;
}

const std::string &PlayableCharacter::getRole() const {
    return role;
}

void PlayableCharacter::setRole(const std::string &role) {
    PlayableCharacter::role = role;
}

const std::string &PlayableCharacter::getGender() const {
    return gender;
}

void PlayableCharacter::setGender(const std::string &gender) {
    PlayableCharacter::gender = gender;
}

int PlayableCharacter::getMoney() const {
    return money;
}

void PlayableCharacter::setMoney(int money) {
    PlayableCharacter::money = money;
}

const std::string &PlayableCharacter::getSpecialAbility() const {
    return specialAbility;
}

void PlayableCharacter::setSpecialAbility(const std::string &specialAbility) {
    PlayableCharacter::specialAbility = specialAbility;
}

int PlayableCharacter::getExp() const {
    return exp;
}

void PlayableCharacter::setExp(int exp) {
    PlayableCharacter::exp = exp;
}

GameCharacter *const *PlayableCharacter::getCharacterList() const {
    return characterList;
}
