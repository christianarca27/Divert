//
// Created by User on 25/06/2017.
//

#ifndef DIVERTPROJECT_INTERACTIVEITEMS_H
#define DIVERTPROJECT_INTERACTIVEITEMS_H

#include <string>
#include "Interactive.h"

class InteractiveItems : public Interactive {
public:
    InteractiveItems(std::string t, int x, int y) : type(t), Interactive(x, y) {};
    void dropItems();

private:
    std::string type;

};


#endif //DIVERTPROJECT_INTERACTIVEITEMS_H
