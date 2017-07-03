//
// Created by User on 02/07/2017.
//

#include "Dice.h"
#include <ctime> // for time
#include <cstdlib> // for rand and srand

int Dice::rolls = 0;

Dice::Dice(int f) : faces(f) {
    srand( time(0) );
}

void Dice::initRandom() {
    if ((rolls % 500) == 0)
        srand( time(0) );
}

int Dice::roll(int r) {
    int result = 0;
    for (int i = 0; i < r; i++)
        result += rand() % faces;
    rolls++;
    return result;
}

int Dice::getFaces() const {
    return faces;
}

void Dice::setFaces(int faces) {
    Dice::faces = faces;
}

int Dice::getRolls() {
    return rolls;
}

void Dice::setRolls(int rolls) {
    Dice::rolls = rolls;
}
