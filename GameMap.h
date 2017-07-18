//
// Created by chris on 07/07/2017.
//

#ifndef DIVERTPROJECT_GAMEMAP_H
#define DIVERTPROJECT_GAMEMAP_H

#include <string>
#include "Tile.h"

class GameMap {
public:
    GameMap(std::string n, int *mT, Tile *t1, Tile *t2, Tile *t3, int h=5, int l=5) : name(n), mapTab(mT), type1(t1), type2(t2), type3(t3), high(h), length(l) {};
    void displayMap(int posX=0, int posY=0);

private:
    std::string name;
    int high;
    int length;
    Tile* type1;
    Tile* type2;
    Tile* type3;
    int *mapTab;
};


#endif //DIVERTPROJECT_GAMEMAP_H
