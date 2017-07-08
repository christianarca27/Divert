//
// Created by chris on 07/07/2017.
//

#ifndef DIVERTPROJECT_GAMEMAP_H
#define DIVERTPROJECT_GAMEMAP_H

#include <string>

class GameMap {
public:
    GameMap(std::string n, int h=50, int l=50);
    ~GameMap();

private:
    std::string name;
    int high;
    int length;
};


#endif //DIVERTPROJECT_GAMEMAP_H
