#pragma once
#include "Map.hpp"
#include "Constants.hpp"
 
class Game
{
public:
    Game();
    ~Game();
    void run();
    void update();

private:
    Map m_map;
    color m_currentPlayerColor = WHITE;

    bool m_whiteWin = false;
    bool m_blackWin = false;
    bool m_pat = false;
};