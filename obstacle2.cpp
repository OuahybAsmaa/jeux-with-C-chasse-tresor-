#include "Game.h"
#include "Player.h"
#include "Treasure.h"
#include "Obstacle.h"
#include <iostream>

// Codes couleurs ANSI
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"

int main() {
    // Affichage des règles du jeu
    std::cout << MAGENTA << "Bienvenue dans le jeu de chasse au tresor !" << RESET << '\n';
    std::cout << "Regles du jeu:\n";
    std::cout << "- " << GREEN << "P" << RESET << " represente le joueur.\n";
    std::cout << "- " << YELLOW << "T" << RESET << " represente le trésor.\n";
    std::cout << "- " << RED << "X" << RESET << " represente un obstacle.\n";
    std::cout << "- Deplacez-vous avec les touches : " << CYAN << "z (haut), s (bas), q (gauche), d (droite)." << RESET << '\n';
    std::cout << "- Trouvez le tresor pour gagner, mais evitez les obstacles !\n\n";

    // Initialisation du jeu
    Player player(1, 1);
    Treasure treasure(9, 9);
    Game game(10, 10, player, treasure);

    // Ajout d'obstacles
    game.addObstacle(Obstacle(2, 2));
    game.addObstacle(Obstacle(6, 8));
    game.addObstacle(Obstacle(7, 5));
    game.addObstacle(Obstacle(4, 4));
    game.addObstacle(Obstacle(5, 2));

    char direction;
    while (true) {
        game.displayBoard();
        std::cout << MAGENTA << "Entrez une direction (z, s, q, d) : " << RESET;
        std::cin >> direction;
        game.movePlayer(direction);
    }

    return 0;
}
