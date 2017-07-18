//
// Created by chris on 07/07/2017.
//

#include "GameMap.h"

void GameMap::displayMap(int posX, int posY) {
    int i, j;
    for (i=0; i<high; i++){
        for (j=0; j<length; j++){
            switch (mapTab[(i*length)+j]) {
                case 0:
                    type1->displayTile(i, j);
                    break;
                case 1:
                    type2->displayTile(i, j);
                    break;
                case 2:
                    type3->displayTile(i, j);
                    break;
            }
        }
    }
}
