#include "Treasure.h"
#include <iostream>

Treasure::Treasure(int x, int y) : GameObject(x, y, 'T') {}

void Treasure::move(char direction) {
    // Le trésor ne se déplace pas
}

void Treasure::display() const {
    std::cout <<"T";
}