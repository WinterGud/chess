#pragma once
#include "Pawn.h"
#include <SDL.h>
#include <memory>

#include "Cell.h"
#include "Highlight.h"
#include "InputManager.h"
#include "Map.h"
#include "Player.h"

class Game
{
public:
    Game();
    ~Game();
    void run();
    void draw() const;
    void update();

    void getMove(Color color);

private:
    InputManager m_inputManager;
    bool m_quit = false;
    SDL_Event m_event;
    std::shared_ptr<Highlight> m_mainHighlight;
    std::shared_ptr<Map> m_map;

    bool m_clicked = false;
    bool m_isFigureSelected = false;
    BaseEntity* m_selectedFigure;

    Coord m_mainCellCoord;
    Color m_mainColor = WHITE;
};
