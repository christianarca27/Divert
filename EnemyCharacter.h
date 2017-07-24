//
// Created by chris on 24/06/2017.
//

#ifndef DIVERTPROJECT_ENEMYCHARACTER_H
#define DIVERTPROJECT_ENEMYCHARACTER_H


#include "GameCharacter.h"
#include "PlayableCharacter.h"

class EnemyCharacter : public GameCharacter {
public:
    void drop(PlayableCharacter& player,int level);
    void update();
    void attack(GameCharacter& enemy) override;

private:
    int intelligence;

};


#endif //DIVERTPROJECT_ENEMYCHARACTER_H
