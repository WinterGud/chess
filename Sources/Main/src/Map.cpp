#include "Map.h"
#include <Constants.hpp>

Map::Map()
{
    m_whitePlayer = std::make_shared<Player>(Player(0, SCREEN_HEIGHT - 2 * CELL_HEIGHT, 0, SCREEN_HEIGHT - CELL_HEIGHT,
                                                    WHITE));
    m_blackPlayer = std::make_shared<Player>(Player(0, CELL_HEIGHT, 0, 0, BLACK));

    bool blackCell = false;
    for (int i = 0; i < SCREEN_WIDTH; i += CELL_WIDTH)
    {
        for (int j = 0; j < SCREEN_HEIGHT; j += CELL_HEIGHT)
        {
            if (blackCell)
            {
                m_listCells.push_back(std::make_shared<Cell>(Cell(i, j, CELL_WIDTH, CELL_HEIGHT, BLACK, PATH_CELL_BLACK)));
                blackCell = false;
            }
            else if (!blackCell)
            {
                m_listCells.push_back(std::make_shared<Cell>(Cell(i, j, CELL_WIDTH, CELL_HEIGHT, WHITE, PATH_CELL_WHITE)));
                blackCell = true;
            }
        }
        if (!blackCell)
        {
            blackCell = true;
        }
        else
        {
            blackCell = false;
        }
    }
}

auto Map::getEntity(int x, int y, Color color) const -> BaseEntity&
{
    if (color == BLACK && m_blackPlayer->isFigurePresent(x, y))
    {
        return **m_blackPlayer->getFigure(x, y);
    }
    else if (color == WHITE && m_whitePlayer->isFigurePresent(x, y))
    {
        return **m_whitePlayer->getFigure(x, y);
    }
    else
    {
        return *m_listCells[0];
    }
}

void Map::draw() const
{
    for (auto cell : m_listCells)
    {
        cell->draw();
    }

    m_whitePlayer->draw();
    m_blackPlayer->draw();
}
