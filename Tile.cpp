//
// Created by chris on 07/07/2017.
//

#include <iostream>
#include "Tile.h"

void Tile::displayTile(int posX, int posY) {

    //implement with graphic library
    if (crossable)
        std::cout << 1;
    else
        std::cout << 0;
}

bool Tile::isCrossable() const {
    return crossable;
}

void Tile::setCrossable(bool crossable) {
    Tile::crossable = crossable;
}
