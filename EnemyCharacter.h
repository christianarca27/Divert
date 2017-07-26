//
// Created by chris on 24/06/2017.
//

#ifndef DIVERTPROJECT_ENEMYCHARACTER_H
#define DIVERTPROJECT_ENEMYCHARACTER_H


#include "GameCharacter.h"
#include "PlayableCharacter.h"

class EnemyCharacter : public GameCharacter {
public:
    EnemyCharacter(int i, std::string n, int h, int l, int str, int r, int s, Race* rc=nullptr, Armor* a=nullptr, Weapon* w=nullptr, int x=0, int y=0) : intelligence(i), GameCharacter(n, h, l, str, r, s, rc, a, w, x, y) {};
    void drop(PlayableCharacter& player,int level);
    void update();
    void attack(GameCharacter& enemy) override;

private:
    int intelligence;

};


#endif //DIVERTPROJECT_ENEMYCHARACTER_H
