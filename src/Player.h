// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

class Player {
public:
    Player();
    void move();
    void draw(sf::RenderWindow& window);
private:
    sf::Sprite sprite;
    sf::Texture texture;
};

#endif // PLAYER_H
