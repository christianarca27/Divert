//
// Created by chris on 07/07/2017.
//

#ifndef DIVERTPROJECT_TILES_H
#define DIVERTPROJECT_TILES_H

#include <string>


class Tile {
    Tile(std::string p, int h=1, int l=1) : path(p), high(h), length(l) {};
    ~Tile();
    void displayTile(int posX, int posY);

private:
    std::string path;
    int high;
    int length;
};


#endif //DIVERTPROJECT_TILES_H
