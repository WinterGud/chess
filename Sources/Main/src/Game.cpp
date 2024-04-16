#include "Game.hpp"
#include "BaseFigure.hpp"
#include "iostream"
#include <memory>
#include "BaseCell.hpp"

Game::Game()
{
    
}

Game::~Game()
{
    
}

bool Game::chooseFigure(BaseFigure& figure)
{
    int x, y;
    std::cout << "Take figure: ";
    std::cin >> x >> y;
    m_map.getEntity(x, y);
    if (typeid(m_map.getEntity(x, y)) == typeid(BaseCell) || figure.getColor() != m_currentPlayerColor)
    {
        return false;
    }
    return true;
}


void Game::run()
{
    std::shared_ptr<BaseFigure> figure;
    while (true)
    {
        while(chooseFigure(*figure))
        {
            std::cout << "miss";
        }
        std::cout << typeid(figure).name();
    }
}

void Game::turn()
{
}
