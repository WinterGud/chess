#pragma once
#include "Pawn.h"
#include <SDL.h>
 
class Game
{
public:
    Game();
    ~Game();
    void run();

private:
    
    bool m_quit = false;
    SDL_Event m_event;
    Pawn *m_pawn;
};