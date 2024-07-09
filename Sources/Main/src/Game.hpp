#pragma once
#include <memory>
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
    bool checkMoveOrAttack();
    
private:
    InputManager m_inputManager;
    std::shared_ptr<Map> m_map;
    bool m_quit = false;
    SDL_Event m_event;
    std::shared_ptr<Backlight> m_mainHighlight;

    bool m_clicked = false;
    bool m_isFigureSelected = false;
    BaseFigure* m_selectedFigure;
    Coord m_startCoordSelectedFigure;

    Coord m_mainCellCoord;
    Color m_mainColor = WHITE;
    Color m_attackedColor = BLACK;
};
