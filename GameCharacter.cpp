//
// Created by chris on 24/06/2017.
//

#include "GameCharacter.h"

const std::string &GameCharacter::getName() const {
    return name;
}

void GameCharacter::setName(const std::string &name) {
    GameCharacter::name = name;
}

int GameCharacter::getHp() const {
    return hp;
}

void GameCharacter::setHp(int hp) {
    GameCharacter::hp = hp;
}

int GameCharacter::getLevel() const {
    return level;
}

void GameCharacter::setLevel(int level) {
    GameCharacter::level = level;
}

Race *GameCharacter::getRace() const {
    return race;
}

void GameCharacter::setRace(Race *race) {
    GameCharacter::race = race;
}

int GameCharacter::getStrength() const {
    return strength;
}

void GameCharacter::setStrength(int strength) {
    GameCharacter::strength = strength;
}

int GameCharacter::getResistance() const {
    return resistance;
}

void GameCharacter::setResistance(int resistance) {
    GameCharacter::resistance = resistance;
}

int GameCharacter::getStamina() const {
    return stamina;
}

void GameCharacter::setStamina(int stamina) {
    GameCharacter::stamina = stamina;
}

Armor *GameCharacter::getArmor() const {
    return armor;
}

void GameCharacter::setArmor(Armor *armor) {
    GameCharacter::armor = armor;
}

Weapon *GameCharacter::getWeapon() const {
    return weapon;
}

void GameCharacter::setWeapon(Weapon *weapon) {
    GameCharacter::weapon = weapon;
}

float GameCharacter::getPosX() const {
    return posX;
}

void GameCharacter::setPosX(float posX) {
    GameCharacter::posX = posX;
}

float GameCharacter::getPosY() const {
    return posY;
}

void GameCharacter::setPosY(float posY) {
    GameCharacter::posY = posY;
}
