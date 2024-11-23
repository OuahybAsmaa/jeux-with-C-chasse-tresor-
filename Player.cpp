#include "Player.h"
#include <iostream>

Player::Player(int x, int y) : GameObject(x, y, 'P') {}

void Player::move(char direction) {
    switch (direction) {
    case 'z': --y; break; // Haut
    case 's': ++y; break; // Bas
    case 'q': --x; break; // Gauche
    case 'd': ++x; break; // Droite
    default: break;
    }
}

void Player::display() const {
    std::cout << "P";
}