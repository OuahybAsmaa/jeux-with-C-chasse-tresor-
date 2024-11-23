#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "GameObject.h"

class Obstacle : public GameObject {
public:
    Obstacle(int x, int y);

    void move(char direction) override; // L'obstacle ne se déplace pas
    void display() const override;
};

#endif // OBSTACLE_H