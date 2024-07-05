#include "Game.hpp"
#include "Constants.hpp"
#include "Logger.h"
#include "Renderer.h"

Game::Game()
    : m_map(std::make_shared<Map>(Map()))
      , m_selectedFigure(&*std::make_shared<Pawn>(0, 0, 0, 0, WHITE, PATH_PAWN_WHITE))
      , m_mainCellCoord(0, 0)
{
    m_mainHighlight = std::make_shared<Backlight>(Backlight(0, 0, CELL_WIDTH, CELL_HEIGHT, YELLOW, PATH_BACKLIGHT));
    m_mainHighlight->setVisible(true);
    m_map = std::make_shared<Map>(Map());
}

Game::~Game()
{
}

void Game::run()
{
    while (!m_quit)
    {
        update();
        draw();
    }
}

void Game::draw() const
{
    SDL_RenderClear(Renderer::getInstance().getRenderer());
    m_map->draw();
    m_mainHighlight->draw();
    SDL_RenderPresent(Renderer::getInstance().getRenderer());
}

void Game::update()
{
    m_inputManager.update();
    m_quit = m_inputManager.getQuit();

    m_mainCellCoord.m_x = m_inputManager.getMouseCoord().m_x / CELL_WIDTH * CELL_WIDTH;
    m_mainCellCoord.m_y = m_inputManager.getMouseCoord().m_y / CELL_HEIGHT * CELL_HEIGHT;
    m_mainHighlight->setCoord(m_mainCellCoord.m_x, m_mainCellCoord.m_y);
    
    getMove(m_mainColor);
}

void Game::getMove(Color color)
{
    selectFigure();
    if (m_isFigureSelected && m_clicked)
    {
        if (m_inputManager.getLeftMouseUnPressed())
        {
            m_clicked = false;
            m_isFigureSelected = false;

            Color attackedColor = (m_mainColor == WHITE) ? BLACK : WHITE;
            BaseEntity* attackedFigure = &m_map->getEntity(m_mainCellCoord, attackedColor);
            if (typeid(*attackedFigure) != typeid(Cell))
            {
               attackedFigure->destroyEntity();
            }
        }
        m_selectedFigure->setCoord(m_mainCellCoord);
    }
}

void Game::selectFigure()
{
    if (!m_isFigureSelected)
    {
        if (m_inputManager.getLeftMousePressed())
        {
            m_clicked = true;

            BaseEntity* selectedEntity = &m_map->getEntity(m_mainCellCoord, m_mainColor);
            if (typeid(*selectedEntity) != typeid(Cell) && selectedEntity->getColor() == m_mainColor)
            {
                m_selectedFigure = dynamic_cast<BaseFigure*>(selectedEntity);
                m_isFigureSelected = true;
            }
        }
    }
}
