#pragma once
#include "Pawn.h"
#include <SDL.h>
#include <memory>
#include "Player.h"

class Game
{
public:
    Game();
    ~Game();
    void run();

private:
    
    bool m_quit = false;
    SDL_Event m_event;
    std::shared_ptr<Pawn> m_pawn;
    std::shared_ptr<Player> m_player;
};
