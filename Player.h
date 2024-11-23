#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"

class Player : public GameObject {
public:
    Player(int x, int y);

    void move(char direction) override;
    void display() const override;
};

#endif // PLAYER_H