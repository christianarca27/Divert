//
// Created by User on 25/06/2017.
//

#ifndef DIVERTPROJECT_QUESTAGENT_H
#define DIVERTPROJECT_QUESTAGENT_H


#include "InteractiveCharacter.h"

class QuestAgent : public InteractiveCharacter {
public:
    QuestAgent(int x, int y, std::string n) : InteractiveCharacter(x, y, n) {};

    void addPlayableCharacter();

};


#endif //DIVERTPROJECT_QUESTAGENT_H
