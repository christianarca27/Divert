//
// Created by chris on 07/07/2017.
//

#ifndef DIVERTPROJECT_TILES_H
#define DIVERTPROJECT_TILES_H

#include <string>


class Tile {
public:
    Tile(std::string p, bool c, int h=1, int l=1) : path(p), crossable(c), high(h), length(l) {};
    void displayTile(int posX, int posY);

    bool isCrossable() const;

    void setCrossable(bool crossable);

private:
    std::string path;
    int high;
    int length;
    bool crossable;
};


#endif //DIVERTPROJECT_TILES_H
