#pragma once
#include "Pawn.h"
#include <SDL.h>
#include <memory>

#include "Cell.h"
#include "InputManager.h"
#include "Map.h"
#include "Player.h"

class Game
{
public:
    Game();
    ~Game();
    void run();
    void draw();
    void update();

private:
    InputManager m_inputManager;
    
    bool m_quit = false;
    SDL_Event m_event;
    std::shared_ptr<Cell> m_mainCell;
    std::shared_ptr<Map> m_map;

    int m_mainCellX = 0;
    int m_mainCellY = 0;
};
