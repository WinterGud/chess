#pragma once
#include "Pawn.h"
#include <SDL.h>
#include <memory>

#include "Cell.h"
#include "Map.h"
#include "Player.h"

class Game
{
public:
    Game();
    ~Game();
    void run();
    void draw();

private:
    
    bool m_quit = false;
    SDL_Event m_event;
    std::shared_ptr<Cell> m_cell;
    std::shared_ptr<Map> m_map;

    int m_mouseX = 0;
    int m_mouseY = 0;
};
