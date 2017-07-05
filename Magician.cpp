//
// Created by User on 25/06/2017.
//

#include "Magician.h"
#include "Weapon.h"
#include "PlayableCharacter.h"
#include "Armor.h"
#include "iostream"

void Magician::castMagicWeapon(PlayableCharacter& player, Weapon& weapon) {
    if (weapon.isMagical())
        std::cout<<"i miei servigi non sono richiesti"<<std::endl;
    else{
        int price=weapon.getLevel()*weapon.getPrice()*5;
        if(player.getMoney()>=price)
            weapon.setMagical(1);
        else
            std::cout<<"non lavoro gratis"<<std::endl;
    }
}

void Magician::castMagicArmor(PlayableCharacter& player, Armor& armor) {

}