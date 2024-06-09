#include "Game.hpp"
#include <SDL_image.h>
#include "iostream"
#include "Constants.hpp"

Game::Game()
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
    }
    if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG))
    {
        std::cerr << "SDL_image could not initialize! IMG_Error: " << IMG_GetError() << '\n';
    }
    else
    {
        window = SDL_CreateWindow("Chess", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if (window == nullptr)
        {
            printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        }
        else
        {
            renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
            if (renderer == nullptr) {
                std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << '\n';
            }
        }
    }
    m_cell = std::make_shared<Cell> (Cell(0, 0, CELL_WIDTH, CELL_HEIGHT, ILLUMINATION));
    m_cell->setVisible(true);
    m_map = std::make_shared<Map> (Map());
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
    while (!m_quit) {
        while (SDL_PollEvent(&m_event) != 0)
        {
            if (m_event.type == SDL_QUIT)
            {
                m_quit = true;
            }
        }
        
        SDL_GetMouseState(&m_mouseX, &m_mouseY);
        m_mouseX = m_mouseX / CELL_WIDTH * CELL_WIDTH;
        m_mouseY = m_mouseY / CELL_HEIGHT * CELL_HEIGHT;
        m_cell->setX(m_mouseX);
        m_cell->setY(m_mouseY);
        
        draw();
    }
}

void Game::draw()
{
    SDL_RenderClear(renderer);
    m_map->draw();
    m_cell->draw();
    SDL_RenderPresent(renderer);
}
