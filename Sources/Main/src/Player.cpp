#include "Player.h"
#include "Constants.hpp"
#include "Pawn.h"

Player::Player(int pawnStartX, int pawnStartY, int figureStartX, int figureStartY, Color color)
    : m_color(color)
{
    for (int width = 0, height = 0; width < NUM_OF_COLUMNS * CELL_WIDTH; width += CELL_WIDTH, height += CELL_HEIGHT)
    {
        if (color == WHITE)
        {
            m_figures.push_back(std::make_shared<Pawn>(Pawn(pawnStartX + width, pawnStartY, CELL_WIDTH, CELL_HEIGHT, m_color, PATH_PAWN_WHITE)));
        }
        else if (color == BLACK)
        {
            m_figures.push_back(std::make_shared<Pawn>(Pawn(pawnStartX + width, pawnStartY, CELL_WIDTH, CELL_HEIGHT, m_color, PATH_PAWN_BLACK)));
        }
    }
    
}

bool Player::isFigurePresent(const Coord& coord)
{
    auto it = m_figures.begin();
    for (; it != m_figures.end(); ++it)
    {
        if((*it)->getCoord() == coord)
        {
            return true;
        }
    }
    return false;
}

std::shared_ptr<BaseFigure>* Player::getFigure(Coord coord)
{
    auto it = m_figures.begin();
    for (; it != m_figures.end(); ++it)
    {
        if((*it)->getCoord() == coord)
        {
            return &(*it);
        }
    }
    return nullptr;
}

void Player::draw()
{
    for (const auto& figure : m_figures)
    { 
        figure->draw();
    }
}
