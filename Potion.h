//
// Created by User on 24/06/2017.
//

#ifndef DIVERTPROJECT_POTION_H
#define DIVERTPROJECT_POTION_H

#include <string>

class Potion {
public:
    const std::string &getType() const;

    void setType(const std::string &type);

    int getHpIncrease() const;

    void setHpIncrease(int hpIncrease);

    int getStrengthIncrease() const;

    void setStrengthIncrease(int strengthIncrease);

    int getResistanceIncrease() const;

    void setResistanceIncrease(int resistanceIncrease);

private:
    std::string type;
    int hpIncrease;
    int strengthIncrease;
    int resistanceIncrease;


};


#endif //DIVERTPROJECT_POTION_H
