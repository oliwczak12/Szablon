#pragma once
#include "SFML/Graphics.hpp"

#define WIDTH 1000
#define HEIGHT 500

class Game
{
public:
    Game();
    void run();

private:
    void processEvents();
    void update();
    void render();

    sf::RenderWindow window;
};
