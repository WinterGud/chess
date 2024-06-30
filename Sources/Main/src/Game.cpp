#include "Game.hpp"
#include <SDL_image.h>
#include "iostream"
#include "Constants.hpp"
#include "Logger.h"
#include "Renderer.h"

Game::Game()
{
    
    m_mainCell = std::make_shared<Cell>(Cell(0, 0, CELL_WIDTH, CELL_HEIGHT, ILLUMINATION));
    m_mainCell->setVisible(true);
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

void Game::draw()
{
    SDL_RenderClear(Renderer::getInstance().getRenderer());
    m_map->draw();
    m_mainCell->draw();
    SDL_RenderPresent(Renderer::getInstance().getRenderer());
}

void Game::update()
{
    m_quit = m_inputManager.getQuit();

    m_mainCellX = m_inputManager.getMouseCoord().m_x / CELL_WIDTH * CELL_WIDTH;
    m_mainCellY = m_inputManager.getMouseCoord().m_y / CELL_HEIGHT * CELL_HEIGHT;
    m_mainCell->setCoord(m_mainCellX, m_mainCellY);
}
