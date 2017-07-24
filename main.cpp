#include <iostream>
#include "Tile.h"
#include "GameMap.h"
#include "PlayableCharacter.h"

int main() {
    int mT[25]{0,2,2,1,1,0,2,2,1,1,0,0,0,0,1,1,2,2,0,1,1,1,1,0,0};
    Tile t1("Grass", true);
    Tile t2("Wall", false);
    Tile t3("Water", false);
    GameMap venturina("Venturina Terme", mT, &t1, &t2, &t3);
    venturina.displayMap();
    PlayableCharacter mario("Mario", 100, 1, 50, 50, 50);
    mario.move(1, 0, venturina);
    mario.move(0, 1, venturina);
    mario.move(0, 1, venturina);
    mario.move(0, 1, venturina);
    mario.move(1, 0, venturina);
    mario.move(1, 0, venturina);
    mario.move(1, 0, venturina);
    mario.move(1, 0, venturina);
    mario.move(0, 1, venturina);
    mario.move(0, 1, venturina);
    mario.move(0, 1, venturina);
    mario.move(1, 0, venturina);
    return 0;
}