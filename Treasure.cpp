#include "Treasure.h"
#include <iostream>

Treasure::Treasure(int x, int y) : GameObject(x, y, 'T') {}

void Treasure::move(char direction) {
    // Le tr�sor ne se d�place pas
}

void Treasure::display() const {
    std::cout <<"T";
}