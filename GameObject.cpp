#include "GameObject.h"

GameObject::GameObject(int x, int y, char symbol) : x(x), y(y), symbol(symbol) {}

GameObject::~GameObject() {}

bool GameObject::operator==(const GameObject& other) const {
    return this->x == other.x && this->y == other.y;
}