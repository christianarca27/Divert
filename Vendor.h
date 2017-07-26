//
// Created by User on 25/06/2017.
//

#ifndef DIVERTPROJECT_VENDOR_H
#define DIVERTPROJECT_VENDOR_H


#include "InteractiveCharacter.h"

class Vendor : public InteractiveCharacter {
public:
    Vendor(int x, int y, std::string n) : InteractiveCharacter(x, y, n) {};

    void sellItem();
    void buyItem();

private:

};


#endif //DIVERTPROJECT_VENDOR_H
