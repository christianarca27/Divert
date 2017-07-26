//
// Created by User on 25/06/2017.
//

#include "Magician.h"

void Magician::castMagicWeapon(PlayableCharacter& player, Weapon& weapon) {
    if (weapon.isMagical())
        std::cout << "I miei servigi non sono richiesti." << std::endl;
    else{
        int price=weapon.getLevel()*weapon.getPrice()*5;
        if(player.getMoney()>=price)
            weapon.setMagical(true);
        else
            std::cout << "Non lavoro gratis." << std::endl;
    }
}

void Magician::castMagicArmor(PlayableCharacter& player, Armor& armor) {
    //da implementare
}