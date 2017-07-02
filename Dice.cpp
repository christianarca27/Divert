//
// Created by User on 02/07/2017.
//

#include "Dice.h"
#include <ctime> // for time
#include <cstdlib> // for rand and srand

int Dice::Rolls = 0;

Dice::Dice(int f) : faces(f) {
    srand( time(0) );
}

void Dice::initRandom() {
    if ((Rolls % 500) == 0)
        srand( time(0) );
}

int Dice::roll(int r) {
    int result = 0;
    for (int i = 0; i < r; i++)
        result += rand() % faces;
    Rolls++;
    return result;
}