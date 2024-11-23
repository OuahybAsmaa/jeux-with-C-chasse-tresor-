#include "Game.h"
#include <iostream>

// Codes couleurs ANSI
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"

// Constructeur de Game utilisant les constructeurs spécifiques des classes dérivées
Game::Game(int width, int height, Player p, Treasure t)
    : width(width), height(height), player(p), treasure(t) {}

// Ajouter un obstacle au jeu
void Game::addObstacle(const Obstacle& o) {
    obstacles.push_back(o); // Les obstacles sont directement ajoutés à la liste
}

// Afficher la grille de jeu
void Game::displayBoard() {
    // Afficher l'encadrement supérieur
    std::cout << MAGENTA << "-";
    for (int j = 0; j < width; ++j) {
        std::cout << "-";
    }
    std::cout << RESET << '\n';

    for (int i = 0; i < height; ++i) {
        // Afficher les bords gauche
        std::cout << MAGENTA << "|";

        for (int j = 0; j < width; ++j) {
            bool printed = false;

            // Vérification de la position des objets dans la grille
            if (player == Player(j, i)) {
                std::cout << GREEN << "P" << RESET;  // Afficher le joueur en vert
                printed = true;
            }
            else if (treasure == Treasure(j, i)) {
                std::cout << YELLOW << "T" << RESET;  // Afficher le trésor en jaune
                printed = true;
            }
            else {
                for (const auto& obs : obstacles) {
                    if (obs == Obstacle(j, i)) {
                        std::cout << RED << "X" << RESET;  // Afficher un obstacle en rouge
                        printed = true;
                        break;
                    }
                }
            }

            // Si aucune entité n'est présente, afficher une case vide
            if (!printed) {
                std::cout << " ";  // Afficher un espace vide
            }
        }

        // Afficher les bords droit
        std::cout << MAGENTA << "|" << RESET << '\n';
    }

    // Afficher l'encadrement inférieur
    std::cout << MAGENTA << "-";
    for (int j = 0; j < width; ++j) {
        std::cout << "-";
    }
    std::cout << RESET << '\n';
}

// Déplacer le joueur
void Game::movePlayer(char direction) {
    player.move(direction);

    // Vérifier si le joueur a atteint le trésor
    if (player == treasure) {
        std::cout << GREEN << "Vous avez trouve le tresor !" << RESET << '\n';
        std::exit(0); // Terminer le jeu
    }

    // Vérifier si le joueur a rencontré un obstacle
    for (const auto& obs : obstacles) {
        if (player == obs) {
            std::cout << RED << "Vous avez frappe un obstacle, vous avez perdu !" << RESET << '\n';
            std::exit(0); // Terminer le jeu
        }
    }
}
