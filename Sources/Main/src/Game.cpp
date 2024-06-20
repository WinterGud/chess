#include "Game.hpp"
#include <SDL_image.h>
#include "iostream"
#include "Constants.hpp"
#include "Logger.h"

Game::Game()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        Logger::getInstance(LOGGER_OUT_PATH).log(WARNING, std::string("SDL could not initialize! SDL_Error: %s\n") + SDL_GetError() + '\n');
    }
    if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG))
    {
        Logger::getInstance(LOGGER_OUT_PATH).log(WARNING, std::string("SDL_image could not initialize! IMG_Error: ") + IMG_GetError() + '\n');
    }
    else
    {
        window = SDL_CreateWindow("Chess", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
                                  SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (window == nullptr)
        {
            Logger::getInstance(LOGGER_OUT_PATH).log(WARNING, std::string("Window could not be created! SDL_Error: %s\n") + SDL_GetError() + '\n');
        }
        else
        {
            renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
            if (renderer == nullptr)
            {
                Logger::getInstance(LOGGER_OUT_PATH).log(WARNING, std::string( "Renderer could not be created! SDL_Error: ") + SDL_GetError() + '\n');
            }
        }
    }
    m_mainCell = std::make_shared<Cell>(Cell(0, 0, CELL_WIDTH, CELL_HEIGHT, ILLUMINATION));
    m_mainCell->setVisible(true);
    m_map = std::make_shared<Map>(Map());
}

Game::~Game()
{
    if (renderer)
    {
        SDL_DestroyRenderer(renderer);
        renderer = nullptr;
    }
    if (window)
    {
        SDL_DestroyWindow(window);
        window = nullptr;
    }
    IMG_Quit();
    SDL_Quit();
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
    SDL_RenderClear(renderer);
    m_map->draw();
    m_mainCell->draw();
    SDL_RenderPresent(renderer);
}

void Game::update()
{
    m_quit = m_inputManager.getQuit();

    m_mainCellX = m_inputManager.getMouseCoord().m_x / CELL_WIDTH * CELL_WIDTH;
    m_mainCellY = m_inputManager.getMouseCoord().m_y / CELL_HEIGHT * CELL_HEIGHT;
    m_mainCell->setCoord(m_mainCellX, m_mainCellY);
}
