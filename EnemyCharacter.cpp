//
// Created by chris on 24/06/2017.
//

#include "EnemyCharacter.h"
#include "PlayableCharacter.h"
#include "Dice.h"
#include "MeleeWeapon.h"
#include "RangedWeapon.h"
#include "Potion.h"

void EnemyCharacter::drop(PlayableCharacter& player,int level) {
    int moneyDrop = player.getMoney() + 300 * level;
    player.setMoney(moneyDrop);
    Dice D20(20);
    int dropItems = D20.roll(6);
    if (dropItems <= 5)
        RangedWeapon bow(5, 10, 1, 100, 0, false, "normal bow", level, 30, true, 18, 120);
    else {
        if (dropItems <= 15)
            MeleeWeapon sword(20, false, 10, 1, 100, 0, false, "Iron Sword", level, 1000, true, 1, 500);
        else
            MeleeWeapon magicSword(20, false, 10, 1, 100, 0, true, "Sword of Destiny", level, 1000, true, 1, 2500);
    }
}

int EnemyCharacter::getIntelligence() const {
    return intelligence;
}

void EnemyCharacter::setIntelligence(int intelligence) {
    EnemyCharacter::intelligence = intelligence;
}
