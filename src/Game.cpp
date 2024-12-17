// Game.cpp
#include "Game.h"

Game::Game() : mWindow(sf::VideoMode(800, 600), "Эко-Герои") {
    // Инициализация игры и объектов
}

void Game::run() {
    while (mWindow.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (mWindow.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            mWindow.close();
    }
}

void Game::update() {
    // Логика игры, обновление позиции игрока и сбора мусора
}

void Game::render() {
    mWindow.clear();
    // Отрисовка объектов
    mWindow.display();
}
