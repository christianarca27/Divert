//
// Created by chris on 24/06/2017.
//
#include <iostream>

#include "GameCharacter.h"
#include "Dice.h"

void GameCharacter::attack(GameCharacter& enemy){
    Dice d8(8);
    Dice d10 (10);
    int rollResult=d8.roll(4);
    int damage=this->weapon->getDamage()*this->weapon->getIntegrity()*rollResult+this->getStrength();
    if (this->weapon->isMagical())
        damage=damage*2;
    int newNumberOfHits=this->weapon->getNumberOfHits();
    this->weapon->setNumberOfHits(newNumberOfHits++);
    int newIntegrity=(this->weapon->getHealtWeapon() / this->weapon->getNumberOfHits())*100;
    this->weapon->setIntegrity(newIntegrity);
    int resistance=enemy.resistance/d10.roll(4);
    int enemyHealth= enemy.hp+resistance;
    if (enemy.armor!= nullptr){
        damage=damage-enemy.armor->getDamageDecreaser();
                if (enemy.armor->isMagical())
                    damage=damage/2;
    }
    enemyHealth-=damage;
    if (enemyHealth<=0)
        std::cout<<"enemy is dead"<<std::endl;
    else
        enemy.hp=enemyHealth;
}

void GameCharacter::move(int x, int y, GameMap& gM) {
    if ((posX+x) < gM.getLength() && (posY+y) < gM.getHigh() && gM.getTileList()[gM.getMapTab()[gM.getHigh()*(posY+y)+(posX+x)]]->isCrossable()){
        posX += x;
        posY += y;
        std::cout << "(" << posX << ", " << posY << ")" << std::endl;
    }
    else
        std::cout << "Movimento non consentito " << "(" << posX << ", " << posY << ")" << std::endl;
}

int GameCharacter::getStrength() const {
    return strength;
}

void GameCharacter::setStrength(int strength) {
    GameCharacter::strength = strength;
}

int GameCharacter::getPosX() const {
    return posX;
}

void GameCharacter::setPosX(int posX) {
    GameCharacter::posX = posX;
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

int GameCharacter::getPosY() const {
    return posY;
}

void GameCharacter::setPosY(int posY) {
    GameCharacter::posY = posY;
}

int GameCharacter::getHp() const {
    return hp;
}

void GameCharacter::setHp(int hp) {
    GameCharacter::hp = hp;
}

int GameCharacter::getResistance() const {
    return resistance;
}

void GameCharacter::setResistance(int resistance) {
    GameCharacter::resistance = resistance;
}
