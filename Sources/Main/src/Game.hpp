#pragma once
#include "Map.hpp"
#include "Constants.hpp"
 
class Game
{
public:
    Game();
    ~Game();
    bool chooseFigure(BaseFigure& figure);
    void run();
    void turn();
private:
    Map m_map;
    color m_currentPlayerColor = WHITE;
};