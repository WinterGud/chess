#include "Map.h"
#include <Constants.hpp>
#include "Cell.h"
#include "Player.h"
#include "Backlight.h"


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

    for (int i = 0; i < SCREEN_WIDTH; i += CELL_WIDTH)
    {
        for (int j = 0; j < SCREEN_HEIGHT; j += CELL_HEIGHT)
        {
            m_listBacklight.push_back(std::make_shared<Backlight>(Backlight(i, j, CELL_WIDTH, CELL_HEIGHT, YELLOW, PATH_BACKLIGHT)));
        }
    }
}

auto Map::getEntity(Coord coord, Color color) const -> BaseEntity&
{
    if (color == BLACK && m_blackPlayer->isFigurePresent(coord))
    {
        return **m_blackPlayer->getFigure(coord);
    }
    else if (color == WHITE && m_whitePlayer->isFigurePresent(coord))
    {
        return **m_whitePlayer->getFigure(coord);
    }
    else
    {
        for (const auto& cell : m_listCells)
        {
            if (cell->getCoord() == coord)
            {
                return *cell;
            }
        }
    }
    return *m_listCells[1];
}

void Map::draw() const
{
    for (const auto& cell : m_listCells)
    {
        cell->draw();
    }

    m_whitePlayer->draw();
    m_blackPlayer->draw();

    for (const auto& backlight : m_listBacklight)
    {
        backlight->draw();
    }
}

void Map::highlightBacklight(const std::vector<int>& backlights)
{
    for (auto i : backlights)
    {
        m_listBacklight[i]->setVisible(true);
    }
}

void Map::turnOffBacklight()
{
    for (auto backlight : m_listBacklight)
    {
        backlight->setVisible(false);
    }
}
