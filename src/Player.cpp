// Player.cpp
#include "Player.h"

Player::Player() {
    texture.loadFromFile("player_image.png"); // Добавьте изображение
    sprite.setTexture(texture);
}

void Player::move() {
    // Логика движения игрока
}

void Player::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}
