#pragma once
#include "Pawn.h"
#include <SDL.h>
#include <memory>

#include "Cell.h"
#include "Backlight.h"
#include "InputManager.h"
#include "Map.h"
#include "Player.h"

class Game
{
public:
    Game();
    ~Game();
    void run();
private:
    void draw() const;
    void update();
    void getMove(Color color);
    void selectFigure();
    
private:
    InputManager m_inputManager;
    bool m_quit = false;
    SDL_Event m_event;
    std::shared_ptr<Backlight> m_mainHighlight;
    std::shared_ptr<Map> m_map;

    bool m_clicked = false;
    bool m_isFigureSelected = false;
    BaseFigure* m_selectedFigure;

    Coord m_mainCellCoord;
    Color m_mainColor = WHITE;
};
