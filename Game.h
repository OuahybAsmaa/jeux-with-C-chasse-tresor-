#ifndef GAME_H
#define GAME_H

#include <vector>
#include "Player.h"
#include "Treasure.h"
#include "Obstacle.h"

class Game {
private:
    int width, height;
    Player player;
    Treasure treasure;
    std::vector<Obstacle> obstacles;

public:
    Game(int width, int height, Player p, Treasure t);

    void addObstacle(const Obstacle& o);
    void displayBoard();
    void movePlayer(char direction);
};

#endif // GAME_H