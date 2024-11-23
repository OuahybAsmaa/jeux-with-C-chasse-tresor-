#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <string>

class GameObject {
protected:
    int x, y; // Position de l'objet
    char symbol; // Le symbole repr�sentant l'objet dans la grille

public:
    GameObject(int x, int y, char symbol);
    virtual ~GameObject();

    virtual void move(char direction) = 0; // M�thode virtuelle pure pour d�placer l'objet

    // Surcharge de l'op�rateur d'�galit� pour comparer les positions
    bool operator==(const GameObject& other) const;

    // M�thode pour afficher l'objet
    virtual void display() const = 0;
};

#endif // GAMEOBJECT_H