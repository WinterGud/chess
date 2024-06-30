#include "Map.h"
#include <Constants.hpp>

Map::Map()
{
    
    m_whitePlayer = std::make_shared<Player> (Player(0, SCREEN_HEIGHT - 2 * CELL_HEIGHT, 0, SCREEN_HEIGHT - CELL_HEIGHT, WHITE));
    m_blackPlayer = std::make_shared<Player> (Player(0, CELL_HEIGHT, 0, 0, BLACK));
}

auto Map::getEntity(int x, int y) -> BaseEntity&
{
    if (m_blackPlayer->isFigurePresent(x, y))
    {
        return **m_blackPlayer->getFigure(x, y);
    }
}

void Map::draw()
{
    for (auto cell : m_listCells)
    {
        cell.draw();
    }

    m_whitePlayer->draw();
    m_blackPlayer->draw();
}
