#ifndef TREASURE_H
#define TREASURE_H

#include "GameObject.h"

class Treasure : public GameObject {
public:
    Treasure(int x, int y);

    void move(char direction) override; // Le tr�sor ne se d�place pas
    void display() const override;
};

#endif // TREASURE_H