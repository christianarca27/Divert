#include <iostream>
#include "Potion.h"
#include "Inventory.h"

int main() {
    Inventory i(10);
    Potion a("Curativa", 100, 0, 0, "Pozione curativa1", 100, 1, true);
    Potion b("Curativa", 100, 0, 0, "Pozione curativa2", 100, 1, true);
    i.addItem(a);
    std::cout << "Inventario prima:" << std::endl;
    i.printInventory();
    i.removeItem(a);
    i.addItem(b);
    std::cout << "Inventario dopo:" << std::endl;
    i.printInventory();
    return 0;
}