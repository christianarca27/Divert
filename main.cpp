#include <iostream>
#include "Tile.h"
#include "GameMap.h"

int main() {
    int mT[25]{0,2,2,1,1,0,2,2,1,1,0,0,0,0,1,1,2,2,0,1,1,1,1,0,0};
    Tile t1("Grass", true);
    Tile t2("Wall", false);
    Tile t3("Water", false);
    GameMap venturina("Venturina Terme", mT, &t1, &t2, &t3);
    venturina.displayMap();
    return 0;
}