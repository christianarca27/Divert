//
// Created by User on 25/06/2017.
//
#include <iostream>

#include "Blacksmith.h"
#include "PlayableCharacter.h"


int Blacksmith::calcolateRepairCost(Weapon& brokenWeapon) {
    int p=brokenWeapon.getPrice();
    int l=brokenWeapon.getLevel();
    int i=brokenWeapon.getIntegrity();
    bool m=brokenWeapon.isMagical();

    p=p*l/i;
    if (i!=100){
        if (m) {
            p = p * 2;
            return p;
        }
    }
    else{
        std::cout<<"l'arma non necessita di essere riparata"<<std::endl;
    }
}

void Blacksmith::repairWeapon(Weapon &brokenWeapon, PlayableCharacter &player) {
    int p=calcolateRepairCost(brokenWeapon);
    int avaiableMoney= player.getMoney();
    if (avaiableMoney>=p){
        brokenWeapon.setIntegrity(100);
        std::cout<<"l'arma è stata riparata"<<std::endl;
    }
    else
        std::cout<<"per ottenere qualcosa è necessario dare in cambio qualcos'altro del medesimo valore, mi dispice non lavoro gratis"<<std::endl;
}