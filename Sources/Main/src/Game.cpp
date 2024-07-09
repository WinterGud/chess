#include "Game.hpp"
#include "Constants.hpp"
#include "Logger.h"
#include "Renderer.h"

Game::Game()
    : m_map(std::make_shared<Map>(Map()))
      , m_selectedFigure(&*std::make_shared<Pawn>(0, 0, 0, 0, WHITE, PATH_PAWN_WHITE))
      , m_startCoordSelectedFigure(0, 0)
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
    //m_selectedFigure->draw();
    SDL_RenderPresent(Renderer::getInstance().getRenderer());
}

void Game::update()
{
    m_inputManager.update();
    m_quit = m_inputManager.getQuit();

    m_mainCellCoord.x = m_inputManager.getMouseCoord().x / CELL_WIDTH * CELL_WIDTH;
    m_mainCellCoord.y = m_inputManager.getMouseCoord().y / CELL_HEIGHT * CELL_HEIGHT;
    m_mainHighlight->setCoord(m_mainCellCoord.x, m_mainCellCoord.y);

    getMove(m_mainColor);
}

void Game::getMove(Color color)
{
    selectFigure();
    if (m_isFigureSelected && m_clicked)
    {
        m_selectedFigure->setCoord(m_mainCellCoord);
        if (m_inputManager.getLeftMouseUnPressed())
        {
            m_clicked = false;
            m_isFigureSelected = false;

            if (checkMoveOrAttack())
            {
                m_selectedFigure->updateCurrentCoord();
                std::swap(m_mainColor, m_attackedColor);
            }
            else
            {
                m_selectedFigure->setCoord(m_selectedFigure->getCurrentCoord());
            }
        }
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
            if (typeid(*selectedEntity) != typeid(Cell))
            {
                m_selectedFigure = dynamic_cast<BaseFigure*>(selectedEntity);
                m_isFigureSelected = true;
            }
        }
    }
}

bool Game::checkMoveOrAttack()
{
    BaseEntity* attackedEntity = &m_map->getEntity(m_mainCellCoord, m_attackedColor);
    if (typeid(*attackedEntity) == typeid(Cell))
    {
        if (m_selectedFigure->checkMove(m_mainCellCoord))
        {
            return true;
        }
    }
    if (typeid(*attackedEntity) != typeid(Cell))
    {
        BaseFigure* attackedFigure = dynamic_cast<BaseFigure*>(attackedEntity);
        if (m_selectedFigure->attack(*attackedFigure))
        {
            attackedFigure->destroyEntity();
            return true;
        }
    }
    return false;
}
