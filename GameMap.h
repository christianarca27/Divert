//
// Created by chris on 07/07/2017.
//

#ifndef DIVERTPROJECT_GAMEMAP_H
#define DIVERTPROJECT_GAMEMAP_H

#include <string>
#include "Tile.h"

class GameMap {
public:
    GameMap(std::string n, int* mT, Tile *t0, Tile *t1, Tile *t2, int h=5, int l=5);
    void displayMap(int posX=0, int posY=0);

    Tile *const *getTileList() const;

    int *getMapTab() const;

    void setMapTab(int *mapTab);

    int getHigh() const;

    void setHigh(int high);

    int getLength() const;

    void setLength(int length);

private:
    std::string name;
    int high;
    int length;
    Tile* tileList[3];
    int* mapTab;
};


#endif //DIVERTPROJECT_GAMEMAP_H
