// Game.h
#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Player.h"
#include "Trash.h"

class Game {
public:
    Game();
    void run();
private:
    void processEvents();
    void update();
    void render();
  
    sf::RenderWindow mWindow;
    Player mPlayer;
    std::vector<Trash> mTrashItems;
    // Добавьте таймер и уровни сложности
};

#endif // GAME_H
