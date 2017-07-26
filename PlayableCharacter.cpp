//
// Created by chris on 24/06/2017.
//

#include "PlayableCharacter.h"

void PlayableCharacter::move(int x, int y, GameMap gM) {
    //IMPLEMENTAZIONE CON LIBRERIA ESTERNA PER COMANDI

    GameCharacter::move(x, y, gM);
}

int PlayableCharacter::getMoney() const {
    return money;
}

void PlayableCharacter::setMoney(int money) {
    PlayableCharacter::money = money;
}

Inventory *PlayableCharacter::getInventory() const {
    return inventory;
}

void PlayableCharacter::setInventory(Inventory *inventory) {
    PlayableCharacter::inventory = inventory;
}
