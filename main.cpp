#include <iostream>
#include <SFML/Graphics.hpp>
#include "Tile.h"
#include "GameMap.h"
#include "PlayableCharacter.h"
#include "MeleeWeapon.h"

int main() {
    int mT[25]{0,2,2,1,1,0,2,2,1,1,0,0,0,0,1,1,2,2,0,1,1,1,1,0,0};

    Tile t1("Grass", true);
    Tile t2("Wall", false);
    Tile t3("Water", false);
    GameMap venturina("Venturina Terme", mT, &t1, &t2, &t3);
    PlayableCharacter mario("Mario", 100, 1, 50, 50, 50);
    Potion cura("Curativa", 100, 0, 0, "Cura standard", 100, 1, true);
    MeleeWeapon sciabola(100, false, 100, 50, 5, 1, true, "Sciabola", 1, 100, true, 5, 5);
    Armor armatura(10, true, "Armatura base", 100, 1, true);

    mario.usePotion(cura);
    mario.setArmor(&armatura);
    mario.setWeapon(&sciabola);

    venturina.displayMap();

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

    std::cout << "La salute di Mario è: " << mario.getHp() << "." << std::endl;

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}