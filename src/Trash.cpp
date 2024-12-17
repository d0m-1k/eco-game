// Trash.cpp
#include "Trash.h"

Trash::Trash() {
    texture.loadFromFile("trash_image.png"); // Добавьте изображение
    sprite.setTexture(texture);
}

void Trash::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}
