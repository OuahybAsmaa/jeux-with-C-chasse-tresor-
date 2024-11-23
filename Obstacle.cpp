#include "Obstacle.h"
#include <iostream>

Obstacle::Obstacle(int x, int y) : GameObject(x, y, 'X') {}

void Obstacle::move(char direction) {
    // L'obstacle ne se déplace pas
}

void Obstacle::display() const {
    std::cout << "X";
}