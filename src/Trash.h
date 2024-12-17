// Trash.h
#ifndef TRASH_H
#define TRASH_H

#include <SFML/Graphics.hpp>

class Trash {
public:
    Trash();
    void draw(sf::RenderWindow& window);
private:
    sf::Sprite sprite;
    sf::Texture texture;
};

#endif // TRASH_H
