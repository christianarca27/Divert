//
// Created by User on 24/06/2017.
//

#include "Weapon.h"
int Weapon::getRange() const {
    return range;
}

void Weapon::setRange(int range) {
    Weapon::range = range;
}

int Weapon::getHealtWeapon() const {
    return healtWeapon;
}

void Weapon::setHealtWeapon(int healtWeapon) {
    Weapon::healtWeapon = healtWeapon;
}

int Weapon::getDamage() const {
    return damage;
}

void Weapon::setDamage(int damage) {
    Weapon::damage = damage;
}

int Weapon::getRate() const {
    return rate;
}

void Weapon::setRate(int rate) {
    Weapon::rate = rate;
}

int Weapon::getIntegrity() const {
    return integrity;
}

void Weapon::setIntegrity(int integrity) {
    Weapon::integrity = integrity;
}

int Weapon::getNumberOfHits() const {
    return numberOfHits;
}

void Weapon::setNumberOfHits(int numberOfHits) {
    Weapon::numberOfHits = numberOfHits;
}

bool Weapon::isMagical() const {
    return magical;
}

void Weapon::setMagical(bool magical) {
    Weapon::magical = magical;
}
