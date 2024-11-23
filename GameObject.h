#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>

class GameObject {
protected:
    int x, y; // Position de l'objet
    char symbol; // Le symbole représentant l'objet dans la grille

public:
    GameObject(int x, int y, char symbol);
    virtual ~GameObject();

    virtual void move(char direction) = 0; // Méthode virtuelle pure pour déplacer l'objet

    // Surcharge de l'opérateur d'égalité pour comparer les positions
    bool operator==(const GameObject& other) const;

    // Méthode pour afficher l'objet
    virtual void display() const = 0;
};

#endif // GAMEOBJECT_H