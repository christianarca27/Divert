//
// Created by User on 25/06/2017.
//

#include "InteractiveCharacter.h"

const std::string &InteractiveCharacter::getName() const {
    return name;
}

void InteractiveCharacter::setName(const std::string &name) {
    InteractiveCharacter::name = name;
}
