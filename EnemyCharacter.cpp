//
// Created by chris on 24/06/2017.
//

#include "EnemyCharacter.h"

int EnemyCharacter::getIntelligence() const {
    return intelligence;
}

void EnemyCharacter::setIntelligence(int intelligence) {
    EnemyCharacter::intelligence = intelligence;
}
