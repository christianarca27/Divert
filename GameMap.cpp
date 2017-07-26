//
// Created by chris on 07/07/2017.
//

#include <iostream>
#include "GameMap.h"

GameMap::GameMap(std::string n, int* mT, Tile *t0, Tile *t1, Tile *t2, int h, int l) {
    name = n;
    mapTab = mT;
    tileList[0] = t0;
    tileList[1] = t1;
    tileList[2] = t2;
    high = h;
    length = l;
}

void GameMap::displayMap(int posX, int posY) {
    int i, j;
    for (j=posY; j<high; j++){
        for (i=posX; i<length; i++)
            tileList[mapTab[high*j+i]]->displayTile(i, j);
    }
    std::cout << std::endl;
}

Tile *const *GameMap::getTileList() const {
    return tileList;
}

int *GameMap::getMapTab() const {
    return mapTab;
}

void GameMap::setMapTab(int *mapTab) {
    GameMap::mapTab = mapTab;
}

int GameMap::getHigh() const {
    return high;
}

void GameMap::setHigh(int high) {
    GameMap::high = high;
}

int GameMap::getLength() const {
    return length;
}

void GameMap::setLength(int length) {
    GameMap::length = length;
}
